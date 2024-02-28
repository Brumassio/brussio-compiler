/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntactic.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex();
int yywrap(); 
void yyerror(char *s);
void insert_type();
int search(char *);
void insert_type();
void add(char);


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


#line 114 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 265 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_IF = 3,                   /* TOKEN_IF  */
  YYSYMBOL_TOKEN_ELSE = 4,                 /* TOKEN_ELSE  */
  YYSYMBOL_TOKEN_FOR = 5,                  /* TOKEN_FOR  */
  YYSYMBOL_TOKEN_WHILE = 6,                /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_INT = 7,                  /* TOKEN_INT  */
  YYSYMBOL_TOKEN_VOID = 8,                 /* TOKEN_VOID  */
  YYSYMBOL_TOKEN_IDOUBLE = 9,              /* TOKEN_IDOUBLE  */
  YYSYMBOL_TOKEN_MASTER = 10,              /* TOKEN_MASTER  */
  YYSYMBOL_TOKEN_INCLUDE = 11,             /* TOKEN_INCLUDE  */
  YYSYMBOL_TOKEN_PRINT = 12,               /* TOKEN_PRINT  */
  YYSYMBOL_TOKEN_RETURN = 13,              /* TOKEN_RETURN  */
  YYSYMBOL_TOKEN_BREAK = 14,               /* TOKEN_BREAK  */
  YYSYMBOL_TOKEN_CONTINUE = 15,            /* TOKEN_CONTINUE  */
  YYSYMBOL_TOKEN_CLASS = 16,               /* TOKEN_CLASS  */
  YYSYMBOL_TOKEN_INTEGER = 17,             /* TOKEN_INTEGER  */
  YYSYMBOL_TOKEN_CHAR = 18,                /* TOKEN_CHAR  */
  YYSYMBOL_TOKEN_IDENTIFICADOR = 19,       /* TOKEN_IDENTIFICADOR  */
  YYSYMBOL_TOKEN_DOUBLE = 20,              /* TOKEN_DOUBLE  */
  YYSYMBOL_TOKEN_SUM = 21,                 /* TOKEN_SUM  */
  YYSYMBOL_TOKEN_SUB = 22,                 /* TOKEN_SUB  */
  YYSYMBOL_TOKEN_MULT = 23,                /* TOKEN_MULT  */
  YYSYMBOL_TOKEN_DIV = 24,                 /* TOKEN_DIV  */
  YYSYMBOL_TOKEN_EQUAL = 25,               /* TOKEN_EQUAL  */
  YYSYMBOL_TOKEN_INCREMENT = 26,           /* TOKEN_INCREMENT  */
  YYSYMBOL_TOKEN_DECREMENT = 27,           /* TOKEN_DECREMENT  */
  YYSYMBOL_TOKEN_GT = 28,                  /* TOKEN_GT  */
  YYSYMBOL_TOKEN_LT = 29,                  /* TOKEN_LT  */
  YYSYMBOL_TOKEN_GE = 30,                  /* TOKEN_GE  */
  YYSYMBOL_TOKEN_LE = 31,                  /* TOKEN_LE  */
  YYSYMBOL_TOKEN_NE = 32,                  /* TOKEN_NE  */
  YYSYMBOL_TOKEN_XOR = 33,                 /* TOKEN_XOR  */
  YYSYMBOL_TOKEN_OR = 34,                  /* TOKEN_OR  */
  YYSYMBOL_TOKEN_AND = 35,                 /* TOKEN_AND  */
  YYSYMBOL_TOKEN_ASSIGN = 36,              /* TOKEN_ASSIGN  */
  YYSYMBOL_TOKEN_LBRACE = 37,              /* TOKEN_LBRACE  */
  YYSYMBOL_TOKEN_RBRACE = 38,              /* TOKEN_RBRACE  */
  YYSYMBOL_TOKEN_DOT = 39,                 /* TOKEN_DOT  */
  YYSYMBOL_TOKEN_PONTOEVIRGULA = 40,       /* TOKEN_PONTOEVIRGULA  */
  YYSYMBOL_TOKEN_VIRGULA = 41,             /* TOKEN_VIRGULA  */
  YYSYMBOL_TOKEN_LPAREN = 42,              /* TOKEN_LPAREN  */
  YYSYMBOL_TOKEN_RPAREN = 43,              /* TOKEN_RPAREN  */
  YYSYMBOL_UMINUS = 44,                    /* UMINUS  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_47_ = 47,                       /* '!'  */
  YYSYMBOL_48_ = 48,                       /* '{'  */
  YYSYMBOL_49_ = 49,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_program = 51,                   /* program  */
  YYSYMBOL_type = 52,                      /* type  */
  YYSYMBOL_exp = 53,                       /* exp  */
  YYSYMBOL_term = 54,                      /* term  */
  YYSYMBOL_unary_operator = 55,            /* unary_operator  */
  YYSYMBOL_expression_increment = 56,      /* expression_increment  */
  YYSYMBOL_expression_decrement = 57,      /* expression_decrement  */
  YYSYMBOL_binary_operator = 58,           /* binary_operator  */
  YYSYMBOL_variable = 59,                  /* variable  */
  YYSYMBOL_assignment = 60,                /* assignment  */
  YYSYMBOL_for_stat = 61,                  /* for_stat  */
  YYSYMBOL_62_2 = 62,                      /* $@2  */
  YYSYMBOL_while_stat = 63,                /* while_stat  */
  YYSYMBOL_64_3 = 64,                      /* $@3  */
  YYSYMBOL_if_stat = 65,                   /* if_stat  */
  YYSYMBOL_else_if_part = 66,              /* else_if_part  */
  YYSYMBOL_67_4 = 67,                      /* $@4  */
  YYSYMBOL_else_part = 68,                 /* else_part  */
  YYSYMBOL_69_5 = 69,                      /* $@5  */
  YYSYMBOL_tail = 70,                      /* tail  */
  YYSYMBOL_statements = 71,                /* statements  */
  YYSYMBOL_statement = 72,                 /* statement  */
  YYSYMBOL_class_declaration = 73,         /* class_declaration  */
  YYSYMBOL_class_body = 74,                /* class_body  */
  YYSYMBOL_class_members = 75,             /* class_members  */
  YYSYMBOL_class_member = 76,              /* class_member  */
  YYSYMBOL_attribute_declaration = 77,     /* attribute_declaration  */
  YYSYMBOL_78_6 = 78,                      /* $@6  */
  YYSYMBOL_method_declaration = 79,        /* method_declaration  */
  YYSYMBOL_parameters_list = 80,           /* parameters_list  */
  YYSYMBOL_parameter_declaration = 81      /* parameter_declaration  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   314

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  119

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,     2,     2,     2,     2,     2,
      45,    46,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   110,   110,   118,   121,   123,   125,   129,   130,   131,
     132,   133,   136,   137,   140,   141,   142,   145,   148,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   168,   172,   174,   174,   176,   176,   178,   181,   182,
     182,   182,   182,   186,   186,   186,   188,   188,   190,   190,
     192,   193,   194,   195,   196,   197,   198,   200,   202,   204,
     204,   206,   206,   208,   208,   210,   212,   212,   214
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_IF",
  "TOKEN_ELSE", "TOKEN_FOR", "TOKEN_WHILE", "TOKEN_INT", "TOKEN_VOID",
  "TOKEN_IDOUBLE", "TOKEN_MASTER", "TOKEN_INCLUDE", "TOKEN_PRINT",
  "TOKEN_RETURN", "TOKEN_BREAK", "TOKEN_CONTINUE", "TOKEN_CLASS",
  "TOKEN_INTEGER", "TOKEN_CHAR", "TOKEN_IDENTIFICADOR", "TOKEN_DOUBLE",
  "TOKEN_SUM", "TOKEN_SUB", "TOKEN_MULT", "TOKEN_DIV", "TOKEN_EQUAL",
  "TOKEN_INCREMENT", "TOKEN_DECREMENT", "TOKEN_GT", "TOKEN_LT", "TOKEN_GE",
  "TOKEN_LE", "TOKEN_NE", "TOKEN_XOR", "TOKEN_OR", "TOKEN_AND",
  "TOKEN_ASSIGN", "TOKEN_LBRACE", "TOKEN_RBRACE", "TOKEN_DOT",
  "TOKEN_PONTOEVIRGULA", "TOKEN_VIRGULA", "TOKEN_LPAREN", "TOKEN_RPAREN",
  "UMINUS", "'('", "')'", "'!'", "'{'", "'}'", "$accept", "program",
  "type", "exp", "term", "unary_operator", "expression_increment",
  "expression_decrement", "binary_operator", "variable", "assignment",
  "for_stat", "$@2", "while_stat", "$@3", "if_stat", "else_if_part", "$@4",
  "else_part", "$@5", "tail", "statements", "statement",
  "class_declaration", "class_body", "class_members", "class_member",
  "attribute_declaration", "$@6", "method_declaration", "parameters_list",
  "parameter_declaration", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,    -1,    21,   -82,   -15,   -82,   -82,   -14,    53,   -82,
     -82,   -82,   -82,   -82,     4,   -82,   -82,   -82,   -17,    53,
     -10,    20,   -33,   -82,   -82,   -82,    53,    -8,   -82,   280,
      -3,   -82,   -82,     3,    10,    13,   -82,    18,   -82,   -82,
     -82,   -82,    14,   -82,    22,    23,    27,   -82,   -82,   -82,
      22,   -82,   -82,    22,    22,    22,   -82,    83,   -82,    22,
     -82,   -82,   -82,    22,    22,   207,   279,   279,   112,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,    84,    22,   279,   227,   131,   -82,   -82,   280,     0,
     -82,   279,    22,    84,    32,   -82,   -82,    51,   247,   -82,
     -82,    29,    55,   -82,    22,    22,    30,    84,   150,   169,
      22,   -82,    84,    84,   188,   -82,   -82,    84,   -82
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,    60,     0,    58,    57,
       6,     3,     4,     5,     0,    59,    61,    62,    63,     0,
       0,     0,     0,    66,    64,    68,     0,     0,    67,     0,
       0,    33,    35,     0,     0,     0,    31,     0,    53,    51,
      52,    50,     0,    49,     0,     0,     0,    56,    55,    54,
       0,    65,    48,     0,     0,     0,    16,     0,     7,     0,
      12,    13,    11,     0,     0,     0,    17,    18,     0,    19,
      20,    21,    22,    25,    27,    28,    29,    30,    26,    23,
      24,     0,     0,     8,     0,     0,    32,    10,     0,    42,
      46,     9,     0,     0,     0,    40,    39,    45,     0,    36,
      47,     0,    43,    37,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,     0,    34,    41,     0,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -82,   -82,    68,   -48,   -82,   -82,   -82,   -82,   -82,   -29,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -81,   -11,   -28,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    21,    57,    58,    59,    60,    61,    82,    62,
      38,    39,    45,    40,    46,    41,    97,   101,   103,   107,
      89,    42,    90,     3,     7,     8,    15,    16,    20,    17,
      22,    23
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      37,    43,    65,    95,    96,    66,    67,    68,    26,     1,
      27,    83,    99,    37,    52,    84,    85,    30,     4,    31,
      32,     5,     6,    18,     9,    19,   111,    33,    34,    35,
      24,   115,   116,    36,    91,    30,   118,    31,    32,    25,
      29,    36,    44,    47,    98,    33,    34,    35,    53,    54,
      48,    36,    37,    49,    50,   102,   108,   109,   106,    37,
      43,    10,   114,    51,    37,    37,    52,    55,    63,    56,
      11,    12,    64,    13,   105,   110,    14,    94,    37,     0,
      28,   100,     0,    37,    37,     0,     0,    30,    37,    31,
      32,     0,     0,     0,     0,     0,     0,    33,    34,    35,
       0,     0,     0,    36,    69,    70,    71,    72,    73,     0,
       0,    74,    75,    76,    77,    78,     0,    79,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,    88,    69,    70,    71,    72,    73,     0,     0,
      74,    75,    76,    77,    78,     0,    79,    80,     0,     0,
       0,     0,    69,    70,    71,    72,    73,     0,    87,    74,
      75,    76,    77,    78,     0,    79,    80,     0,     0,     0,
       0,    69,    70,    71,    72,    73,     0,    93,    74,    75,
      76,    77,    78,     0,    79,    80,     0,     0,     0,     0,
      69,    70,    71,    72,    73,     0,   112,    74,    75,    76,
      77,    78,     0,    79,    80,     0,     0,     0,     0,    69,
      70,    71,    72,    73,     0,   113,    74,    75,    76,    77,
      78,     0,    79,    80,     0,     0,     0,     0,    69,    70,
      71,    72,    73,     0,   117,    74,    75,    76,    77,    78,
       0,    79,    80,     0,     0,     0,     0,    86,    69,    70,
      71,    72,    73,     0,     0,    74,    75,    76,    77,    78,
       0,    79,    80,     0,     0,     0,     0,    92,    69,    70,
      71,    72,    73,     0,     0,    74,    75,    76,    77,    78,
       0,    79,    80,    30,     0,    31,    32,   104,     0,     0,
       0,     0,     0,    33,    34,    35,     0,     0,     0,    36,
      69,    70,    71,    72,    73,     0,     0,    74,    75,    76,
      77,    78,     0,    79,    80
};

static const yytype_int8 yycheck[] =
{
      29,    29,    50,     3,     4,    53,    54,    55,    41,    16,
      43,    59,    93,    42,    42,    63,    64,     3,    19,     5,
       6,     0,    37,    19,    38,    42,   107,    13,    14,    15,
      40,   112,   113,    19,    82,     3,   117,     5,     6,    19,
      48,    19,    45,    40,    92,    13,    14,    15,    26,    27,
      40,    19,    81,    40,    36,     4,   104,   105,     3,    88,
      88,     8,   110,    49,    93,    94,    94,    45,    45,    47,
      17,    18,    45,    20,    45,    45,     8,    88,   107,    -1,
      26,    49,    -1,   112,   113,    -1,    -1,     3,   117,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    21,    22,    23,    24,    25,    -1,
      -1,    28,    29,    30,    31,    32,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    48,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    -1,    34,    35,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    -1,    46,    28,
      29,    30,    31,    32,    -1,    34,    35,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    46,    28,    29,
      30,    31,    32,    -1,    34,    35,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    -1,    46,    28,    29,    30,
      31,    32,    -1,    34,    35,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    46,    28,    29,    30,    31,
      32,    -1,    34,    35,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    -1,    46,    28,    29,    30,    31,    32,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    21,    22,
      23,    24,    25,    -1,    -1,    28,    29,    30,    31,    32,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    21,    22,
      23,    24,    25,    -1,    -1,    28,    29,    30,    31,    32,
      -1,    34,    35,     3,    -1,     5,     6,    40,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      21,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    16,    51,    73,    19,     0,    37,    74,    75,    38,
       8,    17,    18,    20,    52,    76,    77,    79,    19,    42,
      78,    52,    80,    81,    40,    19,    41,    43,    81,    48,
       3,     5,     6,    13,    14,    15,    19,    59,    60,    61,
      63,    65,    71,    72,    45,    62,    64,    40,    40,    40,
      36,    49,    72,    26,    27,    45,    47,    53,    54,    55,
      56,    57,    59,    45,    45,    53,    53,    53,    53,    21,
      22,    23,    24,    25,    28,    29,    30,    31,    32,    34,
      35,    46,    58,    53,    53,    53,    40,    46,    48,    70,
      72,    53,    40,    46,    71,     3,     4,    66,    53,    70,
      49,    67,     4,    68,    40,    45,     3,    69,    53,    53,
      45,    70,    46,    46,    53,    70,    70,    46,    70
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    52,    52,    53,    53,    53,
      53,    53,    54,    54,    55,    55,    55,    56,    57,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    60,    62,    61,    64,    63,    65,    66,    66,
      67,    66,    66,    69,    68,    68,    70,    70,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    73,    74,    75,
      75,    76,    76,    78,    77,    79,    80,    80,    81
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     0,    10,     0,     6,     7,     7,     1,
       0,     6,     0,     0,     3,     0,     1,     3,     2,     1,
       1,     1,     1,     1,     2,     2,     2,     5,     1,     2,
       0,     1,     1,     0,     4,     8,     1,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* type: TOKEN_INTEGER  */
#line 119 "syntactic.y"
{
    insert_type();
}
#line 1452 "y.tab.c"
    break;

  case 4: /* type: TOKEN_CHAR  */
#line 121 "syntactic.y"
              {
    insert_type();
}
#line 1460 "y.tab.c"
    break;

  case 5: /* type: TOKEN_DOUBLE  */
#line 123 "syntactic.y"
                 {
    insert_type();
}
#line 1468 "y.tab.c"
    break;

  case 6: /* type: TOKEN_VOID  */
#line 125 "syntactic.y"
               {
    insert_type();
}
#line 1476 "y.tab.c"
    break;

  case 31: /* variable: TOKEN_IDENTIFICADOR  */
#line 168 "syntactic.y"
                              {
    add('V'); 
}
#line 1484 "y.tab.c"
    break;

  case 33: /* $@2: %empty  */
#line 174 "syntactic.y"
                    {add('K');}
#line 1490 "y.tab.c"
    break;

  case 35: /* $@3: %empty  */
#line 176 "syntactic.y"
                        {add('K');}
#line 1496 "y.tab.c"
    break;

  case 39: /* else_if_part: TOKEN_ELSE  */
#line 182 "syntactic.y"
              {add('K');}
#line 1502 "y.tab.c"
    break;

  case 40: /* $@4: %empty  */
#line 182 "syntactic.y"
                                     {add('K');}
#line 1508 "y.tab.c"
    break;

  case 43: /* $@5: %empty  */
#line 186 "syntactic.y"
                      {add('K');}
#line 1514 "y.tab.c"
    break;

  case 63: /* $@6: %empty  */
#line 208 "syntactic.y"
                                                {add("V");}
#line 1520 "y.tab.c"
    break;


#line 1524 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 219 "syntactic.y"


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
