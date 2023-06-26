/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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




/* Copy the first part of user declarations.  */
#line 1 "hw3.y"

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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 56 "hw3.y"
{
    char strval[MAX_LINE_LENG];
    struct symbol info;
}
/* Line 193 of yacc.c.  */
#line 272 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 285 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

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
/* YYNRULES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    15,    19,    23,    27,    31,    35,
      39,    43,    47,    51,    55,    59,    63,    67,    70,    73,
      77,    79,    81,    83,    85,    87,    89,    91,    93,    95,
      97,   102,   107,   114,   115,   118,   119,   122,   124,   126,
     129,   131,   133,   135,   137,   139,   140,   141,   154,   155,
     158,   160,   162,   164,   165,   169,   171,   175,   176,   177,
     188,   189,   192,   195,   197,   199,   201,   203,   205,   207,
     208,   213,   214,   218,   220,   224,   228,   230,   233,   235,
     236,   237,   247,   248,   249,   253,   254,   260,   262,   263,
     264,   278,   279,   280,   293,   298,   299,   301,   302,   307
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      68,     0,    -1,    32,    58,     5,    66,    18,    64,    -1,
      32,    58,    18,    64,    -1,    64,    13,    64,    -1,    64,
      14,    64,    -1,    64,    15,    64,    -1,    64,    16,    64,
      -1,    64,    17,    64,    -1,    64,    23,    64,    -1,    64,
      22,    64,    -1,    64,    21,    64,    -1,    64,    19,    64,
      -1,    64,    20,    64,    -1,    64,    24,    64,    -1,    64,
      25,    64,    -1,    64,    26,    64,    -1,    27,    64,    -1,
      14,    64,    -1,     7,    64,     8,    -1,    65,    -1,    58,
      -1,    59,    -1,    57,    -1,    53,    -1,    39,    -1,   103,
      -1,    44,    -1,    30,    -1,    52,    -1,    55,    58,    18,
      64,    -1,    55,    58,     5,    66,    -1,    55,    58,     5,
      66,    18,    64,    -1,    -1,    69,    70,    -1,    -1,    71,
      83,    -1,    71,    -1,    83,    -1,    72,    71,    -1,    72,
      -1,    63,    -1,    67,    -1,    73,    -1,    80,    -1,    -1,
      -1,    41,    58,    74,     7,    78,     8,     5,    66,    75,
      76,    37,    58,    -1,    -1,    77,    76,    -1,    67,    -1,
      63,    -1,    86,    -1,    -1,    79,     4,    78,    -1,    79,
      -1,    58,     5,    66,    -1,    -1,    -1,    47,    58,    81,
       7,    78,     8,    82,    76,    37,    58,    -1,    -1,    84,
      85,    -1,    86,    85,    -1,    86,    -1,    87,    -1,    89,
      -1,    91,    -1,    96,    -1,   103,    -1,    -1,    29,    88,
      76,    37,    -1,    -1,    46,    90,    64,    -1,    51,    -1,
      58,    18,    64,    -1,    38,    56,    64,    -1,    38,    -1,
      49,    64,    -1,    50,    -1,    -1,    -1,    43,    64,    54,
      92,    76,    93,    94,    37,    43,    -1,    -1,    -1,    36,
      95,    76,    -1,    -1,    60,    97,    76,    37,    60,    -1,
      98,    -1,    -1,    -1,    40,    33,    58,     5,    64,    99,
       3,     3,    64,   100,    76,    37,    40,    -1,    -1,    -1,
      40,    58,     5,    64,   101,     3,     3,    64,   102,    76,
      37,    40,    -1,    58,     7,   104,     8,    -1,    -1,   105,
      -1,    -1,    64,   106,     4,   105,    -1,    64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    85,   102,   118,   134,   150,   166,   182,
     214,   246,   278,   310,   342,   374,   392,   410,   421,   431,
     440,   454,   476,   481,   486,   491,   496,   503,   504,   505,
     510,   542,   565,   601,   601,   605,   613,   614,   622,   626,
     627,   631,   632,   633,   634,   638,   647,   638,   702,   703,
     707,   708,   709,   712,   713,   714,   718,   731,   742,   731,
     785,   785,   798,   799,   803,   804,   805,   806,   807,   811,
     811,   815,   815,   852,   856,   880,   886,   889,   901,   907,
     915,   907,   927,   928,   928,   932,   932,   946,   950,   970,
     950,  1000,  1020,  1000,  1055,  1090,  1091,  1095,  1095,  1106
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "expression", "expression_", "type", "variable", "start", "@1", "_start",
  "program_a", "program_a_", "function", "@2", "@3", "function_body",
  "function_body_", "params", "param", "procedure", "@4", "@5",
  "program_b", "@6", "program_b_", "statement", "block", "@7", "simple",
  "@8", "conditional", "@9", "@10", "opt_else", "@11", "loop", "@12",
  "forloop", "@13", "@14", "@15", "@16", "invocations", "args", "args_",
  "@17", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    77,   103,    60,    71,    78,     1,     2,    10,    11,
      12,    13,    43,   161,    79,    80,   110,   111,    14,    44,
     150,    15,    16,    33,    81,    35,    47,    36,    62,    37,
     132,   153,   160,   165,    38,    66,    39,   151,   174,   143,
     170,    61,   104,   105,   133
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -60
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,    10,   -23,   -60,   -43,    51,   -60,   -60,   -60,   143,
     -60,   -60,   -60,   -60,   -53,   -60,   -59,   -60,   -60,   -60,
     -60,   145,   -60,   130,    28,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -16,   -60,    30,   -60
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -100
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

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 72 "hw3.y"
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[(2) - (6)].strval));
    s.is_const=1;
    s.type = (yyvsp[(6) - (6)].info).type;
    s.constVal[0] = 0;
    if(s.type == STRING_TYPE){
        strcpy(s.constVal,(yyvsp[(6) - (6)].info).constVal);
    }else{
        s.constnumVal=(yyvsp[(6) - (6)].info).constnumVal;
    }
    insert(s);
}
    break;

  case 3:
#line 85 "hw3.y"
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[(2) - (4)].strval));
    s.is_const=1;
    s.type = (yyvsp[(4) - (4)].info).type;
    s.constVal[0] = 0;
    if(s.type == STRING_TYPE){
        strcpy(s.constVal,(yyvsp[(4) - (4)].info).constVal);
    }else{
        s.constnumVal=(yyvsp[(4) - (4)].info).constnumVal;
    }
    insert(s);
}
    break;

  case 4:
#line 102 "hw3.y"
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[(1) - (3)].info).is_const && (yyvsp[(3) - (3)].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[(1) - (3)].info).constnumVal + (yyvsp[(3) - (3)].info).constnumVal;
    }else{
        if((yyvsp[(1) - (3)].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[(1) - (3)].info).constnumVal);
        }
        if((yyvsp[(3) - (3)].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[(3) - (3)].info).constnumVal);
        }
        fprintf(out,"iadd\n");
    }
    }
    break;

  case 5:
#line 118 "hw3.y"
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[(1) - (3)].info).is_const && (yyvsp[(3) - (3)].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[(1) - (3)].info).constnumVal - (yyvsp[(3) - (3)].info).constnumVal;
    }else{
        if((yyvsp[(1) - (3)].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[(1) - (3)].info).constnumVal);
        }
        if((yyvsp[(3) - (3)].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[(3) - (3)].info).constnumVal);
        }
        fprintf(out,"isub\n");
    }
    }
    break;

  case 6:
#line 134 "hw3.y"
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[(1) - (3)].info).is_const && (yyvsp[(3) - (3)].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[(1) - (3)].info).constnumVal * (yyvsp[(3) - (3)].info).constnumVal;
    }else{
        if((yyvsp[(1) - (3)].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[(1) - (3)].info).constnumVal);
        }
        if((yyvsp[(3) - (3)].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[(3) - (3)].info).constnumVal);
        }
        fprintf(out,"imul\n");
    }
}
    break;

  case 7:
#line 150 "hw3.y"
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[(1) - (3)].info).is_const && (yyvsp[(3) - (3)].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[(1) - (3)].info).constnumVal / (yyvsp[(3) - (3)].info).constnumVal;
    }else{
        if((yyvsp[(1) - (3)].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[(1) - (3)].info).constnumVal);
        }
        if((yyvsp[(3) - (3)].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[(3) - (3)].info).constnumVal);
        }
        fprintf(out,"idiv\n");
    }
}
    break;

  case 8:
#line 166 "hw3.y"
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[(1) - (3)].info).is_const && (yyvsp[(3) - (3)].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[(1) - (3)].info).constnumVal % (yyvsp[(3) - (3)].info).constnumVal;
    }else{
        if((yyvsp[(1) - (3)].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[(1) - (3)].info).constnumVal);
        }
        if((yyvsp[(3) - (3)].info).is_const){
            fprintf(out,"sipush %d\n", (yyvsp[(3) - (3)].info).constnumVal);
        }
        fprintf(out,"irem\n");
    }
}
    break;

  case 9:
#line 182 "hw3.y"
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[(1) - (3)].info).is_const && (yyvsp[(3) - (3)].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[(1) - (3)].info).constnumVal == (yyvsp[(3) - (3)].info).constnumVal;
    }else{
            if((yyvsp[(1) - (3)].info).is_const){
                if((yyvsp[(1) - (3)].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[(1) - (3)].info).constnumVal);
                }
                if((yyvsp[(1) - (3)].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[(1) - (3)].info).constnumVal);
                }
            }
            if((yyvsp[(3) - (3)].info).is_const){
                if((yyvsp[(3) - (3)].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[(3) - (3)].info).constnumVal);
                }
                if((yyvsp[(3) - (3)].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[(3) - (3)].info).constnumVal);
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
    break;

  case 10:
#line 214 "hw3.y"
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[(1) - (3)].info).is_const && (yyvsp[(3) - (3)].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[(1) - (3)].info).constnumVal > (yyvsp[(3) - (3)].info).constnumVal;
    }else{
            if((yyvsp[(1) - (3)].info).is_const){
                if((yyvsp[(1) - (3)].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[(1) - (3)].info).constnumVal);
                }
                if((yyvsp[(1) - (3)].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[(1) - (3)].info).constnumVal);
                }
            }
            if((yyvsp[(3) - (3)].info).is_const){
                if((yyvsp[(3) - (3)].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[(3) - (3)].info).constnumVal);
                }
                if((yyvsp[(3) - (3)].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[(3) - (3)].info).constnumVal);
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
    break;

  case 11:
#line 246 "hw3.y"
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[(1) - (3)].info).is_const && (yyvsp[(3) - (3)].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[(1) - (3)].info).constnumVal >= (yyvsp[(3) - (3)].info).constnumVal;
    }else{
            if((yyvsp[(1) - (3)].info).is_const){
                if((yyvsp[(1) - (3)].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[(1) - (3)].info).constnumVal);
                }
                if((yyvsp[(1) - (3)].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[(1) - (3)].info).constnumVal);
                }
            }
            if((yyvsp[(3) - (3)].info).is_const){
                if((yyvsp[(3) - (3)].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[(3) - (3)].info).constnumVal);
                }
                if((yyvsp[(3) - (3)].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[(3) - (3)].info).constnumVal);
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
    break;

  case 12:
#line 278 "hw3.y"
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[(1) - (3)].info).is_const && (yyvsp[(3) - (3)].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[(1) - (3)].info).constnumVal < (yyvsp[(3) - (3)].info).constnumVal;
    }else{
            if((yyvsp[(1) - (3)].info).is_const){
                if((yyvsp[(1) - (3)].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[(1) - (3)].info).constnumVal);
                }
                if((yyvsp[(1) - (3)].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[(1) - (3)].info).constnumVal);
                }
            }
            if((yyvsp[(3) - (3)].info).is_const){
                if((yyvsp[(3) - (3)].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[(3) - (3)].info).constnumVal);
                }
                if((yyvsp[(3) - (3)].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[(3) - (3)].info).constnumVal);
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
    break;

  case 13:
#line 310 "hw3.y"
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[(1) - (3)].info).is_const && (yyvsp[(3) - (3)].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[(1) - (3)].info).constnumVal <= (yyvsp[(3) - (3)].info).constnumVal;
    }else{
            if((yyvsp[(1) - (3)].info).is_const){
                if((yyvsp[(1) - (3)].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[(1) - (3)].info).constnumVal);
                }
                if((yyvsp[(1) - (3)].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[(1) - (3)].info).constnumVal);
                }
            }
            if((yyvsp[(3) - (3)].info).is_const){
                if((yyvsp[(3) - (3)].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[(3) - (3)].info).constnumVal);
                }
                if((yyvsp[(3) - (3)].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[(3) - (3)].info).constnumVal);
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
    break;

  case 14:
#line 342 "hw3.y"
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[(1) - (3)].info).is_const && (yyvsp[(3) - (3)].info).is_const){
        (yyval.info).is_const = 1;
        (yyval.info).constnumVal = (yyvsp[(1) - (3)].info).constnumVal != (yyvsp[(3) - (3)].info).constnumVal;
    }else{
            if((yyvsp[(1) - (3)].info).is_const){
                if((yyvsp[(1) - (3)].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[(1) - (3)].info).constnumVal);
                }
                if((yyvsp[(1) - (3)].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[(1) - (3)].info).constnumVal);
                }
            }
            if((yyvsp[(3) - (3)].info).is_const){
                if((yyvsp[(3) - (3)].info).type == INT_TYPE){
                    fprintf(out,"sipush %d\n", (yyvsp[(3) - (3)].info).constnumVal);
                }
                if((yyvsp[(3) - (3)].info).type == BOOL_TYPE){
                    fprintf(out,"iconst_%d\n", (yyvsp[(3) - (3)].info).constnumVal);
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
    break;

  case 15:
#line 374 "hw3.y"
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[(1) - (3)].info).type == BOOL_TYPE && (yyvsp[(3) - (3)].info).type == BOOL_TYPE){
        if((yyvsp[(1) - (3)].info).is_const && (yyvsp[(3) - (3)].info).is_const){
        (yyval.info).is_const = (yyvsp[(1) - (3)].info).is_const;
        (yyval.info).constnumVal = (yyvsp[(1) - (3)].info).constnumVal && (yyvsp[(3) - (3)].info).constnumVal;
        }else{
            if((yyvsp[(1) - (3)].info).is_const){
                fprintf(out,"iconst_%d\n", (yyvsp[(1) - (3)].info).constnumVal);
            }
            if((yyvsp[(3) - (3)].info).is_const){
                fprintf(out,"iconst_%d\n", (yyvsp[(3) - (3)].info).constnumVal);
            }
            fprintf(out,"iand\n");
        }
    }
    }
    break;

  case 16:
#line 392 "hw3.y"
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 0;
    if((yyvsp[(1) - (3)].info).type == BOOL_TYPE && (yyvsp[(3) - (3)].info).type == BOOL_TYPE ){
        if( (yyvsp[(1) - (3)].info).is_const && (yyvsp[(3) - (3)].info).is_const){
            (yyval.info).is_const = 1;
            (yyval.info).constnumVal = (yyvsp[(1) - (3)].info).constnumVal ||  (yyvsp[(3) - (3)].info).constnumVal;
        }else{
            if((yyvsp[(1) - (3)].info).is_const){
                fprintf(out,"iconst_%d\n", (yyvsp[(1) - (3)].info).constnumVal);
            }
            if((yyvsp[(3) - (3)].info).is_const){
                fprintf(out,"iconst_%d\n", (yyvsp[(3) - (3)].info).constnumVal);
            }
            fprintf(out,"ior\n");
        }
    }
}
    break;

  case 17:
#line 410 "hw3.y"
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = (yyvsp[(2) - (2)].info).is_const;
    if((yyvsp[(2) - (2)].info).type == BOOL_TYPE && (yyvsp[(2) - (2)].info).is_const){
        (yyval.info).constnumVal = !(yyvsp[(2) - (2)].info).constnumVal;
    }
    if(!(yyvsp[(2) - (2)].info).is_const){
        fprintf(out,"iconst_1\n");
        fprintf(out,"ixor\n");
    }
    }
    break;

  case 18:
#line 421 "hw3.y"
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = (yyvsp[(2) - (2)].info).is_const;
    if((yyvsp[(2) - (2)].info).type == INT_TYPE && (yyvsp[(2) - (2)].info).is_const){
        (yyval.info).constnumVal = -(yyvsp[(2) - (2)].info).constnumVal;
    }
    if(!(yyvsp[(2) - (2)].info).is_const){
        fprintf(out,"ineg\n");
    }
}
    break;

  case 19:
#line 431 "hw3.y"
    {
    (yyval.info).type = (yyvsp[(2) - (3)].info).type;
    (yyval.info).is_const = (yyvsp[(2) - (3)].info).is_const;
    (yyval.info).returnType = (yyvsp[(2) - (3)].info).returnType;
    if((yyval.info).is_const){
    (yyval.info).constnumVal = (yyvsp[(2) - (3)].info).constnumVal;
    strcpy((yyval.info).constVal, (yyvsp[(2) - (3)].info).constVal);
    }
}
    break;

  case 20:
#line 440 "hw3.y"
    {
    (yyval.info).type = (yyvsp[(1) - (1)].info).type;
    (yyval.info).is_const = (yyvsp[(1) - (1)].info).is_const;
    (yyval.info).returnType = (yyvsp[(1) - (1)].info).returnType;
    if((yyval.info).is_const){
    (yyval.info).constnumVal = (yyvsp[(1) - (1)].info).constnumVal;
    strcpy((yyval.info).constVal,(yyvsp[(1) - (1)].info).constVal);
    }
}
    break;

  case 21:
#line 454 "hw3.y"
    {
    struct symbol *s  =lookup((yyvsp[(1) - (1)].strval),1);
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
            fprintf(out,"getstatic %s %s.%s\n",type ,classname ,(yyvsp[(1) - (1)].strval));
        }else{
            fprintf(out,"iload %d\n",s->varn);
        }
    }
}
    break;

  case 22:
#line 476 "hw3.y"
    {
    (yyval.info).type = STRING_TYPE;
    (yyval.info).is_const = 1;
    strcpy((yyval.info).constVal,(yyvsp[(1) - (1)].strval));
}
    break;

  case 23:
#line 481 "hw3.y"
    {
    (yyval.info).type = INT_TYPE;
    (yyval.info).is_const = 1;
    (yyval.info).constnumVal = atoi((yyvsp[(1) - (1)].strval));
}
    break;

  case 24:
#line 486 "hw3.y"
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 1;
    (yyval.info).constnumVal = 1;
}
    break;

  case 25:
#line 491 "hw3.y"
    {
    (yyval.info).type = BOOL_TYPE;
    (yyval.info).is_const = 1;
    (yyval.info).constnumVal = 0;
}
    break;

  case 26:
#line 496 "hw3.y"
    {
    (yyval.info).type = (yyvsp[(1) - (1)].info).type;
    (yyval.info).is_const = 0;
}
    break;

  case 27:
#line 503 "hw3.y"
    {(yyval.info).type = INT_TYPE;}
    break;

  case 28:
#line 504 "hw3.y"
    {(yyval.info).type = BOOL_TYPE;}
    break;

  case 29:
#line 505 "hw3.y"
    {(yyval.info).type = STRING_TYPE;}
    break;

  case 30:
#line 510 "hw3.y"
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[(2) - (4)].strval));
    s.is_const=0;
    s.type = (yyvsp[(4) - (4)].info).type;
    char* type;
    if((yyvsp[(4) - (4)].info).type == INT_TYPE){
        type = "int";
    }
    if((yyvsp[(4) - (4)].info).type == BOOL_TYPE){
        type = "boolean";
    }
    if(symboltablestackid==0){
        //global
        s.is_global=1;
        fprintf(out,"field static %s %s = %d\n",type,(yyvsp[(2) - (4)].strval),(yyvsp[(4) - (4)].info).constnumVal);
    }else{
        s.is_global=0;
        s.varn=varcount;
        varcount++;
        if((yyvsp[(4) - (4)].info).is_const){
            if((yyvsp[(4) - (4)].info).type == INT_TYPE){
                fprintf(out,"sipush %d\n", (yyvsp[(4) - (4)].info).constnumVal);
            }
            if((yyvsp[(4) - (4)].info).type == BOOL_TYPE){
                fprintf(out,"iconst_%d\n", (yyvsp[(4) - (4)].info).constnumVal);
            }
        }
        fprintf(out,"istore %d\n",s.varn);
    }
    insert(s);
}
    break;

  case 31:
#line 542 "hw3.y"
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[(2) - (4)].strval));
    s.is_const=0;
    s.type = (yyvsp[(4) - (4)].info).type;
    if(symboltablestackid==0){
        //global
        s.is_global=1;
        char* type;
        if((yyvsp[(4) - (4)].info).type == INT_TYPE){
            type = "int";
        }
        if((yyvsp[(4) - (4)].info).type == BOOL_TYPE){
            type = "boolean";
        }
        fprintf(out,"field static %s %s\n",type,(yyvsp[(2) - (4)].strval));
    }else{
        s.is_global=0;
        s.varn=varcount;
        varcount++;
    }
    insert(s);
}
    break;

  case 32:
#line 565 "hw3.y"
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[(2) - (6)].strval));
    s.is_const=0;
    s.type = (yyvsp[(6) - (6)].info).type;

    if(symboltablestackid==0){
        //global
        s.is_global=1;
        char* type;
        if((yyvsp[(4) - (6)].info).type == INT_TYPE){
            type = "int";
        }
        if((yyvsp[(4) - (6)].info).type == BOOL_TYPE){
            type = "boolean";
        }
        fprintf(out,"field static %s %s = %d\n",type,(yyvsp[(2) - (6)].strval),(yyvsp[(6) - (6)].info).constnumVal);
    }else{
        s.is_global=0;
        s.varn=varcount;
        varcount++;
        if((yyvsp[(6) - (6)].info).is_const){
            if((yyvsp[(6) - (6)].info).type == INT_TYPE){
                fprintf(out,"sipush %d\n", (yyvsp[(6) - (6)].info).constnumVal);
            }
            if((yyvsp[(6) - (6)].info).type == BOOL_TYPE){
                fprintf(out,"iconst_%d\n", (yyvsp[(6) - (6)].info).constnumVal);
            }
        }
        fprintf(out,"istore %d\n",s.varn);
    }
    insert(s);
}
    break;

  case 33:
#line 601 "hw3.y"
    {create();}
    break;

  case 34:
#line 601 "hw3.y"
    {dump();drop();}
    break;

  case 35:
#line 605 "hw3.y"
    {
    fprintf(out, "\tmethod public static void main(java.lang.String[])\n");
    fprintf(out, "\tmax_stack 15\n");
    fprintf(out, "\tmax_locals 15\n");
    fprintf(out, "\t{\n");
    fprintf(out, "\t\treturn\n");
    fprintf(out, "\t}\n");
}
    break;

  case 37:
#line 614 "hw3.y"
    {
    fprintf(out, "\tmethod public static void main(java.lang.String[])\n");
    fprintf(out, "\tmax_stack 15\n");
    fprintf(out, "\tmax_locals 15\n");
    fprintf(out, "\t{\n");
    fprintf(out, "\t\treturn\n");
    fprintf(out, "\t}\n");
}
    break;

  case 45:
#line 638 "hw3.y"
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[(2) - (2)].strval));
    s.is_const=0;
    s.is_global=1;
    s.type = FUNCTION_TYPE;
    insert(s);
    create();
    varcount=0;
}
    break;

  case 46:
#line 647 "hw3.y"
    {
    struct symbol *fn =     lookup((yyvsp[(2) - (8)].strval),1);
    fn->returnType = (yyvsp[(8) - (8)].info).type;
    char* type;
    if((yyvsp[(8) - (8)].info).type == INT_TYPE){
        type = "int";
    }
    if((yyvsp[(8) - (8)].info).type == BOOL_TYPE){
        type = "boolean";
    }
    fprintf(out, "method public static %s %s(",type,(yyvsp[(2) - (8)].strval));
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
    break;

  case 47:
#line 683 "hw3.y"
    {
    if(strcmp((yyvsp[(2) - (12)].strval),(yyvsp[(12) - (12)].strval))==0){
    dump();
    drop();
    }else{
        printf("error 157");
    }

    if((yyvsp[(8) - (12)].info).type == INT_TYPE){
        fprintf(out, "sipush 0\n");
    }
    if((yyvsp[(8) - (12)].info).type == BOOL_TYPE){
        fprintf(out, "iconst_0\n");
    }
    fprintf(out, "ireturn\n");
    fprintf(out, "}\n");
}
    break;

  case 56:
#line 718 "hw3.y"
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[(1) - (3)].strval));
    s.is_const=0;
    s.is_global=0;
    s.varn=varcount;
    varcount++;
    s.type = (yyvsp[(3) - (3)].info).type;
    insert(s);
    }
    break;

  case 57:
#line 731 "hw3.y"
    {
    struct symbol s;
    strcpy(s.name,(yyvsp[(2) - (2)].strval));
    s.is_const=0;
    s.is_global=1;
    s.type = FUNCTION_TYPE;
    s.returnType = NULLTYPE;
    insert(s);
    create();
    varcount=0;
}
    break;

  case 58:
#line 742 "hw3.y"
    {
    struct symbol *fn =     lookup((yyvsp[(2) - (6)].strval),1);
    fprintf(out, "method public static void %s(",(yyvsp[(2) - (6)].strval));
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
    break;

  case 59:
#line 771 "hw3.y"
    {
    if(strcmp((yyvsp[(2) - (10)].strval),(yyvsp[(10) - (10)].strval))==0){
    dump();
    drop();
    }else{
        printf("error 157");
    }

    fprintf(out, "return\n");
    fprintf(out, "}\n");
}
    break;

  case 60:
#line 785 "hw3.y"
    {
    varcount=0;
    fprintf(out, "\tmethod public static void main(java.lang.String[])\n");
    fprintf(out, "\tmax_stack 15\n");
    fprintf(out, "\tmax_locals 15\n");
    fprintf(out, "\t{\n");
}
    break;

  case 61:
#line 791 "hw3.y"
    {
    fprintf(out, "\t\treturn\n");
    fprintf(out, "\t}\n");
}
    break;

  case 69:
#line 811 "hw3.y"
    {create();}
    break;

  case 70:
#line 811 "hw3.y"
    {dump();drop();}
    break;

  case 71:
#line 815 "hw3.y"
    {
    fprintf(out,"getstatic java.io.PrintStream java.lang.System.out\n");
}
    break;

  case 72:
#line 817 "hw3.y"
    {
    if((yyvsp[(3) - (3)].info).is_const){
        if((yyvsp[(3) - (3)].info).type == STRING_TYPE){
            char t[MAX_LINE_LENG];
            t[0]=(yyvsp[(3) - (3)].info).constVal[0];
            for(int i =1,j=1;i<MAX_LINE_LENG && j<MAX_LINE_LENG;i++){
                if((yyvsp[(3) - (3)].info).constVal[i]=='"' && (yyvsp[(3) - (3)].info).constVal[i+1]!=0){
                    t[j]='\\';
                    j++;
                }
                t[j]=(yyvsp[(3) - (3)].info).constVal[i];
                if((yyvsp[(3) - (3)].info).constVal[i]=0){
                    break;
                }
                j++;
            }
            fprintf(out,"ldc %s\n", t);
        }
        if((yyvsp[(3) - (3)].info).type == INT_TYPE){
            fprintf(out,"sipush %d\n", (yyvsp[(3) - (3)].info).constnumVal);
        }
        if((yyvsp[(3) - (3)].info).type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", (yyvsp[(3) - (3)].info).constnumVal);
        }
    }
    if((yyvsp[(3) - (3)].info).type == STRING_TYPE){
        fprintf(out,"invokevirtual void java.io.PrintStream.print(java.lang.String)\n");
    }
    if((yyvsp[(3) - (3)].info).type == INT_TYPE){
        fprintf(out,"invokevirtual void java.io.PrintStream.print(int)\n");
    }
    if((yyvsp[(3) - (3)].info).type == BOOL_TYPE){
        fprintf(out,"invokevirtual void java.io.PrintStream.print(boolean)\n");
    }
}
    break;

  case 73:
#line 852 "hw3.y"
    {
    fprintf(out, "getstatic java.io.PrintStream java.lang.System.out\n");
    fprintf(out, "invokevirtual void java.io.PrintStream.println()\n");
}
    break;

  case 74:
#line 856 "hw3.y"
    {
    if((yyvsp[(3) - (3)].info).is_const){
        if((yyvsp[(3) - (3)].info).type == INT_TYPE){
            fprintf(out,"sipush %d\n", (yyvsp[(3) - (3)].info).constnumVal);
        }
        if((yyvsp[(3) - (3)].info).type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", (yyvsp[(3) - (3)].info).constnumVal);
        }
    }
    struct symbol *s  =lookup((yyvsp[(1) - (3)].strval),1);
    char* type;
    if(s->type == INT_TYPE){
        type = "int";
    }
    if(s->type == BOOL_TYPE){
        type = "boolean";
    }
    if(s->is_global){
        fprintf(out, "putstatic %s %s.%s\n",type,classname,(yyvsp[(1) - (3)].strval));
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }

}
    break;

  case 75:
#line 880 "hw3.y"
    {
    if((yyvsp[(3) - (3)].info).is_const){
        fprintf(out,"iconst_%d\n", (yyvsp[(3) - (3)].info).constnumVal);
    }
    fprintf(out, "ifne Loopexit%d\n", loopc);
}
    break;

  case 76:
#line 886 "hw3.y"
    {
    fprintf(out, "goto Loopexit%d\n", loopc);
}
    break;

  case 77:
#line 890 "hw3.y"
    {
    if((yyvsp[(2) - (2)].info).is_const){
        if((yyvsp[(2) - (2)].info).type == INT_TYPE){
            fprintf(out,"sipush %d\n", (yyvsp[(2) - (2)].info).constnumVal);
        }
        if((yyvsp[(2) - (2)].info).type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", (yyvsp[(2) - (2)].info).constnumVal);
        }
    }
    fprintf(out, "ireturn\n");
}
    break;

  case 78:
#line 901 "hw3.y"
    {
    fprintf(out, "return\n");
}
    break;

  case 79:
#line 907 "hw3.y"
    {
    if((yyvsp[(2) - (3)].info).is_const){
        fprintf(out,"iconst_%d\n", (yyvsp[(2) - (3)].info).constnumVal);
    }
    (yyvsp[(2) - (3)].info).varn = lcount;
    lcount++;
    fprintf(out, "ifeq Lelse%d\n", (yyvsp[(2) - (3)].info).varn);
    create();
}
    break;

  case 80:
#line 915 "hw3.y"
    {
    dump();drop();
    fprintf(out, "goto Lexit%d\n", (yyvsp[(2) - (5)].info).varn);
    fprintf(out, "Lelse%d:\n", (yyvsp[(2) - (5)].info).varn);
    fprintf(out, "nop\n");
}
    break;

  case 81:
#line 921 "hw3.y"
    {
    fprintf(out, "Lexit%d:\n", (yyvsp[(2) - (9)].info).varn);
    fprintf(out, "nop\n");
}
    break;

  case 83:
#line 928 "hw3.y"
    {create();}
    break;

  case 84:
#line 928 "hw3.y"
    {dump();drop();}
    break;

  case 85:
#line 932 "hw3.y"
    {
    create();
    (yyvsp[(1) - (1)].info).varn = loopc;
    loopc = lcount;
    lcount++;
    fprintf(out, "Lbegin%d:\n", loopc);
}
    break;

  case 86:
#line 938 "hw3.y"
    {
    fprintf(out, "goto Lbegin%d\n", loopc);
    fprintf(out, "Loopexit%d:\n", loopc);
    fprintf(out, "nop\n");
    loopc = (yyvsp[(1) - (5)].info).varn;
    dump();
    drop();
}
    break;

  case 88:
#line 950 "hw3.y"
    {
    // i=0
    if((yyvsp[(5) - (5)].info).is_const){
        fprintf(out,"sipush %d\n", (yyvsp[(5) - (5)].info).constnumVal);    
    }
    struct symbol *s  =lookup((yyvsp[(3) - (5)].strval),1);
    if(s->is_global){
        fprintf(out, "putstatic int %s.%s\n",classname,(yyvsp[(3) - (5)].strval));
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }
    (yyvsp[(5) - (5)].info).varn = loopc;
    loopc = lcount;
    lcount++;
    fprintf(out, "Lbegin%d:\n", loopc);
    if(s->is_global){
        fprintf(out,"getstatic int %s.%s\n" ,classname ,(yyvsp[(3) - (5)].strval));
    }else{
        fprintf(out,"iload %d\n",s->varn);
    }
}
    break;

  case 89:
#line 970 "hw3.y"
    {
    // i>=n
    if((yyvsp[(9) - (9)].info).is_const){
        fprintf(out,"sipush %d\n", (yyvsp[(9) - (9)].info).constnumVal);
    }
    fprintf(out, "isub\n");
    fprintf(out, "iflt Loopexit%d\n", loopc);
    create();
}
    break;

  case 90:
#line 978 "hw3.y"
    {
    // i--
    struct symbol *s = lookup((yyvsp[(3) - (13)].strval),1);
    if(s->is_global){
        fprintf(out,"getstatic int %s.%s\n" ,classname ,(yyvsp[(3) - (13)].strval));
    }else{
        fprintf(out,"iload %d\n",s->varn);
    }
    fprintf(out, "sipush 1\n");
    fprintf(out, "isub\n");
    if(s->is_global){
        fprintf(out, "putstatic int %s.%s\n",classname,(yyvsp[(3) - (13)].strval));
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }

    fprintf(out, "goto Lbegin%d\n", loopc);
    fprintf(out, "Loopexit%d:\n", loopc);
    fprintf(out, "nop\n");
    loopc = (yyvsp[(5) - (13)].info).varn;
    dump();drop();
}
    break;

  case 91:
#line 1000 "hw3.y"
    {
    // i=0
    if((yyvsp[(4) - (4)].info).is_const){
        fprintf(out,"sipush %d\n", (yyvsp[(4) - (4)].info).constnumVal);    
    }
    struct symbol *s  =lookup((yyvsp[(2) - (4)].strval),1);
    if(s->is_global){
        fprintf(out, "putstatic int %s.%s\n",classname,(yyvsp[(2) - (4)].strval));
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }
    (yyvsp[(4) - (4)].info).varn = loopc;
    loopc = lcount;
    lcount++;
    fprintf(out, "Lbegin%d:\n", loopc);
    if(s->is_global){
        fprintf(out,"getstatic int %s.%s\n" ,classname ,(yyvsp[(2) - (4)].strval));
    }else{
        fprintf(out,"iload %d\n",s->varn);
    }
}
    break;

  case 92:
#line 1020 "hw3.y"
    {
    // i<=n
    if((yyvsp[(8) - (8)].info).is_const){
        fprintf(out,"sipush %d\n", (yyvsp[(8) - (8)].info).constnumVal);
    }
    fprintf(out, "isub\n");
    fprintf(out, "ifgt Loopexit%d\n", loopc);
    create();
}
    break;

  case 93:
#line 1028 "hw3.y"
    {
    // i++
    struct symbol *s = lookup((yyvsp[(2) - (12)].strval),1);
    if(s->is_global){
        fprintf(out,"getstatic int %s.%s\n" ,classname ,(yyvsp[(2) - (12)].strval));
    }else{
        fprintf(out,"iload %d\n",s->varn);
    }
    fprintf(out, "sipush 1\n");
    fprintf(out, "iadd\n");
    if(s->is_global){
        fprintf(out, "putstatic int %s.%s\n",classname,(yyvsp[(2) - (12)].strval));
    }else{
        fprintf(out,"istore %d\n",s->varn);
    }

    fprintf(out, "goto Lbegin%d\n", loopc);
    fprintf(out, "Loopexit%d:\n", loopc);
    fprintf(out, "nop\n");
    loopc = (yyvsp[(4) - (12)].info).varn;
    dump();
    drop();
}
    break;

  case 94:
#line 1055 "hw3.y"
    {
    struct symbol *fn =     lookup((yyvsp[(1) - (4)].strval),1);
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
    fprintf(out, "invokestatic %s %s.%s(",type,classname,(yyvsp[(1) - (4)].strval));
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
    break;

  case 97:
#line 1095 "hw3.y"
    {
    if((yyvsp[(1) - (1)].info).is_const){
        if((yyvsp[(1) - (1)].info).type == INT_TYPE){
            fprintf(out,"sipush %d\n", (yyvsp[(1) - (1)].info).constnumVal);
        }
        if((yyvsp[(1) - (1)].info).type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", (yyvsp[(1) - (1)].info).constnumVal);
        }
    }
}
    break;

  case 99:
#line 1106 "hw3.y"
    {
    if((yyvsp[(1) - (1)].info).is_const){
        if((yyvsp[(1) - (1)].info).type == INT_TYPE){
            fprintf(out,"sipush %d\n", (yyvsp[(1) - (1)].info).constnumVal);
        }
        if((yyvsp[(1) - (1)].info).type == BOOL_TYPE){
            fprintf(out,"iconst_%d\n", (yyvsp[(1) - (1)].info).constnumVal);
        }
    }
}
    break;


/* Line 1267 of yacc.c.  */
#line 2895 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1118 "hw3.y"


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
