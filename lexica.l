%{
#include <stdio.h>
#include "node.h"
#include "parser.hpp"
#define SAVE_TOKEN yylval.string = new std::string(yytext, yyleng)
#define TOKEN(t) (yylval.token = t)
extern "C" int yywrap() { }
%}

%option noyywrap
%option case-insensitive

DIGIT [0-9]+
ID [a-zA-Z][a-zA-Z0-9]*
FLOAT[0-9]+.[0-9]*           

%%

[ \t\n]                /* Ignorar espaços em branco */ ;
{DIGIT}                SAVE_TOKEN; return TINTEGER;
{ID}                   SAVE_TOKEN; return TIDENTIFICADOR;
{FLOAT}                SAVE_TOKEN; return TDOUBLE;

if|else               return TOKEN(TIF);
for|while             return TOKEN(TFOR);
int|double            return TOKEN(TTIPO);
mestre                return TOKEN(TFUNCAO);
#include              return TOKEN(TINCLUDE);
print                 return TOKEN(TPRINT);
return                return TOKEN(TRETURN);
class                 return TOKEN(TCLASS);

"+"                   return TOKEN(TSUM);
"-"                   return TOKEN(TSUB);
"*"                   return TOKEN(TMULT);
"/"                   return TOKEN(TDIV);
"=="                  return TOKEN(TEQUAL);
"++"                  return TOKEN(TINCREMENT);
">"                   return TOKEN(TGT);
"<"                   return TOKEN(TLT);
">="                  return TOKEN(TGE);
"<="                  return TOKEN(TLE);
"!="                  return TOKEN(TNE);
"^"                   return TOKEN(TXOR);
"||"                  return TOKEN(TOR);
"&&"                  return TOKEN(TAND);
"="                   return TOKEN(TASSIGN);
"{"                   return TOKEN(TLBRACE);
"}"                   return TOKEN(TRBRACE);
"."                   return TOKEN(TDOT);
";"                   return TOKEN(TSEMICOLON);
","                   return TOKEN(TCOMMA);
"("                   return TOKEN(TLPAREN);
")"                   return TOKEN(TRPAREN);

return|if|else|for|while|int|double|mestre|#include|print|return    SAVE_TOKEN; return TOKEN(TPALAVRA_RESERVADA);


%%
int main(){
    yylex();
    return 0;
}
