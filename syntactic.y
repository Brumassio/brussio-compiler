%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex();
int yywrap(); 
void yyerror(char *s);
void insert_type();
int search(char *);
void insert_type();



int count=0;
int q;
char type[10];
extern int countn;
int flag;

extern FILE *yyin;
extern int flag;


extern int yylex();
extern FILE *yyin;
extern char* yytext;

struct dataType {
  char * id_name;
  char * data_type;
  char * type;
  int line_no;
} tabela_de_simbolos[40];

struct noArvore {
  struct noArvore *left;
  struct noArvore *right;
  char *token;     
};

%}

%union{
    int intValue;         
    double doubleValue;    
    char *stringValue;
    struct var_name {
      char name[80];
      struct noArvore *nd;
    } obj;
}


%token <obj> TOKEN_IF
%token <obj> TOKEN_ELSE
%token <obj> TOKEN_FOR
%token <obj> TOKEN_WHILE
%token <obj> TOKEN_INT
%token <obj> TOKEN_VOID
%token <obj> TOKEN_IDOUBLE
%token <obj> TOKEN_MASTER
%token <obj> TOKEN_INCLUDE
%token <obj> TOKEN_PRINT
%token <obj> TOKEN_RETURN
%token <obj> TOKEN_BREAK
%token <obj> TOKEN_CONTINUE
%token <obj> TOKEN_CLASS
%token <obj> TOKEN_INTEGER
%token <obj> TOKEN_CHAR
%token <obj> TOKEN_IDENTIFICADOR
%token <obj> TOKEN_DOUBLE
%token <obj> TOKEN_SUM
%token <obj> TOKEN_SUB
%token <obj> TOKEN_MULT
%token <obj> TOKEN_DIV
%token <obj> TOKEN_EQUAL
%token <obj> TOKEN_INCREMENT
%token <obj> TOKEN_DECREMENT
%token <obj> TOKEN_GT
%token <obj> TOKEN_LT
%token <obj> TOKEN_GE
%token <obj> TOKEN_LE
%token <obj> TOKEN_NE
%token <obj> TOKEN_XOR
%token <obj> TOKEN_OR
%token <obj> TOKEN_AND
%token <obj> TOKEN_ASSIGN
%token <obj> TOKEN_LBRACE
%token <obj> TOKEN_RBRACE
%token <obj> TOKEN_DOT
%token <obj> TOKEN_PONTOEVIRGULA
%token <obj> TOKEN_VIRGULA
%token <obj> TOKEN_LPAREN
%token <obj> TOKEN_RPAREN

%type <doubleValue> variable
%type <obj> declaration
%type <obj> class_declaration
%type <obj> attribute_declaration
%type <obj> type

/*  order of operations */
%left TOKEN_SUB  TOKEN_SUM 
%left TOKEN_MULT TOKEN_DIV
%nonassoc UMINUS

%% /* Grammar rules and actions follow */

declarations: declarations declaration | declaration;

declaration: type TOKEN_IDENTIFICADOR{
  add('V');
} TOKEN_PONTOEVIRGULA 

type: TOKEN_INTEGER
{
    insert_type();
} | TOKEN_CHAR{
    insert_type();
} | TOKEN_DOUBLE {
    insert_type();
} | TOKEN_VOID {
    insert_type();
};

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




variable: TOKEN_IDENTIFICADOR {
    add('V'); // Adiciona variável à tabela de símbolos
    $$ = 0; // Define um valor de retorno para a regra
};

assignment: variable TOKEN_ASSIGN exp TOKEN_PONTOEVIRGULA ; 

for_stat: TOKEN_FOR {add('K')} '(' exp TOKEN_PONTOEVIRGULA exp TOKEN_PONTOEVIRGULA exp')' tail ;

while_stat: TOKEN_WHILE {add('K')} '(' exp ')' tail ;

if_stat: TOKEN_IF '(' exp ')' tail else_if_part else_part ;

else_if_part: 
   else_if_part TOKEN_ELSE TOKEN_IF '(' exp ')' tail |
   TOKEN_ELSE {add('K')} | TOKEN_IF {add('K')} '(' exp ')' tail  |
   /* empty */
 ; 

else_part: TOKEN_ELSE {add('K')} tail | /* empty */ ; 

tail: statement | '{' statements '}' ;

statements: statements statement | statement;

statement: if_stat
        | for_stat
        | while_stat 
        | assignment 
        | TOKEN_CONTINUE TOKEN_PONTOEVIRGULA 
        | TOKEN_BREAK  TOKEN_PONTOEVIRGULA
        | TOKEN_RETURN  TOKEN_PONTOEVIRGULA;

class_declaration: TOKEN_CLASS TOKEN_IDENTIFICADOR TOKEN_LBRACE class_body TOKEN_RBRACE {
    add('V'); // Adiciona variável à tabela de símbolos
    $$ = 0; // Define um valor de retorno para a regra
};

class_body: class_members;

class_members: class_members class_member | /* empty */;

class_member: attribute_declaration | method_declaration;

attribute_declaration: type TOKEN_IDENTIFICADOR TOKEN_PONTOEVIRGULA {
  add('V'); 
  $$ = 0; // Define um valor de retorno para a regra
};

method_declaration: type TOKEN_IDENTIFICADOR TOKEN_LPAREN parameters_list TOKEN_RPAREN '{' statements '}';

parameters_list: parameter_declaration | parameters_list TOKEN_VIRGULA parameter_declaration;

parameter_declaration: type TOKEN_IDENTIFICADOR;

program: declarations statements ;

%%

void yyerror(char *s) {
    fprintf(stderr, "Erro na linha %d: %s\n", countn, s);
    exit(1);
}

int main(int argc, char *argv[]){
    yyparse();
    printf("\n\n");
	printf("\t\t\t\t\t\t\t\t PHASE 1: LEXICAL ANALYSIS \n\n");
	printf("\nSYMBOL   DATATYPE   TYPE   LINE NUMBER \n");
	printf("_______________________________________\n\n");
	int i=0;
	for(i=0; i<count; i++) {
		printf("%s\t%s\t%s\t%d\t\n", tabela_de_simbolos[i].id_name, tabela_de_simbolos[i].data_type, tabela_de_simbolos[i].type, tabela_de_simbolos[i].line_no);
	}
	for(i=0;i<count;i++) {
		free(tabela_de_simbolos[i].id_name);
		free(tabela_de_simbolos[i].type);
	}
	printf("\n\n");
}

int search(char *type) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(tabela_de_simbolos[i].id_name, type)==0) {
			return -1;
			break;
		}
	}
	return 0;
}

void add(char c) {
  q=search(yytext);
  if(!q) {
    if(c == 'H') {
			tabela_de_simbolos[count].id_name=strdup(yytext);
			tabela_de_simbolos[count].data_type=strdup(type);
			tabela_de_simbolos[count].line_no=countn;
			tabela_de_simbolos[count].type=strdup("Header");
			count++;
		}
		else if(c == 'K') {
			tabela_de_simbolos[count].id_name=strdup(yytext);
			tabela_de_simbolos[count].data_type=strdup("N/A");
			tabela_de_simbolos[count].line_no=countn;
			tabela_de_simbolos[count].type=strdup("Keyword\t");
			count++;
		}
		else if(c == 'V') {
			tabela_de_simbolos[count].id_name=strdup(yytext);
			tabela_de_simbolos[count].data_type=strdup(type);
			tabela_de_simbolos[count].line_no=countn;
			tabela_de_simbolos[count].type=strdup("Variable");
			count++;
		}
		else if(c == 'C') {
			tabela_de_simbolos[count].id_name=strdup(yytext);
			tabela_de_simbolos[count].data_type=strdup("CONST");
			tabela_de_simbolos[count].line_no=countn;
			tabela_de_simbolos[count].type=strdup("Constant");
			count++;
		}
		else if(c == 'F') {
			tabela_de_simbolos[count].id_name=strdup(yytext);
			tabela_de_simbolos[count].data_type=strdup(type);
			tabela_de_simbolos[count].line_no=countn;
			tabela_de_simbolos[count].type=strdup("Function");
			count++;
		}
	}
}

void insert_type() {
	strcpy(type, yytext);
}