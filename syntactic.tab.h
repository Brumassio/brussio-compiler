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
    TOKEN_VOID = 263,              /* TOKEN_VOID  */
    TOKEN_IDOUBLE = 264,           /* TOKEN_IDOUBLE  */
    TOKEN_MESTRE = 265,            /* TOKEN_MESTRE  */
    TOKEN_INCLUDE = 266,           /* TOKEN_INCLUDE  */
    TOKEN_PRINT = 267,             /* TOKEN_PRINT  */
    TOKEN_RETURN = 268,            /* TOKEN_RETURN  */
    TOKEN_CLASS = 269,             /* TOKEN_CLASS  */
    TOKEN_INTEGER = 270,           /* TOKEN_INTEGER  */
    TOKEN_IDENTIFICADOR = 271,     /* TOKEN_IDENTIFICADOR  */
    TOKEN_DOUBLE = 272,            /* TOKEN_DOUBLE  */
    TOKEN_SUM = 273,               /* TOKEN_SUM  */
    TOKEN_SUB = 274,               /* TOKEN_SUB  */
    TOKEN_MULT = 275,              /* TOKEN_MULT  */
    TOKEN_DIV = 276,               /* TOKEN_DIV  */
    TOKEN_EQUAL = 277,             /* TOKEN_EQUAL  */
    TOKEN_INCREMENT = 278,         /* TOKEN_INCREMENT  */
    TOKEN_GT = 279,                /* TOKEN_GT  */
    TOKEN_LT = 280,                /* TOKEN_LT  */
    TOKEN_GE = 281,                /* TOKEN_GE  */
    TOKEN_LE = 282,                /* TOKEN_LE  */
    TOKEN_NE = 283,                /* TOKEN_NE  */
    TOKEN_XOR = 284,               /* TOKEN_XOR  */
    TOKEN_OR = 285,                /* TOKEN_OR  */
    TOKEN_AND = 286,               /* TOKEN_AND  */
    TOKEN_ASSIGN = 287,            /* TOKEN_ASSIGN  */
    TOKEN_LBRACE = 288,            /* TOKEN_LBRACE  */
    TOKEN_RBRACE = 289,            /* TOKEN_RBRACE  */
    TOKEN_DOT = 290,               /* TOKEN_DOT  */
    TOKEN_SEMICOLON = 291,         /* TOKEN_SEMICOLON  */
    TOKEN_COMMA = 292,             /* TOKEN_COMMA  */
    TOKEN_LPAREN = 293,            /* TOKEN_LPAREN  */
    TOKEN_RPAREN = 294,            /* TOKEN_RPAREN  */
    NUM = 295,                     /* NUM  */
    VAR = 296,                     /* VAR  */
    FUN = 297,                     /* FUN  */
    UMINUS = 298                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTACTIC_TAB_H_INCLUDED  */
