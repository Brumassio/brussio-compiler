{
#define YYSTYPE double
#include <math.h>
#include <cctype>
%}

%token TOKEN_IF
%token TOKEN_ELSE
%token TOKEN_FOR
%token TOKEN_WHILE
%token TOKEN_INT
%token TOKEN_DOUBLE
%token TOKEN_MESTRE
%token TOKEN_INCLUDE
%token TOKEN_PRINT
%token TOKEN_RETURN
%token TOKEN_CLASS
%token TOKEN_INTEGER
%token TOKEN_IDENTIFICADOR
%token TOKEN_DOUBLE
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

%% /* Grammar rules and actions follow */

