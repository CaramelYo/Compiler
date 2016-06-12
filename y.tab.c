/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacc.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include "struct.h"
	#define BSIZE 4096

	void yyerror(char *s);
	int yylex(void);
	FILE *yyin;

	char* gettemp(char* v);
	char* getsave(char* v);
	char* getcons(int v);
	void getid(const char* v, char* p);
	char idmain[20];
	char ins[BSIZE][300];
	void cal(const struct Arithmetic *ar);
	int label, insid, para;
	int usedtemp[8], usedstemp[2], usedsave[8];

	struct Storage temp[8], save[8];
	struct Constant cons[8];
	struct Arithmetic ar;

	FILE *f;

#line 93 "y.tab.c" /* yacc.c:339  */

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
    ID = 258,
    CHARV = 259,
    NUMBER = 260,
    INT = 261,
    CHAR = 262,
    RETURN = 263,
    BREAK = 264,
    IF = 265,
    ELSE = 266,
    WHILE = 267,
    PRINT = 268,
    READ = 269,
    LBRACKET = 270,
    RBRACKET = 271,
    LPARENTHESIS = 272,
    RPARENTHESIS = 273,
    LBRACE = 274,
    RBRACE = 275,
    SEMICOLON = 276,
    COMMA = 277,
    EQUAL = 278,
    NOTEQUAL = 279,
    LESSEQUAL = 280,
    GREATEQUAL = 281,
    DOUBLESLASH = 282,
    AND = 283,
    OR = 284
  };
#endif
/* Tokens.  */
#define ID 258
#define CHARV 259
#define NUMBER 260
#define INT 261
#define CHAR 262
#define RETURN 263
#define BREAK 264
#define IF 265
#define ELSE 266
#define WHILE 267
#define PRINT 268
#define READ 269
#define LBRACKET 270
#define RBRACKET 271
#define LPARENTHESIS 272
#define RPARENTHESIS 273
#define LBRACE 274
#define RBRACE 275
#define SEMICOLON 276
#define COMMA 277
#define EQUAL 278
#define NOTEQUAL 279
#define LESSEQUAL 280
#define GREATEQUAL 281
#define DOUBLESLASH 282
#define AND 283
#define OR 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 28 "yacc.y" /* yacc.c:355  */
 int num; char ch; char* chs; float f; double d; 

#line 191 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 206 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   123

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  115

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,     2,     2,     2,     2,     2,
      37,    38,    32,    30,    44,    31,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
      34,    45,    35,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,    40,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    70,    71,    74,   170,   171,   174,   181,
     182,   185,   188,   189,   192,   193,   196,   239,   240,   243,
     254,   255,   258,   264,   265,   268,   271,   272,   275,   276,
     277,   281,   282,   313,   346,   347,   352,   360,   398,   413,
     424,   473,   474,   486,   487,   490,   491,   494,   501,   504,
     505,   508,   534,   535,   538,   539,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "CHARV", "NUMBER", "INT", "CHAR",
  "RETURN", "BREAK", "IF", "ELSE", "WHILE", "PRINT", "READ", "LBRACKET",
  "RBRACKET", "LPARENTHESIS", "RPARENTHESIS", "LBRACE", "RBRACE",
  "SEMICOLON", "COMMA", "EQUAL", "NOTEQUAL", "LESSEQUAL", "GREATEQUAL",
  "DOUBLESLASH", "AND", "OR", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'",
  "'!'", "'('", "')'", "'{'", "'}'", "'['", "']'", "';'", "','", "'='",
  "$accept", "Program", "DeclList", "DeclListA", "Decl", "VarDecl",
  "VarDeclA", "FunDecl", "VarDeclList", "ParamDeclList",
  "ParamDeclListTail", "ParamDeclListTailA", "ParamDecl", "ParamDeclA",
  "Block", "Type", "StmtList", "StmtListA", "Stmt", "Expr", "ExprIdTail",
  "ExprArrayTail", "ExprA", "ExprList", "ExprListTail", "ExprListTailA",
  "UnaryOp", "BinOp", YY_NULLPTR
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
      43,    45,    42,    47,    60,    62,    33,    40,    41,   123,
     125,    91,    93,    59,    44,    61
};
# endif

#define YYPACT_NINF -78

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-78)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      25,   -78,   -78,     5,   -78,    25,    20,   -78,   -78,   -31,
      25,    22,   -78,   -78,   -78,   -78,    -4,   -78,    -2,    40,
       6,     7,    25,   -78,     9,   -78,    25,   -78,   -78,    10,
     -78,    25,     8,    46,   -78,   -78,    47,    88,     4,    11,
      16,    18,    53,    54,   -78,   -78,     4,   -78,   -78,    19,
       8,    15,     4,   -39,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     4,     4,     4,   -78,
     -78,     4,   -78,    23,   -78,     4,     4,    24,    31,    30,
     -78,   -78,   -78,   -78,   -78,   -78,    39,    48,   -78,    21,
     -78,   -78,   -78,    49,    51,   -78,   -78,    88,     4,   -78,
      88,    70,     8,     8,   -78,   -78,   -78,     4,   -78,   -78,
      74,   -78,   -78,     8,   -78
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    23,    24,     0,     2,     4,     0,     1,     3,     0,
      15,     0,     9,     5,     6,     7,     0,    14,    18,     0,
       0,     0,     0,    16,    21,    10,    13,    11,    17,     0,
      19,    13,     0,     0,    20,    12,    48,    48,     0,     0,
       0,     0,     0,     0,    54,    55,     0,    28,    34,     0,
      27,     0,     0,     0,    60,    61,    63,    65,    66,    67,
      56,    57,    58,    59,    62,    64,    50,     0,     0,    40,
      41,     0,    38,     0,    31,     0,     0,     0,     0,     0,
      22,    26,    25,    29,    37,     8,    53,     0,    49,     0,
      44,    47,    30,     0,     0,    35,    36,    48,     0,    51,
      48,    48,     0,     0,    39,    52,    42,     0,    43,    45,
       0,    33,    46,     0,    32
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -78,   -78,    57,   -78,   -78,   -78,    37,   -78,    60,   -78,
      75,   -78,   -78,   -78,    85,    -7,    58,   -78,   -77,   -38,
     -78,   -78,   -36,   -78,    12,   -78,   -78,   -78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    13,    31,    14,    15,    32,    16,
      17,    23,    18,    30,    48,     6,    49,    82,    50,    51,
      69,   108,    70,    87,    88,    99,    52,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      73,    72,    11,    19,    12,     7,    10,    36,    79,    37,
      11,    36,    12,    37,    84,    19,    38,    39,    40,    33,
      41,    42,    43,     9,    33,   110,   111,    20,    86,    89,
      90,     1,     2,    91,    21,    44,   114,    93,    94,    44,
      45,    46,    22,    24,    45,    46,    26,    26,    25,    53,
      29,    47,    34,    75,    74,    76,    77,    78,    83,    80,
      86,   104,     8,   101,   106,   109,    92,    95,    97,   112,
      54,    55,    56,    57,    96,    58,    59,    60,    61,    62,
      63,    64,    65,    98,    66,   113,   100,   102,    67,   103,
      85,    35,    68,    54,    55,    56,    57,    28,    58,    59,
      60,    61,    62,    63,    64,    65,    27,     0,    81,     0,
     105,    54,    55,    56,    57,   107,    58,    59,    60,    61,
      62,    63,    64,    65
};

static const yytype_int8 yycheck[] =
{
      38,    37,    41,    10,    43,     0,    37,     3,    46,     5,
      41,     3,    43,     5,    52,    22,     8,     9,    10,    26,
      12,    13,    14,     3,    31,   102,   103,     5,    66,    67,
      68,     6,     7,    71,    38,    31,   113,    75,    76,    31,
      36,    37,    44,     3,    36,    37,    39,    39,    42,     3,
      41,    43,    42,    37,    43,    37,     3,     3,    43,    40,
      98,    97,     5,    42,   100,   101,    43,    43,    38,   107,
      23,    24,    25,    26,    43,    28,    29,    30,    31,    32,
      33,    34,    35,    44,    37,    11,    38,    38,    41,    38,
      53,    31,    45,    23,    24,    25,    26,    22,    28,    29,
      30,    31,    32,    33,    34,    35,    21,    -1,    50,    -1,
      98,    23,    24,    25,    26,    45,    28,    29,    30,    31,
      32,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    47,    48,    49,    61,     0,    48,     3,
      37,    41,    43,    50,    52,    53,    55,    56,    58,    61,
       5,    38,    44,    57,     3,    42,    39,    60,    56,    41,
      59,    51,    54,    61,    42,    54,     3,     5,     8,     9,
      10,    12,    13,    14,    31,    36,    37,    43,    60,    62,
      64,    65,    72,     3,    23,    24,    25,    26,    28,    29,
      30,    31,    32,    33,    34,    35,    37,    41,    45,    66,
      68,    73,    68,    65,    43,    37,    37,     3,     3,    65,
      40,    62,    63,    43,    65,    52,    65,    69,    70,    65,
      65,    65,    43,    65,    65,    43,    43,    38,    44,    71,
      38,    42,    38,    38,    68,    70,    68,    45,    67,    68,
      64,    64,    65,    11,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    50,    50,    51,    52,
      52,    53,    54,    54,    55,    55,    56,    57,    57,    58,
      59,    59,    60,    61,    61,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    65,
      65,    66,    66,    66,    66,    67,    67,    68,    68,    69,
      69,    70,    71,    71,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     1,     1,     3,     1,
       3,     4,     2,     0,     1,     0,     2,     2,     0,     3,
       2,     0,     4,     1,     1,     2,     1,     0,     1,     2,
       3,     2,     7,     5,     1,     3,     3,     2,     2,     4,
       2,     1,     4,     4,     2,     1,     2,     2,     0,     1,
       0,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 52 "yacc.y" /* yacc.c:1646  */
    {
				printf("file write\n");
				
				int i;
				for(i = 0; i<insid; ++i)
				{
						printf("%s", ins[i]);
					if(ins[i][0] != ')' && ins[i][0] != 'E' && ins[i][0] != 'W' && ins[i][0] != 'F')
					{
						fprintf(f, "%s", ins[i]);
					}
				}

				printf("file close\n");
				fclose(f);
			}
#line 1382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 75 "yacc.y" /* yacc.c:1646  */
    {
				char id[20];
				int i, j, boolean;

				getid((yyvsp[-1].chs), id);

				for(i = 0; i<20; ++i)
				{
					//to compare
					//printf("id = %c main = %c\n", id[i], main[i]);
					if(id[i] != idmain[i])
						break;
				}

				if( i == 20 )
					boolean = 1;
				else
					boolean = 0;

				printf("del ID = %s Decl = %s boolean = %d\n", id, (yyvsp[0].chs), boolean);
				//if( id != "idMain" && $3 == "F" )
				if( !boolean  && (yyvsp[0].chs) == "F" )
				{
					//function
					printf("function\n");
					i = insid -1;

					while( ins[i][0] != 'F' )
					{
						for(j = 0; j < 300; ++j)
						{
							if(ins[i][j] == '$' && ins[i][j+1] == 's')
							{
								//found
								ins[i][j+1] = 't';

								//to free save
								usedsave[ (ins[i][j+2] - 48) ] = 0;
								save[ (ins[i][j+2] - 48) ].used = 0;
							}
							if(ins[i][j] == '\0')
							{
								break;
							}
						}
						--i;
					}

					switch(para)
					{
						case 0:
							sprintf(ins[i], "%s:\n", id);
							break;
						case 1:
							sprintf(ins[i], "%s:\n\tmove $t0, $a0\n", id);
							break;
						case 2:
							sprintf(ins[i], "%s:\n\tmove $t0, $a0\n\tmove $t1, $a1\n", id);
							break;
						case 3:
							sprintf(ins[i], "%s:\n\tmove $t0, $a0\n\tmove $t1, $a1\n\tmove $t2, $a2\n", id);
							break;
					}
					sprintf(ins[insid++], "F");
				}

				if(boolean)
				{
					//main function
					/*
					int i = insid -1, j;

					while( i >= 0)
					{
						for(j = 0; j<300; ++j)
						{
							if(ins[i][j] == '$' && ins[i][j+1] == 'r' && ins[i][j+2] == 'a')
							{
								sprintf(ins[i], "\tli $v0, 10\n\tsyscall\n");
								break;
							}
						}
					}
					*/

					i = insid - 1;
					while(ins[i][0] != 'F')
						--i;
					sprintf(ins[i], "main:\n");

					sprintf(ins[insid-1], "\tli $v0, 10\n\tsyscall\n");
				}
			}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 170 "yacc.y" /* yacc.c:1646  */
    {(yyval.chs) = "V";}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 171 "yacc.y" /* yacc.c:1646  */
    {(yyval.chs) = "F";}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 175 "yacc.y" /* yacc.c:1646  */
    {
				//declaration
				printf("declaration\n");
			}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 181 "yacc.y" /* yacc.c:1646  */
    {}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 182 "yacc.y" /* yacc.c:1646  */
    {}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 185 "yacc.y" /* yacc.c:1646  */
    {}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 193 "yacc.y" /* yacc.c:1646  */
    { para = 0; }
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 197 "yacc.y" /* yacc.c:1646  */
    {
					if((yyvsp[0].chs) == "")
					{
						//single
						para = 1;
					}
					else
					{
						++para;
					}

					char p[20];
					int i, j;

					for(i = 0; i<20; ++i)
						p[i] = '\0';

					for( i = 0; i< 20; ++i)
					{
						if((yyvsp[-1].chs)[i] == 'i' && (yyvsp[-1].chs)[i+1] == 'd')
						{
							//found
							for(j = 0; j<20; ++i, ++j)
							{
								if( ((yyvsp[-1].chs)[i] >= 65 && (yyvsp[-1].chs)[i] <=90) || ((yyvsp[-1].chs)[i] >=97 && (yyvsp[-1].chs)[i] <= 122) )
								{
									p[j] = (yyvsp[-1].chs)[i];
								}
								else
								{
									i = 20;
									break;
								}
							}
						}
					}

					getsave(p);
					printf("$1 = %s, temp = %s p = %s\n", (yyvsp[-1].chs), getsave(p), p);
				}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 239 "yacc.y" /* yacc.c:1646  */
    {}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 240 "yacc.y" /* yacc.c:1646  */
    {(yyval.chs) = "";}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 244 "yacc.y" /* yacc.c:1646  */
    {
				/*
				getsave($2);
				printf("$2 = %s, temp = %s\n", $2, getsave($2));
				*/
				printf("Pid = %s\n", (yyvsp[-1].chs));
				(yyval.chs) = (yyvsp[-1].chs);
			}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 254 "yacc.y" /* yacc.c:1646  */
    {}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 259 "yacc.y" /* yacc.c:1646  */
    { 
				(yyval.chs) = (yyvsp[-1].chs);
			}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 275 "yacc.y" /* yacc.c:1646  */
    {}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 278 "yacc.y" /* yacc.c:1646  */
    {
				sprintf(ins[insid++], "\tmove $v0, %s\n\tjr $ra\n", getsave((yyvsp[-1].chs)));
			}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 281 "yacc.y" /* yacc.c:1646  */
    {}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 283 "yacc.y" /* yacc.c:1646  */
    {
				//to find the scope
				int i, length1, length2;
				for(i = insid - 1; i>-1; --i)
				{
					if(ins[i][0] == 'E')
					{
						//else
						length2 = i;
					}
					if(ins[i][0] == ')')
					{
						//condi
						length1 = i;
						break;
					}
				}

				if((yyvsp[-4].chs) == "Atemp")
				{
					sprintf(ins[length1], "\tbeq %s, $0, else%d\n", getsave("Atemp"), label);
				}
				else
				{
					sprintf(ins[length1], "\tbeq %s, $0, else%d\n", ar.op2, label);
				}

				sprintf(ins[length2], "\tb endif%d\nelse%d:\n", label, label);
				sprintf(ins[insid++], "endif%d:\n", label++);
			}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 314 "yacc.y" /* yacc.c:1646  */
    {
				//to find the scope
				int i, length1, length2;
				for(i = insid - 1; i>-1; --i)
				{
					if(ins[i][0] == ')')
					{
						//condi
						length2 = i;
					}
					if(ins[i][0] == 'W')
					{
						//while
						length1 = i;
						break;
					}
				}

				sprintf(ins[length1], "while%d:\n", label);

				if((yyvsp[-2].chs) == "Atemp")
				{
					sprintf(ins[length2], "\tbeq %s, $0, endwhile%d\n", getsave("Atemp"), label);
				}
				else
				{
					sprintf(ins[length2], "\tbeq %s, $0, endwhile%d\n", ar.op2, label);
				}

				sprintf(ins[insid++], "\tb while%d\nendwhile%d:\n", label, label);
				++label;
			}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 348 "yacc.y" /* yacc.c:1646  */
    {
				printf("print ID %s\n", (yyvsp[-1].chs));
				sprintf(ins[insid++], "\tmove $a0, %s\n\tli $v0, 1\n\tsyscall\n", getsave((yyvsp[-1].chs)));
			}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 353 "yacc.y" /* yacc.c:1646  */
    {
				printf("read ID %s\n", (yyvsp[-1].chs));

				sprintf(ins[insid++], "\tli $v0, 5\n\tsyscall\n\tmove %s, $v0\n", getsave((yyvsp[-1].chs)));
			}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 361 "yacc.y" /* yacc.c:1646  */
    {
				(yyval.chs) = "Atemp";

				switch((yyvsp[-1].ch))
				{
					case '-':
						printf("minus\n");

						if((yyvsp[0].chs) == "Atemp")
						{
							sprintf(ins[insid++], "\tneg %s, %s\n", getsave("Atemp"), getsave("Atemp"));
						}
						else
						{
							sprintf(ins[insid++], "\tneg %s, %s\n", getsave("Atemp"), ar.op2);
						}
						break;

					case '!':
						printf("!\n");

						if((yyvsp[0].chs) == "Atemp")
						{
							sprintf(ins[insid++], "\tbeq, %s, $0, zero%d\n\tmove %s, $0\n\tb endzero%d\nzero%d:\n\tmove %s, 1\nendzero%d:\n", getsave("Atemp"), label, getsave("Atemp"), label, label, getsave("Atemp"), label);
						}
						else
						{
							sprintf(ins[insid++], "\tbeq, %s, $0, zero%d\n\tmove %s, $0\n\tb endzero%d\nzero%d:\n\tmove %s, 1\nendzero%d:\n", ar.op2, label, getsave("Atemp"), label, label, getsave("Atemp"), label);
						}

						++label;
						break;
					default:
						fprintf(stderr, "UnaryOp Error!\n");
						return;
				}
			}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 399 "yacc.y" /* yacc.c:1646  */
    {
				if((yyvsp[0].chs) == "")
				{
					//last
					sprintf(ar.op2, "%s", getcons((yyvsp[-1].num)));
					(yyval.chs) = getcons((yyvsp[-1].num));
				}
				else
				{
					sprintf(ar.op1, "%s", getcons((yyvsp[-1].num)));
					(yyval.chs) = "Atemp";
					cal(&ar);
				}
			}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 414 "yacc.y" /* yacc.c:1646  */
    {
				sprintf(ar.op1, "%s", getsave((yyvsp[-2].chs)));
				(yyval.chs) = "Atemp";

				if((yyvsp[0].chs) != "")
				{
					cal(&ar);
				}
				
			}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 425 "yacc.y" /* yacc.c:1646  */
    {
				if((yyvsp[0].chs)[0] == 'F')
				{
					//function call
					char f[20];
					getid((yyvsp[-1].chs), f);

					sprintf(ins[insid++], "\tjal %s\n\tmove %s, $v0\n", f, getsave("Atemp"));
					(yyvsp[-1].chs) = "Atemp";
				}

				if((yyvsp[0].chs) == "")
				{
					//single value
					sprintf(ar.op2, "%s", getsave((yyvsp[-1].chs)));
				}
				else if((yyvsp[0].chs) == "F0")
				{
					sprintf(ar.op2, "%s", getsave((yyvsp[-1].chs)));
					printf("F0 : %s\n", (yyvsp[-1].chs));
					(yyval.chs) = (yyvsp[-1].chs);
				}
				else if (ar.op == '=' && ((yyvsp[0].chs)[0] >= 48 && (yyvsp[0].chs)[0] <= 57))
				{
					sprintf(ins[insid++], "\tli %s, %s\n", getsave((yyvsp[-1].chs)), (yyvsp[0].chs));
				}
				else if(ar.op == '=' || (yyvsp[0].chs) == "Atemp")
				{
					sprintf(ar.op1, "%s", getsave((yyvsp[-1].chs)));
					sprintf(ar.op2, "%s", getsave((yyvsp[0].chs)));
					(yyval.chs) = "Atemp";
					cal(&ar);
				}
				else if((yyvsp[0].chs) == "FA")
				{
					sprintf(ar.op1, "%s", getsave((yyvsp[-1].chs)));
					(yyval.chs) = "Atemp";
					cal(&ar);
				}
				else
				{
					sprintf(ar.op1, "%s", getsave((yyvsp[-1].chs)));
					(yyval.chs) = "Atemp";
					cal(&ar);
				}
			}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 475 "yacc.y" /* yacc.c:1646  */
    {
				//function call
				if((yyvsp[0].chs) != "")
				{
					(yyval.chs) = "FA";
				}
				else
				{
					(yyval.chs) = "F0";
				}
			}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 486 "yacc.y" /* yacc.c:1646  */
    {}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 487 "yacc.y" /* yacc.c:1646  */
    { ar.op = '='; (yyval.chs) = (yyvsp[0].chs);}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 491 "yacc.y" /* yacc.c:1646  */
    {}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 495 "yacc.y" /* yacc.c:1646  */
    {
				printf("%c!\n", (yyvsp[-1].ch));
				if((yyvsp[-1].ch) != '\0')
					ar.op = (yyvsp[-1].ch);
				(yyval.chs) = (yyvsp[0].chs);
			}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 501 "yacc.y" /* yacc.c:1646  */
    {(yyval.chs) = "";}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 509 "yacc.y" /* yacc.c:1646  */
    {
				if((yyvsp[0].chs) == "")
				{
					//single
					para = 0;
				}

				printf("list $1 = %s\n", (yyvsp[-1].chs));

				if((yyvsp[-1].chs)[0] >= 48 && (yyvsp[-1].chs)[1] <= 57)
				{
					//number only
					sprintf(ins[insid++], "\tli $a%d, %s\n", para++, (yyvsp[-1].chs));
				}
				else if((yyvsp[-1].chs) == "Atemp")
				{
					sprintf(ins[insid++], "\tmove $a%d, %s\n", para++, getsave("Atemp"));
				}
				else
				{
					sprintf(ins[insid++], "\tmove $a%d, %s\n", para++, getsave((yyvsp[-1].chs)));
				}
			}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 534 "yacc.y" /* yacc.c:1646  */
    { }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 535 "yacc.y" /* yacc.c:1646  */
    { (yyval.chs) = ""; }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 546 "yacc.y" /* yacc.c:1646  */
    {(yyval.ch) = '\0';}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 547 "yacc.y" /* yacc.c:1646  */
    {(yyval.ch) = '\0';}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 549 "yacc.y" /* yacc.c:1646  */
    {(yyval.ch) = '\0';}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 551 "yacc.y" /* yacc.c:1646  */
    {(yyval.ch) = '\0';}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 552 "yacc.y" /* yacc.c:1646  */
    {(yyval.ch) = '\0';}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 553 "yacc.y" /* yacc.c:1646  */
    {(yyval.ch) = '\0';}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1978 "y.tab.c" /* yacc.c:1646  */
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
#line 555 "yacc.y" /* yacc.c:1906  */


int main (int argc, char** argv)
{
	//to read test.c
	yyin = fopen(argv[1], "r");
	if(!yyin)
	{
		fprintf(stderr, "yyin GG\n");
		return 0;
	}

	//to open the .s file
	f = fopen("Compiler.s", "w");
	if(!f)
	{
		fprintf(stderr, "Compiler.s GG\n");
		return 0;
	}

	//to init
	int i;
	for(i =0; i<8; ++i)
	{
		temp[i].used = 0;
		save[i].used = 0;
		usedtemp[i] = 0;
		usedsave[i] = 0;
		cons[i].value = -1;
	}
	usedstemp[0] = 0;
	usedstemp[1] = 0;


	label = 0;
	insid = 0;
	sprintf(ins[insid++], "F");
	sprintf(idmain, "idMain");

	printf("main start!\n");
	fprintf(f, "\t.text\n\t.globl main\n\n");

	do
	{
		yyparse();
	}
	while(!feof(yyin));

	return 0;
}

char* getsave(char* v)
{
	int i, j, length;

	i = 0;

	//to ensure it is a idXxxxx
	while( (v[i] >= 65 && v[i] <= 90) || (v[i] >= 97 && v[i] <= 122))
		++i;

	length = i;

	for(i = 0; i< 8; ++i)
	{
		if(save[i].used)
		{
			for(j = 0; j<length; ++j)
			{
				if(save[i].name[j] != v[j])
					break;
			}

			if(j == length)
			{
				//found
				return save[i].rg;
			}
		}
	}

	//not found
	printf("new a register ");
	for(i = 0; i<length; ++i)
		printf("%c", v[i]);
	printf("\n");

	for(i = 0; i<8; ++i)
	{
		if(!usedsave[i])
		{
			
			for(j = 0; j<8; ++j)
			{
				if(!save[j].used)
				{
					//not used
					usedsave[i] = 1;
					save[j].used = 1;

					sprintf(save[j].rg, "$s%d", i);
			
					for(j = 0; j<length; ++j)
					{
						save[i].name[j] = v[j];
					}
					return save[i].rg;
				}
			}
		}
	}

	//no register
	yyerror("no register");

	return "GG";
}


char* gettemp(char* v)
{
	int i, j, length;

	i = 0;

	//to ensure it is a idXxxxx
	while( (v[i] >= 65 && v[i] <= 90) || (v[i] >= 97 && v[i] <= 122))
		++i;

	length = i;

	for(i = 0; i< 8; ++i)
	{
		if(temp[i].used)
		{
			for(j = 0; j<length; ++j)
			{
				if(temp[i].name[j] != v[j])
					break;
			}

			if(j == length)
			{
				//found
				return temp[i].rg;
			}
		}
	}

	//not found
	printf("new a register ");
	for(i = 0; i<length; ++i)
		printf("%c", v[i]);
	printf("\n");

	for(i = 0; i<8; ++i)
	{
		if(!usedtemp[i])
		{
			
			for(j = 0; j<8; ++j)
			{
				if(!temp[j].used)
				{
					//not used
					usedtemp[i] = 1;
					temp[j].used = 1;

					sprintf(temp[j].rg, "$t%d", i);
			
					for(j = 0; j<length; ++j)
					{
						temp[i].name[j] = v[j];
					}
					printf("new over\n");
					return temp[i].rg;
				}
			}
		}
	}

	//no register
	yyerror("no register");

	return "GG";
}

char* getcons(int v)
{
	int i;
	for(i = 0; i<8; ++i)
	{
		if(cons[i].value == v)
		{
			//found
			return cons[i].tostring;
		}
	}

	//not found
	for(i = 0; i<8; ++i)
	{
		if(cons[i].value == -1)
		{
			//not used
			cons[i].value = v;
			sprintf(cons[i].tostring, "%d", v);
			return cons[i].tostring;
		}
	}

	//cannot create
	yyerror("no Constants");
	return "GG";
}

void getid(const char* v, char* id)
{
	int i, j;

	for(i = 0; i<20; ++i)
	{
		if( (v[i] >= 65 && v[i] <=90) || (v[i] >= 97 && v[i] <= 122) )
		{
			id[i] = v[i];
		}
		else
		{
			for(; i< 20; ++i)
			{
				id[i] = '\0';
			}
		}
	}
}

void cal(const struct Arithmetic *ar)
{
	switch(ar->op)
	{
		case '+':
			sprintf(ins[insid++], "\tadd ");
			break;
		case '-':
			sprintf(ins[insid++], "\tsub ");
			break;
		case '*':
			sprintf(ins[insid++], "\tmul ");
			break;
		case '/':
			sprintf(ins[insid++], "\tdiv ");
			break;
		case '<':
			sprintf(ins[insid++], "\tslt ");
			break;
		case '>':
			sprintf(ins[insid++], "\tsgt ");
			break;
		case 'e':
			sprintf(ins[insid++], "\tseq ");
			break;
		case 'n':
			sprintf(ins[insid++], "\tsne ");
			break;
		case 'l':
			sprintf(ins[insid++], "\tsle ");
			break;
		case 'g':
			sprintf(ins[insid++], "\tsge ");
			break;
		case 'a':
			sprintf(ins[insid++], "\tand ");
			break;
		case 'o':
			sprintf(ins[insid++], "\tor ");
		case '=':
			sprintf(ins[insid++], "\tmove %s, %s\n", ar->op1, ar->op2);
			return;
		default:
			return;
	}

	sprintf(ins[insid++], "%s, %s, %s\n", getsave("Atemp"), ar->op1, ar->op2);
}

void yyerror (char* s)
{
	fprintf(stderr, "%s\n", s);
}


