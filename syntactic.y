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

void yyerror(const char *c) {
    printf("ERRO: %s\n", c);
}

extern int yylex();
extern FILE *yyin;

int main(){
    yyparse();
    return 0;
}
%}

%token TOKEN_IF
%token TOKEN_ELSE
%token TOKEN_FOR
%token TOKEN_WHILE
%token TOKEN_INT
%token TOKEN_IDOUBLE
%token TOKEN_MESTRE
%token TOKEN_INCLUDE
%token TOKEN_PRINT
%token TOKEN_RETURN
%token TOKEN_CLASS
%token TOKEN_INTEGER
%token TOKEN_IDENTIFICADOR
%token TOKEN_DOUBLE
%token TOKEN_SUM
%token TOKEN_SUB
%token TOKEN_MULT
%token TOKEN_DIV
%token TOKEN_EQUAL
%token TOKEN_INCREMENT
%token TOKEN_GT
%token TOKEN_LT
%token TOKEN_GE
%token TOKEN_LE
%token TOKEN_NE
%token TOKEN_XOR
%token TOKEN_OR
%token TOKEN_AND
%token TOKEN_ASSIGN
%token TOKEN_LBRACE
%token TOKEN_RBRACE
%token TOKEN_DOT
%token TOKEN_SEMICOLON
%token TOKEN_COMMA
%token TOKEN_LPAREN
%token TOKEN_RPAREN

%token <double> NUM
%token <symrec*> VAR FUN
%nterm <double>  exp

/*  order of operations */
%left TOKEN_SUB  TOKEN_SUM 
%left TOKEN_MULT TOKEN_DIV
%nonassoc UMINUS

%% /* Grammar rules and actions follow */

calc: /* regra vazia */
    | calc expr '\n'
    | calc '\n';

exp:  
      NUM
    | VAR                { $$ = $1->value.var;}
    | VAR '=' exp        { $$ = $3; $1->value.var = $3;}
    | TOKEN_IDENTIFICADOR {$$ = $1;} /* Adapte conforme necessário */
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
function_declaration: TOKEN_TYPE TOKEN_IDENTIFICADOR '(' parameter_list ')' compound_statement;

parameter_list: /* lista de parâmetros */
                | parameter_list ',' parameter_declaration
                | parameter_declaration;

parameter_declaration: TOKEN_TYPE TOKEN_IDENTIFICADOR;

compound_statement: '{' statement_list '}';

/* Regras para laços de repetição */
while_loop: TOKEN_WHILE '(' expression ')' statement;

for_loop: TOKEN_FOR '(' for_init ';' expression ';' for_update ')' statement;

for_init: /* inicialização do for */
            | expression;

for_update: /* atualização do for */
            | expression;

    
%%



void yyerror(const char *c) {
    printf("ERRO: %s\n", c);
}

int main(){
    yyparse();
    return 0;
}