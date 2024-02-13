%{
    #include <stdio.h>
    #include "syntactic.tab.h"
%}

%option yylineno

DIGIT [0-9]+
ID [a-zA-Z][a-zA-Z0-9]*
FLOAT[0-9]+.[0-9]*           

%%

"if"                 {return TOKEN_IF;}
"else"               {return TOKEN_ELSE;}
"for"                 {return TOKEN_FOR;}
"while"               {return TOKEN_WHILE;}
"int"                 {return TOKEN_INT;}
"char"                {return TOKEN_CHAR;}
"double"              {return TOKEN_IDOUBLE;}
"void"                 {return TOKEN_VOID;} 
"mestre"              {return TOKEN_MESTRE;}
"#include"            {return TOKEN_INCLUDE;}
"print"               {return TOKEN_PRINT;}
"return"              {return TOKEN_RETURN;}
"class"               {return TOKEN_CLASS;}
[ \t\n]                /* Ignorar espaços em branco */ ;
{DIGIT}                {return TOKEN_INTEGER;}
{ID}                   {return TOKEN_IDENTIFICADOR;}
{FLOAT}                {return TOKEN_DOUBLE;}
"+"                   {return TOKEN_SUM;}
"-"                   {return TOKEN_SUB;}
"*"                   {return TOKEN_MULT;}
"/"                   {return TOKEN_DIV;}
"=="                  {return TOKEN_EQUAL;}
"++"                  {return TOKEN_INCREMENT;}
">"                   {return TOKEN_GT;}
"<"                   {return TOKEN_LT;}
">="                  {return TOKEN_GE;}
"<="                  {return TOKEN_LE;}
"!="                  {return TOKEN_NE;}
"^"                   {return TOKEN_XOR;}
"||"                  {return TOKEN_OR;}
"&&"                  {return TOKEN_AND;}
"="                   {return TOKEN_ASSIGN;}
"{"                   {return TOKEN_LBRACE;}
"}"                   {return TOKEN_RBRACE;}
"."                   {return TOKEN_DOT;}
";"                   {return TOKEN_PONTOEVIRGULA;}
","                   {return TOKEN_VIRGULA;}
"("                   {return TOKEN_LPAREN;}
")"                   {return TOKEN_RPAREN;}



%%
int main(){
    yylex();
    return 1;
}
