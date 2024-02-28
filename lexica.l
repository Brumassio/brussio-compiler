%{
    #include "syntactic.tab.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    //#include "symtab.h"
    extern FILE *yyin;
	extern FILE *yyout;
	
	int countn=0;
    void yyerror();
%}

%option yylineno

DIGIT [0-9]+
ID [a-zA-Z][a-zA-Z0-9]*
FLOAT[0-9]+.[0-9]*           

%%

"if"                  {strcpy(yylval.obj.name,(yytext));return TOKEN_IF;}
"else"                {strcpy(yylval.obj.name,(yytext));return TOKEN_ELSE;}
"for"                 {strcpy(yylval.obj.name,(yytext));return TOKEN_FOR;}
"while"               {strcpy(yylval.obj.name,(yytext));return TOKEN_WHILE;}
"int"                 {strcpy(yylval.obj.name,(yytext));return TOKEN_INT;}

"double"              {strcpy(yylval.obj.name,(yytext));return TOKEN_IDOUBLE;}
"void"                {strcpy(yylval.obj.name,(yytext));return TOKEN_VOID;} 
"master"              {strcpy(yylval.obj.name,(yytext));return TOKEN_MASTER;}
"#include"            {strcpy(yylval.obj.name,(yytext));return TOKEN_INCLUDE;}
"print"               {strcpy(yylval.obj.name,(yytext));return TOKEN_PRINT;}
"scan"                {strcpy(yylval.obj.name,(yytext));return TOKEN_SCAN;}
['].[']               {strcpy(yylval.obj.name,(yytext));return TOKEN_CHAR;}
['].*[']              {strcpy(yylval.obj.name,(yytext));return TOKEN_STRING;}
"true"                {strcpy(yylval.obj.name,(yytext));return TOKEN_TRUE;}
"false"               {strcpy(yylval.obj.name,(yytext));return TOKEN_FALSE;}
"return"              {strcpy(yylval.obj.name,(yytext));return TOKEN_RETURN;}
"break"               {strcpy(yylval.obj.name,(yytext));return TOKEN_BREAK;}
"continue"            {strcpy(yylval.obj.name,(yytext));return TOKEN_CONTINUE;}
"class"               {strcpy(yylval.obj.name,(yytext));return TOKEN_CLASS;}
{ID}                  {strcpy(yylval.obj.name,(yytext));return TOKEN_IDENTIFICADOR;}
{DIGIT}               {strcpy(yylval.obj.name,(yytext));return TOKEN_INTEGER;}
{FLOAT}               {strcpy(yylval.obj.name,(yytext));return TOKEN_DOUBLE;}
"+"                   {strcpy(yylval.obj.name,(yytext));return TOKEN_SUM;}
"-"                   {strcpy(yylval.obj.name,(yytext));return TOKEN_SUB;}
"*"                   {strcpy(yylval.obj.name,(yytext));return TOKEN_MULT;}
"/"                   {strcpy(yylval.obj.name,(yytext));return TOKEN_DIV;}
"=="                  {strcpy(yylval.obj.name,(yytext));return TOKEN_EQUAL;}
"++"                  {strcpy(yylval.obj.name,(yytext));return TOKEN_INCREMENT;}
"--"                  {strcpy(yylval.obj.name,(yytext));return TOKEN_DECREMENT;}
">"                   {strcpy(yylval.obj.name,(yytext));return TOKEN_GT;}
"<"                   {strcpy(yylval.obj.name,(yytext));return TOKEN_LT;}
">="                  {strcpy(yylval.obj.name,(yytext));return TOKEN_GE;}
"<="                  {strcpy(yylval.obj.name,(yytext));return TOKEN_LE;}
"!="                  {strcpy(yylval.obj.name,(yytext));return TOKEN_NE;}
"^"                   {strcpy(yylval.obj.name,(yytext));return TOKEN_XOR;}
"||"                  {strcpy(yylval.obj.name,(yytext));return TOKEN_OR;}
"&&"                  {strcpy(yylval.obj.name,(yytext));return TOKEN_AND;}
"="                   {strcpy(yylval.obj.name,(yytext));return TOKEN_ASSIGN;}
"{"                   {strcpy(yylval.obj.name,(yytext));return TOKEN_LBRACE;}
"}"                   {strcpy(yylval.obj.name,(yytext));return TOKEN_RBRACE;}
"."                   {strcpy(yylval.obj.name,(yytext));return TOKEN_DOT;}
";"                   {strcpy(yylval.obj.name,(yytext));return TOKEN_PONTOEVIRGULA;}
","                   {strcpy(yylval.obj.name,(yytext));return TOKEN_VIRGULA;}
"("                   {strcpy(yylval.obj.name,(yytext));return TOKEN_LPAREN;}
")"                   {strcpy(yylval.obj.name,(yytext));return TOKEN_RPAREN;}
[\n]                        { countn++; }
[ \t]*                      { ; }

.               { yyerror("Unrecognized character"); }

%%

int yywrap() {
    return 1;
}
/*
int main(){
    yylex();
    return 1;
}
*/