/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006,
   2009, 2010 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         cssyyparse
#define yylex           cssyylex
#define yyerror         cssyyerror
#define yylval          cssyylval
#define yychar          cssyychar
#define yydebug         cssyydebug
#define yynerrs         cssyynerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "DerivedSources/WebCore/CSSGrammar.y"


/*
 *  Copyright (C) 2002-2003 Lars Knoll (knoll@kde.org)
 *  Copyright (C) 2004, 2005, 2006, 2007, 2008, 2009, 2010 Apple Inc. All rights reserved.
 *  Copyright (C) 2006 Alexey Proskuryakov (ap@nypop.com)
 *  Copyright (C) 2008 Eric Seidel <eric@webkit.org>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "config.h"

#include "CSSParser.h"
#include "CSSParserMode.h"
#include "CSSPrimitiveValue.h"
#include "CSSPropertyNames.h"
#include "CSSSelector.h"
#include "CSSSelectorList.h"
#include "Document.h"
#include "HTMLNames.h"
#include "MediaList.h"
#include "MediaQueryExp.h"
#include "StyleRule.h"
#include "StyleSheetContents.h"
#include "WebKitCSSKeyframeRule.h"
#include "WebKitCSSKeyframesRule.h"
#include <wtf/FastMalloc.h>
#include <stdlib.h>
#include <string.h>

using namespace WebCore;
using namespace HTMLNames;

#define YYMALLOC fastMalloc
#define YYFREE fastFree

#define YYENABLE_NLS 0
#define YYLTYPE_IS_TRIVIAL 1
#define YYMAXDEPTH 10000
#define YYDEBUG 0

#if YYDEBUG > 0
#include <wtf/text/CString.h>
#define YYPRINT(File,Type,Value) if (isCSSTokenAString(Type)) YYFPRINTF(File, "%s", String((Value).string).utf8().data())
#endif



/* Line 189 of yacc.c  */
#line 143 "DerivedSources/WebCore/CSSGrammar.cpp"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_EOF = 0,
     LOWEST_PREC = 258,
     UNIMPORTANT_TOK = 259,
     WHITESPACE = 260,
     SGML_CD = 261,
     INCLUDES = 262,
     DASHMATCH = 263,
     BEGINSWITH = 264,
     ENDSWITH = 265,
     CONTAINS = 266,
     STRING = 267,
     IDENT = 268,
     NTH = 269,
     HEX = 270,
     IDSEL = 271,
     IMPORT_SYM = 272,
     PAGE_SYM = 273,
     MEDIA_SYM = 274,
     FONT_FACE_SYM = 275,
     CHARSET_SYM = 276,
     NAMESPACE_SYM = 277,
     VARFUNCTION = 278,
     WEBKIT_RULE_SYM = 279,
     WEBKIT_DECLS_SYM = 280,
     WEBKIT_KEYFRAME_RULE_SYM = 281,
     WEBKIT_KEYFRAMES_SYM = 282,
     WEBKIT_VALUE_SYM = 283,
     WEBKIT_MEDIAQUERY_SYM = 284,
     WEBKIT_SELECTOR_SYM = 285,
     WEBKIT_REGION_RULE_SYM = 286,
     WEBKIT_VIEWPORT_RULE_SYM = 287,
     WEBKIT_FILTER_RULE_SYM = 288,
     TOPLEFTCORNER_SYM = 289,
     TOPLEFT_SYM = 290,
     TOPCENTER_SYM = 291,
     TOPRIGHT_SYM = 292,
     TOPRIGHTCORNER_SYM = 293,
     BOTTOMLEFTCORNER_SYM = 294,
     BOTTOMLEFT_SYM = 295,
     BOTTOMCENTER_SYM = 296,
     BOTTOMRIGHT_SYM = 297,
     BOTTOMRIGHTCORNER_SYM = 298,
     LEFTTOP_SYM = 299,
     LEFTMIDDLE_SYM = 300,
     LEFTBOTTOM_SYM = 301,
     RIGHTTOP_SYM = 302,
     RIGHTMIDDLE_SYM = 303,
     RIGHTBOTTOM_SYM = 304,
     ATKEYWORD = 305,
     IMPORTANT_SYM = 306,
     MEDIA_ONLY = 307,
     MEDIA_NOT = 308,
     MEDIA_AND = 309,
     REMS = 310,
     CHS = 311,
     QEMS = 312,
     EMS = 313,
     EXS = 314,
     PXS = 315,
     CMS = 316,
     MMS = 317,
     INS = 318,
     PTS = 319,
     PCS = 320,
     DEGS = 321,
     RADS = 322,
     GRADS = 323,
     TURNS = 324,
     MSECS = 325,
     SECS = 326,
     HERTZ = 327,
     KHERTZ = 328,
     DIMEN = 329,
     INVALIDDIMEN = 330,
     PERCENTAGE = 331,
     FLOATTOKEN = 332,
     INTEGER = 333,
     VW = 334,
     VH = 335,
     VMIN = 336,
     VMAX = 337,
     DPPX = 338,
     DPI = 339,
     DPCM = 340,
     URI = 341,
     FUNCTION = 342,
     ANYFUNCTION = 343,
     NOTFUNCTION = 344,
     CALCFUNCTION = 345,
     MINFUNCTION = 346,
     MAXFUNCTION = 347,
     VAR_DEFINITION = 348,
     UNICODERANGE = 349
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 67 "DerivedSources/WebCore/CSSGrammar.y"

    bool boolean;
    char character;
    int integer;
    double number;
    CSSParserString string;

    StyleRuleBase* rule;
    Vector<RefPtr<StyleRuleBase> >* ruleList;
    CSSParserSelector* selector;
    Vector<OwnPtr<CSSParserSelector> >* selectorList;
    CSSSelector::MarginBoxType marginBox;
    CSSSelector::Relation relation;
    MediaQuerySet* mediaList;
    MediaQuery* mediaQuery;
    MediaQuery::Restrictor mediaQueryRestrictor;
    MediaQueryExp* mediaQueryExp;
    CSSParserValue value;
    CSSParserValueList* valueList;
    Vector<OwnPtr<MediaQueryExp> >* mediaQueryExpList;
    StyleKeyframe* keyframe;
    Vector<RefPtr<StyleKeyframe> >* keyframeRuleList;
    float val;
    CSSPropertyID id;
    CSSParser::Location location;



/* Line 214 of yacc.c  */
#line 303 "DerivedSources/WebCore/CSSGrammar.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 94 "DerivedSources/WebCore/CSSGrammar.y"


static inline int cssyyerror(void*, const char*)
{
    return 1;
}

static inline bool isCSSTokenAString(int yytype)
{
    switch (yytype) {
    case IDENT:
    case STRING:
    case NTH:
    case HEX:
    case IDSEL:
    case DIMEN:
    case INVALIDDIMEN:
    case URI:
    case FUNCTION:
    case ANYFUNCTION:
    case NOTFUNCTION:
    case CALCFUNCTION:
    case MINFUNCTION:
    case MAXFUNCTION:
    case VAR_DEFINITION:
    case UNICODERANGE:
        return true;
    default:
        return false;
    }
}



/* Line 264 of yacc.c  */
#line 350 "DerivedSources/WebCore/CSSGrammar.cpp"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1654

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  121
/* YYNRULES -- Number of rules.  */
#define YYNRULES  339
/* YYNRULES -- Number of states.  */
#define YYNSTATES  612

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   349

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   113,     2,   114,     2,     2,
     104,   102,    20,   106,   105,   109,    18,   112,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    17,   103,
       2,   111,   108,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,   110,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   100,    21,   101,   107,     2,     2,     2,
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
      15,    16,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    11,    14,    17,    20,    23,    26,
      33,    40,    46,    52,    58,    64,    65,    68,    69,    72,
      75,    76,    78,    80,    82,    84,    86,    92,    96,   100,
     106,   110,   111,   115,   117,   119,   121,   123,   125,   127,
     129,   131,   133,   135,   137,   139,   141,   142,   146,   147,
     151,   153,   155,   157,   159,   161,   163,   165,   167,   169,
     171,   173,   175,   177,   178,   186,   194,   202,   207,   212,
     219,   226,   230,   234,   235,   238,   240,   242,   245,   246,
     251,   261,   263,   269,   270,   274,   275,   277,   279,   281,
     286,   287,   289,   291,   296,   299,   300,   301,   303,   314,
     323,   328,   331,   332,   343,   345,   347,   348,   352,   359,
     361,   367,   370,   372,   374,   375,   386,   391,   396,   398,
     401,   403,   404,   406,   411,   412,   420,   422,   424,   426,
     428,   430,   432,   434,   436,   438,   440,   442,   444,   446,
     448,   450,   452,   453,   462,   467,   472,   474,   475,   486,
     487,   498,   501,   504,   507,   509,   510,   512,   514,   516,
     517,   518,   519,   529,   530,   532,   539,   542,   545,   547,
     549,   552,   556,   559,   561,   564,   567,   569,   572,   574,
     577,   581,   584,   586,   592,   595,   597,   599,   601,   604,
     607,   609,   611,   613,   615,   617,   620,   623,   628,   637,
     643,   653,   655,   657,   659,   661,   663,   665,   667,   669,
     672,   675,   679,   686,   693,   701,   708,   715,   716,   718,
     721,   723,   725,   728,   732,   736,   741,   746,   750,   757,
     763,   766,   773,   777,   782,   786,   789,   792,   793,   795,
     798,   800,   804,   808,   811,   814,   815,   818,   822,   825,
     828,   831,   835,   838,   841,   844,   847,   853,   856,   859,
     862,   865,   867,   869,   871,   873,   875,   877,   879,   881,
     883,   885,   887,   889,   891,   893,   895,   897,   899,   901,
     903,   905,   907,   909,   911,   913,   915,   917,   919,   921,
     923,   928,   932,   937,   939,   944,   947,   951,   955,   959,
     963,   964,   966,   972,   974,   977,   979,   983,   987,   989,
     992,   998,  1004,  1009,  1011,  1013,  1018,  1023,  1025,  1028,
    1032,  1036,  1039,  1043,  1047,  1051,  1055,  1057,  1059,  1061,
    1063,  1065,  1067,  1069,  1071,  1072,  1073,  1076,  1079,  1082
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     116,     0,    -1,   123,   125,   124,   130,    -1,   117,   123,
      -1,   119,   123,    -1,   120,   123,    -1,   121,   123,    -1,
     122,   123,    -1,   118,   123,    -1,    29,   100,   123,   131,
     123,   101,    -1,    31,   100,   123,   161,   123,   101,    -1,
      30,   100,   181,   203,   101,    -1,    33,   100,   123,   210,
     101,    -1,    34,     5,   123,   149,   101,    -1,    35,   100,
     123,   187,   101,    -1,    -1,   123,     5,    -1,    -1,   124,
       6,    -1,   124,     5,    -1,    -1,   128,    -1,   101,    -1,
       0,    -1,   102,    -1,     0,    -1,    26,   123,    12,   123,
     103,    -1,    26,     1,   230,    -1,    26,     1,   103,    -1,
      26,   123,    12,   123,   103,    -1,    26,   123,   103,    -1,
      -1,   130,   132,   124,    -1,   185,    -1,   155,    -1,   165,
      -1,   172,    -1,   158,    -1,   140,    -1,   139,    -1,   175,
      -1,   177,    -1,   131,    -1,   129,    -1,   229,    -1,   228,
      -1,    -1,   133,   136,   124,    -1,    -1,   134,   135,   124,
      -1,   185,    -1,   165,    -1,   172,    -1,   155,    -1,   158,
      -1,   177,    -1,   135,    -1,   229,    -1,   228,    -1,   140,
      -1,   139,    -1,   175,    -1,   123,    -1,    -1,   138,    22,
     137,   142,   123,   150,   103,    -1,   138,    22,   137,   142,
     123,   150,     0,    -1,   138,    22,   137,   142,   123,   150,
     230,    -1,   138,    22,     1,   103,    -1,   138,    22,     1,
     230,    -1,    27,   123,   141,   142,   123,   103,    -1,    27,
     123,   141,   142,   123,   230,    -1,    27,     1,   230,    -1,
      27,     1,   103,    -1,    -1,    13,   123,    -1,    12,    -1,
      91,    -1,    13,   123,    -1,    -1,    17,   123,   210,   123,
      -1,   148,   123,   104,   123,   143,   123,   144,   102,   123,
      -1,   145,    -1,   146,   123,    59,   123,   145,    -1,    -1,
      59,   123,   146,    -1,    -1,    57,    -1,    58,    -1,   146,
      -1,   148,   123,   156,   147,    -1,    -1,   151,    -1,   149,
      -1,   151,   105,   123,   149,    -1,   151,     1,    -1,    -1,
      -1,   123,    -1,   153,    24,   123,   151,   183,   100,   152,
     123,   133,   227,    -1,   153,    24,   154,   100,   152,   123,
     133,   227,    -1,   153,    24,   154,   103,    -1,    13,   123,
      -1,    -1,   157,    32,   123,   159,   154,   100,   152,   123,
     160,   126,    -1,    13,    -1,    12,    -1,    -1,   160,   161,
     123,    -1,   162,   123,   100,   123,   203,   126,    -1,   163,
      -1,   162,   123,   105,   123,   163,    -1,   179,    81,    -1,
      13,    -1,     1,    -1,    -1,   164,    23,   123,   166,   154,
     100,   152,   181,   167,   126,    -1,   164,    23,     1,   230,
      -1,   164,    23,     1,   103,    -1,    13,    -1,    13,   201,
      -1,   201,    -1,    -1,   203,    -1,   167,   168,   123,   203,
      -1,    -1,   170,   169,   123,   100,   123,   203,   126,    -1,
      39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,
      44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,
      49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,
      54,    -1,    -1,   171,    25,   154,   100,   152,   181,   203,
     126,    -1,   171,    25,     1,   230,    -1,   171,    25,     1,
     103,    -1,   187,    -1,    -1,   174,    36,     5,   173,   183,
     100,   152,   123,   134,   227,    -1,    -1,   176,    38,     5,
      13,   154,   100,   152,   181,   203,   126,    -1,   106,   123,
      -1,   107,   123,    -1,   108,   123,    -1,   180,    -1,    -1,
     109,    -1,   106,    -1,   123,    -1,    -1,    -1,    -1,   182,
     187,   184,   183,   100,   152,   181,   203,   126,    -1,    -1,
     189,    -1,   187,   184,   105,   123,   186,   189,    -1,   187,
       1,    -1,   189,     5,    -1,   191,    -1,   188,    -1,   188,
     191,    -1,   189,   178,   191,    -1,   189,     1,    -1,    21,
      -1,    20,    21,    -1,    13,    21,    -1,   193,    -1,   193,
     194,    -1,   194,    -1,   190,   193,    -1,   190,   193,   194,
      -1,   190,   194,    -1,   191,    -1,   192,   123,   105,   123,
     191,    -1,   192,     1,    -1,    13,    -1,    20,    -1,   195,
      -1,   194,   195,    -1,   194,     1,    -1,    16,    -1,    15,
      -1,   196,    -1,   198,    -1,   202,    -1,    18,    13,    -1,
      13,   123,    -1,    19,   123,   197,   110,    -1,    19,   123,
     197,   199,   123,   200,   123,   110,    -1,    19,   123,   190,
     197,   110,    -1,    19,   123,   190,   197,   199,   123,   200,
     123,   110,    -1,   111,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,    11,    -1,    13,    -1,    12,    -1,    17,
      13,    -1,    17,    13,    -1,    17,    17,    13,    -1,    17,
      93,   123,   192,   123,   102,    -1,    17,    92,   123,    14,
     123,   102,    -1,    17,    92,   123,   179,    83,   123,   102,
      -1,    17,    92,   123,    13,   123,   102,    -1,    17,    94,
     123,   191,   123,   102,    -1,    -1,   206,    -1,   204,   206,
      -1,   204,    -1,   205,    -1,   204,   205,    -1,   206,   103,
     123,    -1,   205,   103,   123,    -1,   204,   206,   103,   123,
      -1,   204,   205,   103,   123,    -1,     1,   234,   235,    -1,
      98,   123,    17,   123,   210,   209,    -1,   208,    17,   123,
     210,   209,    -1,   208,   207,    -1,   208,    17,   123,   210,
     209,   207,    -1,    56,   123,   207,    -1,   208,    17,   123,
     207,    -1,     1,   234,   235,    -1,    13,   123,    -1,    56,
     123,    -1,    -1,   211,    -1,   211,   212,    -1,   214,    -1,
     211,   213,   214,    -1,     1,   234,   235,    -1,   112,   123,
      -1,   105,   123,    -1,    -1,   215,   123,    -1,   180,   215,
     123,    -1,    12,   123,    -1,    13,   123,    -1,    79,   123,
      -1,   180,    79,   123,    -1,    91,   123,    -1,    99,   123,
      -1,    15,   123,    -1,   113,   123,    -1,    28,   123,    13,
     127,   123,    -1,   216,   123,    -1,   224,   123,    -1,   226,
     123,    -1,   114,   123,    -1,    83,    -1,    82,    -1,    81,
      -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,    63,
      -1,    62,    -1,    64,    -1,    60,    -1,    61,    -1,    84,
      -1,    85,    -1,    86,    -1,    87,    -1,    88,    -1,    89,
      -1,    90,    -1,    92,   123,   210,   127,    -1,    92,   123,
     127,    -1,    92,   123,   212,   127,    -1,   215,    -1,    28,
     123,    13,   127,    -1,   180,   215,    -1,     5,   106,     5,
      -1,     5,   109,     5,    -1,   219,    20,   123,    -1,   219,
     112,   123,    -1,    -1,     5,    -1,   104,   123,   221,   219,
     127,    -1,   222,    -1,   222,   212,    -1,   217,    -1,   221,
     218,   217,    -1,   221,   218,   220,    -1,   220,    -1,   221,
     219,    -1,   223,   105,   123,   221,   219,    -1,    95,   123,
     221,   219,   127,    -1,    95,   123,   212,   127,    -1,    96,
      -1,    97,    -1,   225,   123,   223,   127,    -1,   225,   123,
     212,   127,    -1,   126,    -1,     1,   126,    -1,    55,     1,
     230,    -1,    55,     1,   103,    -1,     1,   230,    -1,   100,
     235,   126,    -1,    19,   235,   110,    -1,    19,   235,     0,
      -1,   233,   235,   127,    -1,   104,    -1,    92,    -1,    95,
      -1,    28,    -1,    96,    -1,    97,    -1,    93,    -1,    94,
      -1,    -1,    -1,   235,     1,    -1,   235,   230,    -1,   235,
     231,    -1,   235,   232,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   373,   373,   374,   375,   376,   377,   378,   379,   386,
     392,   398,   404,   416,   422,   430,   431,   434,   436,   437,
     440,   442,   447,   448,   452,   453,   457,   464,   466,   471,
     475,   480,   482,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   502,   505,   506,   507,   511,   512,   523,   524,
     535,   536,   537,   538,   539,   547,   552,   553,   554,   555,
     556,   557,   561,   568,   574,   577,   580,   584,   588,   595,
     599,   602,   605,   611,   612,   616,   617,   621,   627,   630,
     636,   649,   653,   660,   663,   669,   672,   675,   681,   685,
     692,   695,   699,   704,   711,   717,   723,   729,   735,   738,
     741,   748,   753,   759,   765,   766,   770,   771,   779,   785,
     789,   797,   798,   810,   816,   822,   834,   838,   845,   849,
     856,   861,   868,   869,   873,   873,   881,   884,   887,   890,
     893,   896,   899,   902,   905,   908,   911,   914,   917,   920,
     923,   926,   932,   938,   942,   946,   952,   963,   969,   981,
     988,   997,   998,   999,  1003,  1004,  1008,  1009,  1013,  1019,
    1026,  1032,  1038,  1044,  1049,  1057,  1065,  1071,  1077,  1080,
    1084,  1092,  1099,  1105,  1106,  1107,  1111,  1114,  1119,  1124,
    1127,  1132,  1140,  1147,  1154,  1160,  1166,  1173,  1176,  1182,
    1188,  1195,  1206,  1207,  1208,  1212,  1222,  1228,  1233,  1239,
    1244,  1253,  1256,  1259,  1262,  1265,  1268,  1274,  1275,  1279,
    1290,  1299,  1309,  1323,  1333,  1343,  1361,  1379,  1380,  1383,
    1388,  1391,  1394,  1400,  1404,  1408,  1414,  1421,  1427,  1437,
    1453,  1457,  1463,  1468,  1476,  1482,  1488,  1489,  1493,  1494,
    1498,  1502,  1518,  1522,  1525,  1528,  1534,  1535,  1536,  1537,
    1543,  1544,  1545,  1546,  1547,  1548,  1549,  1557,  1560,  1563,
    1566,  1572,  1573,  1574,  1575,  1576,  1577,  1578,  1579,  1580,
    1581,  1582,  1583,  1584,  1585,  1586,  1587,  1588,  1589,  1590,
    1591,  1592,  1599,  1600,  1601,  1602,  1603,  1604,  1605,  1606,
    1610,  1618,  1627,  1638,  1639,  1646,  1650,  1653,  1656,  1659,
    1664,  1666,  1670,  1686,  1687,  1691,  1695,  1708,  1720,  1724,
    1727,  1742,  1750,  1757,  1760,  1766,  1774,  1782,  1785,  1791,
    1794,  1800,  1806,  1812,  1813,  1817,  1820,  1820,  1820,  1820,
    1820,  1820,  1820,  1820,  1826,  1831,  1833,  1834,  1835,  1836
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "TOKEN_EOF", "error", "$undefined", "LOWEST_PREC", "UNIMPORTANT_TOK",
  "WHITESPACE", "SGML_CD", "INCLUDES", "DASHMATCH", "BEGINSWITH",
  "ENDSWITH", "CONTAINS", "STRING", "IDENT", "NTH", "HEX", "IDSEL", "':'",
  "'.'", "'['", "'*'", "'|'", "IMPORT_SYM", "PAGE_SYM", "MEDIA_SYM",
  "FONT_FACE_SYM", "CHARSET_SYM", "NAMESPACE_SYM", "VARFUNCTION",
  "WEBKIT_RULE_SYM", "WEBKIT_DECLS_SYM", "WEBKIT_KEYFRAME_RULE_SYM",
  "WEBKIT_KEYFRAMES_SYM", "WEBKIT_VALUE_SYM", "WEBKIT_MEDIAQUERY_SYM",
  "WEBKIT_SELECTOR_SYM", "WEBKIT_REGION_RULE_SYM",
  "WEBKIT_VIEWPORT_RULE_SYM", "WEBKIT_FILTER_RULE_SYM",
  "TOPLEFTCORNER_SYM", "TOPLEFT_SYM", "TOPCENTER_SYM", "TOPRIGHT_SYM",
  "TOPRIGHTCORNER_SYM", "BOTTOMLEFTCORNER_SYM", "BOTTOMLEFT_SYM",
  "BOTTOMCENTER_SYM", "BOTTOMRIGHT_SYM", "BOTTOMRIGHTCORNER_SYM",
  "LEFTTOP_SYM", "LEFTMIDDLE_SYM", "LEFTBOTTOM_SYM", "RIGHTTOP_SYM",
  "RIGHTMIDDLE_SYM", "RIGHTBOTTOM_SYM", "ATKEYWORD", "IMPORTANT_SYM",
  "MEDIA_ONLY", "MEDIA_NOT", "MEDIA_AND", "REMS", "CHS", "QEMS", "EMS",
  "EXS", "PXS", "CMS", "MMS", "INS", "PTS", "PCS", "DEGS", "RADS", "GRADS",
  "TURNS", "MSECS", "SECS", "HERTZ", "KHERTZ", "DIMEN", "INVALIDDIMEN",
  "PERCENTAGE", "FLOATTOKEN", "INTEGER", "VW", "VH", "VMIN", "VMAX",
  "DPPX", "DPI", "DPCM", "URI", "FUNCTION", "ANYFUNCTION", "NOTFUNCTION",
  "CALCFUNCTION", "MINFUNCTION", "MAXFUNCTION", "VAR_DEFINITION",
  "UNICODERANGE", "'{'", "'}'", "')'", "';'", "'('", "','", "'+'", "'~'",
  "'>'", "'-'", "']'", "'='", "'/'", "'#'", "'%'", "$accept", "stylesheet",
  "webkit_rule", "webkit_keyframe_rule", "webkit_decls", "webkit_value",
  "webkit_mediaquery", "webkit_selector", "maybe_space", "maybe_sgml",
  "maybe_charset", "closing_brace", "closing_parenthesis", "charset",
  "ignored_charset", "rule_list", "valid_rule", "rule", "block_rule_list",
  "region_block_rule_list", "block_valid_rule", "block_rule",
  "at_import_header_end_maybe_space", "before_import_rule", "import",
  "namespace", "maybe_ns_prefix", "string_or_uri", "media_feature",
  "maybe_media_value", "media_query_exp", "media_query_exp_list",
  "maybe_and_media_query_exp_list", "maybe_media_restrictor",
  "media_query", "maybe_media_list", "media_list", "at_rule_body_start",
  "before_media_rule", "at_rule_header_end_maybe_space", "media", "medium",
  "before_keyframes_rule", "keyframes", "keyframe_name", "keyframes_rule",
  "keyframe_rule", "key_list", "key", "before_page_rule", "page",
  "page_selector", "declarations_and_margins", "margin_box", "$@1",
  "margin_sym", "before_font_face_rule", "font_face", "region_selector",
  "before_region_rule", "region", "before_filter_rule", "filter",
  "combinator", "maybe_unary_operator", "unary_operator",
  "maybe_space_before_declaration", "before_selector_list",
  "at_rule_header_end", "at_selector_end", "ruleset",
  "before_selector_group_item", "selector_list",
  "selector_with_trailing_whitespace", "selector", "namespace_selector",
  "simple_selector", "simple_selector_list", "element_name",
  "specifier_list", "specifier", "class", "attr_name", "attrib", "match",
  "ident_or_string", "pseudo_page", "pseudo", "declaration_list",
  "decl_list", "decl_list_recovery", "declaration", "declaration_recovery",
  "property", "prio", "expr", "valid_expr", "expr_recovery", "operator",
  "term", "unary_term", "function", "calc_func_term", "calc_func_operator",
  "calc_maybe_space", "calc_func_paren_expr", "calc_func_expr",
  "valid_calc_func_expr", "calc_func_expr_list", "calc_function",
  "min_or_max", "min_or_max_function", "save_block", "invalid_at",
  "invalid_rule", "invalid_block", "invalid_square_brackets_block",
  "invalid_parentheses_block", "opening_parenthesis", "error_location",
  "error_recovery", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    58,    46,    91,
      42,   124,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     123,   125,    41,    59,    40,    44,    43,   126,    62,    45,
      93,    61,    47,    35,    37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   116,   116,   116,   116,   116,   116,   117,
     118,   119,   120,   121,   122,   123,   123,   124,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   128,   129,
     129,   130,   130,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   132,   132,   132,   132,   133,   133,   134,   134,
     135,   135,   135,   135,   135,   135,   136,   136,   136,   136,
     136,   136,   137,   138,   139,   139,   139,   139,   139,   140,
     140,   140,   140,   141,   141,   142,   142,   143,   144,   144,
     145,   146,   146,   147,   147,   148,   148,   148,   149,   149,
     150,   150,   151,   151,   151,   152,   153,   154,   155,   155,
     155,   156,   157,   158,   159,   159,   160,   160,   161,   162,
     162,   163,   163,   163,   164,   165,   165,   165,   166,   166,
     166,   166,   167,   167,   169,   168,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   171,   172,   172,   172,   173,   174,   175,   176,
     177,   178,   178,   178,   179,   179,   180,   180,   181,   182,
     183,   184,   185,   186,   187,   187,   187,   188,   189,   189,
     189,   189,   189,   190,   190,   190,   191,   191,   191,   191,
     191,   191,   192,   192,   192,   193,   193,   194,   194,   194,
     195,   195,   195,   195,   195,   196,   197,   198,   198,   198,
     198,   199,   199,   199,   199,   199,   199,   200,   200,   201,
     202,   202,   202,   202,   202,   202,   202,   203,   203,   203,
     203,   203,   203,   204,   204,   204,   204,   205,   206,   206,
     206,   206,   206,   206,   207,   208,   209,   209,   210,   210,
     211,   211,   212,   213,   213,   213,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     216,   216,   216,   217,   217,   217,   218,   218,   218,   218,
     219,   219,   220,   221,   221,   222,   222,   222,   222,   223,
     223,   224,   224,   225,   225,   226,   226,   227,   227,   228,
     228,   229,   230,   231,   231,   232,   233,   233,   233,   233,
     233,   233,   233,   233,   234,   235,   235,   235,   235,   235
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     2,     2,     2,     2,     2,     6,
       6,     5,     5,     5,     5,     0,     2,     0,     2,     2,
       0,     1,     1,     1,     1,     1,     5,     3,     3,     5,
       3,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     7,     7,     7,     4,     4,     6,
       6,     3,     3,     0,     2,     1,     1,     2,     0,     4,
       9,     1,     5,     0,     3,     0,     1,     1,     1,     4,
       0,     1,     1,     4,     2,     0,     0,     1,    10,     8,
       4,     2,     0,    10,     1,     1,     0,     3,     6,     1,
       5,     2,     1,     1,     0,    10,     4,     4,     1,     2,
       1,     0,     1,     4,     0,     7,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     8,     4,     4,     1,     0,    10,     0,
      10,     2,     2,     2,     1,     0,     1,     1,     1,     0,
       0,     0,     9,     0,     1,     6,     2,     2,     1,     1,
       2,     3,     2,     1,     2,     2,     1,     2,     1,     2,
       3,     2,     1,     5,     2,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     2,     2,     4,     8,     5,
       9,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     3,     6,     6,     7,     6,     6,     0,     1,     2,
       1,     1,     2,     3,     3,     4,     4,     3,     6,     5,
       2,     6,     3,     4,     3,     2,     2,     0,     1,     2,
       1,     3,     3,     2,     2,     0,     2,     3,     2,     2,
       2,     3,     2,     2,     2,     2,     5,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     4,     1,     4,     2,     3,     3,     3,     3,
       0,     1,     5,     1,     2,     1,     3,     3,     1,     2,
       5,     5,     4,     1,     1,     4,     4,     1,     2,     3,
       3,     2,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      15,     0,     0,     0,     0,     0,     0,     0,    15,    15,
      15,    15,    15,    15,    20,    15,    15,    15,    15,    15,
      15,     1,     3,     8,     4,     5,     6,     7,    16,     0,
      17,    21,   159,   158,     0,     0,     0,    85,     0,     0,
       0,    31,     0,    15,     0,    39,    38,     0,    34,     0,
      37,     0,    35,     0,    36,     0,    40,     0,    41,     0,
      33,   334,    15,    15,    15,     0,     0,   221,   218,     0,
     113,   112,   157,   156,    15,    15,   109,     0,   154,    15,
      15,    15,    15,   281,   282,   279,   278,   280,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,    15,   263,   262,   261,   283,   284,   285,   286,
     287,   288,   289,    15,    15,    15,   313,   314,    15,    15,
      15,     0,     0,     0,   240,    15,    15,    15,    15,    15,
      86,    87,    81,    88,    15,     0,   185,   191,   190,     0,
       0,    15,   186,   173,     0,   169,     0,     0,   168,   176,
       0,   187,   192,   193,   194,   335,    28,    27,    15,    19,
      18,     0,     0,    73,     0,     0,    15,    15,     0,     0,
       0,     0,     0,   335,   235,     0,     0,    11,   222,   219,
      15,    15,   334,    15,   230,     0,     0,   111,   248,   249,
     254,     0,   250,   252,     0,     0,   253,   255,   260,    15,
      15,    12,   334,    15,    15,   239,     0,   246,   257,   258,
       0,   259,     0,     0,    13,   175,   210,     0,    15,    15,
      15,   195,     0,   174,   166,    14,     0,   170,   172,   167,
      15,    15,    15,     0,   185,   186,   179,     0,     0,   189,
     188,     0,     0,     0,    15,     0,    43,    42,    17,    45,
      44,    72,    71,    15,     0,     9,     0,    62,     0,    85,
       0,     0,     0,   121,     0,    97,     0,     0,     0,   160,
       0,   232,    15,    15,    15,   224,   223,   335,     0,    10,
      15,    15,     0,    25,    24,   291,     0,     0,    15,    15,
       0,     0,   293,   305,   308,   300,     0,   251,   247,   335,
     244,   243,   241,     0,   300,     0,    15,    15,    15,    83,
     211,   155,     0,     0,    15,     0,     0,     0,    15,   151,
     152,   153,   171,     0,    23,   336,   335,   329,   327,   332,
     333,   328,   330,   331,    22,   326,   322,   337,   338,   339,
     335,    26,   321,     0,     0,    32,    74,    75,    76,    15,
      67,    68,    15,    92,     0,    95,   100,   105,   104,    15,
     117,   116,   118,     0,    15,   120,   145,   144,    95,   160,
       0,    15,     0,     0,   226,   225,     0,   233,   237,     0,
       0,    15,   290,   292,     0,     0,   295,   312,   301,     0,
       0,   304,   242,   316,   309,    15,   315,    85,   101,     0,
      15,    89,    15,    15,     0,   182,     0,    15,   196,    15,
       0,   202,   203,   204,   205,   206,   197,   201,    15,   163,
       0,     0,    15,    30,   320,   319,     0,    90,    94,    15,
       0,    15,     0,   119,   209,     0,    15,     0,     0,    95,
     237,    15,     0,     0,   110,   256,     0,   300,     0,     0,
     306,   307,    15,    15,   311,     0,    82,    15,    15,    15,
      85,     0,     0,    15,   184,     0,     0,   199,    15,     0,
       0,   324,   323,   325,     0,    69,    70,     0,     0,    85,
      95,    46,    95,    95,     0,    95,    95,    15,   228,   236,
     231,   108,   294,     0,   296,   297,   298,   299,   300,     0,
      77,    78,    84,   215,   213,     0,   212,    15,   216,     0,
     208,   207,    15,     0,    29,    65,    64,    66,    93,    15,
       0,    15,    15,     0,    15,    15,     0,   302,   310,    15,
       0,   214,     0,    15,     0,    46,     0,   317,    56,    17,
      60,    59,    53,    54,    51,    52,    61,    55,    50,    99,
      58,    57,   106,     0,   143,    48,     0,     0,     0,    15,
     183,     0,   198,     0,   318,    47,     0,     0,   122,     0,
       0,   162,    15,    80,   200,    98,   103,    15,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   115,    15,   124,     0,    17,   148,
     150,    79,   107,     0,    15,    49,   123,     0,    15,     0,
       0,   125
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,    33,    41,
      30,   537,   285,    31,   246,   161,    43,   248,   520,   569,
     538,   539,   258,    44,    45,    46,   254,   349,   459,   530,
     132,   133,   401,   134,   353,   477,   354,   431,    47,   260,
     542,   309,    49,   543,   359,   566,    74,    75,    76,    51,
     544,   364,   567,   595,   604,   596,    53,   545,   369,    55,
      56,    57,   547,   233,    77,   121,    34,    59,   372,   226,
     548,   470,   144,   145,   146,   147,   148,   406,   149,   150,
     151,   152,   317,   153,   418,   512,   365,   154,    65,    66,
      67,    68,   184,    69,   442,   122,   123,   205,   206,   124,
     125,   126,   293,   389,   390,   294,   295,   296,   305,   127,
     128,   129,   549,   550,   551,   337,   338,   339,   340,   173,
     241
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -480
static const yytype_int16 yypact[] =
{
     668,   -52,   -48,   159,   217,    61,   219,   312,  -480,  -480,
    -480,  -480,  -480,  -480,    67,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,   338,   338,   338,   338,   338,   338,  -480,   450,
    -480,  -480,   971,   338,   427,    82,   871,   479,   715,    -6,
      94,   521,   579,  -480,   336,  -480,  -480,   348,  -480,   352,
    -480,   366,  -480,   369,  -480,   365,  -480,   396,  -480,   807,
    -480,  -480,  -480,  -480,  -480,   335,  1324,   342,   346,    60,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,   373,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  1533,   379,   570,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,    48,  -480,   384,   444,  -480,  -480,   422,
     477,  -480,   471,  -480,    97,   807,   291,   995,  -480,   672,
     455,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  1537,   179,   280,   253,   595,  -480,  -480,   505,   244,
     489,   506,    72,  -480,   338,   293,    54,  -480,   410,   443,
    -480,  -480,  -480,  -480,  -480,   273,    55,  -480,   338,   338,
     338,   406,   338,   338,   680,   964,   338,   338,   338,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  1204,   338,   338,   338,
     964,   338,   304,   212,  -480,  -480,  -480,   539,  -480,  -480,
    -480,  -480,   545,  -480,  -480,  -480,   448,  -480,  -480,  -480,
    -480,  -480,  -480,   807,  -480,  -480,   672,   699,   708,  -480,
    -480,   404,   238,   454,  -480,   567,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,    56,  -480,   237,   338,    56,   210,
     285,   464,   330,   573,   364,   338,   469,   807,   560,   448,
    1094,  -480,  -480,  -480,  -480,   338,   338,  -480,   783,  -480,
    -480,  -480,    47,  -480,  -480,  -480,    47,    47,  -480,  -480,
    1564,    47,  -480,  -480,  -480,   569,    85,   338,   338,  -480,
     338,   338,  -480,    47,   569,    38,  -480,  -480,  -480,   522,
    -480,   181,   715,   715,   444,   471,   574,   255,  -480,   338,
     338,   338,  -480,   816,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,   264,   445,   521,   338,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,   121,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,   571,   576,  -480,  -480,  -480,  -480,  -480,  -480,
     200,  -480,   493,   871,   338,   338,  1130,  -480,   538,   437,
      82,  -480,  -480,  -480,   490,  1015,  -480,  -480,   458,  1442,
      36,  -480,   320,  -480,   250,  -480,  -480,   479,   338,   504,
    -480,  -480,  -480,  -480,   514,  -480,   107,  -480,   338,  -480,
     316,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,   338,
     283,   447,  -480,  -480,  -480,  -480,   232,    52,  -480,  -480,
     499,  -480,   501,  -480,  -480,   502,  -480,   503,   525,  -480,
     538,  -480,  1160,    44,  -480,   338,    47,   569,   601,   622,
    -480,  -480,  -480,  -480,  -480,  1015,  -480,  -480,  -480,  -480,
     479,   126,   202,  -480,  -480,   229,   251,  -480,  -480,   518,
     807,  -480,  -480,  -480,   242,  -480,  -480,    32,    39,   479,
    -480,   338,  -480,  -480,   478,  -480,  -480,  -480,  -480,   338,
    -480,  -480,  -480,    36,  -480,  -480,   338,   338,   569,    20,
     338,    71,    48,  -480,  -480,   266,  -480,  -480,  -480,   518,
    -480,  -480,  -480,   381,  -480,  -480,  -480,  -480,  -480,  -480,
    1444,  -480,  -480,    44,  -480,  -480,   478,  -480,   250,  -480,
     526,  -480,   715,  -480,    49,   338,   150,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,   338,  1387,  -480,   338,   478,    44,   871,  -480,
    -480,    65,  -480,  1444,  -480,   521,   241,  1196,  -480,   887,
      44,  -480,  -480,   338,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,    44,  -480,  -480,
    -480,   338,   338,  1306,  -480,   521,  -480,   270,  -480,   437,
      44,  -480
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,     0,  -242,
    -480,  -237,  -236,  -480,  -480,  -480,   468,  -480,   115,  -480,
      95,  -480,  -480,  -480,  -479,  -471,  -480,   405,  -480,  -480,
     271,   214,  -480,  -360,   -35,  -480,   267,  -247,  -480,  -148,
     -10,  -480,  -480,    -8,  -480,  -480,   111,  -480,   298,  -480,
      -4,  -480,  -480,  -480,  -480,  -480,  -480,     1,  -480,  -480,
    -260,  -480,     3,  -480,   385,   -34,   -79,  -480,  -258,   533,
      13,  -480,   -45,  -480,   236,   485,  -142,  -480,   563,   189,
    -134,  -480,   395,  -480,   302,   213,   357,  -480,  -348,  -480,
     655,   663,  -141,  -480,   297,  -189,  -480,    19,  -480,   532,
     -94,  -480,   350,  -480,  -274,   371,  -203,  -480,  -480,  -480,
    -480,  -480,  -446,   612,   613,   -16,  -480,  -480,  -480,  -124,
    -147
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -304
static const yytype_int16 yytable[] =
{
      14,    78,   135,   227,   336,   286,   345,   304,    22,    23,
      24,    25,    26,    27,   172,    32,   240,    35,    36,    37,
      38,   266,    48,   157,    50,    28,   270,   200,    52,    40,
     394,   443,   515,    54,   271,    58,   283,   457,   283,   -91,
     428,   540,   163,   164,   324,    60,   381,   283,    15,   541,
     382,   383,    16,   -15,    28,   387,   452,    28,   277,    28,
      28,   182,   174,   175,   176,   -85,    19,   393,   347,   396,
      28,   272,    28,   224,   185,   186,    28,   183,   299,   188,
     189,   190,   191,    70,   540,  -303,   202,    28,   529,   378,
    -303,   322,   541,    29,   155,    71,   430,   156,   224,    28,
     457,   292,   192,   240,   240,  -303,   158,   -15,   464,   130,
     131,   437,   -15,   193,   194,   195,   292,   575,   196,   197,
     198,   436,   428,   599,   308,   207,   208,   209,   210,   211,
     376,    28,   155,   212,   213,   516,   523,   377,   284,   -91,
     284,   222,   -91,   395,   429,   334,   252,   348,   453,   284,
     324,    48,   392,    50,   454,   280,   -85,    52,   242,   562,
     281,   290,    54,  -155,    58,   257,   259,   261,   263,   265,
     405,   407,  -161,   493,    60,   574,   290,  -161,   557,   420,
     275,   276,   447,   278,   440,   473,    28,  -303,    72,   240,
    -303,    73,   487,   421,   402,   403,   386,  -303,   225,   297,
     298,   224,  -161,   300,   301,   568,   491,    28,   570,   -15,
     492,   432,   -15,   287,   291,    28,   435,    28,   311,   312,
     313,  -160,   370,   438,   528,   307,   429,   342,   503,   303,
     319,   320,   321,   519,    28,   521,   522,    28,   524,   525,
     351,   324,    70,    28,   343,   264,   361,    28,   367,   -15,
     155,   334,   498,   346,    71,   606,    28,   527,    28,    17,
     546,   610,   411,   412,   413,   414,   415,   130,   131,    28,
     452,    28,   373,   374,   375,    28,   422,    78,    28,   155,
     379,   380,   251,   471,   325,    28,   554,    72,   384,   385,
      73,   292,   228,   253,   182,   292,   229,   565,    28,   564,
    -146,   490,   326,   546,   504,  -161,   397,   398,   399,    28,
     -97,   327,    21,   -97,   408,   391,   308,    18,   419,    20,
     571,  -304,  -155,   411,   412,   413,   414,   415,   425,   576,
     594,   506,   155,   600,   507,   475,   237,   155,   238,   326,
     350,   341,   334,    28,   -15,   514,    78,    72,   327,   426,
      73,   290,   427,   508,   255,   290,   605,   484,   165,   265,
     564,   292,   453,   306,   265,   416,   417,   423,   531,   572,
     608,   265,   166,   611,   279,   328,   329,   330,   331,   332,
     333,   445,   228,   155,   167,   355,   229,   335,   356,   168,
     560,  -164,  -164,   472,   169,   455,  -164,   230,   231,   232,
     460,   170,   461,   462,   324,   325,   465,   466,   526,   408,
     476,    28,   328,   329,   330,   331,   332,   333,   469,   282,
     155,   290,   474,   326,   335,   323,   467,   417,    61,   479,
     155,   481,   327,   360,   171,   216,   177,  -217,    61,   217,
      62,   489,    28,   553,   518,   180,   556,   283,   325,   181,
      62,    39,   496,   497,   187,   -15,   239,   499,   500,   501,
    -178,   517,   -15,   505,   155,   215,   326,   366,   509,    28,
     137,   138,   139,   140,   141,   327,   357,   358,  -217,    61,
     201,  -165,  -165,    63,    28,   214,  -165,   230,   231,   232,
     221,    62,   223,    63,   267,    28,   328,   329,   330,   331,
     332,   333,   212,   446,   155,   334,   262,   532,   335,    28,
     -15,   268,   534,   273,   218,   219,   220,   458,   -15,   535,
     342,   552,   -15,    28,   555,    64,   159,   160,  -217,   558,
     510,   511,    78,   561,    63,    64,   130,   131,  -217,   328,
     329,   330,   331,   332,   333,   155,   274,   155,   424,   284,
      28,   335,   310,   318,   155,  -178,  -178,  -178,   314,   573,
    -178,  -178,  -178,  -178,   448,   315,   143,   449,   344,   368,
    -238,   202,   601,   371,   388,  -238,    64,   602,    28,  -217,
     162,   400,  -245,  -245,   -15,  -245,   362,   409,   363,   434,
     363,   -15,   -15,   439,   441,   603,   256,   463,  -245,   480,
     -15,   482,   483,   485,   607,   -15,   494,   -15,   609,  -238,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,  -238,   486,  -238,   495,   559,   247,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
     563,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,   352,   598,  -245,  -245,  -245,   456,  -245,
     -15,  -238,  -238,  -238,   502,   203,  -245,   577,   444,  -245,
     283,   202,   204,  -245,  -245,    28,   -15,   137,   138,   139,
     140,   141,    79,    80,   478,    81,   404,     1,     2,     3,
     239,     4,     5,     6,  -181,   269,   513,   316,    82,   239,
     236,   410,   468,  -177,   137,   138,   139,   140,   141,   433,
      28,   178,   533,   137,   138,   139,   140,   141,   136,   179,
     137,   138,   139,   140,   141,   142,   143,   488,   302,   450,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     451,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   249,   250,   115,   116,   117,     0,   118,
       0,     0,   284,     0,   182,     0,    72,     0,    28,    73,
       0,     0,     0,   119,   120,    79,    80,     0,    81,  -181,
    -181,  -181,     0,     0,  -181,  -181,  -181,  -181,  -177,  -177,
    -177,    82,     0,  -177,  -177,  -177,  -177,   239,     0,     0,
     136,  -180,   137,   138,   139,   140,   141,   142,   143,     0,
       0,   137,   138,   139,   140,   141,     0,     0,     0,     0,
       0,     0,     0,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    28,     0,   115,   116,
     117,     0,   118,    79,    80,     0,    81,   324,   597,    72,
       0,     0,    73,     0,     0,     0,   119,   120,     0,    82,
    -159,     0,  -159,  -159,  -159,  -159,  -159,  -159,  -159,     0,
    -114,   -96,  -142,     0,     0,     0,  -180,  -180,  -180,  -102,
       0,  -180,  -180,  -180,  -180,  -149,     0,     0,     0,     0,
       0,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,     0,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     0,   202,   115,   116,   117,    28,
     118,     0,     0,     0,     0,     0,    28,    72,     0,     0,
      73,     0,     0,     0,   119,   120,     0,     0,   334,     0,
       0,     0,   288,   -63,  -114,   -96,  -142,     0,    42,     0,
       0,     0,     0,  -102,     0,     0,     0,  -147,   234,  -149,
     137,   138,   139,   140,   141,   235,     0,     0,     0,     0,
      28,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   288,     0,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   289,     0,
      72,     0,     0,    73,     0,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,  -227,   325,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,     0,     0,     0,
       0,     0,     0,   326,     0,     0,     0,     0,     0,   289,
       0,    72,   327,     0,    73,     0,     0,     0,     0,     0,
    -234,   325,     0,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,   326,
       0,     0,     0,     0,     0,     0,     0,     0,   327,     0,
    -229,   182,     0,     0,     0,     0,     0,     0,     0,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,     0,   328,   329,   330,   331,
     332,   333,     0,     0,   155,  -227,   324,  -227,   335,  -229,
    -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,  -229,  -229,  -229,     0,    79,    80,     0,    81,
       0,     0,   328,   329,   330,   331,   332,   333,     0,     0,
     155,  -234,    82,  -234,   335,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   591,   592,
     593,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -229,     0,  -229,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,     0,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   334,     0,   115,
     116,   117,     0,   118,     0,     0,  -217,    61,     0,     0,
      72,    28,     0,    73,     0,     0,     0,   119,   120,    62,
       0,     0,     0,     0,  -220,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,     0,     0,
       0,     0,     0,     0,     0,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,     0,    63,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,     0,
      63,     0,     0,     0,     0,     0,     0,  -217,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,     0,     0,     0,    64,     0,     0,  -217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,     0,     0,  -220,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,     0,    63,   324,   536,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -159,     0,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,   -63,  -114,   -96,  -142,
     288,    42,     0,     0,     0,     0,  -102,     0,     0,     0,
    -147,     0,  -149,     0,     0,    64,     0,     0,  -217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   245,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,     0,     0,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,     0,    -2,   243,     0,
       0,     0,     0,     0,     0,   334,   289,     0,    72,     0,
    -159,    73,  -159,  -159,  -159,  -159,  -159,  -159,  -159,   -63,
    -114,   -96,  -142,   244,    42,     0,     0,     0,     0,  -102,
       0,     0,     0,  -147,     0,  -149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   245,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   199,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,     0,     0,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112
};

static const yytype_int16 yycheck[] =
{
       0,    35,    37,   145,   241,   194,   248,   210,     8,     9,
      10,    11,    12,    13,    59,    15,   150,    17,    18,    19,
      20,   169,    32,    39,    32,     5,   173,   121,    32,    29,
     304,   379,     0,    32,   175,    32,     0,   397,     0,     0,
       1,   520,    42,    43,     0,    32,   282,     0,   100,   520,
     286,   287,   100,     5,     5,   291,    20,     5,   182,     5,
       5,     1,    62,    63,    64,    13,     5,   303,    12,   305,
       5,    17,     5,     1,    74,    75,     5,    17,   202,    79,
      80,    81,    82,     1,   563,     0,     1,     5,    17,   278,
       5,   233,   563,    26,   100,    13,   354,   103,     1,     5,
     460,   195,   102,   237,   238,    20,    12,    59,     1,    57,
      58,   369,     5,   113,   114,   115,   210,   563,   118,   119,
     120,   368,     1,   569,   104,   125,   126,   127,   128,   129,
     277,     5,   100,   133,   134,   103,   484,   278,   102,   100,
     102,   141,   103,   105,   105,   101,   162,    91,   112,   102,
       0,   161,   299,   161,   390,   100,   104,   161,   158,   110,
     105,   195,   161,    81,   161,   165,   166,   167,   168,   169,
     312,   313,   100,   447,   161,   110,   210,   105,   526,   326,
     180,   181,   385,   183,   373,   421,     5,   102,   106,   323,
     105,   109,   439,   340,    13,    14,   290,   112,   101,   199,
     200,     1,   105,   203,   204,   553,   443,     5,   556,   102,
     446,   359,   105,   194,   195,     5,   364,     5,   218,   219,
     220,   100,   267,   371,   498,    13,   105,   243,   102,   210,
     230,   231,   232,   480,     5,   482,   483,     5,   485,   486,
     256,     0,     1,     5,   244,     1,   262,     5,   264,     5,
     100,   101,   455,   253,    13,   603,     5,   493,     5,   100,
     520,   609,     7,     8,     9,    10,    11,    57,    58,     5,
      20,     5,   272,   273,   274,     5,    12,   311,     5,   100,
     280,   281,   103,     0,     1,     5,   523,   106,   288,   289,
     109,   385,     1,    13,     1,   389,     5,   539,     5,   536,
     100,   442,    19,   563,   102,   105,   306,   307,   308,     5,
     100,    28,     0,   103,   314,   296,   104,   100,   318,   100,
     557,     1,    81,     7,     8,     9,    10,    11,   344,   566,
     567,   102,   100,   570,   105,   103,   147,   100,   149,    19,
     103,   103,   101,     5,   100,   103,   380,   106,    28,   349,
     109,   385,   352,   102,   101,   389,   598,   436,    22,   359,
     597,   455,   112,    59,   364,   110,   111,   103,   102,   558,
     100,   371,    24,   610,   101,    92,    93,    94,    95,    96,
      97,   381,     1,   100,    32,   100,     5,   104,   103,    23,
     532,   100,   101,   110,    25,   395,   105,   106,   107,   108,
     400,    36,   402,   403,     0,     1,   406,   407,   487,   409,
     426,     5,    92,    93,    94,    95,    96,    97,   418,    13,
     100,   455,   422,    19,   104,   236,   110,   111,     1,   429,
     100,   431,    28,   103,    38,    13,   101,     0,     1,    17,
      13,   441,     5,   522,   479,   103,   525,     0,     1,   103,
      13,     1,   452,   453,    81,     5,     1,   457,   458,   459,
       5,   477,    12,   463,   100,    21,    19,   103,   468,     5,
      15,    16,    17,    18,    19,    28,    12,    13,     0,     1,
     101,   100,   101,    56,     5,   101,   105,   106,   107,   108,
      13,    13,    21,    56,     5,     5,    92,    93,    94,    95,
      96,    97,   502,    13,   100,   101,     1,   507,   104,     5,
       5,     5,   512,   103,    92,    93,    94,    13,    13,   519,
     536,   521,    17,     5,   524,    98,     5,     6,   101,   529,
      12,    13,   566,   533,    56,    98,    57,    58,   101,    92,
      93,    94,    95,    96,    97,   100,   103,   100,   103,   102,
       5,   104,    13,   105,   100,   100,   101,   102,    13,   559,
     105,   106,   107,   108,   106,    20,    21,   109,     1,   100,
       0,     1,   572,    13,     5,     5,    98,   577,     5,   101,
       1,    59,    12,    13,     5,    15,    13,    13,    17,    13,
      17,    12,    13,   100,    56,   595,     1,    83,    28,   100,
       5,   100,   100,   100,   604,   100,     5,    12,   608,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   100,    56,     5,   102,   161,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
     535,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,   258,   569,    95,    96,    97,   397,    99,
      91,   101,   102,   103,   460,   105,   106,   566,   380,   109,
       0,     1,   112,   113,   114,     5,    91,    15,    16,    17,
      18,    19,    12,    13,   427,    15,   311,    29,    30,    31,
       1,    33,    34,    35,     5,   172,   470,   222,    28,     1,
     147,   316,   410,     5,    15,    16,    17,    18,    19,   362,
       5,    66,   509,    15,    16,    17,    18,    19,    13,    66,
      15,    16,    17,    18,    19,    20,    21,   440,   206,   389,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
     389,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,   161,   161,    95,    96,    97,    -1,    99,
      -1,    -1,   102,    -1,     1,    -1,   106,    -1,     5,   109,
      -1,    -1,    -1,   113,   114,    12,    13,    -1,    15,   100,
     101,   102,    -1,    -1,   105,   106,   107,   108,   100,   101,
     102,    28,    -1,   105,   106,   107,   108,     1,    -1,    -1,
      13,     5,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,     5,    -1,    95,    96,
      97,    -1,    99,    12,    13,    -1,    15,     0,     1,   106,
      -1,    -1,   109,    -1,    -1,    -1,   113,   114,    -1,    28,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    -1,    -1,   100,   101,   102,    32,
      -1,   105,   106,   107,   108,    38,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    -1,     1,    95,    96,    97,     5,
      99,    -1,    -1,    -1,    -1,    -1,     5,   106,    -1,    -1,
     109,    -1,    -1,    -1,   113,   114,    -1,    -1,   101,    -1,
      -1,    -1,    28,    22,    23,    24,    25,    -1,    27,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    36,    13,    38,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
       5,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    28,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
     106,    -1,    -1,   109,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,     0,     1,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,   104,
      -1,   106,    28,    -1,   109,    -1,    -1,    -1,    -1,    -1,
       0,     1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
       0,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    92,    93,    94,    95,
      96,    97,    -1,    -1,   100,   101,     0,   103,   104,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    12,    13,    -1,    15,
      -1,    -1,    92,    93,    94,    95,    96,    97,    -1,    -1,
     100,   101,    28,   103,   104,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,   103,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,   101,    -1,    95,
      96,    97,    -1,    99,    -1,    -1,     0,     1,    -1,    -1,
     106,     5,    -1,   109,    -1,    -1,    -1,   113,   114,    13,
      -1,    -1,    -1,    -1,     0,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    98,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,   101,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,     0,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      28,    27,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    38,    -1,    -1,    98,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,     0,     1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   104,    -1,   106,    -1,
      13,   109,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    36,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    30,    31,    33,    34,    35,   116,   117,   118,
     119,   120,   121,   122,   123,   100,   100,   100,   100,     5,
     100,     0,   123,   123,   123,   123,   123,   123,     5,    26,
     125,   128,   123,   123,   181,   123,   123,   123,   123,     1,
     123,   124,    27,   131,   138,   139,   140,   153,   155,   157,
     158,   164,   165,   171,   172,   174,   175,   176,   177,   182,
     185,     1,    13,    56,    98,   203,   204,   205,   206,   208,
       1,    13,   106,   109,   161,   162,   163,   179,   180,    12,
      13,    15,    28,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    95,    96,    97,    99,   113,
     114,   180,   210,   211,   214,   215,   216,   224,   225,   226,
      57,    58,   145,   146,   148,   149,    13,    15,    16,    17,
      18,    19,    20,    21,   187,   188,   189,   190,   191,   193,
     194,   195,   196,   198,   202,   100,   103,   230,    12,     5,
       6,   130,     1,   123,   123,    22,    24,    32,    23,    25,
      36,    38,   187,   234,   123,   123,   123,   101,   205,   206,
     103,   103,     1,    17,   207,   123,   123,    81,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,    79,
     215,   101,     1,   105,   112,   212,   213,   123,   123,   123,
     123,   123,   123,   123,   101,    21,    13,    17,    92,    93,
      94,    13,   123,    21,     1,   101,   184,   191,     1,     5,
     106,   107,   108,   178,    13,    20,   193,   194,   194,     1,
     195,   235,   123,     1,    26,    55,   129,   131,   132,   228,
     229,   103,   230,    13,   141,   101,     1,   123,   137,   123,
     154,   123,     1,   123,     1,   123,   154,     5,     5,   184,
     235,   207,    17,   103,   103,   123,   123,   234,   123,   101,
     100,   105,    13,     0,   102,   127,   210,   212,    28,   104,
     180,   212,   215,   217,   220,   221,   222,   123,   123,   234,
     123,   123,   214,   212,   221,   223,    59,    13,   104,   156,
      13,   123,   123,   123,    13,    20,   190,   197,   105,   123,
     123,   123,   191,   194,     0,     1,    19,    28,    92,    93,
      94,    95,    96,    97,   101,   104,   126,   230,   231,   232,
     233,   103,   230,   123,     1,   124,   123,    12,    91,   142,
     103,   230,   142,   149,   151,   100,   103,    12,    13,   159,
     103,   230,    13,    17,   166,   201,   103,   230,   100,   173,
     187,    13,   183,   123,   123,   123,   235,   207,   210,   123,
     123,   127,   127,   127,   123,   123,   215,   127,     5,   218,
     219,   212,   235,   127,   219,   105,   127,   123,   123,   123,
      59,   147,    13,    14,   179,   191,   192,   191,   123,    13,
     197,     7,     8,     9,    10,    11,   110,   111,   199,   123,
     235,   235,    12,   103,   103,   230,   123,   123,     1,   105,
     183,   152,   154,   201,    13,   154,   152,   183,   154,   100,
     210,    56,   209,   203,   163,   123,    13,   221,   106,   109,
     217,   220,    20,   112,   127,   123,   145,   148,    13,   143,
     123,   123,   123,    83,     1,   123,   123,   110,   199,   123,
     186,     0,   110,   127,   123,   103,   230,   150,   151,   123,
     100,   123,   100,   100,   181,   100,   100,   152,   209,   123,
     207,   126,   127,   219,     5,     5,   123,   123,   221,   123,
     123,   123,   146,   102,   102,   123,   102,   105,   102,   123,
      12,    13,   200,   189,   103,     0,   103,   230,   149,   152,
     133,   152,   152,   203,   152,   152,   181,   127,   219,    17,
     144,   102,   123,   200,   123,   123,     1,   126,   135,   136,
     139,   140,   155,   158,   165,   172,   175,   177,   185,   227,
     228,   229,   123,   181,   126,   123,   181,   203,   123,   102,
     191,   123,   110,   133,   126,   124,   160,   167,   203,   134,
     203,   126,   210,   123,   110,   227,   126,   161,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,   126,   168,   170,     1,   135,   227,
     126,   123,   123,   123,   169,   124,   203,   123,   100,   123,
     203,   126
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      yyerror (parser, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, parser)
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
		  Type, Value, parser); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, CSSParser* parser)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    CSSParser* parser;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (parser);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, CSSParser* parser)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, parser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    CSSParser* parser;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, CSSParser* parser)
#else
static void
yy_reduce_print (yyvsp, yyrule, parser)
    YYSTYPE *yyvsp;
    int yyrule;
    CSSParser* parser;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, parser); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, CSSParser* parser)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, parser)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    CSSParser* parser;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (parser);

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
int yyparse (CSSParser* parser);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
yyparse (CSSParser* parser)
#else
int
yyparse (parser)
    CSSParser* parser;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 9:

/* Line 1464 of yacc.c  */
#line 386 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->m_rule = (yyvsp[(4) - (6)].rule);
    ;}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 392 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->m_keyframe = (yyvsp[(4) - (6)].keyframe);
    ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 398 "DerivedSources/WebCore/CSSGrammar.y"
    {

    ;}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 404 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(4) - (5)].valueList)) {
            parser->m_valueList = parser->sinkFloatingValueList((yyvsp[(4) - (5)].valueList));
            int oldParsedProperties = parser->m_parsedProperties.size();
            if (!parser->parseValue(parser->m_id, parser->m_important))
                parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
            parser->m_valueList = nullptr;
        }
    ;}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 416 "DerivedSources/WebCore/CSSGrammar.y"
    {
         parser->m_mediaQuery = parser->sinkFloatingMediaQuery((yyvsp[(4) - (5)].mediaQuery));
     ;}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 422 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(4) - (5)].selectorList)) {
            if (parser->m_selectorListForParseSelector)
                parser->m_selectorListForParseSelector->adoptSelectorVector(*(yyvsp[(4) - (5)].selectorList));
        }
    ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 442 "DerivedSources/WebCore/CSSGrammar.y"
    {
  ;}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 457 "DerivedSources/WebCore/CSSGrammar.y"
    {
     if (parser->m_styleSheet)
         parser->m_styleSheet->parserSetEncodingFromCharsetRule((yyvsp[(3) - (5)].string));
     if (parser->isExtractingSourceData() && parser->m_currentRuleDataStack->isEmpty() && parser->m_ruleSourceDataResult)
         parser->addNewRuleToSourceTree(CSSRuleSourceData::createUnknown());
     (yyval.rule) = 0;
  ;}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 464 "DerivedSources/WebCore/CSSGrammar.y"
    {
  ;}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 466 "DerivedSources/WebCore/CSSGrammar.y"
    {
  ;}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 471 "DerivedSources/WebCore/CSSGrammar.y"
    {

        (yyval.rule) = 0;
    ;}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 475 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 482 "DerivedSources/WebCore/CSSGrammar.y"
    {
     if ((yyvsp[(2) - (3)].rule) && parser->m_styleSheet)
         parser->m_styleSheet->parserAppendRule((yyvsp[(2) - (3)].rule));
 ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 502 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->m_hadSyntacticallyValidCSSRule = true;
    ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 511 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.ruleList) = 0; ;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 512 "DerivedSources/WebCore/CSSGrammar.y"
    {
      (yyval.ruleList) = (yyvsp[(1) - (3)].ruleList);
      if ((yyvsp[(2) - (3)].rule)) {
          if (!(yyval.ruleList))
              (yyval.ruleList) = parser->createRuleList();
          (yyval.ruleList)->append((yyvsp[(2) - (3)].rule));
      }
  ;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 523 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.ruleList) = 0; ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 524 "DerivedSources/WebCore/CSSGrammar.y"
    {
      (yyval.ruleList) = (yyvsp[(1) - (3)].ruleList);
      if ((yyvsp[(2) - (3)].rule)) {
          if (!(yyval.ruleList))
              (yyval.ruleList) = parser->createRuleList();
          (yyval.ruleList)->append((yyvsp[(2) - (3)].rule));
      }
  ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 561 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markRuleHeaderEnd();
        parser->markRuleBodyStart();
    ;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 568 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::IMPORT_RULE);
    ;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 574 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = parser->createImportRule((yyvsp[(4) - (7)].string), (yyvsp[(6) - (7)].mediaList));
    ;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 577 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = parser->createImportRule((yyvsp[(4) - (7)].string), (yyvsp[(6) - (7)].mediaList));
    ;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 580 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = 0;
        parser->popRuleData();
    ;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 584 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = 0;
        parser->popRuleData();
    ;}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 588 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = 0;
        parser->popRuleData();
    ;}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 595 "DerivedSources/WebCore/CSSGrammar.y"
    {
    parser->addNamespace((yyvsp[(3) - (6)].string), (yyvsp[(4) - (6)].string));
    (yyval.rule) = 0;
;}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 599 "DerivedSources/WebCore/CSSGrammar.y"
    {
    (yyval.rule) = 0;
;}
    break;

  case 71:

/* Line 1464 of yacc.c  */
#line 602 "DerivedSources/WebCore/CSSGrammar.y"
    {
    (yyval.rule) = 0;
;}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 605 "DerivedSources/WebCore/CSSGrammar.y"
    {
    (yyval.rule) = 0;
;}
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 611 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.string).clear(); ;}
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 612 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.string) = (yyvsp[(1) - (2)].string); ;}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 621 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.string) = (yyvsp[(1) - (2)].string);
    ;}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 627 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.valueList) = 0;
    ;}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 630 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.valueList) = (yyvsp[(3) - (4)].valueList);
    ;}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 636 "DerivedSources/WebCore/CSSGrammar.y"
    {


        if ((yyvsp[(1) - (9)].mediaQueryRestrictor) != MediaQuery::None)
            (yyval.mediaQueryExp) = parser->createFloatingMediaQueryExp("", 0);
        else {
            (yyvsp[(5) - (9)].string).lower();
            (yyval.mediaQueryExp) = parser->createFloatingMediaQueryExp((yyvsp[(5) - (9)].string), (yyvsp[(7) - (9)].valueList));
        }
    ;}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 649 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = parser->createFloatingMediaQueryExpList();
        (yyval.mediaQueryExpList)->append(parser->sinkFloatingMediaQueryExp((yyvsp[(1) - (1)].mediaQueryExp)));
    ;}
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 653 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = (yyvsp[(1) - (5)].mediaQueryExpList);
        (yyval.mediaQueryExpList)->append(parser->sinkFloatingMediaQueryExp((yyvsp[(5) - (5)].mediaQueryExp)));
    ;}
    break;

  case 83:

/* Line 1464 of yacc.c  */
#line 660 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = parser->createFloatingMediaQueryExpList();
    ;}
    break;

  case 84:

/* Line 1464 of yacc.c  */
#line 663 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = (yyvsp[(3) - (3)].mediaQueryExpList);
    ;}
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 669 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.mediaQueryRestrictor) = MediaQuery::None;
    ;}
    break;

  case 86:

/* Line 1464 of yacc.c  */
#line 672 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.mediaQueryRestrictor) = MediaQuery::Only;
    ;}
    break;

  case 87:

/* Line 1464 of yacc.c  */
#line 675 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.mediaQueryRestrictor) = MediaQuery::Not;
    ;}
    break;

  case 88:

/* Line 1464 of yacc.c  */
#line 681 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.mediaQuery) = parser->createFloatingMediaQuery(parser->sinkFloatingMediaQueryExpList((yyvsp[(1) - (1)].mediaQueryExpList)));
    ;}
    break;

  case 89:

/* Line 1464 of yacc.c  */
#line 685 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyvsp[(3) - (4)].string).lower();
        (yyval.mediaQuery) = parser->createFloatingMediaQuery((yyvsp[(1) - (4)].mediaQueryRestrictor), (yyvsp[(3) - (4)].string), parser->sinkFloatingMediaQueryExpList((yyvsp[(4) - (4)].mediaQueryExpList)));
    ;}
    break;

  case 90:

/* Line 1464 of yacc.c  */
#line 692 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.mediaList) = parser->createMediaQuerySet();
     ;}
    break;

  case 92:

/* Line 1464 of yacc.c  */
#line 699 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.mediaList) = parser->createMediaQuerySet();
        (yyval.mediaList)->addMediaQuery(parser->sinkFloatingMediaQuery((yyvsp[(1) - (1)].mediaQuery)));
        parser->updateLastMediaLine((yyval.mediaList));
    ;}
    break;

  case 93:

/* Line 1464 of yacc.c  */
#line 704 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.mediaList) = (yyvsp[(1) - (4)].mediaList);
        if ((yyval.mediaList)) {
            (yyval.mediaList)->addMediaQuery(parser->sinkFloatingMediaQuery((yyvsp[(4) - (4)].mediaQuery)));
            parser->updateLastMediaLine((yyval.mediaList));
        }
    ;}
    break;

  case 94:

/* Line 1464 of yacc.c  */
#line 711 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.mediaList) = 0;
    ;}
    break;

  case 95:

/* Line 1464 of yacc.c  */
#line 717 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markRuleBodyStart();
    ;}
    break;

  case 96:

/* Line 1464 of yacc.c  */
#line 723 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::MEDIA_RULE);
    ;}
    break;

  case 97:

/* Line 1464 of yacc.c  */
#line 729 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markRuleHeaderEnd();
    ;}
    break;

  case 98:

/* Line 1464 of yacc.c  */
#line 735 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = parser->createMediaRule((yyvsp[(4) - (10)].mediaList), (yyvsp[(9) - (10)].ruleList));
    ;}
    break;

  case 99:

/* Line 1464 of yacc.c  */
#line 738 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = parser->createEmptyMediaRule((yyvsp[(7) - (8)].ruleList));
    ;}
    break;

  case 100:

/* Line 1464 of yacc.c  */
#line 741 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = 0;
        parser->popRuleData();
    ;}
    break;

  case 101:

/* Line 1464 of yacc.c  */
#line 748 "DerivedSources/WebCore/CSSGrammar.y"
    {
      (yyval.string) = (yyvsp[(1) - (2)].string);
  ;}
    break;

  case 102:

/* Line 1464 of yacc.c  */
#line 753 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::KEYFRAMES_RULE);
    ;}
    break;

  case 103:

/* Line 1464 of yacc.c  */
#line 759 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = parser->createKeyframesRule((yyvsp[(4) - (10)].string), parser->sinkFloatingKeyframeVector((yyvsp[(9) - (10)].keyframeRuleList)));
    ;}
    break;

  case 106:

/* Line 1464 of yacc.c  */
#line 770 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.keyframeRuleList) = parser->createFloatingKeyframeVector(); ;}
    break;

  case 107:

/* Line 1464 of yacc.c  */
#line 771 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.keyframeRuleList) = (yyvsp[(1) - (3)].keyframeRuleList);
        if ((yyvsp[(2) - (3)].keyframe))
            (yyval.keyframeRuleList)->append((yyvsp[(2) - (3)].keyframe));
    ;}
    break;

  case 108:

/* Line 1464 of yacc.c  */
#line 779 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.keyframe) = parser->createKeyframe((yyvsp[(1) - (6)].valueList));
    ;}
    break;

  case 109:

/* Line 1464 of yacc.c  */
#line 785 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.valueList) = parser->createFloatingValueList();
        (yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[(1) - (1)].value)));
    ;}
    break;

  case 110:

/* Line 1464 of yacc.c  */
#line 789 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.valueList) = (yyvsp[(1) - (5)].valueList);
        if ((yyval.valueList))
            (yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[(5) - (5)].value)));
    ;}
    break;

  case 111:

/* Line 1464 of yacc.c  */
#line 797 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = false; (yyval.value).fValue = (yyvsp[(1) - (2)].integer) * (yyvsp[(2) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; ;}
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 798 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = false; (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER;
        CSSParserString& str = (yyvsp[(1) - (1)].string);
        if (str.equalIgnoringCase("from"))
            (yyval.value).fValue = 0;
        else if (str.equalIgnoringCase("to"))
            (yyval.value).fValue = 100;
        else {
            (yyval.value).unit = 0;
            YYERROR;
        }
    ;}
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 810 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.value).unit = 0;
    ;}
    break;

  case 114:

/* Line 1464 of yacc.c  */
#line 816 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::PAGE_RULE);
    ;}
    break;

  case 115:

/* Line 1464 of yacc.c  */
#line 823 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(4) - (10)].selector))
            (yyval.rule) = parser->createPageRule(parser->sinkFloatingSelector((yyvsp[(4) - (10)].selector)));
        else {

            parser->clearProperties();

            (yyval.rule) = 0;
            parser->popRuleData();
        }
    ;}
    break;

  case 116:

/* Line 1464 of yacc.c  */
#line 834 "DerivedSources/WebCore/CSSGrammar.y"
    {
      parser->popRuleData();
      (yyval.rule) = 0;
    ;}
    break;

  case 117:

/* Line 1464 of yacc.c  */
#line 838 "DerivedSources/WebCore/CSSGrammar.y"
    {
      parser->popRuleData();
      (yyval.rule) = 0;
    ;}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 845 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelectorWithTagName(QualifiedName(nullAtom, (yyvsp[(1) - (1)].string), parser->m_defaultNamespace));
        (yyval.selector)->setForPage();
    ;}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 849 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if ((yyval.selector)) {
            (yyval.selector)->prependTagSelector(QualifiedName(nullAtom, (yyvsp[(1) - (2)].string), parser->m_defaultNamespace));
            (yyval.selector)->setForPage();
        }
    ;}
    break;

  case 120:

/* Line 1464 of yacc.c  */
#line 856 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
        if ((yyval.selector))
            (yyval.selector)->setForPage();
    ;}
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 861 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setForPage();
    ;}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 873 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->startDeclarationsForMarginBox();
    ;}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 875 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = parser->createMarginAtRule((yyvsp[(1) - (7)].marginBox));
    ;}
    break;

  case 126:

/* Line 1464 of yacc.c  */
#line 881 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopLeftCornerMarginBox;
    ;}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 884 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopLeftMarginBox;
    ;}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 887 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopCenterMarginBox;
    ;}
    break;

  case 129:

/* Line 1464 of yacc.c  */
#line 890 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopRightMarginBox;
    ;}
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 893 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopRightCornerMarginBox;
    ;}
    break;

  case 131:

/* Line 1464 of yacc.c  */
#line 896 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomLeftCornerMarginBox;
    ;}
    break;

  case 132:

/* Line 1464 of yacc.c  */
#line 899 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomLeftMarginBox;
    ;}
    break;

  case 133:

/* Line 1464 of yacc.c  */
#line 902 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomCenterMarginBox;
    ;}
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 905 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomRightMarginBox;
    ;}
    break;

  case 135:

/* Line 1464 of yacc.c  */
#line 908 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomRightCornerMarginBox;
    ;}
    break;

  case 136:

/* Line 1464 of yacc.c  */
#line 911 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::LeftTopMarginBox;
    ;}
    break;

  case 137:

/* Line 1464 of yacc.c  */
#line 914 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::LeftMiddleMarginBox;
    ;}
    break;

  case 138:

/* Line 1464 of yacc.c  */
#line 917 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::LeftBottomMarginBox;
    ;}
    break;

  case 139:

/* Line 1464 of yacc.c  */
#line 920 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::RightTopMarginBox;
    ;}
    break;

  case 140:

/* Line 1464 of yacc.c  */
#line 923 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::RightMiddleMarginBox;
    ;}
    break;

  case 141:

/* Line 1464 of yacc.c  */
#line 926 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::RightBottomMarginBox;
    ;}
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 932 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::FONT_FACE_RULE);
    ;}
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 939 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = parser->createFontFaceRule();
    ;}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 942 "DerivedSources/WebCore/CSSGrammar.y"
    {
      (yyval.rule) = 0;
      parser->popRuleData();
    ;}
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 946 "DerivedSources/WebCore/CSSGrammar.y"
    {
      (yyval.rule) = 0;
      parser->popRuleData();
    ;}
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 952 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (1)].selectorList)) {
            parser->setReusableRegionSelectorVector((yyvsp[(1) - (1)].selectorList));
            (yyval.selectorList) = parser->reusableRegionSelectorVector();
        }
        else
            (yyval.selectorList) = 0;
    ;}
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 963 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::REGION_RULE);
    ;}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 969 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(4) - (10)].selectorList))
            (yyval.rule) = parser->createRegionRule((yyvsp[(4) - (10)].selectorList), (yyvsp[(9) - (10)].ruleList));
        else {
            (yyval.rule) = 0;
            parser->popRuleData();
        }
    ;}
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 981 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::FILTER_RULE);
        parser->m_inFilterRule = true;
    ;}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 989 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->m_inFilterRule = false;
        (yyval.rule) = parser->createFilterRule((yyvsp[(4) - (10)].string));
    ;}
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 997 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.relation) = CSSSelector::DirectAdjacent; ;}
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 998 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.relation) = CSSSelector::IndirectAdjacent; ;}
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 999 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.relation) = CSSSelector::Child; ;}
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 1003 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 1004 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.integer) = 1; ;}
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 1008 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.integer) = -1; ;}
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 1009 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.integer) = 1; ;}
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 1013 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markPropertyStart();
    ;}
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 1019 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::STYLE_RULE);
        parser->markSelectorStart();
    ;}
    break;

  case 160:

/* Line 1464 of yacc.c  */
#line 1026 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markRuleHeaderEnd();
    ;}
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 1032 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markSelectorEnd();
    ;}
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 1038 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = parser->createStyleRule((yyvsp[(2) - (9)].selectorList));
    ;}
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 1044 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markSelectorStart();
    ;}
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 1049 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (1)].selector)) {
            (yyval.selectorList) = parser->reusableSelectorVector();
            (yyval.selectorList)->shrink(0);
            (yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[(1) - (1)].selector)));
            parser->updateLastSelectorLineAndPosition();
        }
    ;}
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 1057 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (6)].selectorList) && (yyvsp[(6) - (6)].selector)) {
            (yyval.selectorList) = (yyvsp[(1) - (6)].selectorList);
            (yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[(6) - (6)].selector)));
            parser->updateLastSelectorLineAndPosition();
        } else
            (yyval.selectorList) = 0;
    ;}
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 1065 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selectorList) = 0;
    ;}
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 1071 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (2)].selector);
    ;}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 1077 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
    ;}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 1081 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
    ;}
    break;

  case 170:

/* Line 1464 of yacc.c  */
#line 1085 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if (!(yyvsp[(1) - (2)].selector))
            (yyval.selector) = 0;
        else if ((yyval.selector))
            (yyval.selector)->appendTagHistory(CSSSelector::Descendant, parser->sinkFloatingSelector((yyvsp[(1) - (2)].selector)));
    ;}
    break;

  case 171:

/* Line 1464 of yacc.c  */
#line 1092 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(3) - (3)].selector);
        if (!(yyvsp[(1) - (3)].selector))
            (yyval.selector) = 0;
        else if ((yyval.selector))
            (yyval.selector)->appendTagHistory((yyvsp[(2) - (3)].relation), parser->sinkFloatingSelector((yyvsp[(1) - (3)].selector)));
    ;}
    break;

  case 172:

/* Line 1464 of yacc.c  */
#line 1099 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = 0;
    ;}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 1105 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.string).clear(); ;}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 1106 "DerivedSources/WebCore/CSSGrammar.y"
    { static LChar star = '*'; (yyval.string).init(&star, 1); ;}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 1107 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.string) = (yyvsp[(1) - (2)].string); ;}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 1111 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelectorWithTagName(QualifiedName(nullAtom, (yyvsp[(1) - (1)].string), parser->m_defaultNamespace));
    ;}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 1114 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if ((yyval.selector))
            (yyval.selector) = parser->rewriteSpecifiersWithElementName(nullAtom, (yyvsp[(1) - (2)].string), (yyval.selector));
    ;}
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 1119 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
        if ((yyval.selector))
            (yyval.selector) = parser->rewriteSpecifiersWithNamespaceIfNeeded((yyval.selector));
    ;}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 1124 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelectorWithTagName(parser->determineNameInNamespace((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string)));
    ;}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 1127 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(3) - (3)].selector);
        if ((yyval.selector))
            (yyval.selector) = parser->rewriteSpecifiersWithElementName((yyvsp[(1) - (3)].string), (yyvsp[(2) - (3)].string), (yyval.selector));
    ;}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 1132 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if ((yyval.selector))
            (yyval.selector) = parser->rewriteSpecifiersWithElementName((yyvsp[(1) - (2)].string), starAtom, (yyval.selector));
    ;}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 1140 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (1)].selector)) {
            (yyval.selectorList) = parser->createFloatingSelectorVector();
            (yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[(1) - (1)].selector)));
        } else
            (yyval.selectorList) = 0;
    ;}
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 1147 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (5)].selectorList) && (yyvsp[(5) - (5)].selector)) {
            (yyval.selectorList) = (yyvsp[(1) - (5)].selectorList);
            (yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[(5) - (5)].selector)));
        } else
            (yyval.selectorList) = 0;
    ;}
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 1154 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selectorList) = 0;
    ;}
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 1160 "DerivedSources/WebCore/CSSGrammar.y"
    {
        CSSParserString& str = (yyvsp[(1) - (1)].string);
        if (parser->m_context.isHTMLDocument)
            str.lower();
        (yyval.string) = str;
    ;}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 1166 "DerivedSources/WebCore/CSSGrammar.y"
    {
        static LChar star = '*';
        (yyval.string).init(&star, 1);
    ;}
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 1173 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
    ;}
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 1176 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if (!(yyvsp[(2) - (2)].selector))
            (yyval.selector) = 0;
        else if ((yyvsp[(1) - (2)].selector))
            (yyval.selector) = parser->rewriteSpecifiers((yyvsp[(1) - (2)].selector), (yyvsp[(2) - (2)].selector));
    ;}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 1182 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = 0;
    ;}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 1188 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::Id);
        if (parser->m_context.mode == CSSQuirksMode)
            (yyvsp[(1) - (1)].string).lower();
        (yyval.selector)->setValue((yyvsp[(1) - (1)].string));
    ;}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 1195 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (1)].string)[0] >= '0' && (yyvsp[(1) - (1)].string)[0] <= '9') {
            (yyval.selector) = 0;
        } else {
            (yyval.selector) = parser->createFloatingSelector();
            (yyval.selector)->setMatch(CSSSelector::Id);
            if (parser->m_context.mode == CSSQuirksMode)
                (yyvsp[(1) - (1)].string).lower();
            (yyval.selector)->setValue((yyvsp[(1) - (1)].string));
        }
    ;}
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 1212 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::Class);
        if (parser->m_context.mode == CSSQuirksMode)
            (yyvsp[(2) - (2)].string).lower();
        (yyval.selector)->setValue((yyvsp[(2) - (2)].string));
    ;}
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 1222 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.string) = (yyvsp[(1) - (2)].string);
    ;}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 1228 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setAttribute(QualifiedName(nullAtom, (yyvsp[(3) - (4)].string), nullAtom), parser->m_context.isHTMLDocument);
        (yyval.selector)->setMatch(CSSSelector::Set);
    ;}
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 1233 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setAttribute(QualifiedName(nullAtom, (yyvsp[(3) - (8)].string), nullAtom), parser->m_context.isHTMLDocument);
        (yyval.selector)->setMatch((CSSSelector::Match)(yyvsp[(4) - (8)].integer));
        (yyval.selector)->setValue((yyvsp[(6) - (8)].string));
    ;}
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 1239 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setAttribute(parser->determineNameInNamespace((yyvsp[(3) - (5)].string), (yyvsp[(4) - (5)].string)), parser->m_context.isHTMLDocument);
        (yyval.selector)->setMatch(CSSSelector::Set);
    ;}
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 1244 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setAttribute(parser->determineNameInNamespace((yyvsp[(3) - (9)].string), (yyvsp[(4) - (9)].string)), parser->m_context.isHTMLDocument);
        (yyval.selector)->setMatch((CSSSelector::Match)(yyvsp[(5) - (9)].integer));
        (yyval.selector)->setValue((yyvsp[(7) - (9)].string));
    ;}
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 1253 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::Exact;
    ;}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 1256 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::List;
    ;}
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 1259 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::Hyphen;
    ;}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 1262 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::Begin;
    ;}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 1265 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::End;
    ;}
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 1268 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::Contain;
    ;}
    break;

  case 209:

/* Line 1464 of yacc.c  */
#line 1279 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PagePseudoClass);
        (yyvsp[(2) - (2)].string).lower();
        (yyval.selector)->setValue((yyvsp[(2) - (2)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    ;}
    break;

  case 210:

/* Line 1464 of yacc.c  */
#line 1290 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoClass);
        (yyvsp[(2) - (2)].string).lower();
        (yyval.selector)->setValue((yyvsp[(2) - (2)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    ;}
    break;

  case 211:

/* Line 1464 of yacc.c  */
#line 1299 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoElement);
        (yyvsp[(3) - (3)].string).lower();
        (yyval.selector)->setValue((yyvsp[(3) - (3)].string));

        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    ;}
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 1309 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(4) - (6)].selectorList)) {
            (yyval.selector) = parser->createFloatingSelector();
            (yyval.selector)->setMatch(CSSSelector::PseudoClass);
            (yyval.selector)->adoptSelectorVector(*parser->sinkFloatingSelectorVector((yyvsp[(4) - (6)].selectorList)));
            (yyvsp[(2) - (6)].string).lower();
            (yyval.selector)->setValue((yyvsp[(2) - (6)].string));
            CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
            if (type != CSSSelector::PseudoAny)
                (yyval.selector) = 0;
        } else
            (yyval.selector) = 0;
    ;}
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 1323 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoClass);
        (yyval.selector)->setArgument((yyvsp[(4) - (6)].string));
        (yyval.selector)->setValue((yyvsp[(2) - (6)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    ;}
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 1333 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoClass);
        (yyval.selector)->setArgument(String::number((yyvsp[(4) - (7)].integer) * (yyvsp[(5) - (7)].number)));
        (yyval.selector)->setValue((yyvsp[(2) - (7)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    ;}
    break;

  case 215:

/* Line 1464 of yacc.c  */
#line 1343 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoClass);
        (yyval.selector)->setArgument((yyvsp[(4) - (6)].string));
        (yyvsp[(2) - (6)].string).lower();
        (yyval.selector)->setValue((yyvsp[(2) - (6)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
        else if (type == CSSSelector::PseudoNthChild ||
                 type == CSSSelector::PseudoNthOfType ||
                 type == CSSSelector::PseudoNthLastChild ||
                 type == CSSSelector::PseudoNthLastOfType) {
            if (!isValidNthToken((yyvsp[(4) - (6)].string)))
                (yyval.selector) = 0;
        }
    ;}
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 1361 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if (!(yyvsp[(4) - (6)].selector) || !(yyvsp[(4) - (6)].selector)->isSimple())
            (yyval.selector) = 0;
        else {
            (yyval.selector) = parser->createFloatingSelector();
            (yyval.selector)->setMatch(CSSSelector::PseudoClass);

            Vector<OwnPtr<CSSParserSelector> > selectorVector;
            selectorVector.append(parser->sinkFloatingSelector((yyvsp[(4) - (6)].selector)));
            (yyval.selector)->adoptSelectorVector(selectorVector);

            (yyvsp[(2) - (6)].string).lower();
            (yyval.selector)->setValue((yyvsp[(2) - (6)].string));
        }
    ;}
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 1379 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.boolean) = false; ;}
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 1380 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (1)].boolean);
    ;}
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 1383 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (2)].boolean);
        if ( (yyvsp[(2) - (2)].boolean) )
            (yyval.boolean) = (yyvsp[(2) - (2)].boolean);
    ;}
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 1388 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (1)].boolean);
    ;}
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 1391 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.boolean) = false;
    ;}
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 1394 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (2)].boolean);
    ;}
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 1400 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (3)].boolean);
    ;}
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 1404 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markPropertyStart();
        (yyval.boolean) = false;
    ;}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 1408 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (4)].boolean);
        if ((yyvsp[(2) - (4)].boolean))
            (yyval.boolean) = (yyvsp[(2) - (4)].boolean);
    ;}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 1414 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (4)].boolean);
    ;}
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 1421 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->syntaxError((yyvsp[(2) - (3)].location), CSSParser::PropertyDeclarationError);
    ;}
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 1427 "DerivedSources/WebCore/CSSGrammar.y"
    {





        (yyval.boolean) = false;

    ;}
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 1437 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.boolean) = false;
        bool isPropertyParsed = false;
        if ((yyvsp[(1) - (5)].id) && (yyvsp[(4) - (5)].valueList)) {
            parser->m_valueList = parser->sinkFloatingValueList((yyvsp[(4) - (5)].valueList));
            int oldParsedProperties = parser->m_parsedProperties.size();
            (yyval.boolean) = parser->parseValue(static_cast<CSSPropertyID>((yyvsp[(1) - (5)].id)), (yyvsp[(5) - (5)].boolean));
            if (!(yyval.boolean))
                parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
            else
                isPropertyParsed = true;
            parser->m_valueList = nullptr;
        }
        parser->markPropertyEnd((yyvsp[(5) - (5)].boolean), isPropertyParsed);
    ;}
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 1453 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.boolean) = false;
    ;}
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 1457 "DerivedSources/WebCore/CSSGrammar.y"
    {

        parser->markPropertyEnd(false, false);
        (yyval.boolean) = false;
    ;}
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 1463 "DerivedSources/WebCore/CSSGrammar.y"
    {

        (yyval.boolean) = false;
    ;}
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 1468 "DerivedSources/WebCore/CSSGrammar.y"
    {

        parser->markPropertyEnd(false, false);
        (yyval.boolean) = false;
    ;}
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 1476 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->syntaxError((yyvsp[(2) - (3)].location));
    ;}
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 1482 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.id) = cssPropertyID((yyvsp[(1) - (2)].string));
    ;}
    break;

  case 236:

/* Line 1464 of yacc.c  */
#line 1488 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.boolean) = true; ;}
    break;

  case 237:

/* Line 1464 of yacc.c  */
#line 1489 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.boolean) = false; ;}
    break;

  case 239:

/* Line 1464 of yacc.c  */
#line 1494 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.valueList) = 0; ;}
    break;

  case 240:

/* Line 1464 of yacc.c  */
#line 1498 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.valueList) = parser->createFloatingValueList();
        (yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[(1) - (1)].value)));
    ;}
    break;

  case 241:

/* Line 1464 of yacc.c  */
#line 1502 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.valueList) = (yyvsp[(1) - (3)].valueList);
        if ((yyval.valueList)) {
            if ((yyvsp[(2) - (3)].character)) {
                CSSParserValue v;
                v.id = CSSValueInvalid;
                v.unit = CSSParserValue::Operator;
                v.iValue = (yyvsp[(2) - (3)].character);
                (yyval.valueList)->addValue(v);
            }
            (yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[(3) - (3)].value)));
        }
    ;}
    break;

  case 243:

/* Line 1464 of yacc.c  */
#line 1522 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.character) = '/';
    ;}
    break;

  case 244:

/* Line 1464 of yacc.c  */
#line 1525 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.character) = ',';
    ;}
    break;

  case 245:

/* Line 1464 of yacc.c  */
#line 1528 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.character) = 0;
  ;}
    break;

  case 246:

/* Line 1464 of yacc.c  */
#line 1534 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value) = (yyvsp[(1) - (2)].value); ;}
    break;

  case 247:

/* Line 1464 of yacc.c  */
#line 1535 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value) = (yyvsp[(2) - (3)].value); (yyval.value).fValue *= (yyvsp[(1) - (3)].integer); ;}
    break;

  case 248:

/* Line 1464 of yacc.c  */
#line 1536 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_STRING; ;}
    break;

  case 249:

/* Line 1464 of yacc.c  */
#line 1537 "DerivedSources/WebCore/CSSGrammar.y"
    {
      (yyval.value).id = cssValueKeywordID((yyvsp[(1) - (2)].string));
      (yyval.value).unit = CSSPrimitiveValue::CSS_IDENT;
      (yyval.value).string = (yyvsp[(1) - (2)].string);
  ;}
    break;

  case 250:

/* Line 1464 of yacc.c  */
#line 1543 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_DIMENSION; ;}
    break;

  case 251:

/* Line 1464 of yacc.c  */
#line 1544 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[(2) - (3)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_DIMENSION; ;}
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 1545 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_URI; ;}
    break;

  case 253:

/* Line 1464 of yacc.c  */
#line 1546 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_UNICODE_RANGE; ;}
    break;

  case 254:

/* Line 1464 of yacc.c  */
#line 1547 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; ;}
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 1548 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = CSSParserString(); (yyval.value).unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; ;}
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 1549 "DerivedSources/WebCore/CSSGrammar.y"
    {





  ;}
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 1557 "DerivedSources/WebCore/CSSGrammar.y"
    {
      (yyval.value) = (yyvsp[(1) - (2)].value);
  ;}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 1560 "DerivedSources/WebCore/CSSGrammar.y"
    {
      (yyval.value) = (yyvsp[(1) - (2)].value);
  ;}
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 1563 "DerivedSources/WebCore/CSSGrammar.y"
    {
      (yyval.value) = (yyvsp[(1) - (2)].value);
  ;}
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 1566 "DerivedSources/WebCore/CSSGrammar.y"
    {
      (yyval.value).id = CSSValueInvalid; (yyval.value).unit = 0;
  ;}
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 1572 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = true; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; ;}
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 1573 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = false; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; ;}
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 1574 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PERCENTAGE; ;}
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 1575 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PX; ;}
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 1576 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_CM; ;}
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 1577 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_MM; ;}
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 1578 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_IN; ;}
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 1579 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PT; ;}
    break;

  case 269:

/* Line 1464 of yacc.c  */
#line 1580 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PC; ;}
    break;

  case 270:

/* Line 1464 of yacc.c  */
#line 1581 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DEG; ;}
    break;

  case 271:

/* Line 1464 of yacc.c  */
#line 1582 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_RAD; ;}
    break;

  case 272:

/* Line 1464 of yacc.c  */
#line 1583 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_GRAD; ;}
    break;

  case 273:

/* Line 1464 of yacc.c  */
#line 1584 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_TURN; ;}
    break;

  case 274:

/* Line 1464 of yacc.c  */
#line 1585 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_MS; ;}
    break;

  case 275:

/* Line 1464 of yacc.c  */
#line 1586 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_S; ;}
    break;

  case 276:

/* Line 1464 of yacc.c  */
#line 1587 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_HZ; ;}
    break;

  case 277:

/* Line 1464 of yacc.c  */
#line 1588 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_KHZ; ;}
    break;

  case 278:

/* Line 1464 of yacc.c  */
#line 1589 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_EMS; ;}
    break;

  case 279:

/* Line 1464 of yacc.c  */
#line 1590 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSParserValue::Q_EMS; ;}
    break;

  case 280:

/* Line 1464 of yacc.c  */
#line 1591 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_EXS; ;}
    break;

  case 281:

/* Line 1464 of yacc.c  */
#line 1592 "DerivedSources/WebCore/CSSGrammar.y"
    {
      (yyval.value).id = CSSValueInvalid;
      (yyval.value).fValue = (yyvsp[(1) - (1)].number);
      (yyval.value).unit = CSSPrimitiveValue::CSS_REMS;
      if (parser->m_styleSheet)
          parser->m_styleSheet->parserSetUsesRemUnits(true);
  ;}
    break;

  case 282:

/* Line 1464 of yacc.c  */
#line 1599 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_CHS; ;}
    break;

  case 283:

/* Line 1464 of yacc.c  */
#line 1600 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VW; ;}
    break;

  case 284:

/* Line 1464 of yacc.c  */
#line 1601 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VH; ;}
    break;

  case 285:

/* Line 1464 of yacc.c  */
#line 1602 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VMIN; ;}
    break;

  case 286:

/* Line 1464 of yacc.c  */
#line 1603 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VMAX; ;}
    break;

  case 287:

/* Line 1464 of yacc.c  */
#line 1604 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPPX; ;}
    break;

  case 288:

/* Line 1464 of yacc.c  */
#line 1605 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPI; ;}
    break;

  case 289:

/* Line 1464 of yacc.c  */
#line 1606 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPCM; ;}
    break;

  case 290:

/* Line 1464 of yacc.c  */
#line 1610 "DerivedSources/WebCore/CSSGrammar.y"
    {
        CSSParserFunction* f = parser->createFloatingFunction();
        f->name = (yyvsp[(1) - (4)].string);
        f->args = parser->sinkFloatingValueList((yyvsp[(3) - (4)].valueList));
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    ;}
    break;

  case 291:

/* Line 1464 of yacc.c  */
#line 1618 "DerivedSources/WebCore/CSSGrammar.y"
    {
        CSSParserFunction* f = parser->createFloatingFunction();
        f->name = (yyvsp[(1) - (3)].string);
        CSSParserValueList* valueList = parser->createFloatingValueList();
        f->args = parser->sinkFloatingValueList(valueList);
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    ;}
    break;

  case 292:

/* Line 1464 of yacc.c  */
#line 1627 "DerivedSources/WebCore/CSSGrammar.y"
    {
        CSSParserFunction* f = parser->createFloatingFunction();
        f->name = (yyvsp[(1) - (4)].string);
        f->args = nullptr;
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
  ;}
    break;

  case 293:

/* Line 1464 of yacc.c  */
#line 1638 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value) = (yyvsp[(1) - (1)].value); ;}
    break;

  case 294:

/* Line 1464 of yacc.c  */
#line 1639 "DerivedSources/WebCore/CSSGrammar.y"
    {





  ;}
    break;

  case 295:

/* Line 1464 of yacc.c  */
#line 1646 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.value) = (yyvsp[(2) - (2)].value); (yyval.value).fValue *= (yyvsp[(1) - (2)].integer); ;}
    break;

  case 296:

/* Line 1464 of yacc.c  */
#line 1650 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.character) = '+';
    ;}
    break;

  case 297:

/* Line 1464 of yacc.c  */
#line 1653 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.character) = '-';
    ;}
    break;

  case 298:

/* Line 1464 of yacc.c  */
#line 1656 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.character) = '*';
    ;}
    break;

  case 299:

/* Line 1464 of yacc.c  */
#line 1659 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.character) = '/';
    ;}
    break;

  case 302:

/* Line 1464 of yacc.c  */
#line 1670 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(3) - (5)].valueList)) {
            (yyval.valueList) = (yyvsp[(3) - (5)].valueList);
            CSSParserValue v;
            v.id = CSSValueInvalid;
            v.unit = CSSParserValue::Operator;
            v.iValue = '(';
            (yyval.valueList)->insertValueAt(0, v);
            v.iValue = ')';
            (yyval.valueList)->addValue(v);
        } else
            (yyval.valueList) = 0;
    ;}
    break;

  case 304:

/* Line 1464 of yacc.c  */
#line 1687 "DerivedSources/WebCore/CSSGrammar.y"
    { (yyval.valueList) = 0; ;}
    break;

  case 305:

/* Line 1464 of yacc.c  */
#line 1691 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.valueList) = parser->createFloatingValueList();
        (yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[(1) - (1)].value)));
    ;}
    break;

  case 306:

/* Line 1464 of yacc.c  */
#line 1695 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (3)].valueList) && (yyvsp[(2) - (3)].character)) {
            (yyval.valueList) = (yyvsp[(1) - (3)].valueList);
            CSSParserValue v;
            v.id = CSSValueInvalid;
            v.unit = CSSParserValue::Operator;
            v.iValue = (yyvsp[(2) - (3)].character);
            (yyval.valueList)->addValue(v);
            (yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[(3) - (3)].value)));
        } else
            (yyval.valueList) = 0;

    ;}
    break;

  case 307:

/* Line 1464 of yacc.c  */
#line 1708 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (3)].valueList) && (yyvsp[(2) - (3)].character) && (yyvsp[(3) - (3)].valueList)) {
            (yyval.valueList) = (yyvsp[(1) - (3)].valueList);
            CSSParserValue v;
            v.id = CSSValueInvalid;
            v.unit = CSSParserValue::Operator;
            v.iValue = (yyvsp[(2) - (3)].character);
            (yyval.valueList)->addValue(v);
            (yyval.valueList)->extend(*((yyvsp[(3) - (3)].valueList)));
        } else
            (yyval.valueList) = 0;
    ;}
    break;

  case 309:

/* Line 1464 of yacc.c  */
#line 1724 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.valueList) = (yyvsp[(1) - (2)].valueList);
    ;}
    break;

  case 310:

/* Line 1464 of yacc.c  */
#line 1727 "DerivedSources/WebCore/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (5)].valueList) && (yyvsp[(4) - (5)].valueList)) {
            (yyval.valueList) = (yyvsp[(1) - (5)].valueList);
            CSSParserValue v;
            v.id = CSSValueInvalid;
            v.unit = CSSParserValue::Operator;
            v.iValue = ',';
            (yyval.valueList)->addValue(v);
            (yyval.valueList)->extend(*((yyvsp[(4) - (5)].valueList)));
        } else
            (yyval.valueList) = 0;
    ;}
    break;

  case 311:

/* Line 1464 of yacc.c  */
#line 1742 "DerivedSources/WebCore/CSSGrammar.y"
    {
        CSSParserFunction* f = parser->createFloatingFunction();
        f->name = (yyvsp[(1) - (5)].string);
        f->args = parser->sinkFloatingValueList((yyvsp[(3) - (5)].valueList));
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    ;}
    break;

  case 312:

/* Line 1464 of yacc.c  */
#line 1750 "DerivedSources/WebCore/CSSGrammar.y"
    {
        YYERROR;
    ;}
    break;

  case 313:

/* Line 1464 of yacc.c  */
#line 1757 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.string) = (yyvsp[(1) - (1)].string);
    ;}
    break;

  case 314:

/* Line 1464 of yacc.c  */
#line 1760 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.string) = (yyvsp[(1) - (1)].string);
    ;}
    break;

  case 315:

/* Line 1464 of yacc.c  */
#line 1766 "DerivedSources/WebCore/CSSGrammar.y"
    {
        CSSParserFunction* f = parser->createFloatingFunction();
        f->name = (yyvsp[(1) - (4)].string);
        f->args = parser->sinkFloatingValueList((yyvsp[(3) - (4)].valueList));
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    ;}
    break;

  case 316:

/* Line 1464 of yacc.c  */
#line 1774 "DerivedSources/WebCore/CSSGrammar.y"
    {
        YYERROR;
    ;}
    break;

  case 317:

/* Line 1464 of yacc.c  */
#line 1782 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 318:

/* Line 1464 of yacc.c  */
#line 1785 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 319:

/* Line 1464 of yacc.c  */
#line 1791 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 320:

/* Line 1464 of yacc.c  */
#line 1794 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 321:

/* Line 1464 of yacc.c  */
#line 1800 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 322:

/* Line 1464 of yacc.c  */
#line 1806 "DerivedSources/WebCore/CSSGrammar.y"
    {
        parser->invalidBlockHit();
    ;}
    break;

  case 334:

/* Line 1464 of yacc.c  */
#line 1826 "DerivedSources/WebCore/CSSGrammar.y"
    {
        (yyval.location) = parser->currentLocation();
    ;}
    break;



/* Line 1464 of yacc.c  */
#line 4975 "DerivedSources/WebCore/CSSGrammar.cpp"
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
      yyerror (parser, YY_("syntax error"));
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
	    yyerror (parser, yymsg);
	  }
	else
	  {
	    yyerror (parser, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
		      yytoken, &yylval, parser);
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
		  yystos[yystate], yyvsp, parser);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (parser, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, parser);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, parser);
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



/* Line 1684 of yacc.c  */
#line 1839 "DerivedSources/WebCore/CSSGrammar.y"


