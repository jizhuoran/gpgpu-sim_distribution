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


/* Substitute the variable and function names.  */
#define yyparse         ptx_parse
#define yylex           ptx_lex
#define yyerror         ptx_error
#define yydebug         ptx_debug
#define yynerrs         ptx_nerrs

#define yylval          ptx_lval
#define yychar          ptx_char

/* Copy the first part of user declarations.  */

#line 75 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:339  */

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
   by #include "ptx.tab.h".  */
#ifndef YY_PTX_HOME_ZRJI_GPGPU_SIM_DISTRIBUTION_SRC_PTX_TAB_H_INCLUDED
# define YY_PTX_HOME_ZRJI_GPGPU_SIM_DISTRIBUTION_SRC_PTX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ptx_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STRING = 258,
    OPCODE = 259,
    ALIGN_DIRECTIVE = 260,
    BRANCHTARGETS_DIRECTIVE = 261,
    BYTE_DIRECTIVE = 262,
    CALLPROTOTYPE_DIRECTIVE = 263,
    CALLTARGETS_DIRECTIVE = 264,
    CONST_DIRECTIVE = 265,
    CONSTPTR_DIRECTIVE = 266,
    PTR_DIRECTIVE = 267,
    ENTRY_DIRECTIVE = 268,
    EXTERN_DIRECTIVE = 269,
    FILE_DIRECTIVE = 270,
    FUNC_DIRECTIVE = 271,
    GLOBAL_DIRECTIVE = 272,
    LOCAL_DIRECTIVE = 273,
    LOC_DIRECTIVE = 274,
    MAXNCTAPERSM_DIRECTIVE = 275,
    MAXNNREG_DIRECTIVE = 276,
    MAXNTID_DIRECTIVE = 277,
    MINNCTAPERSM_DIRECTIVE = 278,
    PARAM_DIRECTIVE = 279,
    PRAGMA_DIRECTIVE = 280,
    REG_DIRECTIVE = 281,
    REQNTID_DIRECTIVE = 282,
    SECTION_DIRECTIVE = 283,
    SHARED_DIRECTIVE = 284,
    SREG_DIRECTIVE = 285,
    STRUCT_DIRECTIVE = 286,
    SURF_DIRECTIVE = 287,
    TARGET_DIRECTIVE = 288,
    TEX_DIRECTIVE = 289,
    UNION_DIRECTIVE = 290,
    VERSION_DIRECTIVE = 291,
    ADDRESS_SIZE_DIRECTIVE = 292,
    VISIBLE_DIRECTIVE = 293,
    IDENTIFIER = 294,
    INT_OPERAND = 295,
    FLOAT_OPERAND = 296,
    DOUBLE_OPERAND = 297,
    S8_TYPE = 298,
    S16_TYPE = 299,
    S32_TYPE = 300,
    S64_TYPE = 301,
    U8_TYPE = 302,
    U16_TYPE = 303,
    U32_TYPE = 304,
    U64_TYPE = 305,
    F16_TYPE = 306,
    F32_TYPE = 307,
    F64_TYPE = 308,
    FF64_TYPE = 309,
    B8_TYPE = 310,
    B16_TYPE = 311,
    B32_TYPE = 312,
    B64_TYPE = 313,
    BB64_TYPE = 314,
    BB128_TYPE = 315,
    PRED_TYPE = 316,
    TEXREF_TYPE = 317,
    SAMPLERREF_TYPE = 318,
    SURFREF_TYPE = 319,
    V2_TYPE = 320,
    V3_TYPE = 321,
    V4_TYPE = 322,
    COMMA = 323,
    PRED = 324,
    HALF_OPTION = 325,
    EQ_OPTION = 326,
    NE_OPTION = 327,
    LT_OPTION = 328,
    LE_OPTION = 329,
    GT_OPTION = 330,
    GE_OPTION = 331,
    LO_OPTION = 332,
    LS_OPTION = 333,
    HI_OPTION = 334,
    HS_OPTION = 335,
    EQU_OPTION = 336,
    NEU_OPTION = 337,
    LTU_OPTION = 338,
    LEU_OPTION = 339,
    GTU_OPTION = 340,
    GEU_OPTION = 341,
    NUM_OPTION = 342,
    NAN_OPTION = 343,
    CF_OPTION = 344,
    SF_OPTION = 345,
    NSF_OPTION = 346,
    LEFT_SQUARE_BRACKET = 347,
    RIGHT_SQUARE_BRACKET = 348,
    WIDE_OPTION = 349,
    SPECIAL_REGISTER = 350,
    MINUS = 351,
    PLUS = 352,
    COLON = 353,
    SEMI_COLON = 354,
    EXCLAMATION = 355,
    PIPE = 356,
    RIGHT_BRACE = 357,
    LEFT_BRACE = 358,
    EQUALS = 359,
    PERIOD = 360,
    BACKSLASH = 361,
    DIMENSION_MODIFIER = 362,
    RN_OPTION = 363,
    RZ_OPTION = 364,
    RM_OPTION = 365,
    RP_OPTION = 366,
    RNI_OPTION = 367,
    RZI_OPTION = 368,
    RMI_OPTION = 369,
    RPI_OPTION = 370,
    UNI_OPTION = 371,
    GEOM_MODIFIER_1D = 372,
    GEOM_MODIFIER_2D = 373,
    GEOM_MODIFIER_3D = 374,
    SAT_OPTION = 375,
    FTZ_OPTION = 376,
    NEG_OPTION = 377,
    SYNC_OPTION = 378,
    RED_OPTION = 379,
    ARRIVE_OPTION = 380,
    ATOMIC_POPC = 381,
    ATOMIC_AND = 382,
    ATOMIC_OR = 383,
    ATOMIC_XOR = 384,
    ATOMIC_CAS = 385,
    ATOMIC_EXCH = 386,
    ATOMIC_ADD = 387,
    ATOMIC_INC = 388,
    ATOMIC_DEC = 389,
    ATOMIC_MIN = 390,
    ATOMIC_MAX = 391,
    LEFT_ANGLE_BRACKET = 392,
    RIGHT_ANGLE_BRACKET = 393,
    LEFT_PAREN = 394,
    RIGHT_PAREN = 395,
    APPROX_OPTION = 396,
    FULL_OPTION = 397,
    ANY_OPTION = 398,
    ALL_OPTION = 399,
    BALLOT_OPTION = 400,
    GLOBAL_OPTION = 401,
    CTA_OPTION = 402,
    SYS_OPTION = 403,
    EXIT_OPTION = 404,
    ABS_OPTION = 405,
    TO_OPTION = 406,
    CA_OPTION = 407,
    CG_OPTION = 408,
    CS_OPTION = 409,
    LU_OPTION = 410,
    CV_OPTION = 411,
    WB_OPTION = 412,
    WT_OPTION = 413
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 30 "cuda-sim/ptx.y" /* yacc.c:355  */

  double double_value;
  float  float_value;
  int    int_value;
  char * string_value;
  void * ptr_value;

#line 282 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ptx_lval;

int ptx_parse (void);

#endif /* !YY_PTX_HOME_ZRJI_GPGPU_SIM_DISTRIBUTION_SRC_PTX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 198 "cuda-sim/ptx.y" /* yacc.c:358  */

  	#include "ptx_parser.h"
	#include <stdlib.h>
	#include <string.h>
	#include <math.h>
	void syntax_not_implemented();
	extern int g_func_decl;
	int ptx_lex(void);
	int ptx_error(const char *);

#line 309 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   584

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  159
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  272
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  378

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   413

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   211,   211,   212,   213,   214,   217,   217,   218,   218,
     218,   221,   224,   225,   228,   229,   232,   232,   232,   233,
     233,   234,   237,   237,   237,   238,   241,   242,   243,   244,
     247,   248,   249,   249,   251,   251,   252,   252,   254,   255,
     256,   258,   259,   260,   262,   264,   266,   267,   268,   269,
     270,   271,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   287,   288,   289,   290,   293,   295,   296,
     298,   299,   311,   312,   315,   316,   318,   319,   320,   321,
     324,   326,   327,   328,   331,   332,   333,   334,   335,   336,
     337,   340,   341,   344,   345,   346,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   373,   374,
     376,   377,   379,   380,   381,   383,   383,   384,   385,   386,
     387,   390,   390,   391,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   408,   409,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   461,   462,   464,   465,   466,
     467,   470,   471,   472,   473,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   496,   497,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   521,   522,   523,   524,   527,
     527,   532,   533,   536,   537,   538,   539,   540,   543,   544,
     545,   546,   547,   548,   549,   552,   553,   554,   557,   558,
     559,   560,   561
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "OPCODE", "ALIGN_DIRECTIVE",
  "BRANCHTARGETS_DIRECTIVE", "BYTE_DIRECTIVE", "CALLPROTOTYPE_DIRECTIVE",
  "CALLTARGETS_DIRECTIVE", "CONST_DIRECTIVE", "CONSTPTR_DIRECTIVE",
  "PTR_DIRECTIVE", "ENTRY_DIRECTIVE", "EXTERN_DIRECTIVE", "FILE_DIRECTIVE",
  "FUNC_DIRECTIVE", "GLOBAL_DIRECTIVE", "LOCAL_DIRECTIVE", "LOC_DIRECTIVE",
  "MAXNCTAPERSM_DIRECTIVE", "MAXNNREG_DIRECTIVE", "MAXNTID_DIRECTIVE",
  "MINNCTAPERSM_DIRECTIVE", "PARAM_DIRECTIVE", "PRAGMA_DIRECTIVE",
  "REG_DIRECTIVE", "REQNTID_DIRECTIVE", "SECTION_DIRECTIVE",
  "SHARED_DIRECTIVE", "SREG_DIRECTIVE", "STRUCT_DIRECTIVE",
  "SURF_DIRECTIVE", "TARGET_DIRECTIVE", "TEX_DIRECTIVE", "UNION_DIRECTIVE",
  "VERSION_DIRECTIVE", "ADDRESS_SIZE_DIRECTIVE", "VISIBLE_DIRECTIVE",
  "IDENTIFIER", "INT_OPERAND", "FLOAT_OPERAND", "DOUBLE_OPERAND",
  "S8_TYPE", "S16_TYPE", "S32_TYPE", "S64_TYPE", "U8_TYPE", "U16_TYPE",
  "U32_TYPE", "U64_TYPE", "F16_TYPE", "F32_TYPE", "F64_TYPE", "FF64_TYPE",
  "B8_TYPE", "B16_TYPE", "B32_TYPE", "B64_TYPE", "BB64_TYPE", "BB128_TYPE",
  "PRED_TYPE", "TEXREF_TYPE", "SAMPLERREF_TYPE", "SURFREF_TYPE", "V2_TYPE",
  "V3_TYPE", "V4_TYPE", "COMMA", "PRED", "HALF_OPTION", "EQ_OPTION",
  "NE_OPTION", "LT_OPTION", "LE_OPTION", "GT_OPTION", "GE_OPTION",
  "LO_OPTION", "LS_OPTION", "HI_OPTION", "HS_OPTION", "EQU_OPTION",
  "NEU_OPTION", "LTU_OPTION", "LEU_OPTION", "GTU_OPTION", "GEU_OPTION",
  "NUM_OPTION", "NAN_OPTION", "CF_OPTION", "SF_OPTION", "NSF_OPTION",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "WIDE_OPTION",
  "SPECIAL_REGISTER", "MINUS", "PLUS", "COLON", "SEMI_COLON",
  "EXCLAMATION", "PIPE", "RIGHT_BRACE", "LEFT_BRACE", "EQUALS", "PERIOD",
  "BACKSLASH", "DIMENSION_MODIFIER", "RN_OPTION", "RZ_OPTION", "RM_OPTION",
  "RP_OPTION", "RNI_OPTION", "RZI_OPTION", "RMI_OPTION", "RPI_OPTION",
  "UNI_OPTION", "GEOM_MODIFIER_1D", "GEOM_MODIFIER_2D", "GEOM_MODIFIER_3D",
  "SAT_OPTION", "FTZ_OPTION", "NEG_OPTION", "SYNC_OPTION", "RED_OPTION",
  "ARRIVE_OPTION", "ATOMIC_POPC", "ATOMIC_AND", "ATOMIC_OR", "ATOMIC_XOR",
  "ATOMIC_CAS", "ATOMIC_EXCH", "ATOMIC_ADD", "ATOMIC_INC", "ATOMIC_DEC",
  "ATOMIC_MIN", "ATOMIC_MAX", "LEFT_ANGLE_BRACKET", "RIGHT_ANGLE_BRACKET",
  "LEFT_PAREN", "RIGHT_PAREN", "APPROX_OPTION", "FULL_OPTION",
  "ANY_OPTION", "ALL_OPTION", "BALLOT_OPTION", "GLOBAL_OPTION",
  "CTA_OPTION", "SYS_OPTION", "EXIT_OPTION", "ABS_OPTION", "TO_OPTION",
  "CA_OPTION", "CG_OPTION", "CS_OPTION", "LU_OPTION", "CV_OPTION",
  "WB_OPTION", "WT_OPTION", "$accept", "input", "function_defn", "$@1",
  "$@2", "$@3", "block_spec", "block_spec_list", "function_decl", "$@4",
  "$@5", "$@6", "function_ident_param", "$@7", "$@8",
  "function_decl_header", "param_list", "$@9", "param_entry", "$@10",
  "$@11", "ptr_spec", "ptr_space_spec", "ptr_align_spec",
  "statement_block", "statement_list", "directive_statement",
  "variable_declaration", "variable_spec", "identifier_list",
  "identifier_spec", "var_spec_list", "var_spec", "align_spec",
  "space_spec", "addressable_spec", "type_spec", "vector_spec",
  "scalar_type", "initializer_list", "literal_list",
  "instruction_statement", "instruction", "$@12", "opcode_spec", "$@13",
  "pred_spec", "option_list", "option", "atomic_operation_spec",
  "rounding_mode", "floating_point_rounding_mode", "integer_rounding_mode",
  "compare_spec", "operand_list", "operand", "vector_operand",
  "tex_operand", "$@14", "builtin_operand", "memory_operand",
  "twin_operand", "literal_operand", "address_expression", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413
};
# endif

#define YYPACT_NINF -273

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-273)))

#define YYTABLE_NINF -134

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -273,   411,  -273,   -29,  -273,   -20,  -273,     6,   -13,  -273,
    -273,  -273,    52,  -273,    92,  -273,  -273,  -273,  -273,    61,
    -273,   131,    63,   162,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
     -10,    26,  -273,    97,   160,   474,  -273,  -273,  -273,  -273,
    -273,   499,  -273,  -273,   148,  -273,   217,   183,   127,   175,
     154,  -273,  -273,  -273,   188,    76,  -273,   237,  -273,    70,
     231,   199,  -273,  -273,  -273,   271,  -273,   296,  -273,   299,
    -273,   343,  -273,   300,   301,   302,  -273,    76,   -18,   200,
    -273,    64,   303,   160,   -17,   276,  -273,   277,   129,   248,
     -34,   250,  -273,   268,  -273,  -273,   251,   135,   347,  -273,
     284,  -273,   188,  -273,  -273,  -273,   223,   216,   272,  -273,
     226,  -273,  -273,  -273,  -273,   -17,  -273,  -273,   326,   335,
      -3,  -273,   493,   339,  -273,  -273,  -273,  -273,  -273,   111,
     165,   278,    -2,   344,   345,   153,  -273,   346,  -273,  -273,
    -273,  -273,  -273,   314,   375,  -273,   474,   474,  -273,  -273,
    -273,  -273,   315,    34,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,    -3,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,   222,   378,   380,
     381,   192,  -273,   330,  -273,   110,   215,   117,  -273,  -273,
    -273,    96,   291,   141,  -273,   364,   421,   160,   237,   -18,
    -273,   225,  -273,  -273,   -59,  -273,   341,   349,   357,  -273,
     -43,   163,  -273,  -273,  -273,   398,  -273,  -273,  -273,   173,
     359,   400,  -273,  -273,   119,  -273,   384,   413,   229,   160,
    -273,  -273,   -52,  -273,  -273,    -7,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,   377,  -273,    98,   414,  -273,   350,   153,
    -273,   441,  -273,  -273,  -273,   478,  -273,  -273,  -273,  -273,
     198,   256,   392,   447,  -273,   153,  -273,  -273,  -273,   -18,
    -273,  -273,   211,  -273,  -273,   104,   419,  -273,  -273,  -273,
     450,  -273,   354,   393,   153,  -273,   356,  -273
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,    84,     0,    26,    79,     0,    27,
      85,    86,     0,    87,     0,    81,    88,    82,    89,     0,
      90,     0,     0,     0,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,    93,    94,    95,     4,
       5,    21,     3,     0,     0,    67,    74,    78,    76,    83,
      77,     0,    91,    80,     0,    29,     0,     0,     0,    58,
      53,    55,    28,    62,     0,     0,    16,     0,    52,    70,
      63,    68,    79,    75,    92,     0,    59,     0,    61,     0,
      54,     0,     7,     0,     0,     0,    14,     9,     0,    25,
      20,     0,     0,     0,     0,     0,    60,    56,   131,     0,
       0,     0,    51,     0,    46,    47,     0,   130,     0,    13,
       0,    12,     0,    15,    34,    36,     0,     0,     0,    72,
       0,    69,   265,   266,   267,     0,    64,    65,     0,     0,
       0,   123,   134,     0,    45,    50,    48,    49,   122,   225,
       0,   252,     0,     0,     0,     0,   129,   223,   231,   233,
     230,   228,   229,     0,     0,    10,     0,     0,    17,    23,
      73,    71,     0,     0,   120,    66,    57,   176,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   157,   197,   198,   199,
     200,   201,   202,   203,   204,   156,   164,   165,   166,   167,
     168,   169,   153,   155,   154,   185,   184,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   170,   171,   158,   159,
     160,   161,   162,   163,   172,   173,   175,   177,   178,   179,
     180,   181,   182,   183,   151,   149,   132,   147,   174,   152,
     195,   196,   150,   137,   139,   136,   138,   140,   141,   143,
     142,   144,   145,   146,   135,   235,   237,     0,     0,     0,
       0,   268,   272,     0,   251,   227,     0,     0,   232,   257,
     226,     0,     0,     0,   124,     0,    38,     0,     0,    30,
     119,     0,   118,   148,   268,   265,     0,     0,     0,   234,
     239,   242,   249,   269,   270,     0,   253,   236,   238,   268,
       0,     0,   248,   125,     0,   224,   223,     0,     0,     0,
      37,    18,     0,    31,   121,     0,   256,   255,   254,   240,
     241,   243,   244,     0,   271,     0,     0,   128,     0,     0,
      11,     0,    41,    42,    43,     0,    40,    35,    32,    24,
     258,     0,     0,     0,   245,     0,   127,    44,    39,     0,
     259,   260,   261,   264,   250,     0,     0,    33,   262,   263,
       0,   246,     0,     0,     0,   247,     0,   126
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -273,  -273,  -273,  -273,  -273,  -273,   397,  -273,   496,  -273,
    -273,  -273,   213,  -273,  -273,  -273,  -273,  -273,  -272,  -273,
    -273,  -273,  -273,   157,    88,  -273,    72,  -273,   142,  -273,
    -101,  -273,   444,  -273,  -273,  -112,  -110,  -273,   446,   370,
    -273,   396,   394,  -273,  -273,  -273,  -273,   263,  -273,  -273,
    -273,  -273,  -273,  -273,  -117,  -116,  -149,  -273,  -273,  -273,
    -143,  -273,  -100,   244
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    49,    74,    75,   122,    96,    97,   111,    98,
     288,    77,   100,   127,   289,    51,   322,   359,   126,   166,
     167,   319,   345,   346,    92,   113,    52,    53,    54,    80,
      81,    55,    56,    57,    58,    59,    60,    61,    62,   136,
     173,   115,   116,   336,   117,   140,   118,   246,   247,   248,
     249,   250,   251,   252,   315,   316,   158,   159,   333,   160,
     161,   296,   162,   273
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     156,   157,   131,   278,   137,   142,   124,     4,   125,   279,
      -8,    63,    -8,    -8,    10,    11,   348,   323,   303,    64,
     304,    13,    65,   132,   133,   134,    16,    66,   244,    18,
     245,    20,   350,   334,   329,   174,   330,   275,   325,   282,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,   -19,   143,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   135,   367,   349,    73,
     276,   196,    67,    -6,   277,    68,    93,   351,    94,    95,
      69,   154,   291,    71,   128,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   279,   244,   292,   245,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   310,   129,   149,   132,
     133,   134,   101,   114,   311,    76,   353,   297,  -133,  -133,
    -133,  -133,   370,    70,   149,   132,   133,   134,    72,   112,
     149,   132,   133,   134,   352,   146,   320,   307,   265,   308,
     266,   324,   149,   132,   133,   134,    78,   338,   312,    79,
     354,   145,   267,   267,   271,   272,   371,   102,   268,   276,
     165,   150,   269,   277,   151,   152,    85,   270,   347,   153,
      86,  -133,   154,    87,  -133,  -133,    88,   150,  -133,  -133,
     151,   152,  -133,   150,   341,   153,   151,   152,   154,   366,
     331,   153,   332,    89,   154,   150,   342,   343,   151,   152,
     303,    90,   304,   153,   309,   272,   154,   376,   344,   337,
     302,   294,   295,   133,   134,   132,   133,   134,  -133,   303,
     305,   304,   108,     3,   155,   360,    99,   361,     4,     5,
     314,     6,     7,     8,     9,    10,    11,    12,   368,   305,
     369,    91,    13,    14,    15,   362,   363,    16,    17,   103,
      18,    19,    20,   104,    21,    22,    23,   109,   286,   287,
     105,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   106,   110,   107,   -22,
     119,   120,   121,   130,   138,   139,   141,   108,     3,    73,
     148,   108,   164,     4,     5,   169,     6,     7,     8,     9,
      10,    11,    12,   168,   171,   170,   175,    13,    14,    15,
     144,    91,    16,    17,   176,    18,    19,    20,   264,    21,
      22,    23,   109,   280,   281,   274,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     2,   110,   284,   283,   285,     3,   290,   299,   300,
     301,     4,     5,   306,     6,     7,     8,     9,    10,    11,
      12,   313,   317,   318,   326,    13,    14,    15,   334,   335,
      16,    17,   327,    18,    19,    20,    91,    21,    22,    23,
     328,   267,   339,   340,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     3,
     154,   357,   355,   341,     4,   364,   365,   372,    82,   373,
     356,    10,    11,   374,   123,   375,   377,    50,    13,    83,
      15,   321,   358,    16,    17,   172,    18,    84,    20,   147,
     293,   298,   163,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,   253,   254,   255,   256,     0,   257,
       0,     0,     0,     0,   258,   259,     0,     0,   260,     0,
       0,     0,   261,   262,   263
};

static const yytype_int16 yycheck[] =
{
     117,   117,   103,   152,   104,    39,    24,    10,    26,   152,
      20,    40,    22,    23,    17,    18,    68,   289,    77,    39,
      79,    24,    16,    40,    41,    42,    29,    40,   140,    32,
     140,    34,    39,    40,    77,   135,    79,    39,    97,   155,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    39,   100,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   103,   359,   140,    99,
      92,    94,    40,   103,    96,     3,    20,   104,    22,    23,
      39,   103,    68,    40,    40,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   277,   247,   102,   247,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,    39,    93,    39,    40,
      41,    42,    92,    91,    68,   139,    68,   267,    39,    40,
      41,    42,    68,    42,    39,    40,    41,    42,    16,    91,
      39,    40,    41,    42,   333,   113,   287,    77,    77,    79,
      79,   291,    39,    40,    41,    42,    99,   314,   102,    39,
     102,   113,    92,    92,    39,    40,   102,   137,    97,    92,
     122,    92,   101,    96,    95,    96,    68,   106,   319,   100,
       3,    92,   103,    40,    95,    96,    99,    92,    99,   100,
      95,    96,   103,    92,     5,   100,    95,    96,   103,   355,
      77,   100,    79,    68,   103,    92,    17,    18,    95,    96,
      77,    97,    79,   100,    39,    40,   103,   374,    29,   140,
      68,    39,    40,    41,    42,    40,    41,    42,   139,    77,
      97,    79,     4,     5,   139,    77,    39,    79,    10,    11,
     139,    13,    14,    15,    16,    17,    18,    19,    77,    97,
      79,   103,    24,    25,    26,    39,    40,    29,    30,    68,
      32,    33,    34,   104,    36,    37,    38,    39,   166,   167,
      39,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    40,    69,    39,   139,
      40,    40,    40,    40,    68,    68,    98,     4,     5,    99,
      99,     4,    68,    10,    11,   139,    13,    14,    15,    16,
      17,    18,    19,   140,   138,    93,    40,    24,    25,    26,
     102,   103,    29,    30,    39,    32,    33,    34,    39,    36,
      37,    38,    39,    39,    39,   107,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,     0,    69,    99,    68,    40,     5,   102,    40,    39,
      39,    10,    11,    93,    13,    14,    15,    16,    17,    18,
      19,   140,    68,    12,    93,    24,    25,    26,    40,    39,
      29,    30,    93,    32,    33,    34,   103,    36,    37,    38,
      93,    92,    68,    40,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,     5,
     103,    40,    68,     5,    10,    93,    39,    68,    14,    39,
     140,    17,    18,   139,    97,   102,   140,     1,    24,    55,
      26,   288,   345,    29,    30,   135,    32,    61,    34,   113,
     247,   267,   118,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    71,    72,    73,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,    -1,
      -1,    -1,    89,    90,    91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   160,     0,     5,    10,    11,    13,    14,    15,    16,
      17,    18,    19,    24,    25,    26,    29,    30,    32,    33,
      34,    36,    37,    38,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,   161,
     167,   174,   185,   186,   187,   190,   191,   192,   193,   194,
     195,   196,   197,    40,    39,    16,    40,    40,     3,    39,
      42,    40,    16,    99,   162,   163,   139,   170,    99,    39,
     188,   189,    14,   191,   197,    68,     3,    40,    99,    68,
      97,   103,   183,    20,    22,    23,   165,   166,   168,    39,
     171,    92,   137,    68,   104,    39,    40,    39,     4,    39,
      69,   167,   183,   184,   185,   200,   201,   203,   205,    40,
      40,    40,   164,   165,    24,    26,   177,   172,    40,    93,
      40,   189,    40,    41,    42,   103,   198,   221,    68,    68,
     204,    98,    39,   100,   102,   183,   185,   200,    99,    39,
      92,    95,    96,   100,   103,   139,   213,   214,   215,   216,
     218,   219,   221,   201,    68,   183,   178,   179,   140,   139,
      93,   138,   198,   199,   221,    40,    39,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    94,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   194,   195,   206,   207,   208,   209,
     210,   211,   212,    71,    72,    73,    74,    76,    81,    82,
      85,    89,    90,    91,    39,    77,    79,    92,    97,   101,
     106,    39,    40,   222,   107,    39,    92,    96,   215,   219,
      39,    39,   214,    68,    99,    40,   187,   187,   169,   173,
     102,    68,   102,   206,    39,    40,   220,   221,   222,    40,
      39,    39,    68,    77,    79,    97,    93,    77,    79,    39,
      39,    68,   102,   140,   139,   213,   214,    68,    12,   180,
     189,   171,   175,   177,   221,    97,    93,    93,    93,    77,
      79,    77,    79,   217,    40,    39,   202,   140,   213,    68,
      40,     5,    17,    18,    29,   181,   182,   189,    68,   140,
      39,   104,   215,    68,   102,    68,   140,    40,   182,   176,
      77,    79,    39,    40,    93,    39,   214,   177,    77,    79,
      68,   102,    68,    39,   139,   102,   213,   140
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   159,   160,   160,   160,   160,   162,   161,   163,   164,
     161,   165,   165,   165,   166,   166,   168,   169,   167,   170,
     167,   167,   172,   173,   171,   171,   174,   174,   174,   174,
     175,   175,   176,   175,   178,   177,   179,   177,   180,   180,
     180,   181,   181,   181,   182,   183,   184,   184,   184,   184,
     184,   184,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   186,   186,   186,   186,   187,   188,   188,
     189,   189,   189,   189,   190,   190,   191,   191,   191,   191,
     192,   193,   193,   193,   194,   194,   194,   194,   194,   194,
     194,   195,   195,   196,   196,   196,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   198,   198,
     199,   199,   200,   200,   200,   202,   201,   201,   201,   201,
     201,   204,   203,   203,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   206,   206,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   209,   209,   210,   210,   210,
     210,   211,   211,   211,   211,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   213,   213,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   215,   215,   215,   215,   217,
     216,   218,   218,   219,   219,   219,   219,   219,   220,   220,
     220,   220,   220,   220,   220,   221,   221,   221,   222,   222,
     222,   222,   222
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     0,     3,     0,     0,
       5,     6,     2,     2,     1,     2,     0,     0,     7,     0,
       3,     1,     0,     0,     6,     1,     1,     1,     2,     2,
       0,     1,     0,     4,     0,     5,     0,     4,     0,     3,
       2,     1,     1,     1,     2,     3,     1,     1,     2,     2,
       2,     1,     2,     2,     3,     2,     4,     6,     2,     3,
       4,     3,     2,     2,     4,     4,     6,     1,     1,     3,
       1,     4,     3,     4,     1,     2,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     2,     2,     3,     0,    11,     6,     5,     2,
       1,     0,     3,     1,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     2,     1,     1,
       1,     1,     2,     1,     3,     2,     3,     2,     3,     3,
       4,     4,     3,     4,     4,     5,     7,     9,     3,     0,
       6,     2,     1,     3,     4,     4,     4,     2,     3,     4,
       4,     4,     5,     5,     4,     1,     1,     1,     1,     2,
       2,     3,     1
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
        case 6:
#line 217 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { set_symtab((yyvsp[0].ptr_value)); func_header(".skip"); }
#line 1774 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 217 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { end_function(); }
#line 1780 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 218 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { set_symtab((yyvsp[0].ptr_value)); }
#line 1786 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 218 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { func_header(".skip"); }
#line 1792 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 218 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { end_function(); }
#line 1798 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 221 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {func_header_info_int(".maxntid", (yyvsp[-4].int_value));
										func_header_info_int(",", (yyvsp[-2].int_value));
										func_header_info_int(",", (yyvsp[0].int_value)); }
#line 1806 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 224 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { func_header_info_int(".minnctapersm", (yyvsp[0].int_value)); printf("GPGPU-Sim: Warning: .minnctapersm ignored. \n"); }
#line 1812 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 225 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { func_header_info_int(".maxnctapersm", (yyvsp[0].int_value)); printf("GPGPU-Sim: Warning: .maxnctapersm ignored. \n"); }
#line 1818 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 232 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[-1].int_value)); func_header_info("(");}
#line 1824 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 232 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {func_header_info(")");}
#line 1830 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 232 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.ptr_value) = reset_symtab(); }
#line 1836 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 233 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[0].int_value)); }
#line 1842 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 233 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.ptr_value) = reset_symtab(); }
#line 1848 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 234 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[0].int_value)); add_function_name(""); g_func_decl=0; (yyval.ptr_value) = reset_symtab(); }
#line 1854 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 237 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_function_name((yyvsp[0].string_value)); }
#line 1860 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 237 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {func_header_info("(");}
#line 1866 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 237 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { g_func_decl=0; func_header_info(")"); }
#line 1872 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 238 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_function_name((yyvsp[0].string_value)); g_func_decl=0; }
#line 1878 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 241 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 1; g_func_decl=1; func_header(".entry"); }
#line 1884 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 242 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1890 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 243 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1896 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 244 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 2; g_func_decl=1; func_header(".func"); }
#line 1902 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 248 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1908 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 249 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {func_header_info(",");}
#line 1914 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 249 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1920 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 251 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_space_spec(param_space_unclassified,0); }
#line 1926 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 251 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_function_arg(); }
#line 1932 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 252 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_space_spec(reg_space,0); }
#line 1938 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 252 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_function_arg(); }
#line 1944 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 258 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(global_space); }
#line 1950 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 259 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(local_space); }
#line 1956 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 260 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(shared_space); }
#line 1962 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 266 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1968 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 267 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_instruction(); }
#line 1974 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 268 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1980 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 269 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_instruction(); }
#line 1986 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 275 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_version_info((yyvsp[0].double_value), 0); }
#line 1992 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 276 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_version_info((yyvsp[-1].double_value),1); }
#line 1998 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 277 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {/*Do nothing*/}
#line 2004 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 278 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { target_header2((yyvsp[-2].string_value),(yyvsp[0].string_value)); }
#line 2010 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 279 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { target_header3((yyvsp[-4].string_value),(yyvsp[-2].string_value),(yyvsp[0].string_value)); }
#line 2016 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 280 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { target_header((yyvsp[0].string_value)); }
#line 2022 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 281 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_file((yyvsp[-1].int_value),(yyvsp[0].string_value)); }
#line 2028 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 283 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pragma((yyvsp[-1].string_value)); }
#line 2034 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 284 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {/*Do nothing*/}
#line 2040 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 287 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2046 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 288 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2052 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 289 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2058 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 290 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_constptr((yyvsp[-4].string_value), (yyvsp[-2].string_value), (yyvsp[0].int_value)); }
#line 2064 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 293 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { set_variable_type(); }
#line 2070 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 298 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[0].string_value),0,NON_ARRAY_IDENTIFIER); func_header_info((yyvsp[0].string_value));}
#line 2076 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 299 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { func_header_info((yyvsp[-3].string_value)); func_header_info_int("<", (yyvsp[-1].int_value)); func_header_info(">");
		int i,lbase,l;
		char *id = NULL;
		lbase = strlen((yyvsp[-3].string_value));
		for( i=0; i < (yyvsp[-1].int_value); i++ ) { 
			l = lbase + (int)log10(i+1)+10;
			id = (char*) malloc(l);
			snprintf(id,l,"%s%u",(yyvsp[-3].string_value),i);
			add_identifier(id,0,NON_ARRAY_IDENTIFIER); 
		}
		free((yyvsp[-3].string_value));
	}
#line 2093 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 311 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[-2].string_value),0,ARRAY_IDENTIFIER_NO_DIM); func_header_info((yyvsp[-2].string_value)); func_header_info("["); func_header_info("]");}
#line 2099 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 312 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[-3].string_value),(yyvsp[-1].int_value),ARRAY_IDENTIFIER); func_header_info((yyvsp[-3].string_value)); func_header_info_int("[",(yyvsp[-1].int_value)); func_header_info("]");}
#line 2105 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 321 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_extern_spec(); }
#line 2111 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 324 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_alignment_spec((yyvsp[0].int_value)); }
#line 2117 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 326 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(reg_space,0); }
#line 2123 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 327 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(reg_space,0); }
#line 2129 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 331 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(const_space,(yyvsp[0].int_value)); }
#line 2135 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 332 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(global_space,0); }
#line 2141 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 333 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(local_space,0); }
#line 2147 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 334 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(param_space_unclassified,0); }
#line 2153 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 335 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(shared_space,0); }
#line 2159 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 336 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(surf_space,0); }
#line 2165 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 337 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_space_spec(tex_space,0); }
#line 2171 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 344 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_option(V2_TYPE); func_header_info(".v2");}
#line 2177 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 345 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_option(V3_TYPE); func_header_info(".v3");}
#line 2183 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 346 "cuda-sim/ptx.y" /* yacc.c:1646  */
    {  add_option(V4_TYPE); func_header_info(".v4");}
#line 2189 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 349 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S8_TYPE ); }
#line 2195 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 350 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S16_TYPE ); }
#line 2201 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 351 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S32_TYPE ); }
#line 2207 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 352 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S64_TYPE ); }
#line 2213 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 353 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U8_TYPE ); }
#line 2219 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 354 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U16_TYPE ); }
#line 2225 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 355 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U32_TYPE ); }
#line 2231 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 356 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U64_TYPE ); }
#line 2237 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 357 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F16_TYPE ); }
#line 2243 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 358 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F32_TYPE ); }
#line 2249 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 359 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F64_TYPE ); }
#line 2255 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 360 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( FF64_TYPE ); }
#line 2261 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 361 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B8_TYPE );  }
#line 2267 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 362 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B16_TYPE ); }
#line 2273 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 363 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B32_TYPE ); }
#line 2279 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 364 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B64_TYPE ); }
#line 2285 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 365 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( BB64_TYPE ); }
#line 2291 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 366 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( BB128_TYPE ); }
#line 2297 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 367 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( PRED_TYPE ); }
#line 2303 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 368 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( TEXREF_TYPE ); }
#line 2309 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 369 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( SAMPLERREF_TYPE ); }
#line 2315 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 370 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( SURFREF_TYPE ); }
#line 2321 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 373 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_array_initializer(); }
#line 2327 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 374 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { syntax_not_implemented(); }
#line 2333 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 380 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_label((yyvsp[-1].string_value)); }
#line 2339 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 383 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { set_return(); }
#line 2345 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 390 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_opcode((yyvsp[0].int_value)); }
#line 2351 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 391 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_opcode((yyvsp[0].int_value)); }
#line 2357 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 393 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[0].string_value),0, -1); }
#line 2363 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 394 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[0].string_value),1, -1); }
#line 2369 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 395 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,1); }
#line 2375 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 396 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,2); }
#line 2381 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 397 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,3); }
#line 2387 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 398 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,5); }
#line 2393 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 399 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,6); }
#line 2399 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 400 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,10); }
#line 2405 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 401 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,12); }
#line 2411 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 402 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,13); }
#line 2417 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 403 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,17); }
#line 2423 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 404 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,19); }
#line 2429 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 405 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,28); }
#line 2435 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 415 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(SYNC_OPTION); }
#line 2441 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 416 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ARRIVE_OPTION); }
#line 2447 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 417 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RED_OPTION); }
#line 2453 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 418 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(UNI_OPTION); }
#line 2459 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 419 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(WIDE_OPTION); }
#line 2465 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 420 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ANY_OPTION); }
#line 2471 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 421 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ALL_OPTION); }
#line 2477 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 422 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(BALLOT_OPTION); }
#line 2483 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 423 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GLOBAL_OPTION); }
#line 2489 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 424 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(CTA_OPTION); }
#line 2495 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 425 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(SYS_OPTION); }
#line 2501 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 426 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_1D); }
#line 2507 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 427 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_2D); }
#line 2513 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 428 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_3D); }
#line 2519 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 429 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(SAT_OPTION); }
#line 2525 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 430 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(FTZ_OPTION); }
#line 2531 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 431 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(NEG_OPTION); }
#line 2537 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 432 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(APPROX_OPTION); }
#line 2543 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 433 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(FULL_OPTION); }
#line 2549 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 434 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(EXIT_OPTION); }
#line 2555 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 435 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ABS_OPTION); }
#line 2561 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 437 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(TO_OPTION); }
#line 2567 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 438 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(HALF_OPTION); }
#line 2573 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 439 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(CA_OPTION); }
#line 2579 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 440 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(CG_OPTION); }
#line 2585 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 441 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(CS_OPTION); }
#line 2591 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 442 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LU_OPTION); }
#line 2597 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 443 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(CV_OPTION); }
#line 2603 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 444 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(WB_OPTION); }
#line 2609 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 445 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(WT_OPTION); }
#line 2615 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 448 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_AND); }
#line 2621 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 449 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_POPC); }
#line 2627 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 450 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_OR); }
#line 2633 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 451 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_XOR); }
#line 2639 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 452 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_CAS); }
#line 2645 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 453 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_EXCH); }
#line 2651 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 454 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_ADD); }
#line 2657 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 455 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_INC); }
#line 2663 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 456 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_DEC); }
#line 2669 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 457 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_MIN); }
#line 2675 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 458 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_MAX); }
#line 2681 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 464 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RN_OPTION); }
#line 2687 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 465 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RZ_OPTION); }
#line 2693 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 466 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RM_OPTION); }
#line 2699 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 467 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RP_OPTION); }
#line 2705 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 470 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RNI_OPTION); }
#line 2711 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 471 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RZI_OPTION); }
#line 2717 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 472 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RMI_OPTION); }
#line 2723 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 473 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(RPI_OPTION); }
#line 2729 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 476 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(EQ_OPTION); }
#line 2735 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 477 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(NE_OPTION); }
#line 2741 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 478 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LT_OPTION); }
#line 2747 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 479 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LE_OPTION); }
#line 2753 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 480 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GT_OPTION); }
#line 2759 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 481 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GE_OPTION); }
#line 2765 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 482 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LO_OPTION); }
#line 2771 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 483 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LS_OPTION); }
#line 2777 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 484 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(HI_OPTION); }
#line 2783 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 485 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(HS_OPTION); }
#line 2789 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 486 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(EQU_OPTION); }
#line 2795 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 487 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(NEU_OPTION); }
#line 2801 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 488 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LTU_OPTION); }
#line 2807 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 489 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(LEU_OPTION); }
#line 2813 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 490 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GTU_OPTION); }
#line 2819 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 491 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(GEU_OPTION); }
#line 2825 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 492 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(NUM_OPTION); }
#line 2831 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 493 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_option(NAN_OPTION); }
#line 2837 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 499 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[0].string_value) ); }
#line 2843 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 500 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_neg_pred_operand( (yyvsp[0].string_value) ); }
#line 2849 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 501 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[0].string_value) ); change_operand_neg(); }
#line 2855 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 506 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { change_operand_neg(); }
#line 2861 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 508 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-2].string_value),(yyvsp[0].int_value)); }
#line 2867 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 509 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(1);}
#line 2873 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 510 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(1); change_operand_neg();}
#line 2879 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 511 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(2);}
#line 2885 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 512 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(2); change_operand_neg();}
#line 2891 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 513 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(-1);}
#line 2897 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 514 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-1); change_operand_lohi(1);}
#line 2903 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 515 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-1); change_operand_lohi(2);}
#line 2909 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 516 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(-3);}
#line 2915 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 517 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-3); change_operand_lohi(1);}
#line 2921 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 518 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-3); change_operand_lohi(2);}
#line 2927 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 521 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 2933 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 522 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_3vector_operand((yyvsp[-5].string_value),(yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 2939 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 523 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_4vector_operand((yyvsp[-7].string_value),(yyvsp[-5].string_value),(yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 2945 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 524 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_1vector_operand((yyvsp[-1].string_value)); }
#line 2951 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 527 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_scalar_operand((yyvsp[-1].string_value)); }
#line 2957 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 532 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_builtin_operand((yyvsp[-1].int_value),(yyvsp[0].int_value)); }
#line 2963 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 533 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_builtin_operand((yyvsp[0].int_value),-1); }
#line 2969 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 536 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_memory_operand(); }
#line 2975 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 537 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_memory_operand(); change_memory_addr_space((yyvsp[-3].string_value)); }
#line 2981 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 538 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { change_memory_addr_space((yyvsp[-3].string_value)); }
#line 2987 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 539 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { change_memory_addr_space((yyvsp[-3].string_value)); add_memory_operand();}
#line 2993 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 540 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { change_operand_neg(); }
#line 2999 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 543 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(1); }
#line 3005 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 544 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(1); change_operand_lohi(1); }
#line 3011 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 545 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(1); change_operand_lohi(2); }
#line 3017 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 546 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[0].string_value)); change_double_operand_type(2); }
#line 3023 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 547 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-4].string_value),(yyvsp[-1].string_value)); change_double_operand_type(2); change_operand_lohi(1); }
#line 3029 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 548 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-4].string_value),(yyvsp[-1].string_value)); change_double_operand_type(2); change_operand_lohi(2); }
#line 3035 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 549 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-3].string_value),(yyvsp[0].int_value)); change_double_operand_type(3); }
#line 3041 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 552 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_literal_int((yyvsp[0].int_value)); }
#line 3047 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 553 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_literal_float((yyvsp[0].float_value)); }
#line 3053 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 554 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_literal_double((yyvsp[0].double_value)); }
#line 3059 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 557 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[0].string_value),0); }
#line 3065 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 558 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-1].string_value),0); change_operand_lohi(1);}
#line 3071 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 559 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-1].string_value),0); change_operand_lohi(2); }
#line 3077 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 560 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-2].string_value),(yyvsp[0].int_value)); }
#line 3083 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 561 "cuda-sim/ptx.y" /* yacc.c:1646  */
    { add_address_operand2((yyvsp[0].int_value)); }
#line 3089 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
    break;


#line 3093 "/home/zrji/gpgpu-sim_distribution/src/ptx.tab.c" /* yacc.c:1646  */
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
#line 564 "cuda-sim/ptx.y" /* yacc.c:1906  */


extern int ptx_lineno;
extern const char *g_filename;

void syntax_not_implemented()
{
	printf("Parse error (%s:%u): this syntax is not (yet) implemented:\n",g_filename,ptx_lineno);
	ptx_error(NULL);
	abort();
}
