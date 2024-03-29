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


#line 114 "syntactic.tab.c"

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

#include "syntactic.tab.h"
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
  YYSYMBOL_TOKEN_SCAN = 44,                /* TOKEN_SCAN  */
  YYSYMBOL_TOKEN_STRING = 45,              /* TOKEN_STRING  */
  YYSYMBOL_TOKEN_TRUE = 46,                /* TOKEN_TRUE  */
  YYSYMBOL_TOKEN_FALSE = 47,               /* TOKEN_FALSE  */
  YYSYMBOL_UMINUS = 48,                    /* UMINUS  */
  YYSYMBOL_49_ = 49,                       /* '('  */
  YYSYMBOL_50_ = 50,                       /* ')'  */
  YYSYMBOL_51_ = 51,                       /* '!'  */
  YYSYMBOL_52_ = 52,                       /* '{'  */
  YYSYMBOL_53_ = 53,                       /* '}'  */
  YYSYMBOL_54_ = 54,                       /* '['  */
  YYSYMBOL_55_ = 55,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_program = 57,                   /* program  */
  YYSYMBOL_type = 58,                      /* type  */
  YYSYMBOL_exp = 59,                       /* exp  */
  YYSYMBOL_term = 60,                      /* term  */
  YYSYMBOL_unary_operator = 61,            /* unary_operator  */
  YYSYMBOL_expression_increment = 62,      /* expression_increment  */
  YYSYMBOL_expression_decrement = 63,      /* expression_decrement  */
  YYSYMBOL_binary_operator = 64,           /* binary_operator  */
  YYSYMBOL_variable = 65,                  /* variable  */
  YYSYMBOL_assignment = 66,                /* assignment  */
  YYSYMBOL_for_stat = 67,                  /* for_stat  */
  YYSYMBOL_68_2 = 68,                      /* $@2  */
  YYSYMBOL_while_stat = 69,                /* while_stat  */
  YYSYMBOL_70_3 = 70,                      /* $@3  */
  YYSYMBOL_if_stat = 71,                   /* if_stat  */
  YYSYMBOL_else_if_part = 72,              /* else_if_part  */
  YYSYMBOL_73_4 = 73,                      /* $@4  */
  YYSYMBOL_else_part = 74,                 /* else_part  */
  YYSYMBOL_75_5 = 75,                      /* $@5  */
  YYSYMBOL_tail = 76,                      /* tail  */
  YYSYMBOL_statements = 77,                /* statements  */
  YYSYMBOL_statement = 78,                 /* statement  */
  YYSYMBOL_exp_list = 79,                  /* exp_list  */
  YYSYMBOL_printf_statement = 80,          /* printf_statement  */
  YYSYMBOL_scanf_statement = 81,           /* scanf_statement  */
  YYSYMBOL_class_declaration = 82,         /* class_declaration  */
  YYSYMBOL_class_body = 83,                /* class_body  */
  YYSYMBOL_class_members = 84,             /* class_members  */
  YYSYMBOL_class_member = 85,              /* class_member  */
  YYSYMBOL_attribute_declaration = 86,     /* attribute_declaration  */
  YYSYMBOL_87_6 = 87,                      /* $@6  */
  YYSYMBOL_method_declaration = 88,        /* method_declaration  */
  YYSYMBOL_parameters_list = 89,           /* parameters_list  */
  YYSYMBOL_parameter_declaration = 90      /* parameter_declaration  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   338

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  136

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
       2,     2,     2,    51,     2,     2,     2,     2,     2,     2,
      49,    50,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   114,   114,   122,   125,   127,   129,   133,   134,   135,
     136,   137,   140,   141,   144,   145,   146,   149,   152,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   172,   176,   178,   178,   180,   180,   182,   185,   186,
     186,   186,   186,   190,   190,   190,   192,   192,   194,   194,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   214,
     215,   216,   218,   220,   223,   225,   227,   227,   229,   229,
     231,   231,   233,   235,   235,   237
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
  "TOKEN_SCAN", "TOKEN_STRING", "TOKEN_TRUE", "TOKEN_FALSE", "UMINUS",
  "'('", "')'", "'!'", "'{'", "'}'", "'['", "']'", "$accept", "program",
  "type", "exp", "term", "unary_operator", "expression_increment",
  "expression_decrement", "binary_operator", "variable", "assignment",
  "for_stat", "$@2", "while_stat", "$@3", "if_stat", "else_if_part", "$@4",
  "else_part", "$@5", "tail", "statements", "statement", "exp_list",
  "printf_statement", "scanf_statement", "class_declaration", "class_body",
  "class_members", "class_member", "attribute_declaration", "$@6",
  "method_declaration", "parameters_list", "parameter_declaration", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-66)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,    -9,    17,   -66,   -18,   -66,   -66,   -14,    -6,   -66,
     -66,   -66,   -66,   -66,     1,   -66,   -66,   -66,   -17,    -6,
     -12,     7,   -37,   -66,   -66,   -66,    -6,   -23,   -66,   134,
     -15,   -66,   -66,    -3,     6,     8,    10,   -66,    -1,    15,
     -66,   -66,   -66,   -66,    30,   -66,   -66,   -66,    11,    -2,
       3,    11,   -66,   -66,   -66,     9,    11,   -66,   -66,    11,
      11,    11,   -66,   141,   -66,    11,   -66,   -66,   -66,    11,
      11,   303,   -36,    14,   243,   303,   303,   158,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     116,    11,   303,   263,   175,    11,    16,    39,   -66,   -66,
     134,     5,   -66,   303,    11,   116,   303,   -66,    20,   101,
     -66,   -66,    63,   283,   -66,    33,   -66,    21,    72,   -66,
      11,   -66,    11,    28,   116,   192,   209,    11,   -66,   116,
     116,   226,   -66,   -66,   116,   -66
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,    67,     0,    65,    64,
       6,     3,     4,     5,     0,    66,    68,    69,    70,     0,
       0,     0,     0,    73,    71,    75,     0,     0,    74,     0,
       0,    33,    35,     0,     0,     0,     0,    31,     0,     0,
      53,    51,    52,    50,     0,    49,    57,    58,     0,     0,
       0,    59,    56,    55,    54,     0,     0,    72,    48,     0,
       0,     0,    16,     0,     7,     0,    12,    13,    11,     0,
       0,    60,     0,     0,     0,    17,    18,     0,    19,    20,
      21,    22,    25,    27,    28,    29,    30,    26,    23,    24,
       0,     0,     8,     0,     0,     0,     0,     0,    32,    10,
       0,    42,    46,     9,     0,     0,    61,    62,     0,     0,
      40,    39,    45,     0,    36,     0,    47,     0,    43,    37,
       0,    63,     0,     0,     0,     0,     0,     0,    44,     0,
       0,     0,    34,    41,     0,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -66,   -66,    70,   -38,   -66,   -66,   -66,   -66,   -66,   -29,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -65,   -21,   -28,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    21,    63,    64,    65,    66,    67,    91,    68,
      40,    41,    49,    42,    50,    43,   112,   117,   119,   124,
     101,    44,   102,    72,    46,    47,     3,     7,     8,    15,
      16,    20,    17,    22,    23
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      39,    45,    10,     1,    26,    95,    27,    96,   110,   111,
       4,    11,    12,    71,    13,    39,    58,     5,    74,     6,
      18,    75,    76,    77,     9,    19,    25,    92,    24,    29,
      37,    93,    94,    30,    48,    31,    32,    59,    60,    51,
     114,    55,    33,    34,    35,    36,    52,    69,    53,    37,
      54,    56,    70,   103,    73,    97,   107,   106,    37,   128,
      61,    39,    62,   115,   132,   133,   113,   118,   108,   135,
     122,    39,    45,   121,    38,   123,    39,   127,    14,   109,
      39,    58,   125,    57,   126,    28,     0,     0,     0,   131,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
      39,    39,     0,     0,    30,    39,    31,    32,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,    30,
      37,    31,    32,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,    37,     0,    30,     0,    31,
      32,     0,     0,     0,     0,    38,    33,    34,    35,    36,
       0,     0,     0,    37,   116,     0,     0,     0,     0,     0,
      38,     0,    78,    79,    80,    81,    82,     0,   100,    83,
      84,    85,    86,    87,     0,    88,    89,     0,    38,    78,
      79,    80,    81,    82,     0,     0,    83,    84,    85,    86,
      87,    90,    88,    89,     0,     0,    78,    79,    80,    81,
      82,     0,     0,    83,    84,    85,    86,    87,    99,    88,
      89,     0,     0,    78,    79,    80,    81,    82,     0,     0,
      83,    84,    85,    86,    87,   105,    88,    89,     0,     0,
      78,    79,    80,    81,    82,     0,     0,    83,    84,    85,
      86,    87,   129,    88,    89,     0,     0,    78,    79,    80,
      81,    82,     0,     0,    83,    84,    85,    86,    87,   130,
      88,    89,     0,     0,    78,    79,    80,    81,    82,     0,
       0,    83,    84,    85,    86,    87,   134,    88,    89,     0,
       0,     0,     0,    98,    78,    79,    80,    81,    82,     0,
       0,    83,    84,    85,    86,    87,     0,    88,    89,     0,
       0,     0,     0,   104,    78,    79,    80,    81,    82,     0,
       0,    83,    84,    85,    86,    87,     0,    88,    89,     0,
       0,     0,     0,   120,    78,    79,    80,    81,    82,     0,
       0,    83,    84,    85,    86,    87,     0,    88,    89
};

static const yytype_int16 yycheck[] =
{
      29,    29,     8,    16,    41,    41,    43,    43,     3,     4,
      19,    17,    18,    51,    20,    44,    44,     0,    56,    37,
      19,    59,    60,    61,    38,    42,    19,    65,    40,    52,
      19,    69,    70,     3,    49,     5,     6,    26,    27,    42,
     105,    42,    12,    13,    14,    15,    40,    49,    40,    19,
      40,    36,    49,    91,    45,    41,    40,    95,    19,   124,
      49,    90,    51,    43,   129,   130,   104,     4,    97,   134,
      49,   100,   100,    40,    44,     3,   105,    49,     8,   100,
     109,   109,   120,    53,   122,    26,    -1,    -1,    -1,   127,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
     129,   130,    -1,    -1,     3,   134,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    -1,     3,
      19,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    -1,     3,    -1,     5,
       6,    -1,    -1,    -1,    -1,    44,    12,    13,    14,    15,
      -1,    -1,    -1,    19,    53,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    21,    22,    23,    24,    25,    -1,    52,    28,
      29,    30,    31,    32,    -1,    34,    35,    -1,    44,    21,
      22,    23,    24,    25,    -1,    -1,    28,    29,    30,    31,
      32,    50,    34,    35,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    29,    30,    31,    32,    50,    34,
      35,    -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    50,    34,    35,    -1,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      31,    32,    50,    34,    35,    -1,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    29,    30,    31,    32,    50,
      34,    35,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    28,    29,    30,    31,    32,    50,    34,    35,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    -1,
      -1,    28,    29,    30,    31,    32,    -1,    34,    35,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    -1,
      -1,    28,    29,    30,    31,    32,    -1,    34,    35,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    -1,
      -1,    28,    29,    30,    31,    32,    -1,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    16,    57,    82,    19,     0,    37,    83,    84,    38,
       8,    17,    18,    20,    58,    85,    86,    88,    19,    42,
      87,    58,    89,    90,    40,    19,    41,    43,    90,    52,
       3,     5,     6,    12,    13,    14,    15,    19,    44,    65,
      66,    67,    69,    71,    77,    78,    80,    81,    49,    68,
      70,    42,    40,    40,    40,    42,    36,    53,    78,    26,
      27,    49,    51,    59,    60,    61,    62,    63,    65,    49,
      49,    59,    79,    45,    59,    59,    59,    59,    21,    22,
      23,    24,    25,    28,    29,    30,    31,    32,    34,    35,
      50,    64,    59,    59,    59,    41,    43,    41,    40,    50,
      52,    76,    78,    59,    40,    50,    59,    40,    65,    77,
       3,     4,    72,    59,    76,    43,    53,    73,     4,    74,
      40,    40,    49,     3,    75,    59,    59,    49,    76,    50,
      50,    59,    76,    76,    50,    76
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    58,    58,    58,    59,    59,    59,
      59,    59,    60,    60,    61,    61,    61,    62,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    66,    68,    67,    70,    69,    71,    72,    72,
      73,    72,    72,    75,    74,    74,    76,    76,    77,    77,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    79,
      79,    79,    80,    81,    82,    83,    84,    84,    85,    85,
      87,    86,    88,    89,    89,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     0,    10,     0,     6,     7,     7,     1,
       0,     6,     0,     0,     3,     0,     1,     3,     2,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     0,
       1,     3,     5,     7,     5,     1,     2,     0,     1,     1,
       0,     4,     8,     1,     3,     2
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
#line 123 "syntactic.y"
{
    insert_type();
}
#line 1333 "syntactic.tab.c"
    break;

  case 4: /* type: TOKEN_CHAR  */
#line 125 "syntactic.y"
              {
    insert_type();
}
#line 1341 "syntactic.tab.c"
    break;

  case 5: /* type: TOKEN_DOUBLE  */
#line 127 "syntactic.y"
                 {
    insert_type();
}
#line 1349 "syntactic.tab.c"
    break;

  case 6: /* type: TOKEN_VOID  */
#line 129 "syntactic.y"
               {
    insert_type();
}
#line 1357 "syntactic.tab.c"
    break;

  case 31: /* variable: TOKEN_IDENTIFICADOR  */
#line 172 "syntactic.y"
                              {
    add('V'); 
}
#line 1365 "syntactic.tab.c"
    break;

  case 33: /* $@2: %empty  */
#line 178 "syntactic.y"
                    {add('K');}
#line 1371 "syntactic.tab.c"
    break;

  case 35: /* $@3: %empty  */
#line 180 "syntactic.y"
                        {add('K');}
#line 1377 "syntactic.tab.c"
    break;

  case 39: /* else_if_part: TOKEN_ELSE  */
#line 186 "syntactic.y"
              {add('K');}
#line 1383 "syntactic.tab.c"
    break;

  case 40: /* $@4: %empty  */
#line 186 "syntactic.y"
                                     {add('K');}
#line 1389 "syntactic.tab.c"
    break;

  case 43: /* $@5: %empty  */
#line 190 "syntactic.y"
                      {add('K');}
#line 1395 "syntactic.tab.c"
    break;

  case 70: /* $@6: %empty  */
#line 231 "syntactic.y"
                                                {add('V');}
#line 1401 "syntactic.tab.c"
    break;


#line 1405 "syntactic.tab.c"

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

#line 242 "syntactic.y"


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
