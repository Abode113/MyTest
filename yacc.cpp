/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

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

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

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
     RANK_SPECIFIER = 258,
     IDENTIFIER = 259,
     NoId = 260,
     Space = 261,
     INTEGER_LITERAL = 262,
     REAL_LITERAL = 263,
     CHARACTER_LITERAL = 264,
     STRING_LITERAL = 265,
     ABSTRACT = 266,
     AS = 267,
     BASE = 268,
     BOOL = 269,
     BREAK = 270,
     BYTE = 271,
     CASE = 272,
     CATCH = 273,
     CHAR = 274,
     CHECKED = 275,
     CLASS = 276,
     CONST = 277,
     CONTINUE = 278,
     DECIMAL = 279,
     DEFAULT = 280,
     DELEGATE = 281,
     DO = 282,
     DOUBLE = 283,
     ELSE = 284,
     ENUM = 285,
     EVENT = 286,
     EXPLICIT = 287,
     EXTERN = 288,
     FALSE = 289,
     FINALLY = 290,
     FIXED = 291,
     FLOAT = 292,
     FOR = 293,
     FOREACH = 294,
     GOTO = 295,
     IF = 296,
     IMPLICIT = 297,
     IN = 298,
     INT = 299,
     INTERFACE = 300,
     INTERNAL = 301,
     IS = 302,
     LOCK = 303,
     LONG = 304,
     NAMESPACE = 305,
     NEW = 306,
     NULL_LITERAL = 307,
     OBJECT = 308,
     OPERATOR = 309,
     OUT = 310,
     OVERRIDE = 311,
     PARAMS = 312,
     PRIVATE = 313,
     PROTECTED = 314,
     PUBLIC = 315,
     READONLY = 316,
     REF = 317,
     RETURN = 318,
     SBYTE = 319,
     SEALED = 320,
     SHORT = 321,
     SIZEOF = 322,
     STACKALLOC = 323,
     STATIC = 324,
     STRING = 325,
     STRUCT = 326,
     SWITCH = 327,
     THIS = 328,
     THROW = 329,
     TRUE = 330,
     TRY = 331,
     TYPEOF = 332,
     UINT = 333,
     ULONG = 334,
     UNCHECKED = 335,
     UNSAFE = 336,
     USHORT = 337,
     USING = 338,
     VIRTUAL = 339,
     VOID = 340,
     VOLATILE = 341,
     WHILE = 342,
     OpenBracket = 343,
     CloseBracket = 344,
     ASSEMBLY = 345,
     FIELD = 346,
     METHOD = 347,
     MODULE = 348,
     PARAM = 349,
     PROPERTY = 350,
     TYPE = 351,
     GET = 352,
     SET = 353,
     ADD = 354,
     REMOVE = 355,
     COMMA = 356,
     LEFT_BRACKET = 357,
     RIGHT_BRACKET = 358,
     PLUSEQ = 359,
     MINUSEQ = 360,
     STAREQ = 361,
     DIVEQ = 362,
     MODEQ = 363,
     XOREQ = 364,
     ANDEQ = 365,
     OREQ = 366,
     LTLT = 367,
     GTGT = 368,
     GTGTEQ = 369,
     LTLTEQ = 370,
     EQEQ = 371,
     NOTEQ = 372,
     LEQ = 373,
     GEQ = 374,
     ANDAND = 375,
     OROR = 376,
     PLUSPLUS = 377,
     MINUSMINUS = 378,
     ARROW = 379,
     Multiple_N1 = 380,
     PercenSign = 381,
     Division = 382,
     Dash = 383,
     Plus_S = 384,
     Maddeh = 385,
     Colon = 386,
     Semicolon = 387,
     OpenBracket_T1 = 388,
     Dot = 389,
     Less = 390,
     Greater = 391,
     And = 392,
     Shapo = 393,
     Vertical_Mark = 394,
     Ta3ajob = 395,
     Quest_Mark = 396,
     Equal = 397,
     CloseBracket_T1 = 398
   };
#endif
/* Tokens.  */
#define RANK_SPECIFIER 258
#define IDENTIFIER 259
#define NoId 260
#define Space 261
#define INTEGER_LITERAL 262
#define REAL_LITERAL 263
#define CHARACTER_LITERAL 264
#define STRING_LITERAL 265
#define ABSTRACT 266
#define AS 267
#define BASE 268
#define BOOL 269
#define BREAK 270
#define BYTE 271
#define CASE 272
#define CATCH 273
#define CHAR 274
#define CHECKED 275
#define CLASS 276
#define CONST 277
#define CONTINUE 278
#define DECIMAL 279
#define DEFAULT 280
#define DELEGATE 281
#define DO 282
#define DOUBLE 283
#define ELSE 284
#define ENUM 285
#define EVENT 286
#define EXPLICIT 287
#define EXTERN 288
#define FALSE 289
#define FINALLY 290
#define FIXED 291
#define FLOAT 292
#define FOR 293
#define FOREACH 294
#define GOTO 295
#define IF 296
#define IMPLICIT 297
#define IN 298
#define INT 299
#define INTERFACE 300
#define INTERNAL 301
#define IS 302
#define LOCK 303
#define LONG 304
#define NAMESPACE 305
#define NEW 306
#define NULL_LITERAL 307
#define OBJECT 308
#define OPERATOR 309
#define OUT 310
#define OVERRIDE 311
#define PARAMS 312
#define PRIVATE 313
#define PROTECTED 314
#define PUBLIC 315
#define READONLY 316
#define REF 317
#define RETURN 318
#define SBYTE 319
#define SEALED 320
#define SHORT 321
#define SIZEOF 322
#define STACKALLOC 323
#define STATIC 324
#define STRING 325
#define STRUCT 326
#define SWITCH 327
#define THIS 328
#define THROW 329
#define TRUE 330
#define TRY 331
#define TYPEOF 332
#define UINT 333
#define ULONG 334
#define UNCHECKED 335
#define UNSAFE 336
#define USHORT 337
#define USING 338
#define VIRTUAL 339
#define VOID 340
#define VOLATILE 341
#define WHILE 342
#define OpenBracket 343
#define CloseBracket 344
#define ASSEMBLY 345
#define FIELD 346
#define METHOD 347
#define MODULE 348
#define PARAM 349
#define PROPERTY 350
#define TYPE 351
#define GET 352
#define SET 353
#define ADD 354
#define REMOVE 355
#define COMMA 356
#define LEFT_BRACKET 357
#define RIGHT_BRACKET 358
#define PLUSEQ 359
#define MINUSEQ 360
#define STAREQ 361
#define DIVEQ 362
#define MODEQ 363
#define XOREQ 364
#define ANDEQ 365
#define OREQ 366
#define LTLT 367
#define GTGT 368
#define GTGTEQ 369
#define LTLTEQ 370
#define EQEQ 371
#define NOTEQ 372
#define LEQ 373
#define GEQ 374
#define ANDAND 375
#define OROR 376
#define PLUSPLUS 377
#define MINUSMINUS 378
#define ARROW 379
#define Multiple_N1 380
#define PercenSign 381
#define Division 382
#define Dash 383
#define Plus_S 384
#define Maddeh 385
#define Colon 386
#define Semicolon 387
#define OpenBracket_T1 388
#define Dot 389
#define Less 390
#define Greater 391
#define And 392
#define Shapo 393
#define Vertical_Mark 394
#define Ta3ajob 395
#define Quest_Mark 396
#define Equal 397
#define CloseBracket_T1 398




/* Copy the first part of user declarations.  */
#line 2 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"

	#include <iostream>
	#include <fstream>
	#define _CRT_SECURE_NO_WARNINGS
	#define YYDEBUG 1
	using namespace std;
	#include <FlexLexer.h>
	#include "ErrorRecovery.h"

	int yylex(void);
	int yyparse();
	void yyerror(char *);
	
	FlexLexer* lexer = new yyFlexLexer();
	ErrorRecovery* error = new ErrorRecovery();
	class Parser
	{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
	


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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 83 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
typedef union YYSTYPE {
	struct R{
		int i;
		float f;
		char c;
		char* str;
		int myLineNo;
		int myColno;
		}r;
	} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 408 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 420 "yacc.cpp"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2682

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  145
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  256
/* YYNRULES -- Number of rules. */
#define YYNRULES  553
/* YYNRULES -- Number of states. */
#define YYNSTATES  933

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   399

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    76,    77,
      81,    84,    87,    90,    91,    94,    96,    98,   100,   104,
     106,   109,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   130,   132,   134,   136,   138,   140,   144,   148,   152,
     156,   161,   166,   167,   169,   174,   179,   180,   182,   184,
     188,   190,   194,   199,   202,   205,   207,   213,   221,   225,
     226,   228,   233,   234,   240,   245,   250,   254,   257,   262,
     264,   266,   268,   270,   272,   274,   277,   280,   282,   285,
     288,   290,   293,   296,   299,   301,   303,   305,   310,   316,
     323,   329,   335,   336,   343,   344,   346,   348,   351,   353,
     355,   357,   361,   365,   369,   371,   375,   379,   381,   385,
     389,   391,   395,   399,   403,   407,   411,   415,   417,   421,
     425,   427,   431,   433,   437,   439,   443,   445,   449,   451,
     455,   457,   458,   465,   466,   471,   473,   475,   477,   479,
     481,   483,   485,   487,   489,   491,   493,   495,   497,   499,
     501,   503,   505,   507,   509,   511,   513,   515,   517,   519,
     521,   523,   525,   527,   529,   531,   533,   537,   538,   540,
     542,   545,   547,   551,   554,   557,   560,   562,   566,   568,
     572,   574,   576,   578,   584,   588,   590,   594,   598,   601,
     603,   605,   607,   609,   611,   613,   615,   617,   619,   625,
     633,   636,   642,   646,   647,   649,   651,   654,   657,   659,
     662,   666,   669,   671,   673,   675,   677,   680,   686,   694,
     695,   696,   708,   709,   711,   712,   714,   715,   717,   719,
     721,   723,   725,   727,   731,   740,   742,   744,   746,   748,
     750,   753,   756,   760,   765,   769,   773,   774,   776,   780,
     784,   788,   793,   795,   798,   805,   812,   815,   816,   818,
     821,   824,   827,   833,   839,   841,   843,   850,   852,   856,
     857,   862,   865,   868,   869,   871,   872,   874,   875,   877,
     883,   884,   886,   888,   891,   894,   898,   903,   905,   908,
     910,   912,   913,   920,   924,   926,   929,   931,   933,   935,
     937,   939,   941,   943,   944,   946,   948,   951,   953,   955,
     957,   959,   961,   963,   965,   967,   969,   971,   973,   975,
     977,   979,   980,   989,   997,   998,  1000,  1003,  1006,  1011,
    1013,  1017,  1018,  1023,  1024,  1026,  1028,  1031,  1033,  1035,
    1037,  1039,  1041,  1043,  1045,  1047,  1049,  1051,  1058,  1064,
    1067,  1075,  1076,  1085,  1086,  1088,  1090,  1092,  1094,  1096,
    1098,  1102,  1104,  1106,  1111,  1112,  1114,  1116,  1121,  1131,
    1134,  1137,  1138,  1140,  1141,  1143,  1149,  1155,  1157,  1159,
    1166,  1177,  1180,  1183,  1189,  1195,  1204,  1210,  1216,  1219,
    1224,  1226,  1228,  1236,  1247,  1249,  1251,  1253,  1255,  1257,
    1259,  1261,  1263,  1265,  1267,  1269,  1271,  1273,  1275,  1277,
    1279,  1281,  1283,  1285,  1287,  1289,  1291,  1299,  1307,  1312,
    1318,  1319,  1321,  1327,  1333,  1341,  1343,  1345,  1347,  1349,
    1357,  1358,  1360,  1363,  1367,  1368,  1370,  1372,  1375,  1377,
    1379,  1381,  1383,  1385,  1387,  1389,  1391,  1393,  1397,  1402,
    1403,  1405,  1407,  1411,  1419,  1420,  1422,  1425,  1429,  1430,
    1432,  1434,  1437,  1439,  1441,  1443,  1445,  1454,  1455,  1465,
    1466,  1468,  1478,  1491,  1495,  1499,  1506,  1513,  1520,  1522,
    1525,  1533,  1534,  1536,  1539,  1543,  1548,  1549,  1551,  1553,
    1557,  1560,  1561,  1567,  1577,  1579,  1581,  1584,  1591,  1599,
    1600,  1602,  1605,  1607,  1609,  1611,  1613,  1615,  1617,  1619,
    1621,  1623,  1625,  1629,  1632,  1633,  1635,  1637,  1641,  1642,
    1643,  1644,  1645,  1646
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     281,     0,    -1,   147,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,    52,    -1,    75,    -1,    34,    -1,   287,
      -1,   287,    -1,   151,    -1,   160,    -1,   152,    -1,   149,
      -1,   153,    -1,   157,    -1,   158,    -1,   154,    -1,    14,
      -1,   155,    -1,   156,    -1,    24,    -1,    64,    -1,    16,
      -1,    66,    -1,    82,    -1,    44,    -1,    78,    -1,    49,
      -1,    79,    -1,    19,    -1,    37,    -1,    28,    -1,    53,
      -1,    70,    -1,   150,   125,    -1,    -1,    85,   159,   125,
      -1,   160,   162,    -1,   152,   162,    -1,   287,   162,    -1,
      -1,   162,   161,    -1,     3,    -1,   215,    -1,   165,    -1,
     164,   101,   165,    -1,   215,    -1,    62,   163,    -1,    55,
     163,    -1,   168,    -1,   167,    -1,   146,    -1,   181,    -1,
     169,    -1,   170,    -1,   172,    -1,   175,    -1,   176,    -1,
     179,    -1,   183,    -1,   189,    -1,   185,    -1,   186,    -1,
      88,   215,    89,    -1,   166,   134,     4,    -1,   153,   134,
       4,    -1,   157,   134,     4,    -1,   167,    88,   171,    89,
      -1,   287,    88,   171,    89,    -1,    -1,   164,    -1,   166,
     102,   174,   103,    -1,   287,   102,   174,   103,    -1,    -1,
     174,    -1,   215,    -1,   174,   101,   215,    -1,    73,    -1,
      13,   134,     4,    -1,    13,   102,   174,   103,    -1,   190,
     122,    -1,   190,   123,    -1,   180,    -1,    51,   150,    88,
     171,    89,    -1,    51,   151,   102,   174,   103,   161,   182,
      -1,    51,   160,   357,    -1,    -1,   357,    -1,    77,    88,
     150,    89,    -1,    -1,    77,    88,    85,   184,    89,    -1,
      20,    88,   215,    89,    -1,    80,    88,   215,    89,    -1,
     190,   124,     4,    -1,   137,   194,    -1,    67,    88,   150,
      89,    -1,   166,    -1,   287,    -1,   177,    -1,   178,    -1,
     187,    -1,   190,    -1,   140,   194,    -1,   130,   194,    -1,
     195,    -1,   122,   194,    -1,   123,   194,    -1,   191,    -1,
     129,   194,    -1,   128,   194,    -1,   125,   194,    -1,   192,
      -1,   193,    -1,   188,    -1,    88,   215,    89,   191,    -1,
      88,   200,   125,    89,   194,    -1,    88,   287,   162,   197,
      89,   194,    -1,    88,   153,   197,    89,   194,    -1,    88,
     157,   197,    89,   194,    -1,    -1,    88,    85,   196,   197,
      89,   194,    -1,    -1,   198,    -1,   199,    -1,   198,   199,
      -1,   162,    -1,   125,    -1,   194,    -1,   200,   125,   194,
      -1,   200,   127,   194,    -1,   200,   126,   194,    -1,   200,
      -1,   201,   129,   200,    -1,   201,   128,   200,    -1,   201,
      -1,   202,   112,   201,    -1,   202,   113,   201,    -1,   202,
      -1,   203,   135,   202,    -1,   203,   136,   202,    -1,   203,
     118,   202,    -1,   203,   119,   202,    -1,   203,    47,   150,
      -1,   203,    12,   150,    -1,   203,    -1,   204,   116,   203,
      -1,   204,   117,   203,    -1,   204,    -1,   205,   137,   204,
      -1,   205,    -1,   206,   138,   205,    -1,   206,    -1,   207,
     139,   206,    -1,   207,    -1,   208,   120,   207,    -1,   208,
      -1,   209,   121,   208,    -1,   209,    -1,    -1,   209,   141,
     215,   211,   131,   215,    -1,    -1,   194,   214,   213,   215,
      -1,   142,    -1,   104,    -1,   105,    -1,   106,    -1,   107,
      -1,   108,    -1,   109,    -1,   110,    -1,   111,    -1,   114,
      -1,   115,    -1,   210,    -1,   212,    -1,   215,    -1,   215,
      -1,   224,    -1,   225,    -1,   219,    -1,   220,    -1,   223,
      -1,   234,    -1,   236,    -1,   245,    -1,   260,    -1,   267,
      -1,   272,    -1,   273,    -1,   274,    -1,   275,    -1,   246,
      -1,   277,    -1,   133,   221,   143,    -1,    -1,   222,    -1,
     218,    -1,   222,   218,    -1,   132,    -1,     4,   131,   218,
      -1,   226,   132,    -1,   231,   132,    -1,   150,   227,    -1,
     228,    -1,   227,   101,   228,    -1,     4,    -1,     4,   142,
     229,    -1,   215,    -1,   357,    -1,   230,    -1,    68,   150,
     102,   215,   103,    -1,    22,   150,   232,    -1,   233,    -1,
     232,   101,   233,    -1,     4,   142,   216,    -1,   235,   132,
      -1,   170,    -1,   180,    -1,   212,    -1,   177,    -1,   178,
      -1,   192,    -1,   193,    -1,   237,    -1,   238,    -1,    41,
      88,   217,    89,   219,    -1,    41,    88,   217,    89,   219,
      29,   219,    -1,    29,   219,    -1,    72,    88,   215,    89,
     239,    -1,   133,   240,   143,    -1,    -1,   241,    -1,   242,
      -1,   241,   242,    -1,   243,   222,    -1,   244,    -1,   243,
     244,    -1,    17,   216,   131,    -1,    25,   131,    -1,   247,
      -1,   248,    -1,   249,    -1,   259,    -1,    81,   220,    -1,
      87,    88,   217,    89,   219,    -1,    27,   219,    87,    88,
     217,    89,   132,    -1,    -1,    -1,    38,    88,   252,   132,
     250,   253,   132,   251,   254,    89,   219,    -1,    -1,   255,
      -1,    -1,   256,    -1,    -1,   257,    -1,   226,    -1,   258,
      -1,   217,    -1,   258,    -1,   235,    -1,   258,   101,   235,
      -1,    39,    88,   150,     4,    43,   215,    89,   219,    -1,
     261,    -1,   262,    -1,   263,    -1,   264,    -1,   266,    -1,
      15,   132,    -1,    23,   132,    -1,    40,     4,   132,    -1,
      40,    17,   216,   132,    -1,    40,    25,   132,    -1,    63,
     265,   132,    -1,    -1,   215,    -1,    74,   265,   132,    -1,
      76,   220,   268,    -1,    76,   220,   271,    -1,    76,   220,
     268,   271,    -1,   269,    -1,   268,   269,    -1,    18,    88,
     157,   270,    89,   220,    -1,    18,    88,   149,   270,    89,
     220,    -1,    18,   220,    -1,    -1,     4,    -1,    35,   220,
      -1,    20,   220,    -1,    80,   220,    -1,    48,    88,   215,
      89,   219,    -1,    83,    88,   276,    89,   219,    -1,   226,
      -1,   215,    -1,    36,    88,   150,   278,    89,   219,    -1,
     279,    -1,   278,   101,   279,    -1,    -1,     4,   142,   280,
     215,    -1,   282,   283,    -1,   282,   295,    -1,    -1,   290,
      -1,    -1,   384,    -1,    -1,   295,    -1,   283,    50,   287,
     289,   286,    -1,    -1,   132,    -1,     4,    -1,   288,     4,
      -1,     4,   134,    -1,   288,     4,   134,    -1,   133,   282,
     284,   143,    -1,   291,    -1,   290,   291,    -1,   292,    -1,
     294,    -1,    -1,    83,     4,   142,   293,   287,   132,    -1,
      83,   148,   132,    -1,   296,    -1,   295,   296,    -1,   285,
      -1,   297,    -1,   301,    -1,   350,    -1,   360,    -1,   375,
      -1,   383,    -1,    -1,   299,    -1,   300,    -1,   299,   300,
      -1,    11,    -1,    33,    -1,    46,    -1,    51,    -1,    56,
      -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,    65,
      -1,    69,    -1,    81,    -1,    84,    -1,    86,    -1,    -1,
     283,   298,    21,   302,     4,   303,   306,   286,    -1,   283,
     298,    21,     5,   303,   306,   286,    -1,    -1,   304,    -1,
     131,   157,    -1,   131,   305,    -1,   131,   157,   101,   305,
      -1,   149,    -1,   305,   101,   149,    -1,    -1,   133,   307,
     308,   143,    -1,    -1,   309,    -1,   310,    -1,   309,   310,
      -1,   311,    -1,   312,    -1,   313,    -1,   324,    -1,   331,
      -1,   335,    -1,   338,    -1,   343,    -1,   347,    -1,   297,
      -1,   283,   298,    22,   150,   232,   132,    -1,   283,   298,
     150,   227,   132,    -1,   314,   318,    -1,   283,   298,   150,
     287,    88,   316,    89,    -1,    -1,   283,   298,    85,   315,
     287,    88,   316,    89,    -1,    -1,   319,    -1,   150,    -1,
      85,    -1,   220,    -1,   132,    -1,   320,    -1,   319,   101,
     320,    -1,   321,    -1,   323,    -1,   283,   322,   150,     4,
      -1,    -1,    62,    -1,    55,    -1,   283,    57,   150,     4,
      -1,   283,   298,   150,   287,   399,   133,   325,   143,   400,
      -1,   328,   326,    -1,   329,   327,    -1,    -1,   329,    -1,
      -1,   328,    -1,   283,    97,   400,   330,   399,    -1,   283,
      98,   400,   330,   399,    -1,   220,    -1,   132,    -1,   283,
     298,    31,   150,   227,   132,    -1,   283,   298,    31,   150,
     287,   397,   133,   332,   143,   398,    -1,   333,   334,    -1,
     334,   333,    -1,   283,    99,   398,   220,   397,    -1,   283,
     100,   398,   220,   397,    -1,   283,   298,   336,   399,   133,
     325,   143,   400,    -1,   150,    73,   102,   319,   103,    -1,
     150,   337,   102,   319,   103,    -1,   288,    73,    -1,   283,
     298,   339,   348,    -1,   340,    -1,   342,    -1,   150,    54,
     341,    88,   150,     4,    89,    -1,   150,    54,   341,    88,
     150,     4,   101,   150,     4,    89,    -1,   129,    -1,   128,
      -1,   140,    -1,   130,    -1,   122,    -1,   123,    -1,    75,
      -1,    34,    -1,   125,    -1,   127,    -1,   126,    -1,   137,
      -1,   139,    -1,   138,    -1,   112,    -1,   113,    -1,   116,
      -1,   117,    -1,   136,    -1,   135,    -1,   119,    -1,   118,
      -1,    42,    54,   150,    88,   150,     4,    89,    -1,    32,
      54,   150,    88,   150,     4,    89,    -1,   283,   298,   344,
     349,    -1,     4,    88,   316,    89,   345,    -1,    -1,   346,
      -1,   131,    13,    88,   171,    89,    -1,   131,    73,    88,
     171,    89,    -1,   283,   298,   130,     4,    88,    89,   220,
      -1,   220,    -1,   132,    -1,   220,    -1,   132,    -1,   283,
     298,    71,     4,   351,   353,   286,    -1,    -1,   352,    -1,
     131,   305,    -1,   133,   354,   143,    -1,    -1,   355,    -1,
     356,    -1,   355,   356,    -1,   311,    -1,   312,    -1,   313,
      -1,   324,    -1,   331,    -1,   335,    -1,   338,    -1,   343,
      -1,   297,    -1,   133,   358,   143,    -1,   133,   359,   101,
     143,    -1,    -1,   359,    -1,   229,    -1,   359,   101,   229,
      -1,   283,   298,    45,     4,   361,   363,   286,    -1,    -1,
     362,    -1,   131,   305,    -1,   133,   364,   143,    -1,    -1,
     365,    -1,   366,    -1,   365,   366,    -1,   367,    -1,   370,
      -1,   373,    -1,   371,    -1,   283,   369,   150,     4,    88,
     316,    89,   374,    -1,    -1,   283,   369,    85,   368,     4,
      88,   316,    89,   374,    -1,    -1,    51,    -1,   283,   369,
     150,     4,   399,   133,   372,   143,   400,    -1,   283,   369,
     150,    73,   102,   319,   103,   399,   133,   372,   143,   400,
      -1,   283,    97,   374,    -1,   283,    98,   374,    -1,   283,
      97,   374,   283,    98,   374,    -1,   283,    98,   374,   283,
      97,   374,    -1,   283,   369,    31,   150,     4,   374,    -1,
     132,    -1,   133,   143,    -1,   283,   298,    30,     4,   376,
     378,   286,    -1,    -1,   377,    -1,   131,   155,    -1,   133,
     379,   143,    -1,   133,   380,   101,   143,    -1,    -1,   380,
      -1,   381,    -1,   380,   101,   381,    -1,   283,     4,    -1,
      -1,   283,     4,   142,   382,   216,    -1,   283,   298,    26,
     317,     4,    88,   316,    89,   132,    -1,   385,    -1,   386,
      -1,   385,   386,    -1,   395,   102,   387,   390,   103,   396,
      -1,   395,   102,   387,   390,   101,   103,   396,    -1,    -1,
     388,    -1,   389,   131,    -1,    90,    -1,    91,    -1,    31,
      -1,    92,    -1,    93,    -1,    94,    -1,    95,    -1,    63,
      -1,    96,    -1,   391,    -1,   390,   101,   391,    -1,   393,
     392,    -1,    -1,   394,    -1,   149,    -1,    88,   173,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   100,   100,   101,   102,   103,   104,   105,   108,   109,
     115,   118,   122,   123,   126,   127,   130,   131,   132,   135,
     136,   139,   140,   141,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   147,   147,   150,   150,   153,   154,   154,
     157,   158,   159,   161,   163,   166,   170,   174,   175,   178,
     179,   180,   183,   184,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   201,   204,   205,   206,
     209,   210,   212,   214,   217,   218,   220,   222,   225,   226,
     229,   232,   233,   236,   239,   242,   245,   248,   249,   251,
     253,   256,   257,   257,   260,   263,   266,   269,   272,   275,
     276,   277,   278,   279,   282,   283,   284,   285,   288,   291,
     294,   295,   296,   297,   298,   299,   300,   308,   309,   310,
     311,   312,   313,   313,   315,   317,   320,   321,   324,   325,
     328,   329,   330,   331,   334,   335,   336,   339,   340,   341,
     344,   345,   346,   347,   348,   349,   350,   353,   354,   355,
     358,   359,   362,   363,   366,   367,   370,   371,   374,   375,
     378,   379,   379,   382,   382,   385,   385,   385,   385,   385,
     385,   386,   386,   386,   386,   386,   389,   390,   393,   396,
     400,   401,   402,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   420,   422,   424,   428,
     429,   432,   435,   438,   439,   442,   445,   446,   449,   450,
     453,   454,   455,   458,   461,   464,   465,   468,   471,   474,
     475,   476,   477,   478,   479,   480,   483,   484,   487,   488,
     489,   493,   496,   498,   500,   503,   504,   507,   510,   511,
     514,   515,   518,   519,   520,   521,   524,   527,   530,   533,
     533,   533,   535,   537,   539,   541,   543,   545,   548,   549,
     552,   555,   558,   559,   562,   565,   566,   567,   568,   569,
     572,   575,   578,   579,   580,   583,   585,   587,   590,   593,
     594,   595,   598,   599,   602,   603,   604,   606,   608,   611,
     614,   617,   620,   623,   626,   627,   631,   634,   635,   638,
     638,   641,   642,   644,   646,   648,   650,   652,   654,   657,
     659,   661,   670,   671,   674,   675,   678,   681,   682,   685,
     686,   689,   689,   692,   695,   696,   699,   700,   703,   704,
     705,   706,   707,   717,   719,   722,   723,   726,   727,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   743,   743,   745,   748,   750,   753,   754,   755,   758,
     759,   762,   762,   764,   766,   769,   770,   773,   774,   775,
     776,   777,   778,   779,   780,   781,   783,   786,   789,   792,
     796,   797,   797,   799,   801,   804,   805,   808,   809,   812,
     813,   816,   817,   820,   822,   824,   825,   829,   832,   838,
     839,   841,   843,   845,   847,   850,   856,   862,   863,   866,
     867,   873,   874,   877,   883,   889,   895,   897,   900,   904,
     907,   908,   911,   912,   915,   915,   916,   916,   916,   916,
     916,   916,   917,   917,   917,   917,   917,   917,   918,   918,
     918,   918,   918,   918,   918,   918,   921,   922,   925,   928,
     930,   932,   935,   936,   952,   955,   956,   959,   960,   965,
     967,   969,   972,   975,   977,   979,   982,   983,   986,   987,
     988,   989,   990,   991,   992,   993,   995,  1000,  1001,  1003,
    1005,  1008,  1009,  1014,  1016,  1018,  1021,  1024,  1026,  1028,
    1031,  1032,  1035,  1036,  1037,  1038,  1042,  1043,  1043,  1045,
    1047,  1050,  1056,  1064,  1065,  1066,  1067,  1070,  1075,  1076,
    1081,  1083,  1085,  1088,  1091,  1092,  1094,  1096,  1099,  1100,
    1103,  1104,  1104,  1109,  1114,  1117,  1118,  1121,  1122,  1124,
    1126,  1129,  1132,  1133,  1134,  1135,  1136,  1137,  1138,  1139,
    1140,  1143,  1144,  1147,  1149,  1151,  1154,  1157,  1164,  1167,
    1170,  1173,  1176,  1179
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RANK_SPECIFIER", "IDENTIFIER", "NoId",
  "Space", "INTEGER_LITERAL", "REAL_LITERAL", "CHARACTER_LITERAL",
  "STRING_LITERAL", "ABSTRACT", "AS", "BASE", "BOOL", "BREAK", "BYTE",
  "CASE", "CATCH", "CHAR", "CHECKED", "CLASS", "CONST", "CONTINUE",
  "DECIMAL", "DEFAULT", "DELEGATE", "DO", "DOUBLE", "ELSE", "ENUM",
  "EVENT", "EXPLICIT", "EXTERN", "FALSE", "FINALLY", "FIXED", "FLOAT",
  "FOR", "FOREACH", "GOTO", "IF", "IMPLICIT", "IN", "INT", "INTERFACE",
  "INTERNAL", "IS", "LOCK", "LONG", "NAMESPACE", "NEW", "NULL_LITERAL",
  "OBJECT", "OPERATOR", "OUT", "OVERRIDE", "PARAMS", "PRIVATE",
  "PROTECTED", "PUBLIC", "READONLY", "REF", "RETURN", "SBYTE", "SEALED",
  "SHORT", "SIZEOF", "STACKALLOC", "STATIC", "STRING", "STRUCT", "SWITCH",
  "THIS", "THROW", "TRUE", "TRY", "TYPEOF", "UINT", "ULONG", "UNCHECKED",
  "UNSAFE", "USHORT", "USING", "VIRTUAL", "VOID", "VOLATILE", "WHILE",
  "OpenBracket", "CloseBracket", "ASSEMBLY", "FIELD", "METHOD", "MODULE",
  "PARAM", "PROPERTY", "TYPE", "GET", "SET", "ADD", "REMOVE", "\",\"",
  "\"[\"", "\"]\"", "PLUSEQ", "MINUSEQ", "STAREQ", "DIVEQ", "MODEQ",
  "XOREQ", "ANDEQ", "OREQ", "LTLT", "GTGT", "GTGTEQ", "LTLTEQ", "EQEQ",
  "NOTEQ", "LEQ", "GEQ", "ANDAND", "OROR", "PLUSPLUS", "MINUSMINUS",
  "ARROW", "Multiple_N1", "PercenSign", "Division", "Dash", "Plus_S",
  "Maddeh", "Colon", "Semicolon", "OpenBracket_T1", "Dot", "Less",
  "Greater", "And", "Shapo", "Vertical_Mark", "Ta3ajob", "Quest_Mark",
  "Equal", "CloseBracket_T1", "\"then\"", "$accept", "literal",
  "boolean_literal", "namespace_name", "type_name", "type",
  "non_array_type", "simple_type", "primitive_type", "numeric_type",
  "integral_type", "floating_point_type", "class_type", "pointer_type",
  "@1", "array_type", "rank_specifiers_opt", "rank_specifier",
  "variable_reference", "argument_list", "argument", "primary_expression",
  "primary_expression_no_parenthesis", "parenthesized_expression",
  "member_access", "invocation_expression", "argument_list_opt",
  "element_access", "expression_list_opt", "expression_list",
  "this_access", "base_access", "post_increment_expression",
  "post_decrement_expression", "new_expression",
  "object_creation_expression", "array_creation_expression",
  "array_initializer_opt", "typeof_expression", "@2", "checked_expression",
  "unchecked_expression", "pointer_member_access", "addressof_expression",
  "sizeof_expression", "postfix_expression",
  "unary_expression_not_plusminus", "pre_increment_expression",
  "pre_decrement_expression", "unary_expression", "cast_expression", "@3",
  "type_quals_opt", "type_quals", "type_qual", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "conditional_and_expression",
  "conditional_or_expression", "conditional_expression", "@4",
  "assignment", "@5", "assignment_operator", "expression",
  "constant_expression", "boolean_expression", "statement",
  "embedded_statement", "block", "statement_list_opt", "statement_list",
  "empty_statement", "labeled_statement", "declaration_statement",
  "local_variable_declaration", "variable_declarators",
  "variable_declarator", "variable_initializer", "stackalloc_initializer",
  "local_constant_declaration", "constant_declarators",
  "constant_declarator", "expression_statement", "statement_expression",
  "selection_statement", "if_statement", "switch_statement",
  "switch_block", "switch_sections_opt", "switch_sections",
  "switch_section", "switch_labels", "switch_label", "iteration_statement",
  "unsafe_statement", "while_statement", "do_statement", "for_statement",
  "@6", "@7", "for_initializer_opt", "for_condition_opt",
  "for_iterator_opt", "for_initializer", "for_condition", "for_iterator",
  "statement_expression_list", "foreach_statement", "jump_statement",
  "break_statement", "continue_statement", "goto_statement",
  "return_statement", "expression_opt", "throw_statement", "try_statement",
  "catch_clauses", "catch_clause", "identifier_opt", "finally_clause",
  "checked_statement", "unchecked_statement", "lock_statement",
  "using_statement", "resource_acquisition", "fixed_statement",
  "fixed_pointer_declarators", "fixed_pointer_declarator", "@8",
  "compilation_unit", "using_directives_opt", "attributes_opt",
  "namespace_member_declarations_opt", "namespace_declaration",
  "comma_opt", "qualified_identifier", "qualifier", "namespace_body",
  "using_directives", "using_directive", "using_alias_directive", "@9",
  "using_namespace_directive", "namespace_member_declarations",
  "namespace_member_declaration", "type_declaration", "modifiers_opt",
  "modifiers", "modifier", "class_declaration", "@10", "class_base_opt",
  "class_base", "interface_type_list", "class_body", "@11",
  "class_member_declarations_opt", "class_member_declarations",
  "class_member_declaration", "constant_declaration", "field_declaration",
  "method_declaration", "method_header", "@12",
  "formal_parameter_list_opt", "return_type", "method_body",
  "formal_parameter_list", "formal_parameter", "fixed_parameter",
  "parameter_modifier_opt", "parameter_array", "property_declaration",
  "accessor_declarations", "set_accessor_declaration_opt",
  "get_accessor_declaration_opt", "get_accessor_declaration",
  "set_accessor_declaration", "accessor_body", "event_declaration",
  "event_accessor_declarations", "add_accessor_declaration",
  "remove_accessor_declaration", "indexer_declaration",
  "indexer_declarator", "qualified_this", "operator_declaration",
  "operator_declarator", "overloadable_operator_declarator",
  "overloadable_operator", "conversion_operator_declarator",
  "constructor_declaration", "constructor_declarator",
  "constructor_initializer_opt", "constructor_initializer",
  "destructor_declaration", "operator_body", "constructor_body",
  "struct_declaration", "struct_interfaces_opt", "struct_interfaces",
  "struct_body", "struct_member_declarations_opt",
  "struct_member_declarations", "struct_member_declaration",
  "array_initializer", "variable_initializer_list_opt",
  "variable_initializer_list", "interface_declaration",
  "interface_base_opt", "interface_base", "interface_body",
  "interface_member_declarations_opt", "interface_member_declarations",
  "interface_member_declaration", "interface_method_declaration", "@13",
  "new_opt", "interface_property_declaration",
  "interface_indexer_declaration", "interface_accessors",
  "interface_event_declaration", "interface_empty_body",
  "enum_declaration", "enum_base_opt", "enum_base", "enum_body",
  "enum_member_declarations_opt", "enum_member_declarations",
  "enum_member_declaration", "@14", "delegate_declaration", "attributes",
  "attribute_sections", "attribute_section",
  "attribute_target_specifier_opt", "attribute_target_specifier",
  "attribute_target", "attribute_list", "attribute",
  "attribute_arguments_opt", "attribute_name", "attribute_arguments",
  "ENTER_attrib", "EXIT_attrib", "ENTER_accessor_decl",
  "EXIT_accessor_decl", "ENTER_getset", "EXIT_getset", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
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
     395,   396,   397,   398,   399
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   145,   146,   146,   146,   146,   146,   146,   147,   147,
     148,   149,   150,   150,   151,   151,   152,   152,   152,   153,
     153,   154,   154,   154,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   156,   156,   157,   157,   158,   159,   158,
     160,   160,   160,   161,   161,   162,   163,   164,   164,   165,
     165,   165,   166,   166,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   168,   169,   169,   169,
     170,   170,   171,   171,   172,   172,   173,   173,   174,   174,
     175,   176,   176,   177,   178,   179,   180,   181,   181,   182,
     182,   183,   184,   183,   185,   186,   187,   188,   189,   190,
     190,   190,   190,   190,   191,   191,   191,   191,   192,   193,
     194,   194,   194,   194,   194,   194,   194,   195,   195,   195,
     195,   195,   196,   195,   197,   197,   198,   198,   199,   199,
     200,   200,   200,   200,   201,   201,   201,   202,   202,   202,
     203,   203,   203,   203,   203,   203,   203,   204,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   208,   209,   209,
     210,   211,   210,   213,   212,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   215,   215,   216,   217,
     218,   218,   218,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   220,   221,   221,   222,
     222,   223,   224,   225,   225,   226,   227,   227,   228,   228,
     229,   229,   229,   230,   231,   232,   232,   233,   234,   235,
     235,   235,   235,   235,   235,   235,   236,   236,   237,   237,
     237,   238,   239,   240,   240,   241,   241,   242,   243,   243,
     244,   244,   245,   245,   245,   245,   246,   247,   248,   250,
     251,   249,   252,   252,   253,   253,   254,   254,   255,   255,
     256,   257,   258,   258,   259,   260,   260,   260,   260,   260,
     261,   262,   263,   263,   263,   264,   265,   265,   266,   267,
     267,   267,   268,   268,   269,   269,   269,   270,   270,   271,
     272,   273,   274,   275,   276,   276,   277,   278,   278,   280,
     279,   281,   281,   282,   282,   283,   283,   284,   284,   285,
     286,   286,   287,   287,   288,   288,   289,   290,   290,   291,
     291,   293,   292,   294,   295,   295,   296,   296,   297,   297,
     297,   297,   297,   298,   298,   299,   299,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   302,   301,   301,   303,   303,   304,   304,   304,   305,
     305,   307,   306,   308,   308,   309,   309,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   311,   312,   313,
     314,   315,   314,   316,   316,   317,   317,   318,   318,   319,
     319,   320,   320,   321,   322,   322,   322,   323,   324,   325,
     325,   326,   326,   327,   327,   328,   329,   330,   330,   331,
     331,   332,   332,   333,   334,   335,   336,   336,   337,   338,
     339,   339,   340,   340,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   342,   342,   343,   344,
     345,   345,   346,   346,   347,   348,   348,   349,   349,   350,
     351,   351,   352,   353,   354,   354,   355,   355,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   357,   357,   358,
     358,   359,   359,   360,   361,   361,   362,   363,   364,   364,
     365,   365,   366,   366,   366,   366,   367,   368,   367,   369,
     369,   370,   371,   372,   372,   372,   372,   373,   374,   374,
     375,   376,   376,   377,   378,   378,   379,   379,   380,   380,
     381,   382,   381,   383,   384,   385,   385,   386,   386,   387,
     387,   388,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   390,   390,   391,   392,   392,   393,   394,   395,   396,
     397,   398,   399,   400
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     3,
       2,     2,     2,     0,     2,     1,     1,     1,     3,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       4,     4,     0,     1,     4,     4,     0,     1,     1,     3,
       1,     3,     4,     2,     2,     1,     5,     7,     3,     0,
       1,     4,     0,     5,     4,     4,     3,     2,     4,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     2,     1,     1,     1,     4,     5,     6,
       5,     5,     0,     6,     0,     1,     1,     2,     1,     1,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     0,     6,     0,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     1,     1,
       2,     1,     3,     2,     2,     2,     1,     3,     1,     3,
       1,     1,     1,     5,     3,     1,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     7,
       2,     5,     3,     0,     1,     1,     2,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     2,     5,     7,     0,
       0,    11,     0,     1,     0,     1,     0,     1,     1,     1,
       1,     1,     1,     3,     8,     1,     1,     1,     1,     1,
       2,     2,     3,     4,     3,     3,     0,     1,     3,     3,
       3,     4,     1,     2,     6,     6,     2,     0,     1,     2,
       2,     2,     5,     5,     1,     1,     6,     1,     3,     0,
       4,     2,     2,     0,     1,     0,     1,     0,     1,     5,
       0,     1,     1,     2,     2,     3,     4,     1,     2,     1,
       1,     0,     6,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     8,     7,     0,     1,     2,     2,     4,     1,
       3,     0,     4,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     5,     2,
       7,     0,     8,     0,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     4,     0,     1,     1,     4,     9,     2,
       2,     0,     1,     0,     1,     5,     5,     1,     1,     6,
      10,     2,     2,     5,     5,     8,     5,     5,     2,     4,
       1,     1,     7,    10,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     7,     7,     4,     5,
       0,     1,     5,     5,     7,     1,     1,     1,     1,     7,
       0,     1,     2,     3,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     0,
       1,     1,     3,     7,     0,     1,     2,     3,     0,     1,
       1,     2,     1,     1,     1,     1,     8,     0,     9,     0,
       1,     9,    12,     3,     3,     6,     6,     6,     1,     2,
       7,     0,     1,     2,     3,     4,     0,     1,     1,     3,
       2,     0,     5,     9,     1,     1,     2,     6,     7,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     0,     1,     1,     3,     0,     0,
       0,     0,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
     303,     0,     0,   305,   304,   317,   319,   320,   312,     0,
      10,     0,     1,   333,   326,   305,   324,   327,   328,   329,
     330,   331,   332,   306,   524,   525,     0,   318,   314,   321,
     323,   313,   337,   338,   339,     0,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,   334,   335,
     333,   325,   526,   529,     0,   315,   312,     0,   351,     0,
       0,     0,     0,   336,   534,   539,   532,   533,   535,   536,
     537,   538,   540,     0,   530,     0,     0,   303,   310,   354,
       0,    20,    25,    32,    23,    34,    33,    28,    30,    35,
      24,    26,    36,    29,    31,    27,    38,    15,   385,    12,
      14,    16,    19,    21,    22,    17,    18,    13,    11,     0,
     511,   484,   460,   546,    11,     0,   541,   544,   531,   322,
     305,   311,   309,     0,     0,   355,   354,     0,    37,    45,
      41,    40,    42,     0,     0,     0,   512,     0,     0,   485,
       0,     0,   461,     0,   549,    76,   543,   545,     0,   305,
     359,   356,   357,   361,   310,     0,    39,   305,   513,   305,
     310,   486,   305,   310,   462,   305,   310,   549,   542,   527,
       3,     4,     5,     6,     0,     0,     9,     0,     7,     0,
      80,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     2,     0,     0,    99,    53,    52,
      56,    57,    58,     0,    77,    59,    60,   101,   102,    61,
      85,    55,    62,    64,    65,   103,   116,    63,   104,   110,
     114,   115,   130,   107,   134,   137,   140,   147,   150,   152,
     154,   156,   158,   160,   176,   177,    78,   100,   316,     0,
       0,   305,   353,   310,   394,     0,   384,   389,   391,   392,
       0,     0,   517,   518,   510,   499,     0,   305,   490,   492,
     493,   495,   494,   483,   333,   476,   468,   469,   470,     0,
     471,   472,   473,   474,   475,     0,   305,   466,   459,   528,
       0,     0,     0,    38,     0,    12,    13,     0,     0,     0,
     122,   124,   124,   134,     0,   100,   108,   109,   113,   112,
     111,   106,    97,   105,     0,     0,     0,     0,    72,   547,
       0,    83,    84,     0,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   165,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,   358,
     360,   333,   376,     0,   305,   365,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   352,   396,     0,   395,     0,
       0,   305,   520,   514,   305,   500,     0,   487,   491,     0,
     388,   197,   387,   379,   463,   467,     0,    81,     0,    72,
       0,   479,    88,     0,    38,     0,     0,   124,   129,   128,
       0,   125,   126,     0,     0,    66,   124,    68,    69,     0,
      67,     0,     0,    73,    47,     0,    49,    79,    96,     0,
     131,   133,   132,   130,   136,   135,   138,   139,   146,   145,
     143,   144,   141,   142,   148,   149,   151,   153,   155,   157,
     159,   161,     0,     0,     0,   362,   366,     0,     0,   523,
     390,   521,   515,   519,     0,    38,     0,   312,     0,     0,
       0,     0,    38,     0,   552,     0,   420,   421,     0,   312,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   276,     0,   276,     0,     0,     0,     0,     0,
     201,     0,    16,    17,    57,   101,   102,    85,   114,   115,
       0,   221,   199,   182,   183,     0,   198,   184,   180,   181,
       0,     0,   185,     0,   186,   226,   227,   187,   194,   242,
     243,   244,   245,   188,   265,   266,   267,   268,   269,   189,
     190,   191,   192,   193,   195,   100,    82,    94,     0,     0,
       0,   210,   481,   212,   211,     0,   480,    98,     0,    91,
      95,     0,     0,   127,     0,     0,   117,     0,    74,    51,
      46,    50,     0,    70,   164,     0,    71,    75,     0,   397,
     393,     0,     0,     0,   552,     0,   305,     0,     0,     0,
       0,     0,   208,     0,     0,     0,   206,   552,     0,     0,
       0,   456,   455,   419,   458,   457,   448,     0,   270,   290,
       0,   271,     0,   230,     0,   252,     0,     0,     0,     0,
       0,     0,   277,     0,     0,     0,     0,   291,   246,     0,
       0,   208,   205,   196,   200,   203,   204,   218,    86,    43,
       0,   477,     0,    93,     0,   120,   121,   118,     0,    48,
       0,     0,   178,   522,     0,     0,   305,     0,   305,     0,
       0,     0,   215,     0,   550,     0,     0,     0,     0,   431,
     430,   438,   439,   440,   441,   445,   444,   428,   429,   432,
     434,   433,   425,   424,   427,   443,   442,   435,   437,   436,
     426,     0,   305,     0,   378,   305,     0,   418,   305,   305,
     202,   214,     0,     0,   258,   262,     0,   253,   259,     0,
     272,     0,   274,   179,     0,     0,   275,     0,   278,     0,
       0,   279,   282,   280,   295,   294,     0,     0,    89,    43,
       0,   478,   482,   123,   119,   162,     0,   508,     0,   507,
     305,     0,   305,     0,   450,     0,     0,   377,   409,     0,
       0,     0,   305,   209,     0,     0,   207,     0,   305,     0,
       0,     0,   305,   305,     0,     0,     0,   297,   249,     0,
       0,   273,     0,     0,     0,     0,   286,   289,   283,   281,
       0,     0,    87,    90,    44,     0,     0,   509,     0,     0,
       0,     0,   552,     0,   449,   451,   217,   216,   305,     0,
       0,     0,     0,   416,   380,     0,   417,   553,   553,   553,
       0,   399,   402,     0,   400,   404,     0,   299,     0,     0,
     254,   263,     0,   228,   292,   233,   231,   287,   287,   293,
     247,   213,   454,     0,   496,     0,     0,   553,     0,     0,
       0,     0,     0,   305,   305,     0,     0,   382,     0,   553,
       0,     0,   415,     0,     0,   296,   298,   260,     0,   255,
       0,     0,     0,     0,     0,   234,   235,     0,   238,   288,
       0,     0,   498,   305,   305,   501,   305,    72,    72,   551,
     551,   551,     0,   411,     0,   412,   447,   446,   422,     0,
     398,   408,   407,   552,   552,   248,   300,   250,     0,   229,
       0,   241,   232,   236,   237,   239,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   410,     0,   405,   406,   256,
     264,   240,   285,   284,     0,     0,   553,   452,   453,   550,
     550,     0,     0,   257,   261,   505,   506,   502,   413,   414,
     423,     0,   251
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,   193,   194,     9,    97,   491,    99,   100,   195,   102,
     103,   104,   196,   106,   127,   107,   718,   399,   559,   413,
     414,   197,   198,   199,   200,   201,   415,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   772,   212,   548,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   397,   400,   401,   402,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   565,   235,   419,   325,
     416,   643,   704,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   585,   586,   542,   543,   511,   651,   652,   512,
     513,   514,   515,   516,   816,   854,   855,   856,   857,   858,
     517,   518,   519,   520,   521,   810,   909,   696,   848,   922,
     697,   849,   923,   698,   522,   523,   524,   525,   526,   527,
     613,   528,   529,   711,   712,   860,   713,   530,   531,   532,
     533,   716,   534,   756,   757,   844,     2,     3,   244,   148,
      14,   122,   237,    11,    78,     4,     5,     6,    54,     7,
      15,    16,    17,    47,    48,    49,    18,    80,   124,   125,
     152,   154,   241,   353,   354,   355,   266,   267,   268,   269,
     581,   245,   109,   383,   246,   247,   248,   369,   249,   270,
     751,   801,   804,   752,   753,   883,   271,   832,   833,   834,
     272,   464,   589,   273,   465,   466,   681,   467,   274,   468,
     784,   785,   364,   593,   596,    19,   141,   142,   166,   275,
     276,   277,   544,   545,   546,    20,   138,   139,   163,   256,
     257,   258,   259,   573,   376,   260,   261,   781,   262,   729,
      21,   135,   136,   160,   251,   252,   253,   571,    22,    23,
      24,    25,    73,    74,    75,   115,   116,   146,   117,   147,
      26,   169,   739,   903,   590,   840
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -763
static const short int yypact[] =
{
     -36,    67,   108,    72,   -36,  -763,  -763,  -763,   -25,    47,
    -763,   186,  -763,  1065,  -763,    31,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,    72,  -763,   175,  -763,  -763,  -763,
    -763,   171,  -763,  -763,  -763,   241,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,   221,   596,  -763,
     204,  -763,  -763,   205,   241,  -763,   197,   214,   304,  2513,
     366,   377,   388,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,   241,  -763,   226,   270,   -36,   281,   288,
     431,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,   446,  -763,   336,  -763,
     472,  -763,  -763,  -763,  -763,  -763,  -763,   472,   472,   473,
     373,   379,   389,  -763,  -763,   329,  -763,   434,  -763,  -763,
     -47,  -763,  -763,    40,   391,  -763,   288,   408,  -763,  -763,
    -763,  -763,  -763,   443,   307,   411,  -763,   241,   413,  -763,
     241,   423,  -763,    35,  -763,  2198,  -763,  -763,   424,   -11,
    -763,   457,   463,  -763,   281,   391,  -763,   218,  -763,    80,
     281,   463,   116,   281,   463,   124,   281,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,   -16,   478,  -763,  2566,  -763,   480,
    -763,  -763,   481,   482,  1951,  2198,  2198,  2198,  2198,  2198,
    2198,  2198,  2198,  -763,  -763,   438,   439,   115,   486,  -763,
    -763,  -763,  -763,   492,   483,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,   316,  -763,
    -763,  -763,   675,  -763,   338,   208,   251,    69,   300,   445,
     447,   449,   466,   170,  -763,  -763,  -763,   291,  -763,   241,
     241,   141,  -763,   281,   374,   501,   490,  -763,  -763,  -763,
     588,   450,   496,  -763,  -763,   547,   456,   151,  -763,  -763,
    -763,  -763,  -763,  -763,   596,  -763,  -763,  -763,  -763,   255,
    -763,  -763,  -763,  -763,  -763,   458,   176,  -763,  -763,  -763,
    2198,   598,  2198,  -763,    89,   498,    10,  2566,  2597,  2198,
    -763,    23,    30,   341,   517,   128,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,   604,   605,  2198,   606,  1786,  -763,
    2198,  -763,  -763,   607,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  2198,  2198,  2198,  2198,
    2198,  2198,  2198,  2566,  2566,  2198,  2198,  2198,  2198,  2198,
    2198,  2198,  2198,  2198,  2198,  2198,  2198,  1786,  2198,   463,
    -763,   596,  -763,   470,   210,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  2566,  -763,  2566,
     484,    72,   475,  -763,   233,  -763,  2482,  -763,  -763,  2429,
    -763,  1562,  -763,  -763,  -763,  -763,   353,  -763,   525,  1786,
    2198,  1868,  -763,   104,   526,   185,   533,    22,  -763,  -763,
     534,    22,  -763,   535,  2033,  2280,    22,  -763,  -763,   369,
    -763,  2198,  2198,   524,  -763,   537,  -763,  -763,  -763,  2198,
    -763,  -763,  -763,  -763,   338,   338,   208,   208,   336,   336,
     251,   251,   251,   251,    69,    69,   300,   445,   447,   449,
     466,  -763,   541,   375,  2359,  -763,  -763,    36,    44,  -763,
    -763,  -763,  -763,  -763,  2566,   629,    16,   -42,  2566,  2566,
     582,   583,   640,    33,  -763,   293,  -763,  -763,   380,   277,
     513,    -9,  2566,   514,  1696,  1696,   560,   561,   563,   403,
     565,   572,  2198,   574,  2198,   530,    62,   530,   576,   578,
    -763,    45,   438,   439,   143,   157,   192,   229,   245,   266,
     675,  -763,  -763,  -763,  -763,   527,  1562,  -763,  -763,  -763,
     539,   542,  -763,   543,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,    26,  -763,  -763,   584,   398,
    2566,  -763,  -763,  -763,  -763,   536,   577,  -763,   592,  -763,
    -763,   594,  2198,  -763,  2198,  2198,  -763,   595,  -763,  -763,
    -763,  -763,  1786,  -763,  -763,   554,  -763,  -763,   684,  -763,
    -763,  2198,    46,   687,   608,   590,   218,    50,    55,  2566,
    2566,   241,   -31,  1272,   593,   -49,  -763,   611,    39,   599,
     567,  -763,  -763,  -763,  -763,  -763,  -763,  1562,  -763,  -763,
      50,  -763,   615,  -763,  2566,  2116,  2566,   562,  2198,   571,
    2198,  2198,  -763,   580,  2198,   581,   286,  -763,  -763,  2116,
    2198,   564,   603,  -763,  -763,  -763,  -763,  -763,  -763,   472,
     -12,  -763,  1291,  -763,  2198,  -763,  -763,  -763,  2198,  -763,
    2198,   621,  -763,  -763,   382,   622,   218,   585,    72,   625,
     573,   182,  -763,   271,  -763,   136,   147,   628,  1868,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,   631,    72,   713,  -763,   218,   587,  -763,    72,    72,
    -763,   620,   634,    56,  -763,  -763,   597,  -763,   624,    61,
    -763,   602,  -763,  -763,   637,   641,  -763,   642,  -763,    75,
     530,   286,  -763,  -763,  -763,  -763,   649,   652,   609,   472,
    2198,  -763,  -763,  -763,  -763,  -763,   655,  -763,   614,  -763,
     218,   656,    72,   399,   616,  2198,   742,  -763,  -763,   618,
    2566,  2566,   218,  -763,  2566,   405,  -763,   660,    72,   406,
     419,   617,   256,   258,  2198,   612,   320,  -763,  -763,  2198,
     722,  -763,  1696,  1696,   633,    40,  -763,  -763,  -763,  -763,
    1696,  1696,  -763,  -763,  -763,   664,   530,  -763,   680,   382,
     421,   627,  -763,    32,  -763,  -763,  -763,  -763,    72,    64,
      71,   683,    73,  -763,  -763,   630,  -763,  -763,  -763,  -763,
     676,  -763,  -763,   678,  -763,  -763,   703,  -763,  1696,   772,
    2198,  -763,  2198,   765,  -763,   223,  -763,   791,   791,  -763,
    -763,  -763,  -763,   382,  -763,   382,   382,  -763,   667,   709,
     714,   436,   658,    72,    72,   715,   716,  -763,   323,  -763,
     409,   409,  -763,   677,  2198,  -763,  -763,  -763,   679,  -763,
     718,  1696,  2198,   688,   665,   223,  -763,  1428,  -763,  -763,
     721,   725,  -763,   263,   267,  -763,    72,  1786,  1786,  -763,
    -763,  -763,   720,  -763,   719,  -763,  -763,  -763,  -763,  2566,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  1696,  -763,
     695,  -763,  -763,  -763,  1562,  -763,   530,   530,   729,   731,
     686,   741,   743,   530,   530,  -763,    84,  -763,  -763,  2198,
    -763,  -763,  -763,  -763,   382,   382,  -763,  -763,  -763,  -763,
    -763,   746,   747,  -763,   624,  -763,  -763,  -763,  -763,  -763,
    -763,  1696,  -763
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -763,  -763,  -763,  -763,   -67,   -17,   654,  -763,    15,  -763,
     704,  -763,   -54,  -763,  -763,   662,   118,   -84,   429,  -763,
     280,  -763,  -763,  -763,  -763,    53,  -338,  -763,  -763,  -244,
    -763,  -763,   166,   262,  -763,   287,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,   440,   347,   415,   153,
    -763,  -763,  -212,  -763,   442,  -162,   206,   111,   209,   503,
     504,   505,   506,   502,  -763,  -763,  -763,   432,  -763,  -763,
     387,  -600,  -609,  -499,  -348,  -265,  -763,    -8,  -763,  -763,
    -763,  -222,  -477,   168,  -376,  -763,  -763,   252,   119,  -763,
    -603,  -763,  -763,  -763,  -763,  -763,  -763,     2,  -763,    -3,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,   -51,  -763,  -763,  -763,  -763,  -763,  -763,
     376,  -763,  -763,  -763,   154,    52,   162,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,    59,  -763,  -763,   797,     0,  -763,
    -763,    65,    -1,   412,  -763,  -763,   872,  -763,  -763,  -763,
     757,    -5,  -147,  -236,  -763,   831,  -763,  -763,   754,  -763,
    -102,   726,  -763,  -763,  -763,   528,  -220,  -214,  -200,  -763,
    -763,  -564,  -763,  -763,  -563,   512,  -763,  -763,  -763,  -163,
     137,  -763,  -763,   133,   135,    54,  -157,  -763,    57,    63,
    -144,  -763,  -763,  -142,  -763,  -763,  -763,  -763,  -141,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,   623,  -285,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,   643,  -763,  -763,  -763,  -763,  -763,    37,  -763,  -762,
    -763,  -763,  -763,  -763,  -763,  -763,   523,  -763,  -763,  -763,
    -763,   864,  -763,  -763,  -763,  -763,   755,  -763,  -763,  -763,
    -763,   734,  -366,  -310,  -555,  -732
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -549
static const short int yytable[] =
{
      10,   392,   695,    13,   382,   105,   113,   624,   701,   442,
      51,   717,   649,   129,   622,    50,   130,   824,   265,   647,
     574,   356,   293,   131,   132,   129,   129,   357,   379,   129,
     -11,  -302,   686,   129,    57,   161,   386,   582,   164,    56,
     569,   358,    98,    31,    56,   829,   576,     1,   570,   621,
     644,   538,   683,    76,   650,  -548,   150,  -312,   108,   582,
     755,   862,   409,   863,   864,   760,   841,   842,   835,   151,
     150,     8,   114,   150,   101,   836,   113,   838,   359,   282,
     403,   333,   731,   684,   360,   733,   280,   583,   921,   575,
     720,  -548,    28,    89,   352,   865,  -307,   361,   690,   362,
     363,   653,  -312,    28,   443,   830,   584,   880,    12,    28,
      92,   658,   687,   128,   347,   444,   334,    29,   281,   745,
      50,   747,   114,   105,   381,   749,   602,   603,   348,   265,
     292,   129,  -308,  -548,   356,   786,   114,   349,   167,   114,
     357,   128,   114,   391,    51,   806,   539,   398,   398,    50,
     289,   -11,   925,   926,   358,   398,   811,   304,   128,   250,
     284,   128,   255,   765,   305,   264,   778,   424,   425,   128,
     128,   128,   150,   350,  -548,   128,   108,   389,   791,    30,
     128,   128,  -548,   295,   927,   551,   128,   335,   336,   128,
      31,   359,   101,   547,   557,   381,   128,   360,   128,   291,
     592,   847,   131,   595,   337,   338,   599,   352,   381,   128,
     361,   406,   362,   363,   128,    32,   347,   306,  -548,   242,
     616,   617,   618,  -516,   740,   254,  -548,   828,   263,   128,
     348,   278,  -219,   105,   105,   741,    64,    33,   114,   114,
     852,   351,    58,  -548,  -219,    56,  -222,    59,   853,   307,
      34,    60,   890,  -548,    35,    36,   722,   255,  -222,  -488,
      37,   128,    38,    39,    40,    41,    61,  -464,    65,    42,
     393,   395,   128,    43,   549,  -219,   264,    53,  -548,   105,
     105,  -223,   743,   736,  -363,    44,   108,   108,    45,  -222,
      46,   345,    62,  -223,  -489,    66,    67,    68,    69,    70,
      71,    72,   101,   101,   709,    55,   695,  -383,   365,    79,
     128,   346,  -548,   105,   737,   105,   428,   429,  -220,  -465,
    -548,   710,   105,    82,  -223,   105,    83,   493,   907,   908,
    -220,    28,   108,   108,  -224,  -548,   329,   330,   296,   297,
     298,   299,   300,   301,   302,   303,  -224,    77,   101,   101,
     447,    87,   448,  -364,   351,  -225,    88,   118,  -548,   456,
    -548,  -220,   463,   331,   332,  -548,   108,  -225,   108,  -548,
     110,    90,   683,    91,   250,   108,   452,  -224,   108,   347,
     535,   111,   101,   694,   101,    93,    94,   380,   381,    95,
     105,   101,   112,   348,   101,   624,   492,   715,  -225,  -401,
     105,  -403,   119,   738,   105,   105,  -503,   607,   597,   808,
    -504,    28,   878,   121,   813,   814,   339,   340,   105,   123,
     608,   809,   819,   820,   879,   591,   381,   463,   609,   366,
     143,   367,   144,   773,   494,   126,   368,   572,   311,   312,
     313,   577,   578,   108,   766,   767,   430,   431,   432,   433,
    -386,   132,   493,   108,   310,   600,   536,   108,   108,   101,
     845,   128,   587,   326,   327,   328,   404,   327,   328,   101,
     310,   108,   558,   101,   101,   129,   310,   133,   567,   420,
     421,   422,   423,   423,   423,   423,   105,   101,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   310,
     371,   629,   782,   889,   134,   535,   371,   371,   793,   796,
     137,   822,   594,   381,   727,   728,   797,   798,   825,   826,
     140,   492,   145,   630,   153,   105,   105,   494,   494,   901,
     902,   157,   236,   156,   500,   869,   870,   426,   427,   108,
     910,   881,   381,   493,   159,   719,   162,   495,   434,   435,
     105,   493,   105,   928,   929,   101,   165,   420,   239,   494,
     904,   905,   655,   656,   240,   493,   282,   238,   287,   288,
     289,   294,   304,   305,   308,   882,   882,   654,   108,   108,
     657,   309,   341,   932,   310,   342,   344,   693,   343,   699,
     370,   371,   372,   373,   101,   101,   535,   374,   375,   377,
     390,   384,   387,   108,   535,   108,   405,    32,   407,   408,
     410,   418,   492,   445,   537,   -92,   449,   451,   535,   101,
     492,   101,   550,   552,   554,   562,   563,   500,   500,    33,
     566,   912,   913,  -497,   492,   719,   579,   580,   919,   920,
     495,   495,    34,   496,  -381,   598,   601,    36,   604,   605,
     494,   606,    37,   610,    38,    39,    40,    41,   494,   500,
     611,    42,   614,   381,   619,    43,   620,   236,   497,   388,
     623,   625,   495,   628,   626,   627,   396,    44,   632,   631,
      45,   633,    46,   634,   638,   640,   105,   105,   641,   750,
     105,   645,   648,   236,   700,   682,   646,   417,   817,   685,
     689,   688,   692,   702,   683,   635,   658,   636,   637,   726,
     730,   818,   706,   708,   734,   735,   742,   621,   732,   744,
     748,   736,   754,   789,   790,   759,   762,   792,   498,   758,
     763,   764,   780,   441,   761,   236,   496,   496,   770,   108,
     108,   771,   391,   108,   776,   779,   650,   783,   750,   794,
     500,   788,   800,   803,   807,   101,   101,   777,   500,   101,
     799,   497,   497,   495,   114,   812,   815,   821,   496,   823,
     827,   495,   837,   839,   798,   797,   755,   236,   541,   314,
     315,   316,   317,   318,   319,   320,   321,   723,   831,   322,
     323,   724,   843,   497,   851,   859,   499,   867,   560,   560,
     866,   871,   868,   493,   876,   877,   564,   888,   892,   885,
     896,   887,   494,   501,   897,   494,   494,   324,   869,   891,
     870,   498,   498,   494,   494,   105,   911,   914,   915,   916,
     917,   285,   918,   872,   874,   930,   931,   774,   158,   286,
     493,   561,   639,   553,   436,   556,   437,   440,   438,   894,
     439,   746,   691,   498,   895,   787,   535,   893,   924,   496,
     615,   494,   906,   898,   899,   768,   780,   496,   846,   612,
     861,   612,   492,   769,   120,   588,    27,   149,   108,    63,
     155,   243,   446,   450,   497,   795,   805,   802,    52,   499,
     499,   875,   497,   535,   101,   884,   873,   453,   168,   385,
     378,   279,     0,   900,   494,     0,   501,   501,     0,   492,
     494,     0,   500,     0,     0,   500,   500,     0,     0,     0,
       0,   499,     0,   500,   500,   495,     0,     0,   495,   495,
       0,     0,     0,     0,     0,     0,   495,   495,   501,     0,
       0,   494,     0,     0,   498,     0,     0,   494,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,   642,     0,
       0,   500,   494,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   495,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   494,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   642,     0,   703,   705,     0,
       0,   707,     0,     0,   500,     0,   714,   703,     0,     0,
     500,     0,   499,     0,     0,     0,     0,   495,     0,   541,
     499,   496,     0,   495,   496,   496,     0,   725,     0,   501,
       0,     0,   496,   496,     0,     0,     0,   501,     0,     0,
       0,   500,     0,     0,     0,   541,   497,   500,     0,   497,
     497,     0,     0,     0,   495,     0,     0,   497,   497,     0,
     495,     0,   500,     0,     0,  -301,     0,     0,     0,     0,
     496,     0,     0,     0,     0,   495,    32,     0,     0,     0,
       0,     0,     0,     0,   500,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   497,     0,   495,    33,     0,
       0,     0,     0,     0,     0,     0,   498,   775,     0,   498,
     498,    34,     0,   496,     0,    35,    36,   498,   498,   496,
       0,    37,   642,    38,    39,    40,    41,     0,     0,     0,
      42,     0,     0,     0,    43,     0,     0,     0,   497,     0,
       0,   703,     0,     0,   497,     0,    44,     0,     0,    45,
     496,    46,     0,     0,     0,   498,   496,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   496,     0,     0,   499,   497,     0,   499,   499,     0,
       0,   497,     0,     0,     0,   499,   499,     0,     0,     0,
       0,   501,     0,   496,   501,   501,   497,   703,   498,   850,
       0,     0,   501,   501,   498,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   497,     0,
       0,     0,     0,   499,     0,     0,     0,     0,     0,     0,
       0,   886,     0,     0,     0,   498,     0,     0,     0,   642,
     501,   498,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   499,     0,     0,     0,
       0,     0,   499,     0,     0,     0,     0,     0,   498,     0,
       0,     0,     0,   501,     0,     0,     0,     0,     0,   501,
       0,     0,     0,     0,     0,    56,     0,     0,   170,   171,
     172,   173,     0,   499,   174,    81,   659,    82,     0,   499,
      83,   175,     0,     0,     0,    84,     0,     0,     0,    85,
     501,     0,     0,     0,   499,   176,   501,     0,    86,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
      88,   501,   177,   178,    89,     0,   499,   660,     0,     0,
       0,     0,     0,     0,     0,    90,     0,    91,   179,   540,
       0,    92,     0,   501,   180,     0,   181,     0,   182,    93,
      94,   183,     0,    95,     0,     0,     0,     0,     0,   184,
       0,     0,     0,     0,   661,   662,     0,     0,   663,   664,
     665,   666,     0,     0,   667,   668,     0,   669,   670,   671,
     672,   673,   674,     0,     0,     0,     0,   675,   676,   677,
     678,   679,   680,   185,   186,     0,   187,     0,     0,   188,
     189,   190,     0,     0,   391,     0,     0,     0,   191,     0,
       0,   192,   469,     0,   721,   170,   171,   172,   173,     0,
       0,   174,    81,   470,    82,   852,     0,    83,   471,     0,
     472,   473,    84,   853,     0,   474,    85,   475,     0,     0,
       0,     0,   176,     0,   476,    86,   477,   478,   479,   480,
       0,     0,    87,     0,     0,     0,   481,    88,     0,   177,
     178,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   482,    90,     0,    91,   179,     0,     0,    92,     0,
     483,   180,   484,   181,   485,   182,    93,    94,   486,   487,
      95,   488,     0,   283,     0,   489,   184,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     185,   186,     0,   187,     0,     0,   188,   189,   190,     0,
     490,   381,     0,     0,     0,   191,   469,     0,   192,   170,
     171,   172,   173,     0,     0,   174,    81,   470,    82,     0,
       0,    83,   471,     0,   472,   473,    84,     0,     0,   474,
      85,   475,     0,     0,     0,     0,   176,     0,   476,    86,
     477,   478,   479,   480,     0,     0,    87,     0,     0,     0,
     481,    88,     0,   177,   178,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   482,    90,     0,    91,   179,
       0,     0,    92,     0,   483,   180,   484,   181,   485,   182,
      93,    94,   486,   487,    95,   488,     0,   283,     0,   489,
     184,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   185,   186,     0,   187,     0,     0,
     188,   189,   190,     0,   490,   381,     0,     0,     0,   191,
      56,     0,   192,   170,   171,   172,   173,     0,     0,   174,
      81,   470,    82,     0,     0,    83,   471,     0,     0,   473,
      84,     0,     0,   474,    85,   475,     0,     0,     0,     0,
     176,     0,   476,    86,   477,   478,   479,   480,     0,     0,
      87,     0,     0,     0,   481,    88,     0,   177,   178,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   482,
      90,     0,    91,   179,     0,     0,    92,     0,   483,   180,
     484,   181,   485,   182,    93,    94,   486,   487,    95,   488,
       0,     0,     0,   489,   184,     0,     0,     0,     0,     0,
      56,     0,     0,   170,   171,   172,   173,     0,     0,   174,
      81,     0,    82,     0,     0,    83,   175,     0,     0,     0,
      84,     0,     0,     0,    85,     0,     0,     0,   185,   186,
     176,   187,     0,    86,   188,   189,   190,     0,   490,   381,
      87,     0,     0,   191,     0,    88,   192,   177,   178,    89,
       0,   411,     0,     0,     0,     0,     0,     0,   412,     0,
      90,     0,    91,   179,     0,     0,    92,     0,     0,   180,
       0,   181,     0,   182,    93,    94,   183,     0,    95,     0,
       0,     0,    56,     0,   184,   170,   171,   172,   173,     0,
       0,   174,    81,     0,    82,     0,     0,    83,   175,     0,
       0,     0,    84,     0,     0,     0,    85,     0,     0,     0,
       0,     0,   176,     0,     0,    86,     0,     0,   185,   186,
       0,   187,    87,     0,   188,   189,   190,    88,     0,   177,
     178,    89,     0,   191,     0,     0,   192,     0,     0,     0,
       0,     0,    90,     0,    91,   179,   540,     0,    92,     0,
       0,   180,     0,   181,     0,   182,    93,    94,   183,     0,
      95,     0,     0,     0,     0,    56,   184,     0,   170,   171,
     172,   173,     0,     0,   174,    81,     0,    82,     0,     0,
      83,   175,     0,     0,     0,    84,     0,     0,     0,    85,
       0,     0,     0,     0,     0,   176,     0,     0,    86,     0,
     185,   186,     0,   187,     0,    87,   188,   189,   190,     0,
      88,   391,   177,   178,    89,   191,     0,     0,   192,     0,
       0,     0,     0,     0,     0,    90,     0,    91,   179,     0,
       0,    92,     0,     0,   180,     0,   181,     0,   182,    93,
      94,   183,     0,    95,     0,     0,   290,    56,     0,   184,
     170,   171,   172,   173,     0,     0,   174,    81,     0,    82,
       0,     0,    83,   175,     0,     0,     0,    84,     0,     0,
       0,    85,     0,     0,     0,     0,     0,   176,     0,     0,
      86,     0,     0,   185,   186,     0,   187,    87,     0,   188,
     189,   190,    88,     0,   177,   178,    89,     0,   191,     0,
       0,   192,     0,     0,     0,     0,     0,    90,     0,    91,
     179,     0,     0,    92,     0,     0,   180,     0,   181,     0,
     182,    93,    94,   183,     0,    95,     0,     0,     0,     0,
      56,   184,   555,   170,   171,   172,   173,     0,     0,   174,
      81,     0,    82,     0,     0,    83,   175,     0,     0,     0,
      84,     0,     0,     0,    85,     0,     0,     0,     0,     0,
     176,     0,     0,    86,     0,   185,   186,     0,   187,     0,
      87,   188,   189,   190,     0,    88,     0,   177,   178,    89,
     191,     0,     0,   192,     0,     0,     0,     0,     0,     0,
      90,     0,    91,   179,     0,     0,    92,     0,     0,   180,
       0,   181,     0,   182,    93,    94,   183,     0,    95,     0,
       0,   283,    56,     0,   184,   170,   171,   172,   173,     0,
       0,   174,    81,     0,    82,     0,     0,    83,   175,     0,
       0,     0,    84,     0,     0,     0,    85,     0,     0,     0,
       0,     0,   176,     0,     0,    86,     0,     0,   185,   186,
       0,   187,    87,     0,   188,   189,   190,    88,     0,   177,
     178,    89,     0,   191,     0,     0,   192,     0,     0,     0,
       0,     0,    90,     0,    91,   179,     0,     0,    92,     0,
       0,   180,     0,   181,     0,   182,    93,    94,   183,     0,
      95,     0,     0,     0,    56,     0,   184,   170,   171,   172,
     173,     0,     0,   174,    81,     0,    82,     0,     0,    83,
     175,     0,     0,     0,    84,     0,     0,     0,    85,     0,
       0,     0,     0,     0,   176,     0,     0,    86,     0,     0,
     185,   186,     0,   187,    87,     0,   188,   189,   190,    88,
       0,   177,   178,    89,     0,   191,     0,     0,   192,     0,
       0,     0,     0,     0,    90,     0,    91,   179,     0,     0,
      92,     0,     0,   180,     0,   181,     0,   182,    93,    94,
     183,     0,    95,   457,     0,     0,     0,     0,   184,     0,
       0,     0,     0,    81,     0,    82,     0,     0,    83,     0,
      58,   458,     0,    84,     0,    59,     0,    85,     0,    60,
     459,   460,     0,     0,     0,     0,    86,     0,     0,     0,
       0,   461,     0,    87,    61,     0,     0,     0,    88,     0,
     190,     0,    89,     0,     0,     0,     0,     0,     0,     0,
     192,     0,     0,    90,     0,    91,     0,     0,     0,    92,
      62,     0,     0,   457,     0,     0,     0,    93,    94,     0,
       0,    95,     0,    81,   462,    82,     0,     0,    83,     0,
      58,   458,     0,    84,     0,    59,     0,    85,     0,    60,
     459,   460,     0,     0,     0,     0,    86,     0,     0,     0,
       0,   461,     0,    87,    61,     0,     0,     0,    88,     0,
       0,     0,    89,     0,     0,     0,    56,     0,     0,   568,
       0,     0,     0,    90,     0,    91,    81,     0,    82,    92,
      62,    83,     0,     0,     0,     0,    84,    93,    94,     0,
      85,    95,     0,   454,   462,     0,     0,    56,     0,    86,
       0,     0,     0,     0,     0,     0,    87,    81,     0,    82,
       0,    88,    83,     0,     0,    89,     0,    84,     0,     0,
       0,    85,     0,     0,     0,     0,    90,     0,    91,     0,
      86,     0,    92,     0,     0,     0,     0,    87,     0,     0,
      93,    94,    88,     0,    95,     0,    89,   455,     0,     0,
      56,     0,     0,     0,     0,     0,     0,    90,     0,    91,
      81,     0,    82,    92,     0,    83,     0,     0,     0,     0,
      84,    93,    94,     0,    85,    95,     0,     0,    96,     0,
       0,    56,     0,    86,     0,     0,     0,     0,     0,     0,
      87,    81,     0,    82,     0,    88,    83,     0,     0,    89,
       0,    84,     0,     0,     0,    85,     0,     0,     0,     0,
      90,     0,    91,     0,    86,     0,    92,     0,     0,     0,
       0,    87,     0,     0,    93,    94,    88,     0,    95,     0,
      89,   283,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,    91,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    93,    94,     0,     0,    95,
       0,     0,   394
};

static const short int yycheck[] =
{
       1,   286,   605,     3,   269,    59,    73,   506,   608,   347,
      15,   620,   576,     3,   491,    15,   100,   779,   165,   574,
       4,   241,   184,   107,   108,     3,     3,   241,   264,     3,
       4,     0,   587,     3,    35,   137,   280,     4,   140,     4,
       4,   241,    59,     4,     4,    13,    88,    83,     4,     4,
       4,   389,   101,    54,     4,   102,   123,    88,    59,     4,
       4,   823,   306,   825,   826,     4,   798,   799,     4,   123,
     137,     4,    73,   140,    59,     4,   143,     4,   241,    88,
     292,    12,   646,   132,   241,   648,   102,    54,     4,    73,
     102,   102,   134,    53,   241,   827,   143,   241,   597,   241,
     241,   578,   133,   134,   348,    73,    73,   839,     0,   134,
      70,   142,    73,   125,    88,   351,    47,   142,   134,   682,
     120,   685,   123,   177,   133,   688,   474,   475,   102,   276,
     184,     3,   143,   102,   354,   735,   137,   239,   103,   140,
     354,   125,   143,   133,   149,   754,   390,   125,   125,   149,
      88,   125,   914,   915,   354,   125,   759,   134,   125,   159,
     177,   125,   162,    88,   134,   165,   730,   329,   330,   125,
     125,   125,   239,   240,   102,   125,   177,    88,   742,   132,
     125,   125,   102,   184,   916,   397,   125,   118,   119,   125,
       4,   354,   177,    89,   406,   133,   125,   354,   125,   184,
     465,   810,   286,   468,   135,   136,   471,   354,   133,   125,
     354,   295,   354,   354,   125,    11,    88,   102,   102,   154,
     485,   486,   487,   143,    88,   160,   102,   782,   163,   125,
     102,   166,    89,   287,   288,    88,    31,    33,   239,   240,
      17,   241,    21,   102,   101,     4,    89,    26,    25,   134,
      46,    30,   852,   102,    50,    51,   632,   257,   101,   143,
      56,   125,    58,    59,    60,    61,    45,   143,    63,    65,
     287,   288,   125,    69,    89,   132,   276,   102,   102,   333,
     334,    89,   658,   101,   143,    81,   287,   288,    84,   132,
      86,   121,    71,   101,   143,    90,    91,    92,    93,    94,
      95,    96,   287,   288,    18,   134,   909,    89,   243,     5,
     125,   141,   102,   367,   132,   369,   333,   334,    89,   143,
     102,    35,   376,    16,   132,   379,    19,   381,   883,   884,
     101,   134,   333,   334,    89,   102,   128,   129,   185,   186,
     187,   188,   189,   190,   191,   192,   101,   133,   333,   334,
     367,    44,   369,   143,   354,    89,    49,   131,   102,   376,
     102,   132,   379,   112,   113,   102,   367,   101,   369,   102,
       4,    64,   101,    66,   374,   376,   143,   132,   379,    88,
     381,     4,   367,   605,   369,    78,    79,   132,   133,    82,
     444,   376,     4,   102,   379,   894,   381,   619,   132,   143,
     454,   143,   132,   132,   458,   459,   143,     4,   131,    89,
     143,   134,    89,   132,   762,   763,   116,   117,   472,   131,
      17,   101,   770,   771,   101,   132,   133,   444,    25,    55,
     101,    57,   103,   718,   381,     4,    62,   454,   122,   123,
     124,   458,   459,   444,   709,   710,   335,   336,   337,   338,
       4,   535,   506,   454,   101,   472,   103,   458,   459,   444,
     808,   125,   463,   125,   126,   127,   125,   126,   127,   454,
     101,   472,   103,   458,   459,     3,   101,     4,   103,   326,
     327,   328,   329,   330,   331,   332,   540,   472,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   101,
     101,   103,   103,   851,   131,   506,   101,   101,   103,   103,
     131,   776,   132,   133,   132,   133,    97,    98,    97,    98,
     131,   506,    88,   540,   133,   579,   580,   474,   475,   867,
     868,    88,   145,   125,   381,    99,   100,   331,   332,   540,
     888,   132,   133,   597,   133,   629,   133,   381,   339,   340,
     604,   605,   606,   919,   920,   540,   133,   404,   101,   506,
     870,   871,   579,   580,   101,   619,    88,   143,    88,    88,
      88,   184,   134,   134,    88,   840,   841,   578,   579,   580,
     581,    89,   137,   931,   101,   138,   120,   604,   139,   606,
      89,   101,     4,   143,   579,   580,   597,   101,    51,   143,
     102,   143,     4,   604,   605,   606,    89,    11,     4,     4,
       4,     4,   597,   143,    89,    89,   132,   142,   619,   604,
     605,   606,    89,    89,    89,   101,    89,   474,   475,    33,
      89,   896,   897,     4,   619,   719,    54,    54,   903,   904,
     474,   475,    46,   381,     4,   132,   132,    51,    88,    88,
     597,    88,    56,    88,    58,    59,    60,    61,   605,   506,
      88,    65,    88,   133,    88,    69,    88,   280,   381,   282,
     143,   132,   506,    89,   132,   132,   289,    81,   101,   143,
      84,    89,    86,    89,    89,   131,   740,   741,     4,   689,
     744,     4,   102,   306,   132,   102,    88,   310,   765,    88,
     133,   102,    87,   132,   101,   552,   142,   554,   555,    88,
      88,   765,   132,   132,    89,   142,    88,     4,   133,    88,
     133,   101,    88,   740,   741,   101,    89,   744,   381,   132,
      89,    89,   732,   346,   132,   348,   474,   475,    89,   740,
     741,    89,   133,   744,    89,    89,     4,   131,   748,    89,
     597,   133,   752,   753,   142,   740,   741,   143,   605,   744,
     143,   474,   475,   597,   765,    43,   133,   103,   506,    89,
     143,   605,    89,   143,    98,    97,     4,   390,   391,   104,
     105,   106,   107,   108,   109,   110,   111,   634,   788,   114,
     115,   638,    89,   506,    29,     4,   381,    88,   411,   412,
     133,   143,    88,   857,    89,    89,   419,    89,   143,   132,
      89,   132,   759,   381,    89,   762,   763,   142,    99,   131,
     100,   474,   475,   770,   771,   879,   131,    98,    97,   143,
      89,   177,    89,   833,   834,    89,    89,   719,   134,   177,
     894,   412,   562,   401,   341,   405,   342,   345,   343,   857,
     344,   683,   600,   506,   857,   736,   857,   855,   909,   597,
     484,   808,   879,   863,   864,   711,   866,   605,   809,   482,
     818,   484,   857,   711,    77,   463,     4,   120,   879,    48,
     126,   155,   354,   371,   597,   748,   753,   752,    24,   474,
     475,   834,   605,   894,   879,   841,   833,   374,   143,   276,
     257,   167,    -1,   866,   851,    -1,   474,   475,    -1,   894,
     857,    -1,   759,    -1,    -1,   762,   763,    -1,    -1,    -1,
      -1,   506,    -1,   770,   771,   759,    -1,    -1,   762,   763,
      -1,    -1,    -1,    -1,    -1,    -1,   770,   771,   506,    -1,
      -1,   888,    -1,    -1,   597,    -1,    -1,   894,    -1,    -1,
      -1,    -1,   605,    -1,    -1,    -1,    -1,    -1,   571,    -1,
      -1,   808,   909,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   808,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   931,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   608,    -1,   610,   611,    -1,
      -1,   614,    -1,    -1,   851,    -1,   619,   620,    -1,    -1,
     857,    -1,   597,    -1,    -1,    -1,    -1,   851,    -1,   632,
     605,   759,    -1,   857,   762,   763,    -1,   640,    -1,   597,
      -1,    -1,   770,   771,    -1,    -1,    -1,   605,    -1,    -1,
      -1,   888,    -1,    -1,    -1,   658,   759,   894,    -1,   762,
     763,    -1,    -1,    -1,   888,    -1,    -1,   770,   771,    -1,
     894,    -1,   909,    -1,    -1,     0,    -1,    -1,    -1,    -1,
     808,    -1,    -1,    -1,    -1,   909,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   931,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   808,    -1,   931,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   759,   720,    -1,   762,
     763,    46,    -1,   851,    -1,    50,    51,   770,   771,   857,
      -1,    56,   735,    58,    59,    60,    61,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    69,    -1,    -1,    -1,   851,    -1,
      -1,   754,    -1,    -1,   857,    -1,    81,    -1,    -1,    84,
     888,    86,    -1,    -1,    -1,   808,   894,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   909,    -1,    -1,   759,   888,    -1,   762,   763,    -1,
      -1,   894,    -1,    -1,    -1,   770,   771,    -1,    -1,    -1,
      -1,   759,    -1,   931,   762,   763,   909,   810,   851,   812,
      -1,    -1,   770,   771,   857,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   931,    -1,
      -1,    -1,    -1,   808,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   844,    -1,    -1,    -1,   888,    -1,    -1,    -1,   852,
     808,   894,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   909,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   851,    -1,    -1,    -1,
      -1,    -1,   857,    -1,    -1,    -1,    -1,    -1,   931,    -1,
      -1,    -1,    -1,   851,    -1,    -1,    -1,    -1,    -1,   857,
      -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    -1,   888,    13,    14,    34,    16,    -1,   894,
      19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,
     888,    -1,    -1,    -1,   909,    34,   894,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,   909,    51,    52,    53,    -1,   931,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    67,    68,
      -1,    70,    -1,   931,    73,    -1,    75,    -1,    77,    78,
      79,    80,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,   116,   117,
     118,   119,    -1,    -1,   122,   123,    -1,   125,   126,   127,
     128,   129,   130,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,   140,   122,   123,    -1,   125,    -1,    -1,   128,
     129,   130,    -1,    -1,   133,    -1,    -1,    -1,   137,    -1,
      -1,   140,     4,    -1,   143,     7,     8,     9,    10,    -1,
      -1,    13,    14,    15,    16,    17,    -1,    19,    20,    -1,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    66,    67,    -1,    -1,    70,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    85,    -1,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,    -1,   125,    -1,    -1,   128,   129,   130,    -1,
     132,   133,    -1,    -1,    -1,   137,     4,    -1,   140,     7,
       8,     9,    10,    -1,    -1,    13,    14,    15,    16,    -1,
      -1,    19,    20,    -1,    22,    23,    24,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    66,    67,
      -1,    -1,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    85,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,    -1,   125,    -1,    -1,
     128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,   137,
       4,    -1,   140,     7,     8,     9,    10,    -1,    -1,    13,
      14,    15,    16,    -1,    -1,    19,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    -1,    -1,
      44,    -1,    -1,    -1,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    66,    67,    -1,    -1,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    -1,    -1,    13,
      14,    -1,    16,    -1,    -1,    19,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    28,    -1,    -1,    -1,   122,   123,
      34,   125,    -1,    37,   128,   129,   130,    -1,   132,   133,
      44,    -1,    -1,   137,    -1,    49,   140,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      -1,    75,    -1,    77,    78,    79,    80,    -1,    82,    -1,
      -1,    -1,     4,    -1,    88,     7,     8,     9,    10,    -1,
      -1,    13,    14,    -1,    16,    -1,    -1,    19,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    37,    -1,    -1,   122,   123,
      -1,   125,    44,    -1,   128,   129,   130,    49,    -1,    51,
      52,    53,    -1,   137,    -1,    -1,   140,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    66,    67,    68,    -1,    70,    -1,
      -1,    73,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      82,    -1,    -1,    -1,    -1,     4,    88,    -1,     7,     8,
       9,    10,    -1,    -1,    13,    14,    -1,    16,    -1,    -1,
      19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
     122,   123,    -1,   125,    -1,    44,   128,   129,   130,    -1,
      49,   133,    51,    52,    53,   137,    -1,    -1,   140,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    67,    -1,
      -1,    70,    -1,    -1,    73,    -1,    75,    -1,    77,    78,
      79,    80,    -1,    82,    -1,    -1,    85,     4,    -1,    88,
       7,     8,     9,    10,    -1,    -1,    13,    14,    -1,    16,
      -1,    -1,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    -1,   122,   123,    -1,   125,    44,    -1,   128,
     129,   130,    49,    -1,    51,    52,    53,    -1,   137,    -1,
      -1,   140,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,
      67,    -1,    -1,    70,    -1,    -1,    73,    -1,    75,    -1,
      77,    78,    79,    80,    -1,    82,    -1,    -1,    -1,    -1,
       4,    88,    89,     7,     8,     9,    10,    -1,    -1,    13,
      14,    -1,    16,    -1,    -1,    19,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,    -1,   122,   123,    -1,   125,    -1,
      44,   128,   129,   130,    -1,    49,    -1,    51,    52,    53,
     137,    -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      -1,    75,    -1,    77,    78,    79,    80,    -1,    82,    -1,
      -1,    85,     4,    -1,    88,     7,     8,     9,    10,    -1,
      -1,    13,    14,    -1,    16,    -1,    -1,    19,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    37,    -1,    -1,   122,   123,
      -1,   125,    44,    -1,   128,   129,   130,    49,    -1,    51,
      52,    53,    -1,   137,    -1,    -1,   140,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    66,    67,    -1,    -1,    70,    -1,
      -1,    73,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      82,    -1,    -1,    -1,     4,    -1,    88,     7,     8,     9,
      10,    -1,    -1,    13,    14,    -1,    16,    -1,    -1,    19,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,
     122,   123,    -1,   125,    44,    -1,   128,   129,   130,    49,
      -1,    51,    52,    53,    -1,   137,    -1,    -1,   140,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    66,    67,    -1,    -1,
      70,    -1,    -1,    73,    -1,    75,    -1,    77,    78,    79,
      80,    -1,    82,     4,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    19,    -1,
      21,    22,    -1,    24,    -1,    26,    -1,    28,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
     130,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,    -1,    -1,    64,    -1,    66,    -1,    -1,    -1,    70,
      71,    -1,    -1,     4,    -1,    -1,    -1,    78,    79,    -1,
      -1,    82,    -1,    14,    85,    16,    -1,    -1,    19,    -1,
      21,    22,    -1,    24,    -1,    26,    -1,    28,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    53,    -1,    -1,    -1,     4,    -1,    -1,   130,
      -1,    -1,    -1,    64,    -1,    66,    14,    -1,    16,    70,
      71,    19,    -1,    -1,    -1,    -1,    24,    78,    79,    -1,
      28,    82,    -1,    31,    85,    -1,    -1,     4,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    14,    -1,    16,
      -1,    49,    19,    -1,    -1,    53,    -1,    24,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    64,    -1,    66,    -1,
      37,    -1,    70,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      78,    79,    49,    -1,    82,    -1,    53,    85,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,
      14,    -1,    16,    70,    -1,    19,    -1,    -1,    -1,    -1,
      24,    78,    79,    -1,    28,    82,    -1,    -1,    85,    -1,
      -1,     4,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    14,    -1,    16,    -1,    49,    19,    -1,    -1,    53,
      -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      64,    -1,    66,    -1,    37,    -1,    70,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    78,    79,    49,    -1,    82,    -1,
      53,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    82,
      -1,    -1,    85
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,    83,   281,   282,   290,   291,   292,   294,     4,   148,
     287,   288,     0,   283,   285,   295,   296,   297,   301,   350,
     360,   375,   383,   384,   385,   386,   395,   291,   134,   142,
     132,     4,    11,    33,    46,    50,    51,    56,    58,    59,
      60,    61,    65,    69,    81,    84,    86,   298,   299,   300,
     283,   296,   386,   102,   293,   134,     4,   287,    21,    26,
      30,    45,    71,   300,    31,    63,    90,    91,    92,    93,
      94,    95,    96,   387,   388,   389,   287,   133,   289,     5,
     302,    14,    16,    19,    24,    28,    37,    44,    49,    53,
      64,    66,    70,    78,    79,    82,    85,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   160,   287,   317,
       4,     4,     4,   149,   287,   390,   391,   393,   131,   132,
     282,   132,   286,   131,   303,   304,     4,   159,   125,     3,
     162,   162,   162,     4,   131,   376,   377,   131,   361,   362,
     131,   351,   352,   101,   103,    88,   392,   394,   284,   295,
     149,   157,   305,   133,   306,   303,   125,    88,   155,   133,
     378,   305,   133,   363,   305,   133,   353,   103,   391,   396,
       7,     8,     9,    10,    13,    20,    34,    51,    52,    67,
      73,    75,    77,    80,    88,   122,   123,   125,   128,   129,
     130,   137,   140,   146,   147,   153,   157,   166,   167,   168,
     169,   170,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   183,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   212,   215,   287,   143,   101,
     101,   307,   286,   306,   283,   316,   319,   320,   321,   323,
     283,   379,   380,   381,   286,   283,   364,   365,   366,   367,
     370,   371,   373,   286,   283,   297,   311,   312,   313,   314,
     324,   331,   335,   338,   343,   354,   355,   356,   286,   396,
     102,   134,    88,    85,   150,   151,   160,    88,    88,    88,
      85,   153,   157,   200,   215,   287,   194,   194,   194,   194,
     194,   194,   194,   194,   134,   134,   102,   134,    88,    89,
     101,   122,   123,   124,   104,   105,   106,   107,   108,   109,
     110,   111,   114,   115,   142,   214,   125,   126,   127,   128,
     129,   112,   113,    12,    47,   118,   119,   135,   136,   116,
     117,   137,   138,   139,   120,   121,   141,    88,   102,   305,
     149,   283,   297,   308,   309,   310,   311,   312,   313,   324,
     331,   335,   338,   343,   347,   286,    55,    57,    62,   322,
      89,   101,     4,   143,   101,    51,   369,   143,   366,   298,
     132,   133,   220,   318,   143,   356,   174,     4,   215,    88,
     102,   133,   357,   150,    85,   150,   215,   196,   125,   162,
     197,   198,   199,   197,   125,    89,   162,     4,     4,   174,
       4,    55,    62,   164,   165,   171,   215,   215,     4,   213,
     194,   194,   194,   194,   200,   200,   201,   201,   150,   150,
     202,   202,   202,   202,   203,   203,   204,   205,   206,   207,
     208,   215,   171,   174,   298,   143,   310,   150,   150,   132,
     320,   142,   143,   381,    31,    85,   150,     4,    22,    31,
      32,    42,    85,   150,   336,   339,   340,   342,   344,     4,
      15,    20,    22,    23,    27,    29,    36,    38,    39,    40,
      41,    48,    63,    72,    74,    76,    80,    81,    83,    87,
     132,   150,   153,   157,   170,   177,   178,   180,   192,   193,
     194,   212,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   231,   234,   235,   236,   237,   238,   245,   246,   247,
     248,   249,   259,   260,   261,   262,   263,   264,   266,   267,
     272,   273,   274,   275,   277,   287,   103,    89,   171,   174,
      68,   215,   229,   230,   357,   358,   359,    89,   184,    89,
      89,   197,    89,   199,    89,    89,   191,   197,   103,   163,
     215,   163,   101,    89,   215,   211,    89,   103,   130,     4,
       4,   382,   150,   368,     4,    73,    88,   150,   150,    54,
      54,   315,     4,    54,    73,   227,   228,   287,   288,   337,
     399,   132,   220,   348,   132,   220,   349,   131,   132,   220,
     150,   132,   219,   219,    88,    88,    88,     4,    17,    25,
      88,    88,   215,   265,    88,   265,   220,   220,   220,    88,
      88,     4,   227,   143,   218,   132,   132,   132,    89,   103,
     150,   143,   101,    89,    89,   194,   194,   194,    89,   165,
     131,     4,   215,   216,     4,     4,    88,   399,   102,   316,
       4,   232,   233,   227,   287,   150,   150,   287,   142,    34,
      75,   112,   113,   116,   117,   118,   119,   122,   123,   125,
     126,   127,   128,   129,   130,   135,   136,   137,   138,   139,
     140,   341,   102,   101,   132,    88,   399,    73,   102,   133,
     218,   232,    87,   150,   226,   235,   252,   255,   258,   150,
     132,   216,   132,   215,   217,   215,   132,   215,   132,    18,
      35,   268,   269,   271,   215,   226,   276,   217,   161,   162,
     102,   143,   229,   194,   194,   215,    88,   132,   133,   374,
      88,   316,   133,   319,    89,   142,   101,   132,   132,   397,
      88,    88,    88,   229,    88,   319,   228,   316,   133,   319,
     283,   325,   328,   329,    88,     4,   278,   279,   132,   101,
       4,   132,    89,    89,    89,    88,   220,   220,   269,   271,
      89,    89,   182,   357,   161,   215,    89,   143,   316,    89,
     283,   372,   103,   131,   345,   346,   216,   233,   133,   150,
     150,   316,   150,   103,    89,   325,   103,    97,    98,   143,
     283,   326,   329,   283,   327,   328,   217,   142,    89,   101,
     250,   235,    43,   219,   219,   133,   239,   149,   157,   219,
     219,   103,   220,    89,   374,    97,    98,   143,   399,    13,
      73,   283,   332,   333,   334,     4,     4,    89,     4,   143,
     400,   400,   400,    89,   280,   219,   279,   217,   253,   256,
     215,    29,    17,    25,   240,   241,   242,   243,   244,     4,
     270,   270,   374,   374,   374,   400,   133,    88,    88,    99,
     100,   143,   283,   334,   283,   333,    89,    89,    89,   101,
     400,   132,   220,   330,   330,   132,   215,   132,    89,   219,
     216,   131,   143,   242,   222,   244,    89,    89,   283,   283,
     372,   171,   171,   398,   398,   398,   150,   399,   399,   251,
     219,   131,   220,   220,    98,    97,   143,    89,    89,   220,
     220,     4,   254,   257,   258,   374,   374,   400,   397,   397,
      89,    89,   219
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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
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
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
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
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
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

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
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

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

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

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
        case 12:
#line 122 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"ggG" << endl;;}
    break;

  case 13:
#line 123 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"fff" << endl;;}
    break;

  case 21:
#line 139 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"hhh" << endl;;}
    break;

  case 28:
#line 144 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::int" << endl;;}
    break;

  case 38:
#line 154 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc:void3"<<endl;;}
    break;

  case 92:
#line 257 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc:void4"<<endl;;}
    break;

  case 122:
#line 313 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc:void5"<<endl;;}
    break;

  case 161:
#line 379 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::7"<<endl;;}
    break;

  case 162:
#line 379 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::6"<<endl;;}
    break;

  case 163:
#line 382 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::1"<<endl;;}
    break;

  case 164:
#line 382 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::5"<<endl;;}
    break;

  case 165:
#line 385 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::equal4" << endl;;}
    break;

  case 180:
#line 400 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::labeled_statement" << endl;;}
    break;

  case 181:
#line 401 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::declaration_statement" << endl;;}
    break;

  case 182:
#line 402 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::embedded_statement" << endl;;}
    break;

  case 201:
#line 432 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon21"<<endl;;}
    break;

  case 203:
#line 438 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon22"<<endl;;}
    break;

  case 204:
#line 439 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon23"<<endl;;}
    break;

  case 214:
#line 461 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::10"<<endl;;}
    break;

  case 215:
#line 464 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::9"<<endl;;}
    break;

  case 218:
#line 471 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon24"<<endl;;}
    break;

  case 221:
#line 476 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::*1"<<endl;;}
    break;

  case 230:
#line 490 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    { error->errQ->enqueue((yyvsp[-1].r.myLineNo) , (yyvsp[-1].r.myColno) , "Error:you should add if "," "); error->printErrQueue(); exit(1); ;}
    break;

  case 248:
#line 530 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon25"<<endl;;}
    break;

  case 249:
#line 533 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon26"<<endl;;}
    break;

  case 250:
#line 533 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon27"<<endl;;}
    break;

  case 270:
#line 572 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon1"<<endl;;}
    break;

  case 271:
#line 575 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon2"<<endl;;}
    break;

  case 272:
#line 578 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon3"<<endl;;}
    break;

  case 273:
#line 579 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon4"<<endl;;}
    break;

  case 274:
#line 580 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon5"<<endl;;}
    break;

  case 275:
#line 583 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon6"<<endl;;}
    break;

  case 278:
#line 590 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon7"<<endl;;}
    break;

  case 299:
#line 638 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::equal1" << endl;;}
    break;

  case 301:
#line 641 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Empty"<<endl;;}
    break;

  case 302:
#line 642 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::start"<<endl;;}
    break;

  case 311:
#line 661 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon8"<<endl;;}
    break;

  case 321:
#line 689 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::equal2" << endl;;}
    break;

  case 322:
#line 689 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon9"<<endl;;}
    break;

  case 323:
#line 692 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon10"<<endl;;}
    break;

  case 351:
#line 743 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    { cout<<"Yacc::Class"<<endl;;}
    break;

  case 353:
#line 746 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    { error->errQ->enqueue((yyvsp[-3].r.myLineNo) , (yyvsp[-3].r.myColno) , "Error:Name Error"," "); error->printErrQueue(); exit(1); ;}
    break;

  case 361:
#line 762 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"---"<<endl;;}
    break;

  case 362:
#line 762 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"---"<<endl;;}
    break;

  case 377:
#line 786 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon11"<<endl;;}
    break;

  case 378:
#line 789 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon12"<<endl;;}
    break;

  case 381:
#line 797 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc:void6"<<endl;;}
    break;

  case 386:
#line 805 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc:void1"<<endl;;}
    break;

  case 388:
#line 809 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon13"<<endl;;}
    break;

  case 408:
#line 863 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon14"<<endl;;}
    break;

  case 409:
#line 866 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon15"<<endl;;}
    break;

  case 456:
#line 956 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon16"<<endl;;}
    break;

  case 458:
#line 960 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon17"<<endl;;}
    break;

  case 497:
#line 1043 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc:void2"<<endl;;}
    break;

  case 508:
#line 1075 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon18"<<endl;;}
    break;

  case 521:
#line 1104 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::equal3" << endl;;}
    break;

  case 523:
#line 1109 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon19"<<endl;;}
    break;

  case 548:
#line 1164 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {;}
    break;

  case 549:
#line 1167 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {;}
    break;

  case 550:
#line 1170 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {;}
    break;

  case 551:
#line 1173 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {;}
    break;

  case 552:
#line 1176 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {;}
    break;

  case 553:
#line 1179 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3092 "yacc.cpp"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
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
	  int yychecklim = YYLAST - yyn;
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
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
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
	  yydestruct ("Error: discarding", yytoken, &yylval);
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
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1182 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"




void yyerror(char *s) 
{
	;
}

int yylex()
{
	return lexer->yylex();
}
void main(void)
{
	yydebug = 1;
	freopen("code.cs","r",stdin);
   	freopen("out.txt","w",stdout);
	Parser* p = new Parser();
	p->parse();
}

