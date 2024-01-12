%{
    #include "y.tab.h"
    #include <stdio.h>
extern "C" int yywrap() { }
%}

%option yylineno

DIGIT [0-9]+
ID [a-zA-Z][a-zA-Z0-9]*
FLOAT[0-9]+.[0-9]*           

%%

"if"                 {return TIF;}
"else"               {return TELSE;}
"for"                 {return TFOR;}
"while"               {return TWHILE;}
"int"                 {return TINT;}
"double"              {return TDOUBLE;}
"mestre"              {return TMESTRE;}
"#include"            {return TINCLUDE;}
"print"               {return TPRINT;}
"return"              {return TRETURN;}
"class"               {return TCLASS;}
[ \t\n]                /* Ignorar espaços em branco */ ;
{DIGIT}                {return TINTEGER;}
{ID}                   {return TIDENTIFICADOR;}
{FLOAT}                {return TDOUBLE;}
"+"                   {return TSUM;}
"-"                   {return TSUB;}
"*"                   {return TMULT;}
"/"                   {return TDIV;}
"=="                  {return TEQUAL;}
"++"                  {return TINCREMENT;}
">"                   {return TGT;}
"<"                   {return TLT;}
">="                  {return TGE;}
"<="                  {return TLE;}
"!="                  {return TNE;}
"^"                   {return TXOR;}
"||"                  {return TOR;}
"&&"                  {return TAND;}
"="                   {return TASSIGN;}
"{"                   {return TLBRACE;}
"}"                   {return TRBRACE;}
"."                   {return TDOT;}
";"                   {return TSEMICOLON;}
","                   {return TCOMMA;}
"("                   {return TLPAREN;}
")"                   {return TRPAREN;}



%%
int main(){
    yylex();
    return 1;
}
