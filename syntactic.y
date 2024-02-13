%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


int yylex();
int yywrap(); 



extern int yylex();
extern FILE *yyin;


%}

%token <nd_obj> TOKEN_IF
%token <nd_obj> TOKEN_ELSE
%token <nd_obj> TOKEN_FOR
%token <nd_obj> TOKEN_WHILE
%token <nd_obj> TOKEN_INT
%token <nd_obj> TOKEN_VOID
%token <nd_obj> TOKEN_IDOUBLE
%token <nd_obj> TOKEN_MESTRE
%token <nd_obj> TOKEN_INCLUDE
%token <nd_obj> TOKEN_PRINT
%token <nd_obj> TOKEN_RETURN
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

%token <double> NUM
%token <symrec*> VAR FUN
%nterm <double>  exp

/*  order of operations */
%left TOKEN_SUB  TOKEN_SUM 
%left TOKEN_MULT TOKEN_DIV
%nonassoc UMINUS

%% /* Grammar rules and actions follow */

declarations: declarations declaration | declaration;

declaration: type names ';';

type: TOKEN_INTEGER | TOKEN_CHAR | TOKEN_DOUBLE | TOKEN_VOID;

names: TOKEN_IDENTIFICADOR | names ',' TOKEN_IDENTIFICADOR;

statement: /* regra vazia */
         | statement exp '\n'
         | statement '\n';

exp:  
      NUM
    | VAR                { $$ = $1->value.var;}
    | VAR '=' exp        { $$ = $3; $1->value.var = $3;}
    | TOKEN_IDENTIFICADOR {$$ = $1;} 
    | exp TOKEN_SUM exp {$$ = $1 + $3;}
    | exp TOKEN_SUB exp {$$ = $1 - $3;}
    | exp TOKEN_MULT exp {$$ = $1 * $3;}
    | exp TOKEN_DIV exp {$$ = $1 / $3;}
    | TOKEN_LPAREN exp TOKEN_RPAREN {$$ = $2;}
    | TOKEN_SUB exp %prec UMINUS {$$ = -$2;}
    | TOKEN_INTEGER
    | TOKEN_DOUBLE
    ;

/* Regras para funções */
function_declaration: 
                        |TOKEN_INT TOKEN_IDENTIFICADOR '(' parameter_list ')' compound_statement;
                        |TOKEN_IDOUBLE TOKEN_IDENTIFICADOR '(' parameter_list ')' compound_statement;
                        |TOKEN_VOID TOKEN_IDENTIFICADOR '(' parameter_list ')' compound_statement;

parameter_list: /* lista de parâmetros */
                | parameter_list ',' parameter_declaration
                | parameter_declaration;

parameter_declaration: 
                        |TOKEN_INT TOKEN_IDENTIFICADOR;
                        |TOKEN_IDOUBLE TOKEN_IDENTIFICADOR;
                        |TOKEN_CHAR TOKEN_IDENTIFICADOR;

statement_list: /* regra vazia */
              | statement_list statement
              | statement
              ;


compound_statement: '{' statement_list '}';

/* Regras para laços de repetição */
while_loop: TOKEN_WHILE '(' exp ')' statement;

for_loop: TOKEN_FOR '(' for_init ';' exp ';' for_update ')' statement;

for_init:
            | exp;

for_update: 
            | exp;

    
%%



void yyerror(const char *c) {
    printf("ERRO: %s\n", c);
}

int main(){
    yyparse();
    return 0;
}