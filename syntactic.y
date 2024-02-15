%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int yylex();
int yywrap(); 
void yyerror(char *s);

extern int lineno;
int flag;

extern FILE *yyin;
extern int flag;
/* Estrutura para os símbolos na tabela */
typedef struct symrec {
    char *name;
    double value;
    struct symrec *next;
} SymbolRecord;


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


%token <intValue> TOKEN_IF
%token <intValue> TOKEN_ELSE
%token <intValue> TOKEN_FOR
%token <intValue> TOKEN_WHILE
%token <intValue> TOKEN_INT
%token <intValue> TOKEN_VOID
%token <intValue> TOKEN_IDOUBLE
%token <intValue> TOKEN_MASTER
%token <intValue> TOKEN_INCLUDE
%token <intValue> TOKEN_PRINT
%token <intValue> TOKEN_RETURN
%token <intValue> TOKEN_BREAK
%token <intValue> TOKEN_CONTINUE
%token <intValue> TOKEN_CLASS
%token <intValue> TOKEN_INTEGER
%token <intValue> TOKEN_CHAR
%token <intValue> TOKEN_IDENTIFICADOR
%token <intValue> TOKEN_DOUBLE
%token <intValue> TOKEN_SUM
%token <intValue> TOKEN_SUB
%token <intValue> TOKEN_MULT
%token <intValue> TOKEN_DIV
%token <intValue> TOKEN_EQUAL
%token <intValue> TOKEN_INCREMENT
%token <intValue> TOKEN_DECREMENT
%token <intValue> TOKEN_GT
%token <intValue> TOKEN_LT
%token <intValue> TOKEN_GE
%token <intValue> TOKEN_LE
%token <intValue> TOKEN_NE
%token <intValue> TOKEN_XOR
%token <intValue> TOKEN_OR
%token <intValue> TOKEN_AND
%token <intValue> TOKEN_ASSIGN
%token <intValue> TOKEN_LBRACE
%token <intValue> TOKEN_RBRACE
%token <intValue> TOKEN_DOT
%token <intValue> TOKEN_PONTOEVIRGULA
%token <intValue> TOKEN_VIRGULA
%token <intValue> TOKEN_LPAREN
%token <intValue> TOKEN_RPAREN

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

// classe

class_declaration: TOKEN_CLASS TOKEN_IDENTIFICADOR TOKEN_LBRACE class_body TOKEN_RBRACE;

class_body: class_members;

class_members: class_members class_member | /* empty */;

class_member: attribute_declaration | method_declaration;

attribute_declaration: type TOKEN_IDENTIFICADOR TOKEN_PONTOEVIRGULA;

method_declaration: type TOKEN_IDENTIFICADOR TOKEN_LPAREN parameters_list TOKEN_RPAREN '{' statements '}';

parameters_list: parameter_declaration | parameters_list TOKEN_VIRGULA parameter_declaration;

parameter_declaration: type TOKEN_IDENTIFICADOR;


program: declarations statements ;


%%



void yyerror(char *s) {
    fprintf(stderr, "Erro na linha %d: %s\n", lineno, s);
    exit(1);
}

int main(int argc, char *argv[]){
    yyin = fopen(argv[1], "r");
    flag = yyparse();
    fclose(yyin);
    
    return flag;
}