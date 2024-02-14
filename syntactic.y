%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int yylex();
int yywrap(); 
void yyerror();

extern int lineno;
int flag;
/* Estrutura para os símbolos na tabela */
typedef struct symrec {
    char *name;
    double value;
    struct symrec *next;
} SymbolRecord;

/*
typedef struct {
    int intValue;         
    double doubleValue;    
    char *stringValue;  
    void *obj;  
    // Adicione outros tipos conforme necessário para seus tokens
} YYSTYPE;
*/


/* Tabela de símbolos: array de ponteiros para SymbolRecord */
#define HASHSIZE 101
static SymbolRecord *sym_table[HASHSIZE];

/* Função de hash simples */
unsigned hash(char *str) {
    unsigned hashval;
    for (hashval = 0; *str != '\0'; str++)
        hashval = *str + 31 * hashval;
    return hashval % HASHSIZE;
}

/* Insere um símbolo na tabela */
SymbolRecord *putsym(char *name, double value) {
    unsigned hashval = hash(name);
    SymbolRecord *sp = sym_table[hashval];
    while (sp != NULL) {
        if (strcmp(sp->name, name) == 0) {
            fprintf(stderr, "Erro: símbolo %s já está na tabela\n", name);
            return NULL;
        }
        sp = sp->next;
    }
    sp = (SymbolRecord *)malloc(sizeof(SymbolRecord));
    if (sp == NULL) {
        fprintf(stderr, "Erro: falta de memória ao alocar o símbolo %s\n", name);
        exit(EXIT_FAILURE);
    }
    sp->name = strdup(name);
    if (sp->name == NULL) {
        fprintf(stderr, "Erro: falta de memória ao alocar o nome do símbolo %s\n", name);
        exit(EXIT_FAILURE);
    }
    sp->value = value;
    sp->next = sym_table[hashval];
    sym_table[hashval] = sp;
    return sp;
}

/* Procura um símbolo na tabela */
SymbolRecord *getsym(char *name) {
    unsigned hashval = hash(name);
    SymbolRecord *sp;
    for (sp = sym_table[hashval]; sp != NULL; sp = sp->next) {
        if (strcmp(sp->name, name) == 0)
            return sp;
    }
    return NULL;
}

/* Libera toda a memória alocada para a tabela de símbolos */
void free_symbols() {
    SymbolRecord *sp, *tmp;
    for (int i = 0; i < HASHSIZE; i++) {
        sp = sym_table[i];
        while (sp != NULL) {
            tmp = sp;
            sp = sp->next;
            free(tmp->name);
            free(tmp);
        }
        sym_table[i] = NULL;
    }
}




extern int yylex();
extern FILE *yyin;


%}

%union{
    int intValue;         
    double doubleValue;    
    char *stringValue;
}


%token <nd_obj> TOKEN_IF
%token <nd_obj> TOKEN_ELSE
%token <nd_obj> TOKEN_FOR
%token <nd_obj> TOKEN_WHILE
%token <nd_obj> TOKEN_INT
%token <nd_obj> TOKEN_VOID
%token <nd_obj> TOKEN_IDOUBLE
%token <nd_obj> TOKEN_MASTER
%token <nd_obj> TOKEN_INCLUDE
%token <nd_obj> TOKEN_PRINT
%token <nd_obj> TOKEN_RETURN
%token <nd_obj> TOKEN_BREAK
%token <nd_obj> TOKEN_CONTINUE
%token <nd_obj> TOKEN_CLASS
%token <nd_obj> TOKEN_INTEGER
%token <nd_obj> TOKEN_CHAR
%token <nd_obj> TOKEN_IDENTIFICADOR
%token <nd_obj> TOKEN_DOUBLE
%token <nd_obj> TOKEN_SUM
%token <nd_obj> TOKEN_SUB
%token <nd_obj> TOKEN_MULT
%token <nd_obj> TOKEN_DIV
%token <nd_obj> TOKEN_EQUAL
%token <nd_obj> TOKEN_INCREMENT
%token <nd_obj> TOKEN_DECREMENT
%token <nd_obj> TOKEN_GT
%token <nd_obj> TOKEN_LT
%token <nd_obj> TOKEN_GE
%token <nd_obj> TOKEN_LE
%token <nd_obj> TOKEN_NE
%token <nd_obj> TOKEN_XOR
%token <nd_obj> TOKEN_OR
%token <nd_obj> TOKEN_AND
%token <nd_obj> TOKEN_ASSIGN
%token <nd_obj> TOKEN_LBRACE
%token <nd_obj> TOKEN_RBRACE
%token <nd_obj> TOKEN_DOT
%token <nd_obj> TOKEN_PONTOEVIRGULA
%token <nd_obj> TOKEN_VIRGULA
%token <nd_obj> TOKEN_LPAREN
%token <nd_obj> TOKEN_RPAREN

//%token <double> NUM
//%token <symrec*> VAR FUN
//%nterm <double>  exp

/*  order of operations */
%left TOKEN_SUB  TOKEN_SUM 
%left TOKEN_MULT TOKEN_DIV
%nonassoc UMINUS

%% /* Grammar rules and actions follow */

declarations: declarations declaration | declaration;

declaration: type names TOKEN_PONTOEVIRGULA;

type: TOKEN_INTEGER | TOKEN_CHAR | TOKEN_DOUBLE | TOKEN_VOID;

names: TOKEN_IDENTIFICADOR | names ',' TOKEN_IDENTIFICADOR;


exp: term
           | unary_operator exp
           | exp binary_operator exp
           | '(' exp ')'
           | variable
           ;

term : expression_increment
     | expression_decrement
     ;

unary_operator : TOKEN_INCREMENT
               | TOKEN_DECREMENT
               | '!'
               ;

expression_increment : TOKEN_INCREMENT exp
                      ;

expression_decrement : TOKEN_DECREMENT exp
                      ;

binary_operator : TOKEN_SUM
                | TOKEN_SUB
                | TOKEN_MULT
                | TOKEN_DIV
                | TOKEN_OR
                | TOKEN_AND
                | TOKEN_EQUAL
                | TOKEN_NE
                | TOKEN_GT
                | TOKEN_LT
                | TOKEN_GE
                | TOKEN_LE
                ;


variable: TOKEN_IDENTIFICADOR ;

assigment: variable TOKEN_ASSIGN exp TOKEN_PONTOEVIRGULA ; 

for_stat: TOKEN_FOR '(' exp TOKEN_PONTOEVIRGULA exp TOKEN_PONTOEVIRGULA exp')' tail ;

while_stat: TOKEN_WHILE '(' exp ')' tail ;


//condicionais 
if_stat: TOKEN_IF '(' exp ')' tail else_if_part else_part ;

else_if_part: 
   else_if_part TOKEN_ELSE TOKEN_IF '(' exp ')' tail |
   TOKEN_ELSE TOKEN_IF '(' exp ')' tail  |
   /* empty */
 ; 
else_part: TOKEN_ELSE tail | /* empty */ ; 


tail: statement | '{' statements '}' ;

statements: statements statement | statement;

// statement  é tudo que pode ter dentro da main ou de uma função
statement: if_stat
        | for_stat
        | while_stat 
        | assigment 
        | TOKEN_CONTINUE TOKEN_PONTOEVIRGULA 
        | TOKEN_BREAK  TOKEN_PONTOEVIRGULA
        | TOKEN_RETURN  TOKEN_PONTOEVIRGULA;





%%



void yyerror() {
  fprintf(stderr, "Syntax error at line %d\n", lineno);
  exit(1);
}

int main(int argc, char *argv[]){
    yyin = fopen(argv[1], "r");
    flag = yyparse();
    fclose(yyin);
    
    return flag;
}