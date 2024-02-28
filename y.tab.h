/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOKEN_IF = 258,                /* TOKEN_IF  */
    TOKEN_ELSE = 259,              /* TOKEN_ELSE  */
    TOKEN_FOR = 260,               /* TOKEN_FOR  */
    TOKEN_WHILE = 261,             /* TOKEN_WHILE  */
    TOKEN_INT = 262,               /* TOKEN_INT  */
    TOKEN_VOID = 263,              /* TOKEN_VOID  */
    TOKEN_IDOUBLE = 264,           /* TOKEN_IDOUBLE  */
    TOKEN_MASTER = 265,            /* TOKEN_MASTER  */
    TOKEN_INCLUDE = 266,           /* TOKEN_INCLUDE  */
    TOKEN_PRINT = 267,             /* TOKEN_PRINT  */
    TOKEN_RETURN = 268,            /* TOKEN_RETURN  */
    TOKEN_BREAK = 269,             /* TOKEN_BREAK  */
    TOKEN_CONTINUE = 270,          /* TOKEN_CONTINUE  */
    TOKEN_CLASS = 271,             /* TOKEN_CLASS  */
    TOKEN_INTEGER = 272,           /* TOKEN_INTEGER  */
    TOKEN_CHAR = 273,              /* TOKEN_CHAR  */
    TOKEN_IDENTIFICADOR = 274,     /* TOKEN_IDENTIFICADOR  */
    TOKEN_DOUBLE = 275,            /* TOKEN_DOUBLE  */
    TOKEN_SUM = 276,               /* TOKEN_SUM  */
    TOKEN_SUB = 277,               /* TOKEN_SUB  */
    TOKEN_MULT = 278,              /* TOKEN_MULT  */
    TOKEN_DIV = 279,               /* TOKEN_DIV  */
    TOKEN_EQUAL = 280,             /* TOKEN_EQUAL  */
    TOKEN_INCREMENT = 281,         /* TOKEN_INCREMENT  */
    TOKEN_DECREMENT = 282,         /* TOKEN_DECREMENT  */
    TOKEN_GT = 283,                /* TOKEN_GT  */
    TOKEN_LT = 284,                /* TOKEN_LT  */
    TOKEN_GE = 285,                /* TOKEN_GE  */
    TOKEN_LE = 286,                /* TOKEN_LE  */
    TOKEN_NE = 287,                /* TOKEN_NE  */
    TOKEN_XOR = 288,               /* TOKEN_XOR  */
    TOKEN_OR = 289,                /* TOKEN_OR  */
    TOKEN_AND = 290,               /* TOKEN_AND  */
    TOKEN_ASSIGN = 291,            /* TOKEN_ASSIGN  */
    TOKEN_LBRACE = 292,            /* TOKEN_LBRACE  */
    TOKEN_RBRACE = 293,            /* TOKEN_RBRACE  */
    TOKEN_DOT = 294,               /* TOKEN_DOT  */
    TOKEN_PONTOEVIRGULA = 295,     /* TOKEN_PONTOEVIRGULA  */
    TOKEN_VIRGULA = 296,           /* TOKEN_VIRGULA  */
    TOKEN_LPAREN = 297,            /* TOKEN_LPAREN  */
    TOKEN_RPAREN = 298,            /* TOKEN_RPAREN  */
    UMINUS = 299                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define TOKEN_IF 258
#define TOKEN_ELSE 259
#define TOKEN_FOR 260
#define TOKEN_WHILE 261
#define TOKEN_INT 262
#define TOKEN_VOID 263
#define TOKEN_IDOUBLE 264
#define TOKEN_MASTER 265
#define TOKEN_INCLUDE 266
#define TOKEN_PRINT 267
#define TOKEN_RETURN 268
#define TOKEN_BREAK 269
#define TOKEN_CONTINUE 270
#define TOKEN_CLASS 271
#define TOKEN_INTEGER 272
#define TOKEN_CHAR 273
#define TOKEN_IDENTIFICADOR 274
#define TOKEN_DOUBLE 275
#define TOKEN_SUM 276
#define TOKEN_SUB 277
#define TOKEN_MULT 278
#define TOKEN_DIV 279
#define TOKEN_EQUAL 280
#define TOKEN_INCREMENT 281
#define TOKEN_DECREMENT 282
#define TOKEN_GT 283
#define TOKEN_LT 284
#define TOKEN_GE 285
#define TOKEN_LE 286
#define TOKEN_NE 287
#define TOKEN_XOR 288
#define TOKEN_OR 289
#define TOKEN_AND 290
#define TOKEN_ASSIGN 291
#define TOKEN_LBRACE 292
#define TOKEN_RBRACE 293
#define TOKEN_DOT 294
#define TOKEN_PONTOEVIRGULA 295
#define TOKEN_VIRGULA 296
#define TOKEN_LPAREN 297
#define TOKEN_RPAREN 298
#define UMINUS 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 44 "syntactic.y"

    int intValue;         
    double doubleValue;    
    char *stringValue;
    struct var_name {
      char name[80];
      struct noArvore *nd;
    } obj;

#line 165 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
