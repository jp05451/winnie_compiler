/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "hw3.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Trace(t) printf(t"\n")

int yyerror(char *msg);
int yylex();

#define MAX_LINE_LENG 256
#define symboltablelen  1000
#define symboltablestackmax 1000

typedef enum {
    INT_TYPE,
    BOOL_TYPE,
    STRING_TYPE,
    FUNCTION_TYPE,
    NULLTYPE,
} Datatype;


struct symbol {
    char name[MAX_LINE_LENG];
    int is_const;
    int is_global;
    int varn;
    char constVal[MAX_LINE_LENG];
    Datatype paramstype[100];
    int constnumVal;
    Datatype type;
    Datatype returnType;
};
struct symbol symboltable[symboltablestackmax][symboltablelen];
int symboltablestackid = -1;
int lcount=0;
int loopc=0;
int varcount=0;

FILE* out;
char classname[MAX_LINE_LENG];

int create();
struct symbol* lookup(char*,int);
int insert(struct symbol);
int dump();
int drop();

#line 115 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DOT = 258,
    COMMA = 259,
    COLON = 260,
    SEMICOLON = 261,
    LPARENTHESES = 262,
    RPARENTHESES = 263,
    LSQUAREBRACKETS = 264,
    RSQUAREBRACKETS = 265,
    LBRACKETS = 266,
    RBRACKETS = 267,
    ADDITION = 268,
    SUBTRACTION = 269,
    MULTIPLICATION = 270,
    DIVISION = 271,
    REMAINDER = 272,
    ASSIGNMENT = 273,
    RELATIONALL = 274,
    RELATIONALLE = 275,
    RELATIONALGE = 276,
    RELATIONALG = 277,
    RELATIONALE = 278,
    RELATIONALNOTE = 279,
    AND = 280,
    OR = 281,
    NOT = 282,
    ARRAY = 283,
    BEGIN_ = 284,
    BOOL = 285,
    CHAR = 286,
    CONST = 287,
    DECREASING = 288,
    DEFAULT = 289,
    DO = 290,
    ELSE = 291,
    END = 292,
    EXIT = 293,
    FALSE = 294,
    FOR = 295,
    FUNCTION = 296,
    GET = 297,
    IF = 298,
    INT = 299,
    OF = 300,
    PUT = 301,
    PROCEDURE = 302,
    REAL = 303,
    RESULT = 304,
    RETURN = 305,
    SKIP = 306,
    STRING = 307,
    TRUE = 308,
    THEN = 309,
    VAR = 310,
    WHEN = 311,
    NUMERICAL_CONSTANT = 312,
    IDENTIFIER = 313,
    STRING_CONSTANT = 314,
    LOOP = 315,
    UMINUS = 316
  };
#endif
/* Tokens.  */
#define DOT 258
#define COMMA 259
#define COLON 260
#define SEMICOLON 261
#define LPARENTHESES 262
#define RPARENTHESES 263
#define LSQUAREBRACKETS 264
#define RSQUAREBRACKETS 265
#define LBRACKETS 266
#define RBRACKETS 267
#define ADDITION 268
#define SUBTRACTION 269
#define MULTIPLICATION 270
#define DIVISION 271
#define REMAINDER 272
#define ASSIGNMENT 273
#define RELATIONALL 274
#define RELATIONALLE 275
#define RELATIONALGE 276
#define RELATIONALG 277
#define RELATIONALE 278
#define RELATIONALNOTE 279
#define AND 280
#define OR 281
#define NOT 282
#define ARRAY 283
#define BEGIN_ 284
#define BOOL 285
#define CHAR 286
#define CONST 287
#define DECREASING 288
#define DEFAULT 289
#define DO 290
#define ELSE 291
#define END 292
#define EXIT 293
#define FALSE 294
#define FOR 295
#define FUNCTION 296
#define GET 297
#define IF 298
#define INT 299
#define OF 300
#define PUT 301
#define PROCEDURE 302
#define REAL 303
#define RESULT 304
#define RETURN 305
#define SKIP 306
#define STRING 307
#define TRUE 308
#define THEN 309
#define VAR 310
#define WHEN 311
#define NUMERICAL_CONSTANT 312
#define IDENTIFIER 313
#define STRING_CONSTANT 314
#define LOOP 315
#define UMINUS 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 56 "hw3.y" /* yacc.c:355  */

    char strval[MAX_LINE_LENG];
    struct symbol info;

#line 282 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 299 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   253

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    85,   102,   118,   134,   150,   166,   182,
     214,   246,   278,   310,   342,   374,   392,   410,   421,   431,
     440,   454,   476,   481,   486,   491,   496,   503,   504,   505,
     510,   542,   565,   601,   601,   605,   614,   615,   623,   627,
     628,   632,   633,   634,   635,   639,   648,   639,   703,   704,
     708,   709,   710,   713,   714,   715,   719,   732,   743,   732,
     786,   786,   799,   800,   804,   805,   806,   807,   808,   812,
     812,   816,   816,   853,   857,   881,   887,   890,   902,   908,
     916,   908,   928,   929,   929,   933,   933,   947,   951,   971,
     951,  1001,  1021,  1001,  1056,  1091,  1092,  1096,  1096,  1107
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOT", "COMMA", "COLON", "SEMICOLON",
  "LPARENTHESES", "RPARENTHESES", "LSQUAREBRACKETS", "RSQUAREBRACKETS",
  "LBRACKETS", "RBRACKETS", "ADDITION", "SUBTRACTION", "MULTIPLICATION",
  "DIVISION", "REMAINDER", "ASSIGNMENT", "RELATIONALL", "RELATIONALLE",
  "RELATIONALGE", "RELATIONALG", "RELATIONALE", "RELATIONALNOTE", "AND",
  "OR", "NOT", "ARRAY", "BEGIN_", "BOOL", "CHAR", "CONST", "DECREASING",
  "DEFAULT", "DO", "ELSE", "END", "EXIT", "FALSE", "FOR", "FUNCTION",
  "GET", "IF", "INT", "OF", "PUT", "PROCEDURE", "REAL", "RESULT", "RETURN",
  "SKIP", "STRING", "TRUE", "THEN", "VAR", "WHEN", "NUMERICAL_CONSTANT",
  "IDENTIFIER", "STRING_CONSTANT", "LOOP", "UMINUS", "$accept", "constant",
  "expression", "expression_", "type", "variable", "start", "$@1",
  "_start", "program_a", "program_a_", "function", "$@2", "$@3",
  "function_body", "function_body_", "params", "param", "procedure", "$@4",
  "$@5", "program_b", "$@6", "program_b_", "statement", "block", "$@7",
  "simple", "$@8", "conditional", "$@9", "$@10", "opt_else", "$@11",
  "loop", "$@12", "forloop", "$@13", "$@14", "$@15", "$@16", "invocations",
  "args", "args_", "$@17", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

#define YYPACT_NINF -60

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-60)))

#define YYTABLE_NINF -100

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -60,     9,     4,   -60,   -47,   -44,   -24,   -17,   -60,   -60,
     -60,    49,   -31,   -60,   -60,   -60,    -3,     3,   -60,   -60,
      15,   -60,   -60,   -60,    -2,   -26,    74,   -60,    74,   -60,
     -60,    -1,   -60,   -60,    -3,   -60,   -60,   -60,   -60,   -60,
     -60,     8,    74,    71,    79,     8,    74,    60,    74,     0,
      82,    74,    74,    74,   -60,   -60,   -60,    84,   -60,   146,
     -60,   -60,    74,   202,    74,    74,    60,   -60,   -60,   -60,
     -60,    38,   202,    37,    37,    78,   202,   -60,   -60,    62,
      60,   -60,   202,    97,    74,   165,   -60,   229,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,   -60,   202,   188,    96,   -60,   202,    70,    74,   114,
     106,   124,   121,    74,   -60,   -60,    74,   202,   -60,    67,
      67,   -60,   -60,   -60,   109,   109,   109,   109,   109,   109,
     229,   216,    60,   126,   -60,    76,   202,     8,   132,    37,
     -60,   202,   202,   135,   -60,    74,   -60,   -60,     8,   -60,
      60,   136,   138,   107,   -60,   -60,   105,   141,    74,   -60,
     110,    60,    88,    74,   202,    60,   108,   111,   -60,   202,
      60,   -60,   -60,    92,    60,   115,   -60,   116,   117,   134,
     -60,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      33,     0,    60,     1,     0,     0,     0,     0,    41,    42,
      34,    60,    40,    43,    44,    38,     0,     0,    45,    57,
       0,    36,    39,    69,    76,     0,     0,    71,     0,    78,
      73,     0,    85,    61,    63,    64,    65,    66,    67,    87,
      68,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,    25,    24,    23,    21,    22,     0,
      20,    26,     0,    77,    95,     0,    48,    62,    28,    27,
      29,     0,     3,    53,    53,    31,    30,    51,    50,     0,
      48,    52,    75,     0,     0,     0,    18,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    72,    97,     0,    96,    74,     0,     0,     0,
       0,    55,     0,     0,    70,    49,     0,    91,    19,     4,
       5,     6,     7,     8,    12,    13,    11,    10,     9,    14,
      15,    16,    48,     0,    94,     0,     2,     0,     0,    53,
      58,    32,    88,     0,    80,     0,    86,    56,     0,    54,
      48,     0,     0,    82,    98,    46,     0,     0,     0,    83,
       0,    48,     0,     0,    92,    48,     0,     0,    59,    89,
      48,    84,    81,     0,    48,     0,    47,     0,     0,     0,
      93,    90
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,    10,   -23,   -60,   -43,    51,   -60,   -60,   -60,   143,
     -60,   -60,   -60,   -60,   -53,   -60,   -59,   -60,   -60,   -60,
     -60,   145,   -60,   130,    28,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -16,   -60,    30,   -60
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    77,   103,    60,    71,    78,     1,     2,    10,    11,
      12,    13,    43,   161,    79,    80,   110,   111,    14,    44,
     150,    15,    16,    33,    81,    35,    47,    36,    62,    37,
     132,   153,   160,   165,    38,    66,    39,   151,   174,   143,
     170,    61,   104,   105,   133
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,     4,    75,    59,   -35,    63,    64,    49,    41,     3,
       5,    17,     8,   107,    18,   112,     6,    65,    40,    72,
      45,    42,     8,    76,     7,    82,    23,   115,    85,    86,
      87,    40,    50,    46,    19,    24,     4,    25,    68,   102,
      26,    20,   106,    27,    34,     5,    28,    29,    30,   -37,
      40,     6,    69,     9,    48,    31,   108,    32,    83,     7,
      70,   117,    34,     9,    40,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    73,   144,
     149,    51,    90,    91,    92,   136,    74,    84,    52,    23,
     141,    64,     4,   142,   147,   109,   113,   156,    24,   114,
      25,    53,   116,    26,   134,   155,    27,   135,   167,    28,
      29,    30,   171,    54,   138,     7,    40,   175,    31,   137,
      32,   177,    88,    89,    90,    91,    92,    55,   139,   140,
     145,    56,    57,    58,    40,   164,   146,   148,   152,   157,
     169,   158,   162,   159,   163,    40,   168,   166,   173,    40,
     176,   172,   178,   179,    40,    22,    21,   180,    40,    88,
      89,    90,    91,    92,    67,    93,    94,    95,    96,    97,
      98,    99,   100,   118,   181,   154,     0,     0,    88,    89,
      90,    91,    92,     0,    93,    94,    95,    96,    97,    98,
      99,   100,     0,     0,     0,     0,   -99,     0,     0,     0,
     101,    88,    89,    90,    91,    92,     0,    93,    94,    95,
      96,    97,    98,    99,   100,    88,    89,    90,    91,    92,
       0,    93,    94,    95,    96,    97,    98,    99,   100,    88,
      89,    90,    91,    92,     0,    93,    94,    95,    96,    97,
      98,    99,    88,    89,    90,    91,    92,     0,    93,    94,
      95,    96,    97,    98
};

static const yytype_int16 yycheck[] =
{
      16,    32,    45,    26,     0,    28,     7,    33,     5,     0,
      41,    58,     2,    66,    58,    74,    47,    18,    34,    42,
       5,    18,    12,    46,    55,    48,    29,    80,    51,    52,
      53,    47,    58,    18,    58,    38,    32,    40,    30,    62,
      43,    58,    65,    46,    16,    41,    49,    50,    51,     0,
      66,    47,    44,     2,    56,    58,    18,    60,    58,    55,
      52,    84,    34,    12,    80,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,     7,   132,
     139,     7,    15,    16,    17,   108,     7,     5,    14,    29,
     113,     7,    32,   116,   137,    58,    18,   150,    38,    37,
      40,    27,     5,    43,     8,   148,    46,    37,   161,    49,
      50,    51,   165,    39,     8,    55,   132,   170,    58,     5,
      60,   174,    13,    14,    15,    16,    17,    53,     4,     8,
       4,    57,    58,    59,   150,   158,    60,     5,     3,     3,
     163,     3,    37,    36,     3,   161,    58,    37,    37,   165,
      58,    43,    37,    37,   170,    12,    11,    40,   174,    13,
      14,    15,    16,    17,    34,    19,    20,    21,    22,    23,
      24,    25,    26,     8,    40,   145,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      54,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    68,    69,     0,    32,    41,    47,    55,    63,    67,
      70,    71,    72,    73,    80,    83,    84,    58,    58,    58,
      58,    83,    71,    29,    38,    40,    43,    46,    49,    50,
      51,    58,    60,    85,    86,    87,    89,    91,    96,    98,
     103,     5,    18,    74,    81,     5,    18,    88,    56,    33,
      58,     7,    14,    27,    39,    53,    57,    58,    59,    64,
      65,   103,    90,    64,     7,    18,    97,    85,    30,    44,
      52,    66,    64,     7,     7,    66,    64,    63,    67,    76,
      77,    86,    64,    58,     5,    64,    64,    64,    13,    14,
      15,    16,    17,    19,    20,    21,    22,    23,    24,    25,
      26,    54,    64,    64,   104,   105,    64,    76,    18,    58,
      78,    79,    78,    18,    37,    76,     5,    64,     8,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    92,   106,     8,    37,    64,     5,     8,     4,
       8,    64,    64,   101,    76,     4,    60,    66,     5,    78,
      82,    99,     3,    93,   105,    66,    76,     3,     3,    36,
      94,    75,    37,     3,    64,    95,    37,    76,    58,    64,
     102,    76,    43,    37,   100,    76,    58,    76,    37,    37,
      40,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    66,    66,    66,
      67,    67,    67,    69,    68,    70,    70,    70,    70,    71,
      71,    72,    72,    72,    72,    74,    75,    73,    76,    76,
      77,    77,    77,    78,    78,    78,    79,    81,    82,    80,
      84,    83,    85,    85,    86,    86,    86,    86,    86,    88,
      87,    90,    89,    89,    89,    89,    89,    89,    89,    92,
      93,    91,    94,    95,    94,    97,    96,    96,    99,   100,
      98,   101,   102,    98,   103,   104,   104,   106,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     6,     0,     2,     0,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     0,     0,    12,     0,     2,
       1,     1,     1,     0,     3,     1,     3,     0,     0,    10,
       0,     2,     2,     1,     1,     1,     1,     1,     1,     0,
       4,     0,     3,     1,     3,     3,     1,     2,     1,     0,
       0,     9,     0,     0,     3,     0,     5,     1,     0,     0,
      13,     0,     0,    12,     4,     0,     1,     0,     4,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 72 "hw3.y" /* yacc.c:1646  */
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[-4].strval));
    s.is_const=1;
    s.type = (yyvsp[0].info).type;
    s.constVal[0] = 0;
    if(s.type == STRING_TYPE){
        strcpy(s.constVal,(yyvsp[0].info).constVal);
    }else{
        s.constnumVal=(yyvsp[0].info).constnumVal;
    }
    insert(s);
}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 85 "hw3.y" /* yacc.c:1646  */
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[-2].strval));
    s.is_const=1;
    s.type = (yyvsp[0].info).type;
    s.constVal[0] = 0;
    if(s.type == STRING_TYPE){
        strcpy(s.constVal,(yyvsp[0].info).constVal);
    }else{
        s.constnumVal=(yyvsp[0].info).constnumVal;
    }
    insert(s);
}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 102 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[-2].info).is_const && (yyvsp[0].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[-2].info).constnumVal + (yyvsp[0].info).constnumVal;
    }else{
        if((yyvsp[-2].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[-2].info).constnumVal);
        }
        if((yyvsp[0].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
        }
        fprintf(out,"iadd\n");
    }
    }
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 118 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[-2].info).is_const && (yyvsp[0].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[-2].info).constnumVal - (yyvsp[0].info).constnumVal;
    }else{
        if((yyvsp[-2].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[-2].info).constnumVal);
        }
        if((yyvsp[0].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
        }
        fprintf(out,"isub\n");
    }
    }
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 134 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[-2].info).is_const && (yyvsp[0].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[-2].info).constnumVal * (yyvsp[0].info).constnumVal;
    }else{
        if((yyvsp[-2].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[-2].info).constnumVal);
        }
        if((yyvsp[0].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
        }
        fprintf(out,"imul\n");
    }
}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 150 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[-2].info).is_const && (yyvsp[0].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[-2].info).constnumVal / (yyvsp[0].info).constnumVal;
    }else{
        if((yyvsp[-2].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[-2].info).constnumVal);
        }
        if((yyvsp[0].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
        }
        fprintf(out,"idiv\n");
    }
}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 166 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[-2].info).is_const && (yyvsp[0].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[-2].info).constnumVal % (yyvsp[0].info).constnumVal;
    }else{
        if((yyvsp[-2].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[-2].info).constnumVal);
        }
        if((yyvsp[0].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
        }
        fprintf(out,"irem\n");
    }
}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 182 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[-2].info).is_const && (yyvsp[0].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[-2].info).constnumVal == (yyvsp[0].info).constnumVal;
    }else{
            if((yyvsp[-2].info).is_const){
                if((yyvsp[-2].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[-2].info).constnumVal);
                }
                if((yyvsp[-2].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[-2].info).constnumVal);
                }
            }
            if((yyvsp[0].info).is_const){
                if((yyvsp[0].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
                }
                if((yyvsp[0].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
                }            
            }
            fprintf(out,"isub\n");
            fprintf(out,"ifeq L%d\n", lcount);
            fprintf(out,"iconst_0\n");
            fprintf(out,"goto L%d\n", lcount+1);
            fprintf(out,"L%d: iconst_1\n", lcount);
            fprintf(out,"L%d:\n", lcount+1);
            lcount+=2;
        }
    }
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 214 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[-2].info).is_const && (yyvsp[0].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[-2].info).constnumVal > (yyvsp[0].info).constnumVal;
    }else{
            if((yyvsp[-2].info).is_const){
                if((yyvsp[-2].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[-2].info).constnumVal);
                }
                if((yyvsp[-2].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[-2].info).constnumVal);
                }
            }
            if((yyvsp[0].info).is_const){
                if((yyvsp[0].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
                }
                if((yyvsp[0].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
                }            
            }
            fprintf(out,"isub\n");
            fprintf(out,"ifgt L%d\n", lcount);
            fprintf(out,"iconst_0\n");
            fprintf(out,"goto L%d\n", lcount+1);
            fprintf(out,"L%d: iconst_1\n", lcount);
            fprintf(out,"L%d:\n", lcount+1);
            lcount+=2;
        }
    }
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 246 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[-2].info).is_const && (yyvsp[0].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[-2].info).constnumVal >= (yyvsp[0].info).constnumVal;
    }else{
            if((yyvsp[-2].info).is_const){
                if((yyvsp[-2].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[-2].info).constnumVal);
                }
                if((yyvsp[-2].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[-2].info).constnumVal);
                }
            }
            if((yyvsp[0].info).is_const){
                if((yyvsp[0].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
                }
                if((yyvsp[0].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
                }            
            }
            fprintf(out,"isub\n");
            fprintf(out,"ifge L%d\n", lcount);
            fprintf(out,"iconst_0\n");
            fprintf(out,"goto L%d\n", lcount+1);
            fprintf(out,"L%d: iconst_1\n", lcount);
            fprintf(out,"L%d:\n", lcount+1);
            lcount+=2;
        }
    }
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 278 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[-2].info).is_const && (yyvsp[0].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[-2].info).constnumVal < (yyvsp[0].info).constnumVal;
    }else{
            if((yyvsp[-2].info).is_const){
                if((yyvsp[-2].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[-2].info).constnumVal);
                }
                if((yyvsp[-2].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[-2].info).constnumVal);
                }
            }
            if((yyvsp[0].info).is_const){
                if((yyvsp[0].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
                }
                if((yyvsp[0].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
                }            
            }
            fprintf(out,"isub\n");
            fprintf(out,"iflt L%d\n", lcount);
            fprintf(out,"iconst_0\n");
            fprintf(out,"goto L%d\n", lcount+1);
            fprintf(out,"L%d: iconst_1\n", lcount);
            fprintf(out,"L%d:\n", lcount+1);
            lcount+=2;
        }
}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 310 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[-2].info).is_const && (yyvsp[0].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[-2].info).constnumVal <= (yyvsp[0].info).constnumVal;
    }else{
            if((yyvsp[-2].info).is_const){
                if((yyvsp[-2].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[-2].info).constnumVal);
                }
                if((yyvsp[-2].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[-2].info).constnumVal);
                }
            }
            if((yyvsp[0].info).is_const){
                if((yyvsp[0].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
                }
                if((yyvsp[0].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
                }            
            }
            fprintf(out,"isub\n");
            fprintf(out,"ifle L%d\n", lcount);
            fprintf(out,"iconst_0\n");
            fprintf(out,"goto L%d\n", lcount+1);
            fprintf(out,"L%d: iconst_1\n", lcount);
            fprintf(out,"L%d:\n", lcount+1);
            lcount+=2;
        }
    }
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 342 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[-2].info).is_const && (yyvsp[0].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[-2].info).constnumVal != (yyvsp[0].info).constnumVal;
    }else{
            if((yyvsp[-2].info).is_const){
                if((yyvsp[-2].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[-2].info).constnumVal);
                }
                if((yyvsp[-2].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[-2].info).constnumVal);
                }
            }
            if((yyvsp[0].info).is_const){
                if((yyvsp[0].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
                }
                if((yyvsp[0].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
                }            
            }
            fprintf(out,"isub\n");
            fprintf(out,"ifne L%d\n", lcount);
            fprintf(out,"iconst_0\n");
            fprintf(out,"goto L%d\n", lcount+1);
            fprintf(out,"L%d: iconst_1\n", lcount);
            fprintf(out,"L%d:\n", lcount+1);
            lcount+=2;
        }
    }
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 374 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[-2].info).type == BOOL_TYPE && (yyvsp[0].info).type == BOOL_TYPE){
        if((yyvsp[-2].info).is_const && (yyvsp[0].info).is_const){
        (yyval.info).is_const = (yyvsp[-2].info).is_const;
        (yyval.info).constnumVal = (yyvsp[-2].info).constnumVal && (yyvsp[0].info).constnumVal;
        }else{
            if((yyvsp[-2].info).is_const){
                fprintf(out,"iconst_%d\n", (yyvsp[-2].info).constnumVal);
            }
            if((yyvsp[0].info).is_const){
                fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
            }
            fprintf(out,"iand\n");
        }
    }
    }
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 392 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[-2].info).type == BOOL_TYPE && (yyvsp[0].info).type == BOOL_TYPE ){
        if( (yyvsp[-2].info).is_const && (yyvsp[0].info).is_const){
            (yyval.info).is_const = 1;
            (yyval.info).constnumVal = (yyvsp[-2].info).constnumVal ||  (yyvsp[0].info).constnumVal;
        }else{
            if((yyvsp[-2].info).is_const){
                fprintf(out,"iconst_%d\n", (yyvsp[-2].info).constnumVal);
            }
            if((yyvsp[0].info).is_const){
                fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
            }
            fprintf(out,"ior\n");
        }
    }
}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 410 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = (yyvsp[0].info).is_const;
    if((yyvsp[0].info).type == BOOL_TYPE && (yyvsp[0].info).is_const){
        (yyval.info).constnumVal = !(yyvsp[0].info).constnumVal;
    }
    if(!(yyvsp[0].info).is_const){
        fprintf(out,"iconst_1\n");
        fprintf(out,"ixor\n");
    }
    }
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 421 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = (yyvsp[0].info).is_const;
    if((yyvsp[0].info).type == INT_TYPE && (yyvsp[0].info).is_const){
        (yyval.info).constnumVal = -(yyvsp[0].info).constnumVal;
    }
    if(!(yyvsp[0].info).is_const){
        fprintf(out,"ineg\n");
    }
}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 431 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = (yyvsp[-1].info).type;
    (yyval.info).is_const = (yyvsp[-1].info).is_const;
    (yyval.info).returnType = (yyvsp[-1].info).returnType;
    if((yyval.info).is_const){
    (yyval.info).constnumVal = (yyvsp[-1].info).constnumVal;
    strcpy((yyval.info).constVal, (yyvsp[-1].info).constVal);
    }
}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 440 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = (yyvsp[0].info).type;
    (yyval.info).is_const = (yyvsp[0].info).is_const;
    (yyval.info).returnType = (yyvsp[0].info).returnType;
    if((yyval.info).is_const){
    (yyval.info).constnumVal = (yyvsp[0].info).constnumVal;
    strcpy((yyval.info).constVal,(yyvsp[0].info).constVal);
    }
}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 454 "hw3.y" /* yacc.c:1646  */
    {
    struct symbol *s  =lookup((yyvsp[0].strval),1);
    (yyval.info).type = s->type;
    (yyval.info).is_const = s->is_const;
    if(s->is_const){
        strcpy((yyval.info).constVal,s->constVal);
        (yyval.info).constnumVal =  s->constnumVal;
    }else{
        char* type;
        if(s->type == INT_TYPE){
            type = "int";
        }
        if(s->type == BOOL_TYPE){
            type = "boolean";
        }
        if(s->is_global){
            fprintf(out,"getstatic %s %s.%s\n",type ,classname ,(yyvsp[0].strval));
        }else{
            fprintf(out,"iload %d\n",s->varn);
        }
    }
}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 476 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = STRING_TYPE;
    (yyval.info).is_const = 1;
    strcpy((yyval.info).constVal,(yyvsp[0].strval));
}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 481 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = 1;
    (yyval.info).constnumVal = atoi((yyvsp[0].strval));
}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 486 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 1;
    (yyval.info).constnumVal = 1;
}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 491 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 1;
    (yyval.info).constnumVal = 0;
}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 496 "hw3.y" /* yacc.c:1646  */
    {
    (yyval.info).type = (yyvsp[0].info).type;
    (yyval.info).is_const = 0;
}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 503 "hw3.y" /* yacc.c:1646  */
    {(yyval.info).type = INT_TYPE;}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 504 "hw3.y" /* yacc.c:1646  */
    {(yyval.info).type = BOOL_TYPE;}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 505 "hw3.y" /* yacc.c:1646  */
    {(yyval.info).type = STRING_TYPE;}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 510 "hw3.y" /* yacc.c:1646  */
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[-2].strval));
    s.is_const=0;
    s.type = (yyvsp[0].info).type;
    char* type;
    if((yyvsp[0].info).type == INT_TYPE){
        type = "int";
    }
    if((yyvsp[0].info).type == BOOL_TYPE){
        type = "boolean";
    }
    if(symboltablestackid==0){
        //global
        s.is_global=1;
        fprintf(out,"field static %s %s = %d\n",type,(yyvsp[-2].strval),(yyvsp[0].info).constnumVal);
    }else{
        s.is_global=0;
        s.varn=varcount;
        varcount++;
        if((yyvsp[0].info).is_const){
            if((yyvsp[0].info).type == INT_TYPE){
                fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
            }
            if((yyvsp[0].info).type == BOOL_TYPE){
                fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
            }
        }
        fprintf(out,"istore %d\n",s.varn);
    }
    insert(s);
}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 542 "hw3.y" /* yacc.c:1646  */
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[-2].strval));
    s.is_const=0;
    s.type = (yyvsp[0].info).type;
    if(symboltablestackid==0){
        //global
        s.is_global=1;
        char* type;
        if((yyvsp[0].info).type == INT_TYPE){
            type = "int";
        }
        if((yyvsp[0].info).type == BOOL_TYPE){
            type = "boolean";
        }
        fprintf(out,"field static %s %s\n",type,(yyvsp[-2].strval));
    }else{
        s.is_global=0;
        s.varn=varcount;
        varcount++;
    }
    insert(s);
}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 565 "hw3.y" /* yacc.c:1646  */
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[-4].strval));
    s.is_const=0;
    s.type = (yyvsp[0].info).type;

    if(symboltablestackid==0){
        //global
        s.is_global=1;
        char* type;
        if((yyvsp[-2].info).type == INT_TYPE){
            type = "int";
        }
        if((yyvsp[-2].info).type == BOOL_TYPE){
            type = "boolean";
        }
        fprintf(out,"field static %s %s = %d\n",type,(yyvsp[-4].strval),(yyvsp[0].info).constnumVal);
    }else{
        s.is_global=0;
        s.varn=varcount;
        varcount++;
        if((yyvsp[0].info).is_const){
            if((yyvsp[0].info).type == INT_TYPE){
                fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
            }
            if((yyvsp[0].info).type == BOOL_TYPE){
                fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
            }
        }
        fprintf(out,"istore %d\n",s.varn);
    }
    insert(s);
}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 601 "hw3.y" /* yacc.c:1646  */
    {create();}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 601 "hw3.y" /* yacc.c:1646  */
    {dump();drop();}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 605 "hw3.y" /* yacc.c:1646  */
    {
    fprintf(out, "\tmethod public static void main(java.lang.String[])\n");
    fprintf(out, "\tmax_stack 15\n");
    fprintf(out, "\tmax_locals 15\n");
    fprintf(out, "\t{\n");
    fprintf(out, "\taaaaaaaaaaaaaaaaaaaaa\n");
    fprintf(out, "\t\treturn\n");
    fprintf(out, "\t}\n");
}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 615 "hw3.y" /* yacc.c:1646  */
    {
    fprintf(out, "\tmethod public static void main(java.lang.String[])\n");
    fprintf(out, "\tmax_stack 15\n");
    fprintf(out, "\tmax_locals 15\n");
    fprintf(out, "\t{\n");
    fprintf(out, "\t\treturn\n");
    fprintf(out, "\t}\n");
}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 639 "hw3.y" /* yacc.c:1646  */
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[0].strval));
    s.is_const=0;
    s.is_global=1;
    s.type = FUNCTION_TYPE;
    insert(s);
    create();
    varcount=0;
}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 648 "hw3.y" /* yacc.c:1646  */
    {
    struct symbol *fn =     lookup((yyvsp[-6].strval),1);
    fn->returnType = (yyvsp[0].info).type;
    char* type;
    if((yyvsp[0].info).type == INT_TYPE){
        type = "int";
    }
    if((yyvsp[0].info).type == BOOL_TYPE){
        type = "boolean";
    }
    fprintf(out, "method public static %s %s(",type,(yyvsp[-6].strval));
    int i =0;
    while(symboltable[symboltablestackid][i].name[0]!='\0'){
        fn->paramstype[i] = symboltable[symboltablestackid][i].type;
        
        char* type;
        if(symboltable[symboltablestackid][i].type == INT_TYPE){
            type = "int";
        }
        if(symboltable[symboltablestackid][i].type == BOOL_TYPE){
            type = "boolean";
        }
        if(i==0){
            fprintf(out, "%s", type);
        }else{
            fprintf(out, ", %s", type);
        }
        i++;
    }
    fn->paramstype[i] = NULLTYPE;
    fprintf(out, ")\n");
    fprintf(out, "max_stack 15\n");
    fprintf(out, "max_locals 15\n");
    fprintf(out, "{\n");
}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 684 "hw3.y" /* yacc.c:1646  */
    {
    if(strcmp((yyvsp[-10].strval),(yyvsp[0].strval))==0){
    dump();
    drop();
    }else{
        printf("error 157");
    }

    if((yyvsp[-4].info).type == INT_TYPE){
        fprintf(out, "sipush 0\n");
    }
    if((yyvsp[-4].info).type == BOOL_TYPE){
        fprintf(out, "iconst_0\n");
    }
    fprintf(out, "ireturn\n");
    fprintf(out, "}\n");
}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 719 "hw3.y" /* yacc.c:1646  */
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[-2].strval));
    s.is_const=0;
    s.is_global=0;
    s.varn=varcount;
    varcount++;
    s.type = (yyvsp[0].info).type;
    insert(s);
    }
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 732 "hw3.y" /* yacc.c:1646  */
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[0].strval));
    s.is_const=0;
    s.is_global=1;
    s.type = FUNCTION_TYPE;
    s.returnType = NULLTYPE;
    insert(s);
    create();
    varcount=0;
}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 743 "hw3.y" /* yacc.c:1646  */
    {
    struct symbol *fn =     lookup((yyvsp[-4].strval),1);
    fprintf(out, "method public static void %s(",(yyvsp[-4].strval));
    int i =0;
    while(symboltable[symboltablestackid][i].name[0]!='\0'){
        fn->paramstype[i] = symboltable[symboltablestackid][i].type;

        char* type;
        if(symboltable[symboltablestackid][i].type == INT_TYPE){
            type = "int";
        }
        if(symboltable[symboltablestackid][i].type == BOOL_TYPE){
            type = "boolean";
        }
        if(i==0){
            fprintf(out, "%s", type);
        }else{
            fprintf(out, ", %s", type);
        }
        i++;
    }
    fn->paramstype[i] = NULLTYPE;

    fprintf(out, ")\n");
    fprintf(out, "max_stack 15\n");
    fprintf(out, "max_locals 15\n");
    fprintf(out, "{\n");
}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 772 "hw3.y" /* yacc.c:1646  */
    {
    if(strcmp((yyvsp[-8].strval),(yyvsp[0].strval))==0){
    dump();
    drop();
    }else{
        printf("error 157");
    }

    fprintf(out, "return\n");
    fprintf(out, "}\n");
}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 786 "hw3.y" /* yacc.c:1646  */
    {
    varcount=0;
    fprintf(out, "\tmethod public static void main(java.lang.String[])\n");
    fprintf(out, "\tmax_stack 15\n");
    fprintf(out, "\tmax_locals 15\n");
    fprintf(out, "\t{\n");
}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 792 "hw3.y" /* yacc.c:1646  */
    {
    fprintf(out, "\t\treturn\n");
    fprintf(out, "\t}\n");
}
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 812 "hw3.y" /* yacc.c:1646  */
    {create();}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 812 "hw3.y" /* yacc.c:1646  */
    {dump();drop();}
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 816 "hw3.y" /* yacc.c:1646  */
    {
    fprintf(out,"getstatic java.io.PrintStream java.lang.System.out\n");
}
#line 2426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 818 "hw3.y" /* yacc.c:1646  */
    {
    if((yyvsp[0].info).is_const){
        if((yyvsp[0].info).type == STRING_TYPE){
            char t[MAX_LINE_LENG];
            t[0]=(yyvsp[0].info).constVal[0];
            for(int i =1,j=1;i<MAX_LINE_LENG && j<MAX_LINE_LENG;i++){
                if((yyvsp[0].info).constVal[i]=='"' && (yyvsp[0].info).constVal[i+1]!=0){
                    t[j]='\\';
                    j++;
                }
                t[j]=(yyvsp[0].info).constVal[i];
                if((yyvsp[0].info).constVal[i]=0){
                    break;
                }
                j++;
            }
            fprintf(out,"ldc %s\n", t);
        }
        if((yyvsp[0].info).type == INT_TYPE){
            fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
        }
        if((yyvsp[0].info).type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
        }
    }
    if((yyvsp[0].info).type == STRING_TYPE){
        fprintf(out,"invokevirtual void java.io.PrintStream.print(java.lang.String)\n");
    }
    if((yyvsp[0].info).type == INT_TYPE){
        fprintf(out,"invokevirtual void java.io.PrintStream.print(int)\n");
    }
    if((yyvsp[0].info).type == BOOL_TYPE){
        fprintf(out,"invokevirtual void java.io.PrintStream.print(boolean)\n");
    }
}
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 853 "hw3.y" /* yacc.c:1646  */
    {
    fprintf(out, "getstatic java.io.PrintStream java.lang.System.out\n");
    fprintf(out, "invokevirtual void java.io.PrintStream.println()\n");
}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 857 "hw3.y" /* yacc.c:1646  */
    {
    if((yyvsp[0].info).is_const){
        if((yyvsp[0].info).type == INT_TYPE){
            fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
        }
        if((yyvsp[0].info).type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
        }
    }
    struct symbol *s  =lookup((yyvsp[-2].strval),1);
    char* type;
    if(s->type == INT_TYPE){
        type = "int";
    }
    if(s->type == BOOL_TYPE){
        type = "boolean";
    }
    if(s->is_global){
        fprintf(out, "putstatic %s %s.%s\n",type,classname,(yyvsp[-2].strval));
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }

}
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 881 "hw3.y" /* yacc.c:1646  */
    {
    if((yyvsp[0].info).is_const){
        fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
    }
    fprintf(out, "ifne Loopexit%d\n", loopc);
}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 887 "hw3.y" /* yacc.c:1646  */
    {
    fprintf(out, "goto Loopexit%d\n", loopc);
}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 891 "hw3.y" /* yacc.c:1646  */
    {
    if((yyvsp[0].info).is_const){
        if((yyvsp[0].info).type == INT_TYPE){
            fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
        }
        if((yyvsp[0].info).type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
        }
    }
    fprintf(out, "ireturn\n");
}
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 902 "hw3.y" /* yacc.c:1646  */
    {
    fprintf(out, "return\n");
}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 908 "hw3.y" /* yacc.c:1646  */
    {
    if((yyvsp[-1].info).is_const){
        fprintf(out,"iconst_%d\n", (yyvsp[-1].info).constnumVal);
    }
    (yyvsp[-1].info).varn = lcount;
    lcount++;
    fprintf(out, "ifeq Lelse%d\n", (yyvsp[-1].info).varn);
    create();
}
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 916 "hw3.y" /* yacc.c:1646  */
    {
    dump();drop();
    fprintf(out, "goto Lexit%d\n", (yyvsp[-3].info).varn);
    fprintf(out, "Lelse%d:\n", (yyvsp[-3].info).varn);
    fprintf(out, "nop\n");
}
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 922 "hw3.y" /* yacc.c:1646  */
    {
    fprintf(out, "Lexit%d:\n", (yyvsp[-7].info).varn);
    fprintf(out, "nop\n");
}
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 929 "hw3.y" /* yacc.c:1646  */
    {create();}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 929 "hw3.y" /* yacc.c:1646  */
    {dump();drop();}
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 933 "hw3.y" /* yacc.c:1646  */
    {
    create();
    (yyvsp[0].info).varn = loopc;
    loopc = lcount;
    lcount++;
    fprintf(out, "Lbegin%d:\n", loopc);
}
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 939 "hw3.y" /* yacc.c:1646  */
    {
    fprintf(out, "goto Lbegin%d\n", loopc);
    fprintf(out, "Loopexit%d:\n", loopc);
    fprintf(out, "nop\n");
    loopc = (yyvsp[-4].info).varn;
    dump();
    drop();
}
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 951 "hw3.y" /* yacc.c:1646  */
    {
    // i=0
    if((yyvsp[0].info).is_const){
        fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);    
    }
    struct symbol *s  =lookup((yyvsp[-2].strval),1);
    if(s->is_global){
        fprintf(out, "putstatic int %s.%s\n",classname,(yyvsp[-2].strval));
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }
    (yyvsp[0].info).varn = loopc;
    loopc = lcount;
    lcount++;
    fprintf(out, "Lbegin%d:\n", loopc);
    if(s->is_global){
        fprintf(out,"getstatic int %s.%s\n" ,classname ,(yyvsp[-2].strval));
    }else{
        fprintf(out,"iload %d\n",s->varn);
    }
}
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 971 "hw3.y" /* yacc.c:1646  */
    {
    // i>=n
    if((yyvsp[0].info).is_const){
        fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
    }
    fprintf(out, "isub\n");
    fprintf(out, "iflt Loopexit%d\n", loopc);
    create();
}
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 979 "hw3.y" /* yacc.c:1646  */
    {
    // i--
    struct symbol *s = lookup((yyvsp[-10].strval),1);
    if(s->is_global){
        fprintf(out,"getstatic int %s.%s\n" ,classname ,(yyvsp[-10].strval));
    }else{
        fprintf(out,"iload %d\n",s->varn);
    }
    fprintf(out, "sipush 1\n");
    fprintf(out, "isub\n");
    if(s->is_global){
        fprintf(out, "putstatic int %s.%s\n",classname,(yyvsp[-10].strval));
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }

    fprintf(out, "goto Lbegin%d\n", loopc);
    fprintf(out, "Loopexit%d:\n", loopc);
    fprintf(out, "nop\n");
    loopc = (yyvsp[-8].info).varn;
    dump();drop();
}
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1001 "hw3.y" /* yacc.c:1646  */
    {
    // i=0
    if((yyvsp[0].info).is_const){
        fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);    
    }
    struct symbol *s  =lookup((yyvsp[-2].strval),1);
    if(s->is_global){
        fprintf(out, "putstatic int %s.%s\n",classname,(yyvsp[-2].strval));
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }
    (yyvsp[0].info).varn = loopc;
    loopc = lcount;
    lcount++;
    fprintf(out, "Lbegin%d:\n", loopc);
    if(s->is_global){
        fprintf(out,"getstatic int %s.%s\n" ,classname ,(yyvsp[-2].strval));
    }else{
        fprintf(out,"iload %d\n",s->varn);
    }
}
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1021 "hw3.y" /* yacc.c:1646  */
    {
    // i<=n
    if((yyvsp[0].info).is_const){
        fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
    }
    fprintf(out, "isub\n");
    fprintf(out, "ifgt Loopexit%d\n", loopc);
    create();
}
#line 2725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1029 "hw3.y" /* yacc.c:1646  */
    {
    // i++
    struct symbol *s = lookup((yyvsp[-10].strval),1);
    if(s->is_global){
        fprintf(out,"getstatic int %s.%s\n" ,classname ,(yyvsp[-10].strval));
    }else{
        fprintf(out,"iload %d\n",s->varn);
    }
    fprintf(out, "sipush 1\n");
    fprintf(out, "iadd\n");
    if(s->is_global){
        fprintf(out, "putstatic int %s.%s\n",classname,(yyvsp[-10].strval));
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }

    fprintf(out, "goto Lbegin%d\n", loopc);
    fprintf(out, "Loopexit%d:\n", loopc);
    fprintf(out, "nop\n");
    loopc = (yyvsp[-8].info).varn;
    dump();
    drop();
}
#line 2753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1056 "hw3.y" /* yacc.c:1646  */
    {
    struct symbol *fn =     lookup((yyvsp[-3].strval),1);
    (yyval.info).type = fn->returnType;
    char* type;
    if(fn->returnType == INT_TYPE){
        type = "int";
    }
    if(fn->returnType == BOOL_TYPE){
        type = "boolean";
    }
    if(fn->returnType == NULLTYPE){
        type = "void";
    }
    fprintf(out, "invokestatic %s %s.%s(",type,classname,(yyvsp[-3].strval));
    // int, int)
    int i=0;
    while(fn->paramstype[i] != NULLTYPE){
        char* type;
        if(fn->paramstype[i] == INT_TYPE){
            type = "int";
        }
        if(fn->paramstype[i] == BOOL_TYPE){
            type = "boolean";
        }
        if(i==0){
            fprintf(out, "%s", type);
        }else{
            fprintf(out, ", %s", type);
        }
        i++;
    }
    fprintf(out, ")\n");
}
#line 2791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1096 "hw3.y" /* yacc.c:1646  */
    {
    if((yyvsp[0].info).is_const){
        if((yyvsp[0].info).type == INT_TYPE){
            fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
        }
        if((yyvsp[0].info).type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
        }
    }
}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1107 "hw3.y" /* yacc.c:1646  */
    {
    if((yyvsp[0].info).is_const){
        if((yyvsp[0].info).type == INT_TYPE){
            fprintf(out,"sipush %d\n", (yyvsp[0].info).constnumVal);
        }
        if((yyvsp[0].info).type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", (yyvsp[0].info).constnumVal);
        }
    }
}
#line 2821 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2825 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1119 "hw3.y" /* yacc.c:1906  */


#include "lex.yy.c"
extern FILE* yyin;


// create
int create(){
    symboltablestackid++;
    for(int i=0;i<symboltablelen;i++){
        symboltable[symboltablestackid][i].name[0]= 0;
        symboltable[symboltablestackid][i].is_const = 0;
    }
}
// lookup
struct symbol* lookup(char* s, int up){
    int stid = symboltablestackid;
    while(stid>=0){

    for(int i=0;i<symboltablelen;i++){
        if(strcmp(s,symboltable[stid][i].name)==0){
            return &symboltable[stid][i];
        }
    }
    if(up==0){
        return NULL;
    }else{
        stid--;
    }
    }
    }
// insert
int insert(struct symbol s){
    // printf("insert: %s\n", s.name);
    if(lookup(s.name,0)==NULL){
        for(int i=0;i<symboltablelen;i++){
            if (symboltable[symboltablestackid][i].name[0]=='\0'){
                strcpy(symboltable[symboltablestackid][i].name,s.name);
                symboltable[symboltablestackid][i].is_const = s.is_const;
                symboltable[symboltablestackid][i].is_global = s.is_global;
                symboltable[symboltablestackid][i].varn = s.varn;
                strcpy(symboltable[symboltablestackid][i].constVal,s.constVal);
                symboltable[symboltablestackid][i].constnumVal = s.constnumVal;
                symboltable[symboltablestackid][i].type = s.type;
                symboltable[symboltablestackid][i].returnType = s.returnType;
                return 0;
            }
        }
    }
}
// dump
int dump(){
    printf("\nSymbol Table:\n");
    for(int i=0;i<symboltablelen;i++){
        if (symboltable[symboltablestackid][i].name[0]!='\0'){
            printf("%s\n", symboltable[symboltablestackid][i].name);
        }else break;
    }
}

int drop(){
    symboltablestackid--;
}


int yyerror(char *msg)
{
    fprintf(stderr, "line %d: %s\n: %s\n", linenum, msg, yytext);
}


int main(int argc, char *argv[])
{
    /* open the source program file */
    if (argc != 2) {
        printf ("Usage: hw2 filename\n");
        exit(1);
    }
    yyin = fopen(argv[1], "r"); /* open input file */
    classname[0]=0;
    strcpy(classname,argv[1]);
    char* p = strstr(classname,".st"); 
    *p = '\0';
    char outname[MAX_LINE_LENG];
    outname[0]=0;
    strcpy(outname,classname);
    strcat(outname,".a");

    // printf("%s\n",outname);
    out = fopen(outname, "w");

    // file start
    fprintf(out, "class %s\n", classname);
    fprintf(out, "{\n");

    /* perform parsing */
    if (yyparse() == 1) /* parsing */
    yyerror("Parsing error !"); /* syntax error */
    else printf("success!\n");

    // end
    fprintf(out, "}\n");

    fclose(out);
    fclose(yyin);
}
