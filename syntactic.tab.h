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

#ifndef YY_YY_SYNTACTIC_TAB_H_INCLUDED
# define YY_YY_SYNTACTIC_TAB_H_INCLUDED
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
    TOKEN_IDOUBLE = 263,           /* TOKEN_IDOUBLE  */
    TOKEN_MESTRE = 264,            /* TOKEN_MESTRE  */
    TOKEN_INCLUDE = 265,           /* TOKEN_INCLUDE  */
    TOKEN_PRINT = 266,             /* TOKEN_PRINT  */
    TOKEN_RETURN = 267,            /* TOKEN_RETURN  */
    TOKEN_CLASS = 268,             /* TOKEN_CLASS  */
    TOKEN_INTEGER = 269,           /* TOKEN_INTEGER  */
    TOKEN_IDENTIFICADOR = 270,     /* TOKEN_IDENTIFICADOR  */
    TOKEN_DOUBLE = 271,            /* TOKEN_DOUBLE  */
    TOKEN_SUM = 272,               /* TOKEN_SUM  */
    TOKEN_SUB = 273,               /* TOKEN_SUB  */
    TOKEN_MULT = 274,              /* TOKEN_MULT  */
    TOKEN_DIV = 275,               /* TOKEN_DIV  */
    TOKEN_EQUAL = 276,             /* TOKEN_EQUAL  */
    TOKEN_INCREMENT = 277,         /* TOKEN_INCREMENT  */
    TOKEN_GT = 278,                /* TOKEN_GT  */
    TOKEN_LT = 279,                /* TOKEN_LT  */
    TOKEN_GE = 280,                /* TOKEN_GE  */
    TOKEN_LE = 281,                /* TOKEN_LE  */
    TOKEN_NE = 282,                /* TOKEN_NE  */
    TOKEN_XOR = 283,               /* TOKEN_XOR  */
    TOKEN_OR = 284,                /* TOKEN_OR  */
    TOKEN_AND = 285,               /* TOKEN_AND  */
    TOKEN_ASSIGN = 286,            /* TOKEN_ASSIGN  */
    TOKEN_LBRACE = 287,            /* TOKEN_LBRACE  */
    TOKEN_RBRACE = 288,            /* TOKEN_RBRACE  */
    TOKEN_DOT = 289,               /* TOKEN_DOT  */
    TOKEN_SEMICOLON = 290,         /* TOKEN_SEMICOLON  */
    TOKEN_COMMA = 291,             /* TOKEN_COMMA  */
    TOKEN_LPAREN = 292,            /* TOKEN_LPAREN  */
    TOKEN_RPAREN = 293,            /* TOKEN_RPAREN  */
    UMINUS = 294                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTACTIC_TAB_H_INCLUDED  */
