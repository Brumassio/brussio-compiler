%{
#define YYSTYPE double
#include <cctype>
#include <iostream>

int main();
int yylex(void);
int yyparse(void);
void yyerror(const char *c);
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

/*  order of operations */
%left TOKEN_SUM TOKEN_SUB
%left TOKEN_MULT TOKEN_DIV
%nonassoc UMINUS

%% /* Grammar rules and actions follow */

calc: /* regra vazia */
    | calc expr '\n'
    | calc '\n';

expr:  TOKEN_INTEGER {$$ = $1;} /* Adapte conforme necessário */
    |  TOKEN_IDENTIFICADOR {$$ = $1;} /* Adapte conforme necessário */
    |  expr TOKEN_SUM expr {$$ = $1 + $3;}
    |  expr TOKEN_SUB expr {$$ = $1 - $3;}
    |  expr TOKEN_MULT expr {$$ = $1 * $3;}
    |  expr TOKEN_DIV expr {$$ = $1 / $3;}
    |  TOKEN_LPAREN expr TOKEN_RPAREN {$$ = $2;}
    |  TOKEN_SUB expr %prec UMINUS {$$ = -$2;}
    | TOKEN_INTEGER
    | TOKEN_DOUBLE
    ;

    
%%

void yyerror(const char *c) {
    std::cout << "ERRO: " << c << std::endl;
}


int main(){
    yyparse();
    return 0;
}