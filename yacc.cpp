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
     INTEGER_LITERAL = 260,
     REAL_LITERAL = 261,
     CHARACTER_LITERAL = 262,
     STRING_LITERAL = 263,
     ABSTRACT = 264,
     AS = 265,
     BASE = 266,
     BOOL = 267,
     BREAK = 268,
     BYTE = 269,
     CASE = 270,
     CATCH = 271,
     CHAR = 272,
     CHECKED = 273,
     CLASS = 274,
     CONST = 275,
     CONTINUE = 276,
     DECIMAL = 277,
     DEFAULT = 278,
     DELEGATE = 279,
     DO = 280,
     DOUBLE = 281,
     ELSE = 282,
     ENUM = 283,
     EVENT = 284,
     EXPLICIT = 285,
     EXTERN = 286,
     FALSE = 287,
     FINALLY = 288,
     FIXED = 289,
     FLOAT = 290,
     FOR = 291,
     FOREACH = 292,
     GOTO = 293,
     IF = 294,
     IMPLICIT = 295,
     IN = 296,
     INT = 297,
     INTERFACE = 298,
     INTERNAL = 299,
     IS = 300,
     LOCK = 301,
     LONG = 302,
     NAMESPACE = 303,
     NEW = 304,
     NULL_LITERAL = 305,
     OBJECT = 306,
     OPERATOR = 307,
     OUT = 308,
     OVERRIDE = 309,
     PARAMS = 310,
     PRIVATE = 311,
     PROTECTED = 312,
     PUBLIC = 313,
     READONLY = 314,
     REF = 315,
     RETURN = 316,
     SBYTE = 317,
     SEALED = 318,
     SHORT = 319,
     SIZEOF = 320,
     STACKALLOC = 321,
     STATIC = 322,
     STRING = 323,
     STRUCT = 324,
     SWITCH = 325,
     THIS = 326,
     THROW = 327,
     TRUE = 328,
     TRY = 329,
     TYPEOF = 330,
     UINT = 331,
     ULONG = 332,
     UNCHECKED = 333,
     UNSAFE = 334,
     USHORT = 335,
     USING = 336,
     VIRTUAL = 337,
     VOID = 338,
     VOLATILE = 339,
     WHILE = 340,
     OpenBracket = 341,
     CloseBracket = 342,
     ASSEMBLY = 343,
     FIELD = 344,
     METHOD = 345,
     MODULE = 346,
     PARAM = 347,
     PROPERTY = 348,
     TYPE = 349,
     GET = 350,
     SET = 351,
     ADD = 352,
     REMOVE = 353,
     COMMA = 354,
     LEFT_BRACKET = 355,
     RIGHT_BRACKET = 356,
     PLUSEQ = 357,
     MINUSEQ = 358,
     STAREQ = 359,
     DIVEQ = 360,
     MODEQ = 361,
     XOREQ = 362,
     ANDEQ = 363,
     OREQ = 364,
     LTLT = 365,
     GTGT = 366,
     GTGTEQ = 367,
     LTLTEQ = 368,
     EQEQ = 369,
     NOTEQ = 370,
     LEQ = 371,
     GEQ = 372,
     ANDAND = 373,
     OROR = 374,
     PLUSPLUS = 375,
     MINUSMINUS = 376,
     ARROW = 377,
     Multiple_N1 = 378,
     PercenSign = 379,
     Division = 380,
     Dash = 381,
     Plus_S = 382,
     Maddeh = 383,
     Colon = 384,
     Semicolon = 385,
     OpenBracket_T1 = 386,
     Dot = 387,
     Less = 388,
     Greater = 389,
     And = 390,
     Shapo = 391,
     Vertical_Mark = 392,
     Ta3ajob = 393,
     Quest_Mark = 394,
     Equal = 395,
     CloseBracket_T1 = 396
   };
#endif
/* Tokens.  */
#define RANK_SPECIFIER 258
#define IDENTIFIER 259
#define INTEGER_LITERAL 260
#define REAL_LITERAL 261
#define CHARACTER_LITERAL 262
#define STRING_LITERAL 263
#define ABSTRACT 264
#define AS 265
#define BASE 266
#define BOOL 267
#define BREAK 268
#define BYTE 269
#define CASE 270
#define CATCH 271
#define CHAR 272
#define CHECKED 273
#define CLASS 274
#define CONST 275
#define CONTINUE 276
#define DECIMAL 277
#define DEFAULT 278
#define DELEGATE 279
#define DO 280
#define DOUBLE 281
#define ELSE 282
#define ENUM 283
#define EVENT 284
#define EXPLICIT 285
#define EXTERN 286
#define FALSE 287
#define FINALLY 288
#define FIXED 289
#define FLOAT 290
#define FOR 291
#define FOREACH 292
#define GOTO 293
#define IF 294
#define IMPLICIT 295
#define IN 296
#define INT 297
#define INTERFACE 298
#define INTERNAL 299
#define IS 300
#define LOCK 301
#define LONG 302
#define NAMESPACE 303
#define NEW 304
#define NULL_LITERAL 305
#define OBJECT 306
#define OPERATOR 307
#define OUT 308
#define OVERRIDE 309
#define PARAMS 310
#define PRIVATE 311
#define PROTECTED 312
#define PUBLIC 313
#define READONLY 314
#define REF 315
#define RETURN 316
#define SBYTE 317
#define SEALED 318
#define SHORT 319
#define SIZEOF 320
#define STACKALLOC 321
#define STATIC 322
#define STRING 323
#define STRUCT 324
#define SWITCH 325
#define THIS 326
#define THROW 327
#define TRUE 328
#define TRY 329
#define TYPEOF 330
#define UINT 331
#define ULONG 332
#define UNCHECKED 333
#define UNSAFE 334
#define USHORT 335
#define USING 336
#define VIRTUAL 337
#define VOID 338
#define VOLATILE 339
#define WHILE 340
#define OpenBracket 341
#define CloseBracket 342
#define ASSEMBLY 343
#define FIELD 344
#define METHOD 345
#define MODULE 346
#define PARAM 347
#define PROPERTY 348
#define TYPE 349
#define GET 350
#define SET 351
#define ADD 352
#define REMOVE 353
#define COMMA 354
#define LEFT_BRACKET 355
#define RIGHT_BRACKET 356
#define PLUSEQ 357
#define MINUSEQ 358
#define STAREQ 359
#define DIVEQ 360
#define MODEQ 361
#define XOREQ 362
#define ANDEQ 363
#define OREQ 364
#define LTLT 365
#define GTGT 366
#define GTGTEQ 367
#define LTLTEQ 368
#define EQEQ 369
#define NOTEQ 370
#define LEQ 371
#define GEQ 372
#define ANDAND 373
#define OROR 374
#define PLUSPLUS 375
#define MINUSMINUS 376
#define ARROW 377
#define Multiple_N1 378
#define PercenSign 379
#define Division 380
#define Dash 381
#define Plus_S 382
#define Maddeh 383
#define Colon 384
#define Semicolon 385
#define OpenBracket_T1 386
#define Dot 387
#define Less 388
#define Greater 389
#define And 390
#define Shapo 391
#define Vertical_Mark 392
#define Ta3ajob 393
#define Quest_Mark 394
#define Equal 395
#define CloseBracket_T1 396




/* Copy the first part of user declarations.  */
#line 2 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"

	#include <iostream>
	#include <fstream>
	#define _CRT_SECURE_NO_WARNINGS
	#define YYDEBUG 1
	using namespace std;
	#include <FlexLexer.h>
	int yylex(void);
	int yyparse();
	void yyerror(char *);
	
	FlexLexer* lexer = new yyFlexLexer();
	
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
#line 75 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
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
#line 402 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 414 "yacc.cpp"

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
#define YYLAST   2595

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  142
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  256
/* YYNRULES -- Number of rules. */
#define YYNRULES  551
/* YYNRULES -- Number of states. */
#define YYNSTATES  927

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   396

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
     135,   136,   137,   138,   139,   140,   141
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
     633,   639,   643,   644,   646,   648,   651,   654,   656,   659,
     663,   666,   668,   670,   672,   674,   677,   683,   691,   692,
     693,   705,   706,   708,   709,   711,   712,   714,   716,   718,
     720,   722,   724,   728,   737,   739,   741,   743,   745,   747,
     750,   753,   757,   762,   766,   770,   771,   773,   777,   781,
     785,   790,   792,   795,   802,   809,   812,   813,   815,   818,
     821,   824,   830,   836,   838,   840,   847,   849,   853,   854,
     859,   862,   865,   866,   868,   869,   871,   872,   874,   880,
     881,   883,   885,   888,   891,   895,   900,   902,   905,   907,
     909,   910,   917,   921,   923,   926,   928,   930,   932,   934,
     936,   938,   940,   941,   943,   945,   948,   950,   952,   954,
     956,   958,   960,   962,   964,   966,   968,   970,   972,   974,
     976,   977,   986,   987,   989,   992,   995,  1000,  1002,  1006,
    1007,  1012,  1013,  1015,  1017,  1020,  1022,  1024,  1026,  1028,
    1030,  1032,  1034,  1036,  1038,  1040,  1047,  1053,  1056,  1064,
    1065,  1074,  1075,  1077,  1079,  1081,  1083,  1085,  1087,  1091,
    1093,  1095,  1100,  1101,  1103,  1105,  1110,  1120,  1123,  1126,
    1127,  1129,  1130,  1132,  1138,  1144,  1146,  1148,  1155,  1166,
    1169,  1172,  1178,  1184,  1193,  1199,  1205,  1208,  1213,  1215,
    1217,  1225,  1236,  1238,  1240,  1242,  1244,  1246,  1248,  1250,
    1252,  1254,  1256,  1258,  1260,  1262,  1264,  1266,  1268,  1270,
    1272,  1274,  1276,  1278,  1280,  1288,  1296,  1301,  1307,  1308,
    1310,  1316,  1322,  1330,  1332,  1334,  1336,  1338,  1346,  1347,
    1349,  1352,  1356,  1357,  1359,  1361,  1364,  1366,  1368,  1370,
    1372,  1374,  1376,  1378,  1380,  1382,  1386,  1391,  1392,  1394,
    1396,  1400,  1408,  1409,  1411,  1414,  1418,  1419,  1421,  1423,
    1426,  1428,  1430,  1432,  1434,  1443,  1444,  1454,  1455,  1457,
    1467,  1480,  1484,  1488,  1495,  1502,  1509,  1511,  1514,  1522,
    1523,  1525,  1528,  1532,  1537,  1538,  1540,  1542,  1546,  1549,
    1550,  1556,  1566,  1568,  1570,  1573,  1580,  1588,  1589,  1591,
    1594,  1596,  1598,  1600,  1602,  1604,  1606,  1608,  1610,  1612,
    1614,  1618,  1621,  1622,  1624,  1626,  1630,  1631,  1632,  1633,
    1634,  1635
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     278,     0,    -1,   144,    -1,     5,    -1,     6,    -1,     7,
      -1,     8,    -1,    50,    -1,    73,    -1,    32,    -1,   284,
      -1,   284,    -1,   148,    -1,   157,    -1,   149,    -1,   146,
      -1,   150,    -1,   154,    -1,   155,    -1,   151,    -1,    12,
      -1,   152,    -1,   153,    -1,    22,    -1,    62,    -1,    14,
      -1,    64,    -1,    80,    -1,    42,    -1,    76,    -1,    47,
      -1,    77,    -1,    17,    -1,    35,    -1,    26,    -1,    51,
      -1,    68,    -1,   147,   123,    -1,    -1,    83,   156,   123,
      -1,   157,   159,    -1,   149,   159,    -1,   284,   159,    -1,
      -1,   159,   158,    -1,     3,    -1,   212,    -1,   162,    -1,
     161,    99,   162,    -1,   212,    -1,    60,   160,    -1,    53,
     160,    -1,   165,    -1,   164,    -1,   143,    -1,   178,    -1,
     166,    -1,   167,    -1,   169,    -1,   172,    -1,   173,    -1,
     176,    -1,   180,    -1,   186,    -1,   182,    -1,   183,    -1,
      86,   212,    87,    -1,   163,   132,     4,    -1,   150,   132,
       4,    -1,   154,   132,     4,    -1,   164,    86,   168,    87,
      -1,   284,    86,   168,    87,    -1,    -1,   161,    -1,   163,
     100,   171,   101,    -1,   284,   100,   171,   101,    -1,    -1,
     171,    -1,   212,    -1,   171,    99,   212,    -1,    71,    -1,
      11,   132,     4,    -1,    11,   100,   171,   101,    -1,   187,
     120,    -1,   187,   121,    -1,   177,    -1,    49,   147,    86,
     168,    87,    -1,    49,   148,   100,   171,   101,   158,   179,
      -1,    49,   157,   354,    -1,    -1,   354,    -1,    75,    86,
     147,    87,    -1,    -1,    75,    86,    83,   181,    87,    -1,
      18,    86,   212,    87,    -1,    78,    86,   212,    87,    -1,
     187,   122,     4,    -1,   135,   191,    -1,    65,    86,   147,
      87,    -1,   163,    -1,   284,    -1,   174,    -1,   175,    -1,
     184,    -1,   187,    -1,   138,   191,    -1,   128,   191,    -1,
     192,    -1,   120,   191,    -1,   121,   191,    -1,   188,    -1,
     127,   191,    -1,   126,   191,    -1,   123,   191,    -1,   189,
      -1,   190,    -1,   185,    -1,    86,   212,    87,   188,    -1,
      86,   197,   123,    87,   191,    -1,    86,   284,   159,   194,
      87,   191,    -1,    86,   150,   194,    87,   191,    -1,    86,
     154,   194,    87,   191,    -1,    -1,    86,    83,   193,   194,
      87,   191,    -1,    -1,   195,    -1,   196,    -1,   195,   196,
      -1,   159,    -1,   123,    -1,   191,    -1,   197,   123,   191,
      -1,   197,   125,   191,    -1,   197,   124,   191,    -1,   197,
      -1,   198,   127,   197,    -1,   198,   126,   197,    -1,   198,
      -1,   199,   110,   198,    -1,   199,   111,   198,    -1,   199,
      -1,   200,   133,   199,    -1,   200,   134,   199,    -1,   200,
     116,   199,    -1,   200,   117,   199,    -1,   200,    45,   147,
      -1,   200,    10,   147,    -1,   200,    -1,   201,   114,   200,
      -1,   201,   115,   200,    -1,   201,    -1,   202,   135,   201,
      -1,   202,    -1,   203,   136,   202,    -1,   203,    -1,   204,
     137,   203,    -1,   204,    -1,   205,   118,   204,    -1,   205,
      -1,   206,   119,   205,    -1,   206,    -1,    -1,   206,   139,
     212,   208,   129,   212,    -1,    -1,   191,   211,   210,   212,
      -1,   140,    -1,   102,    -1,   103,    -1,   104,    -1,   105,
      -1,   106,    -1,   107,    -1,   108,    -1,   109,    -1,   112,
      -1,   113,    -1,   207,    -1,   209,    -1,   212,    -1,   212,
      -1,   221,    -1,   222,    -1,   216,    -1,   217,    -1,   220,
      -1,   231,    -1,   233,    -1,   242,    -1,   257,    -1,   264,
      -1,   269,    -1,   270,    -1,   271,    -1,   272,    -1,   243,
      -1,   274,    -1,   131,   218,   141,    -1,    -1,   219,    -1,
     215,    -1,   219,   215,    -1,   130,    -1,     4,   129,   215,
      -1,   223,   130,    -1,   228,   130,    -1,   147,   224,    -1,
     225,    -1,   224,    99,   225,    -1,     4,    -1,     4,   140,
     226,    -1,   212,    -1,   354,    -1,   227,    -1,    66,   147,
     100,   212,   101,    -1,    20,   147,   229,    -1,   230,    -1,
     229,    99,   230,    -1,     4,   140,   213,    -1,   232,   130,
      -1,   167,    -1,   177,    -1,   209,    -1,   174,    -1,   175,
      -1,   189,    -1,   190,    -1,   234,    -1,   235,    -1,    39,
      86,   214,    87,   216,    -1,    39,    86,   214,    87,   216,
      27,   216,    -1,    70,    86,   212,    87,   236,    -1,   131,
     237,   141,    -1,    -1,   238,    -1,   239,    -1,   238,   239,
      -1,   240,   219,    -1,   241,    -1,   240,   241,    -1,    15,
     213,   129,    -1,    23,   129,    -1,   244,    -1,   245,    -1,
     246,    -1,   256,    -1,    79,   217,    -1,    85,    86,   214,
      87,   216,    -1,    25,   216,    85,    86,   214,    87,   130,
      -1,    -1,    -1,    36,    86,   249,   130,   247,   250,   130,
     248,   251,    87,   216,    -1,    -1,   252,    -1,    -1,   253,
      -1,    -1,   254,    -1,   223,    -1,   255,    -1,   214,    -1,
     255,    -1,   232,    -1,   255,    99,   232,    -1,    37,    86,
     147,     4,    41,   212,    87,   216,    -1,   258,    -1,   259,
      -1,   260,    -1,   261,    -1,   263,    -1,    13,   130,    -1,
      21,   130,    -1,    38,     4,   130,    -1,    38,    15,   213,
     130,    -1,    38,    23,   130,    -1,    61,   262,   130,    -1,
      -1,   212,    -1,    72,   262,   130,    -1,    74,   217,   265,
      -1,    74,   217,   268,    -1,    74,   217,   265,   268,    -1,
     266,    -1,   265,   266,    -1,    16,    86,   154,   267,    87,
     217,    -1,    16,    86,   146,   267,    87,   217,    -1,    16,
     217,    -1,    -1,     4,    -1,    33,   217,    -1,    18,   217,
      -1,    78,   217,    -1,    46,    86,   212,    87,   216,    -1,
      81,    86,   273,    87,   216,    -1,   223,    -1,   212,    -1,
      34,    86,   147,   275,    87,   216,    -1,   276,    -1,   275,
      99,   276,    -1,    -1,     4,   140,   277,   212,    -1,   279,
     280,    -1,   279,   292,    -1,    -1,   287,    -1,    -1,   381,
      -1,    -1,   292,    -1,   280,    48,   284,   286,   283,    -1,
      -1,   130,    -1,     4,    -1,   285,     4,    -1,     4,   132,
      -1,   285,     4,   132,    -1,   131,   279,   281,   141,    -1,
     288,    -1,   287,   288,    -1,   289,    -1,   291,    -1,    -1,
      81,     4,   140,   290,   284,   130,    -1,    81,   145,   130,
      -1,   293,    -1,   292,   293,    -1,   282,    -1,   294,    -1,
     298,    -1,   347,    -1,   357,    -1,   372,    -1,   380,    -1,
      -1,   296,    -1,   297,    -1,   296,   297,    -1,     9,    -1,
      31,    -1,    44,    -1,    49,    -1,    54,    -1,    56,    -1,
      57,    -1,    58,    -1,    59,    -1,    63,    -1,    67,    -1,
      79,    -1,    82,    -1,    84,    -1,    -1,   280,   295,    19,
     299,     4,   300,   303,   283,    -1,    -1,   301,    -1,   129,
     154,    -1,   129,   302,    -1,   129,   154,    99,   302,    -1,
     146,    -1,   302,    99,   146,    -1,    -1,   131,   304,   305,
     141,    -1,    -1,   306,    -1,   307,    -1,   306,   307,    -1,
     308,    -1,   309,    -1,   310,    -1,   321,    -1,   328,    -1,
     332,    -1,   335,    -1,   340,    -1,   344,    -1,   294,    -1,
     280,   295,    20,   147,   229,   130,    -1,   280,   295,   147,
     224,   130,    -1,   311,   315,    -1,   280,   295,   147,   284,
      86,   313,    87,    -1,    -1,   280,   295,    83,   312,   284,
      86,   313,    87,    -1,    -1,   316,    -1,   147,    -1,    83,
      -1,   217,    -1,   130,    -1,   317,    -1,   316,    99,   317,
      -1,   318,    -1,   320,    -1,   280,   319,   147,     4,    -1,
      -1,    60,    -1,    53,    -1,   280,    55,   147,     4,    -1,
     280,   295,   147,   284,   396,   131,   322,   141,   397,    -1,
     325,   323,    -1,   326,   324,    -1,    -1,   326,    -1,    -1,
     325,    -1,   280,    95,   397,   327,   396,    -1,   280,    96,
     397,   327,   396,    -1,   217,    -1,   130,    -1,   280,   295,
      29,   147,   224,   130,    -1,   280,   295,    29,   147,   284,
     394,   131,   329,   141,   395,    -1,   330,   331,    -1,   331,
     330,    -1,   280,    97,   395,   217,   394,    -1,   280,    98,
     395,   217,   394,    -1,   280,   295,   333,   396,   131,   322,
     141,   397,    -1,   147,    71,   100,   316,   101,    -1,   147,
     334,   100,   316,   101,    -1,   285,    71,    -1,   280,   295,
     336,   345,    -1,   337,    -1,   339,    -1,   147,    52,   338,
      86,   147,     4,    87,    -1,   147,    52,   338,    86,   147,
       4,    99,   147,     4,    87,    -1,   127,    -1,   126,    -1,
     138,    -1,   128,    -1,   120,    -1,   121,    -1,    73,    -1,
      32,    -1,   123,    -1,   125,    -1,   124,    -1,   135,    -1,
     137,    -1,   136,    -1,   110,    -1,   111,    -1,   114,    -1,
     115,    -1,   134,    -1,   133,    -1,   117,    -1,   116,    -1,
      40,    52,   147,    86,   147,     4,    87,    -1,    30,    52,
     147,    86,   147,     4,    87,    -1,   280,   295,   341,   346,
      -1,     4,    86,   313,    87,   342,    -1,    -1,   343,    -1,
     129,    11,    86,   168,    87,    -1,   129,    71,    86,   168,
      87,    -1,   280,   295,   128,     4,    86,    87,   217,    -1,
     217,    -1,   130,    -1,   217,    -1,   130,    -1,   280,   295,
      69,     4,   348,   350,   283,    -1,    -1,   349,    -1,   129,
     302,    -1,   131,   351,   141,    -1,    -1,   352,    -1,   353,
      -1,   352,   353,    -1,   308,    -1,   309,    -1,   310,    -1,
     321,    -1,   328,    -1,   332,    -1,   335,    -1,   340,    -1,
     294,    -1,   131,   355,   141,    -1,   131,   356,    99,   141,
      -1,    -1,   356,    -1,   226,    -1,   356,    99,   226,    -1,
     280,   295,    43,     4,   358,   360,   283,    -1,    -1,   359,
      -1,   129,   302,    -1,   131,   361,   141,    -1,    -1,   362,
      -1,   363,    -1,   362,   363,    -1,   364,    -1,   367,    -1,
     370,    -1,   368,    -1,   280,   366,   147,     4,    86,   313,
      87,   371,    -1,    -1,   280,   366,    83,   365,     4,    86,
     313,    87,   371,    -1,    -1,    49,    -1,   280,   366,   147,
       4,   396,   131,   369,   141,   397,    -1,   280,   366,   147,
      71,   100,   316,   101,   396,   131,   369,   141,   397,    -1,
     280,    95,   371,    -1,   280,    96,   371,    -1,   280,    95,
     371,   280,    96,   371,    -1,   280,    96,   371,   280,    95,
     371,    -1,   280,   366,    29,   147,     4,   371,    -1,   130,
      -1,   131,   141,    -1,   280,   295,    28,     4,   373,   375,
     283,    -1,    -1,   374,    -1,   129,   152,    -1,   131,   376,
     141,    -1,   131,   377,    99,   141,    -1,    -1,   377,    -1,
     378,    -1,   377,    99,   378,    -1,   280,     4,    -1,    -1,
     280,     4,   140,   379,   213,    -1,   280,   295,    24,   314,
       4,    86,   313,    87,   130,    -1,   382,    -1,   383,    -1,
     382,   383,    -1,   392,   100,   384,   387,   101,   393,    -1,
     392,   100,   384,   387,    99,   101,   393,    -1,    -1,   385,
      -1,   386,   129,    -1,    88,    -1,    89,    -1,    29,    -1,
      90,    -1,    91,    -1,    92,    -1,    93,    -1,    61,    -1,
      94,    -1,   388,    -1,   387,    99,   388,    -1,   390,   389,
      -1,    -1,   391,    -1,   146,    -1,    86,   170,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    92,    92,    93,    94,    95,    96,    97,   100,   101,
     107,   110,   114,   115,   118,   119,   122,   123,   124,   127,
     128,   131,   132,   133,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   139,   139,   142,   142,   145,   146,   146,
     149,   150,   151,   153,   155,   158,   162,   166,   167,   170,
     171,   172,   175,   176,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   193,   196,   197,   198,
     201,   202,   204,   206,   209,   210,   212,   214,   217,   218,
     221,   224,   225,   228,   231,   234,   237,   240,   241,   243,
     245,   248,   249,   249,   252,   255,   258,   261,   264,   267,
     268,   269,   270,   271,   274,   275,   276,   277,   280,   283,
     286,   287,   288,   289,   290,   291,   292,   300,   301,   302,
     303,   304,   305,   305,   307,   309,   312,   313,   316,   317,
     320,   321,   322,   323,   326,   327,   328,   331,   332,   333,
     336,   337,   338,   339,   340,   341,   342,   345,   346,   347,
     350,   351,   354,   355,   358,   359,   362,   363,   366,   367,
     370,   371,   371,   374,   374,   377,   377,   377,   377,   377,
     377,   378,   378,   378,   378,   378,   381,   382,   385,   388,
     392,   393,   394,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   412,   414,   416,   420,
     421,   424,   427,   430,   431,   434,   437,   438,   441,   442,
     445,   446,   447,   450,   453,   456,   457,   460,   463,   466,
     467,   468,   469,   470,   471,   472,   475,   476,   479,   480,
     483,   486,   488,   490,   493,   494,   497,   500,   501,   504,
     505,   508,   509,   510,   511,   514,   517,   520,   523,   523,
     523,   525,   527,   529,   531,   533,   535,   538,   539,   542,
     545,   548,   549,   552,   555,   556,   557,   558,   559,   562,
     565,   568,   569,   570,   573,   575,   577,   580,   583,   584,
     585,   588,   589,   592,   593,   594,   596,   598,   601,   604,
     607,   610,   613,   616,   617,   621,   624,   625,   628,   628,
     631,   632,   634,   636,   638,   640,   642,   644,   647,   649,
     651,   660,   661,   664,   665,   668,   671,   672,   675,   676,
     679,   679,   682,   685,   686,   689,   690,   693,   694,   695,
     696,   697,   707,   709,   712,   713,   716,   717,   718,   719,
     720,   721,   722,   723,   724,   725,   726,   727,   728,   729,
     733,   733,   735,   737,   740,   741,   742,   745,   746,   749,
     749,   751,   753,   756,   757,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   770,   773,   776,   779,   783,   784,
     784,   786,   788,   791,   792,   795,   796,   799,   800,   803,
     804,   807,   809,   811,   812,   816,   819,   825,   826,   828,
     830,   832,   834,   837,   843,   849,   850,   853,   854,   860,
     861,   864,   870,   876,   882,   884,   887,   891,   894,   895,
     898,   899,   902,   902,   903,   903,   903,   903,   903,   903,
     904,   904,   904,   904,   904,   904,   905,   905,   905,   905,
     905,   905,   905,   905,   908,   909,   912,   915,   917,   919,
     922,   923,   939,   942,   943,   946,   947,   952,   954,   956,
     959,   962,   964,   966,   969,   970,   973,   974,   975,   976,
     977,   978,   979,   980,   982,   987,   988,   990,   992,   995,
     996,  1001,  1003,  1005,  1008,  1011,  1013,  1015,  1018,  1019,
    1022,  1023,  1024,  1025,  1029,  1030,  1030,  1032,  1034,  1037,
    1043,  1051,  1052,  1053,  1054,  1057,  1062,  1063,  1068,  1070,
    1072,  1075,  1078,  1079,  1081,  1083,  1086,  1087,  1090,  1091,
    1091,  1096,  1101,  1104,  1105,  1108,  1109,  1111,  1113,  1116,
    1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,  1130,
    1131,  1134,  1136,  1138,  1141,  1144,  1151,  1154,  1157,  1160,
    1163,  1166
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RANK_SPECIFIER", "IDENTIFIER",
  "INTEGER_LITERAL", "REAL_LITERAL", "CHARACTER_LITERAL", "STRING_LITERAL",
  "ABSTRACT", "AS", "BASE", "BOOL", "BREAK", "BYTE", "CASE", "CATCH",
  "CHAR", "CHECKED", "CLASS", "CONST", "CONTINUE", "DECIMAL", "DEFAULT",
  "DELEGATE", "DO", "DOUBLE", "ELSE", "ENUM", "EVENT", "EXPLICIT",
  "EXTERN", "FALSE", "FINALLY", "FIXED", "FLOAT", "FOR", "FOREACH", "GOTO",
  "IF", "IMPLICIT", "IN", "INT", "INTERFACE", "INTERNAL", "IS", "LOCK",
  "LONG", "NAMESPACE", "NEW", "NULL_LITERAL", "OBJECT", "OPERATOR", "OUT",
  "OVERRIDE", "PARAMS", "PRIVATE", "PROTECTED", "PUBLIC", "READONLY",
  "REF", "RETURN", "SBYTE", "SEALED", "SHORT", "SIZEOF", "STACKALLOC",
  "STATIC", "STRING", "STRUCT", "SWITCH", "THIS", "THROW", "TRUE", "TRY",
  "TYPEOF", "UINT", "ULONG", "UNCHECKED", "UNSAFE", "USHORT", "USING",
  "VIRTUAL", "VOID", "VOLATILE", "WHILE", "OpenBracket", "CloseBracket",
  "ASSEMBLY", "FIELD", "METHOD", "MODULE", "PARAM", "PROPERTY", "TYPE",
  "GET", "SET", "ADD", "REMOVE", "\",\"", "\"[\"", "\"]\"", "PLUSEQ",
  "MINUSEQ", "STAREQ", "DIVEQ", "MODEQ", "XOREQ", "ANDEQ", "OREQ", "LTLT",
  "GTGT", "GTGTEQ", "LTLTEQ", "EQEQ", "NOTEQ", "LEQ", "GEQ", "ANDAND",
  "OROR", "PLUSPLUS", "MINUSMINUS", "ARROW", "Multiple_N1", "PercenSign",
  "Division", "Dash", "Plus_S", "Maddeh", "Colon", "Semicolon",
  "OpenBracket_T1", "Dot", "Less", "Greater", "And", "Shapo",
  "Vertical_Mark", "Ta3ajob", "Quest_Mark", "Equal", "CloseBracket_T1",
  "$accept", "literal", "boolean_literal", "namespace_name", "type_name",
  "type", "non_array_type", "simple_type", "primitive_type",
  "numeric_type", "integral_type", "floating_point_type", "class_type",
  "pointer_type", "@1", "array_type", "rank_specifiers_opt",
  "rank_specifier", "variable_reference", "argument_list", "argument",
  "primary_expression", "primary_expression_no_parenthesis",
  "parenthesized_expression", "member_access", "invocation_expression",
  "argument_list_opt", "element_access", "expression_list_opt",
  "expression_list", "this_access", "base_access",
  "post_increment_expression", "post_decrement_expression",
  "new_expression", "object_creation_expression",
  "array_creation_expression", "array_initializer_opt",
  "typeof_expression", "@2", "checked_expression", "unchecked_expression",
  "pointer_member_access", "addressof_expression", "sizeof_expression",
  "postfix_expression", "unary_expression_not_plusminus",
  "pre_increment_expression", "pre_decrement_expression",
  "unary_expression", "cast_expression", "@3", "type_quals_opt",
  "type_quals", "type_qual", "multiplicative_expression",
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
     395,   396
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   142,   143,   143,   143,   143,   143,   143,   144,   144,
     145,   146,   147,   147,   148,   148,   149,   149,   149,   150,
     150,   151,   151,   151,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   153,   153,   154,   154,   155,   156,   155,
     157,   157,   157,   158,   158,   159,   160,   161,   161,   162,
     162,   162,   163,   163,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   165,   166,   166,   166,
     167,   167,   168,   168,   169,   169,   170,   170,   171,   171,
     172,   173,   173,   174,   175,   176,   177,   178,   178,   179,
     179,   180,   181,   180,   182,   183,   184,   185,   186,   187,
     187,   187,   187,   187,   188,   188,   188,   188,   189,   190,
     191,   191,   191,   191,   191,   191,   191,   192,   192,   192,
     192,   192,   193,   192,   194,   194,   195,   195,   196,   196,
     197,   197,   197,   197,   198,   198,   198,   199,   199,   199,
     200,   200,   200,   200,   200,   200,   200,   201,   201,   201,
     202,   202,   203,   203,   204,   204,   205,   205,   206,   206,
     207,   208,   207,   210,   209,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   212,   212,   213,   214,
     215,   215,   215,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   217,   218,   218,   219,
     219,   220,   221,   222,   222,   223,   224,   224,   225,   225,
     226,   226,   226,   227,   228,   229,   229,   230,   231,   232,
     232,   232,   232,   232,   232,   232,   233,   233,   234,   234,
     235,   236,   237,   237,   238,   238,   239,   240,   240,   241,
     241,   242,   242,   242,   242,   243,   244,   245,   247,   248,
     246,   249,   249,   250,   250,   251,   251,   252,   252,   253,
     254,   255,   255,   256,   257,   257,   257,   257,   257,   258,
     259,   260,   260,   260,   261,   262,   262,   263,   264,   264,
     264,   265,   265,   266,   266,   266,   267,   267,   268,   269,
     270,   271,   272,   273,   273,   274,   275,   275,   277,   276,
     278,   278,   279,   279,   280,   280,   281,   281,   282,   283,
     283,   284,   284,   285,   285,   286,   287,   287,   288,   288,
     290,   289,   291,   292,   292,   293,   293,   294,   294,   294,
     294,   294,   295,   295,   296,   296,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     299,   298,   300,   300,   301,   301,   301,   302,   302,   304,
     303,   305,   305,   306,   306,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   308,   309,   310,   311,   312,
     311,   313,   313,   314,   314,   315,   315,   316,   316,   317,
     317,   318,   319,   319,   319,   320,   321,   322,   322,   323,
     323,   324,   324,   325,   326,   327,   327,   328,   328,   329,
     329,   330,   331,   332,   333,   333,   334,   335,   336,   336,
     337,   337,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   339,   339,   340,   341,   342,   342,
     343,   343,   344,   345,   345,   346,   346,   347,   348,   348,
     349,   350,   351,   351,   352,   352,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   354,   354,   355,   355,   356,
     356,   357,   358,   358,   359,   360,   361,   361,   362,   362,
     363,   363,   363,   363,   364,   365,   364,   366,   366,   367,
     368,   369,   369,   369,   369,   370,   371,   371,   372,   373,
     373,   374,   375,   375,   376,   376,   377,   377,   378,   379,
     378,   380,   381,   382,   382,   383,   383,   384,   384,   385,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   387,
     387,   388,   389,   389,   390,   391,   392,   393,   394,   395,
     396,   397
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
       5,     3,     0,     1,     1,     2,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     2,     5,     7,     0,     0,
      11,     0,     1,     0,     1,     0,     1,     1,     1,     1,
       1,     1,     3,     8,     1,     1,     1,     1,     1,     2,
       2,     3,     4,     3,     3,     0,     1,     3,     3,     3,
       4,     1,     2,     6,     6,     2,     0,     1,     2,     2,
       2,     5,     5,     1,     1,     6,     1,     3,     0,     4,
       2,     2,     0,     1,     0,     1,     0,     1,     5,     0,
       1,     1,     2,     2,     3,     4,     1,     2,     1,     1,
       0,     6,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     8,     0,     1,     2,     2,     4,     1,     3,     0,
       4,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     5,     2,     7,     0,
       8,     0,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     4,     0,     1,     1,     4,     9,     2,     2,     0,
       1,     0,     1,     5,     5,     1,     1,     6,    10,     2,
       2,     5,     5,     8,     5,     5,     2,     4,     1,     1,
       7,    10,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     7,     4,     5,     0,     1,
       5,     5,     7,     1,     1,     1,     1,     7,     0,     1,
       2,     3,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     0,     1,     1,
       3,     7,     0,     1,     2,     3,     0,     1,     1,     2,
       1,     1,     1,     1,     8,     0,     9,     0,     1,     9,
      12,     3,     3,     6,     6,     6,     1,     2,     7,     0,
       1,     2,     3,     4,     0,     1,     1,     3,     2,     0,
       5,     9,     1,     1,     2,     6,     7,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     0,     1,     1,     3,     0,     0,     0,     0,
       0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
     302,     0,     0,   304,   303,   316,   318,   319,   311,     0,
      10,     0,     1,   332,   325,   304,   323,   326,   327,   328,
     329,   330,   331,   305,   522,   523,     0,   317,   313,   320,
     322,   312,   336,   337,   338,     0,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,     0,   333,   334,
     332,   324,   524,   527,     0,   314,   311,     0,   350,     0,
       0,     0,     0,   335,   532,   537,   530,   531,   533,   534,
     535,   536,   538,     0,   528,     0,     0,   302,   309,     0,
      20,    25,    32,    23,    34,    33,    28,    30,    35,    24,
      26,    36,    29,    31,    27,    38,    15,   383,    12,    14,
      16,    19,    21,    22,    17,    18,    13,    11,     0,   509,
     482,   458,   544,    11,     0,   539,   542,   529,   321,   304,
     310,   308,   352,     0,    37,    45,    41,    40,    42,     0,
       0,     0,   510,     0,     0,   483,     0,     0,   459,     0,
     547,    76,   541,   543,     0,   304,     0,     0,   353,    39,
     304,   511,   304,   309,   357,   484,   304,   309,   460,   304,
     309,   547,   540,   525,     3,     4,     5,     6,     0,     0,
       9,     0,     7,     0,    80,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     2,     0,
       0,    99,    53,    52,    56,    57,    58,     0,    77,    59,
      60,   101,   102,    61,    85,    55,    62,    64,    65,   103,
     116,    63,   104,   110,   114,   115,   130,   107,   134,   137,
     140,   147,   150,   152,   154,   156,   158,   160,   176,   177,
      78,   100,   315,   354,   355,   359,   309,   392,     0,   382,
     387,   389,   390,     0,     0,   515,   516,   508,     0,   497,
       0,   304,   488,   490,   491,   493,   492,   481,   332,   474,
     466,   467,   468,     0,   469,   470,   471,   472,   473,     0,
     304,   464,   457,   526,     0,     0,     0,    38,     0,    12,
      13,     0,     0,     0,   122,   124,   124,   134,     0,   100,
     108,   109,   113,   112,   111,   106,    97,   105,     0,     0,
       0,     0,    72,   545,     0,    83,    84,     0,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   165,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,     0,   304,   351,   394,     0,   393,     0,
       0,   304,   518,   512,   304,   358,   498,     0,   485,   489,
       0,   386,   197,   385,   377,   461,   465,     0,    81,     0,
      72,     0,   477,    88,     0,    38,     0,     0,   124,   129,
     128,     0,   125,   126,     0,     0,    66,   124,    68,    69,
       0,    67,     0,     0,    73,    47,     0,    49,    79,    96,
       0,   131,   133,   132,   130,   136,   135,   138,   139,   146,
     145,   143,   144,   141,   142,   148,   149,   151,   153,   155,
     157,   159,   161,     0,     0,   356,   332,   374,     0,   304,
     363,   365,   366,   367,   368,   369,   370,   371,   372,   373,
       0,     0,   521,   388,   519,   513,   517,     0,    38,     0,
     311,     0,     0,     0,     0,    38,     0,   550,     0,   418,
     419,     0,   311,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   275,     0,   275,     0,     0,     0,
       0,     0,   201,     0,    16,    17,    57,   101,   102,    85,
     114,   115,     0,   221,   199,   182,   183,     0,   198,   184,
     180,   181,     0,     0,   185,     0,   186,   226,   227,   187,
     194,   241,   242,   243,   244,   188,   264,   265,   266,   267,
     268,   189,   190,   191,   192,   193,   195,   100,    82,    94,
       0,     0,     0,   210,   479,   212,   211,     0,   478,    98,
       0,    91,    95,     0,     0,   127,     0,     0,   117,     0,
      74,    51,    46,    50,     0,    70,   164,     0,    71,    75,
       0,   360,   364,   395,   391,     0,     0,     0,   550,     0,
     304,     0,     0,     0,     0,     0,   208,     0,     0,     0,
     206,   550,     0,     0,     0,   454,   453,   417,   456,   455,
     446,     0,   269,   289,     0,   270,     0,     0,   251,     0,
       0,     0,     0,     0,     0,   276,     0,     0,     0,     0,
     290,   245,     0,     0,   208,   205,   196,   200,   203,   204,
     218,    86,    43,     0,   475,     0,    93,     0,   120,   121,
     118,     0,    48,     0,     0,   178,   520,     0,     0,   304,
       0,   304,     0,     0,     0,   215,     0,   548,     0,     0,
       0,     0,   429,   428,   436,   437,   438,   439,   443,   442,
     426,   427,   430,   432,   431,   423,   422,   425,   441,   440,
     433,   435,   434,   424,     0,   304,     0,   376,   304,     0,
     416,   304,   304,   202,   214,     0,     0,   257,   261,     0,
     252,   258,     0,   271,     0,   273,   179,     0,     0,   274,
       0,   277,     0,     0,   278,   281,   279,   294,   293,     0,
       0,    89,    43,     0,   476,   480,   123,   119,   162,     0,
     506,     0,   505,   304,     0,   304,     0,   448,     0,     0,
     375,   407,     0,     0,     0,   304,   209,     0,     0,   207,
       0,   304,     0,     0,     0,   304,   304,     0,     0,     0,
     296,   248,     0,     0,   272,     0,     0,     0,     0,   285,
     288,   282,   280,     0,     0,    87,    90,    44,     0,     0,
     507,     0,     0,     0,     0,   550,     0,   447,   449,   217,
     216,   304,     0,     0,     0,     0,   414,   378,     0,   415,
     551,   551,   551,     0,   397,   400,     0,   398,   402,     0,
     298,     0,     0,   253,   262,     0,   228,   291,   232,   230,
     286,   286,   292,   246,   213,     0,     0,   494,     0,     0,
     551,     0,     0,     0,     0,     0,   304,   304,     0,     0,
     380,     0,   551,     0,     0,   413,     0,     0,   295,   297,
     259,     0,   254,     0,     0,     0,     0,     0,   233,   234,
       0,   237,   287,     0,     0,   452,   496,   304,   304,   499,
     304,    72,    72,   549,   549,   549,     0,   409,     0,   410,
     445,   444,   420,     0,   396,   406,   405,   550,   550,   247,
     299,   249,     0,   229,     0,   240,   231,   235,   236,   238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   408,
       0,   403,   404,   255,   263,   239,   284,   283,     0,     0,
     551,   450,   451,   548,   548,     0,     0,   256,   260,   503,
     504,   500,   411,   412,   421,     0,   250
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,   187,   188,     9,    96,   483,    98,    99,   189,   101,
     102,   103,   190,   105,   123,   106,   711,   380,   551,   394,
     395,   191,   192,   193,   194,   195,   396,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   765,   206,   540,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   378,   381,   382,   383,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   557,   229,   400,   319,
     397,   636,   697,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   579,   580,   534,   535,   503,   644,   645,   504,
     505,   506,   507,   508,   809,   847,   848,   849,   850,   851,
     509,   510,   511,   512,   513,   803,   903,   689,   841,   916,
     690,   842,   917,   691,   514,   515,   516,   517,   518,   519,
     606,   520,   521,   704,   705,   853,   706,   522,   523,   524,
     525,   709,   526,   749,   750,   837,     2,     3,   237,   144,
      14,   121,   231,    11,    78,     4,     5,     6,    54,     7,
      15,    16,    17,    47,    48,    49,    18,    79,   147,   148,
     155,   236,   344,   428,   429,   430,   260,   261,   262,   263,
     575,   238,   108,   364,   239,   240,   241,   349,   242,   264,
     744,   794,   797,   745,   746,   877,   265,   825,   826,   827,
     266,   457,   583,   267,   458,   459,   674,   460,   268,   461,
     777,   778,   439,   587,   590,    19,   137,   138,   160,   269,
     270,   271,   536,   537,   538,    20,   134,   135,   157,   250,
     251,   252,   253,   567,   357,   254,   255,   774,   256,   722,
      21,   131,   132,   153,   244,   245,   246,   565,    22,    23,
      24,    25,    73,    74,    75,   114,   115,   142,   116,   143,
      26,   163,   732,   897,   584,   833
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -767
static const short int yypact[] =
{
      -7,   132,    63,    43,    -7,  -767,  -767,  -767,   217,    79,
    -767,   252,  -767,  1051,  -767,    51,  -767,  -767,  -767,  -767,
    -767,  -767,  -767,  -767,    43,  -767,   126,  -767,  -767,  -767,
    -767,   153,  -767,  -767,  -767,   301,  -767,  -767,  -767,  -767,
    -767,  -767,  -767,  -767,  -767,  -767,  -767,   194,   879,  -767,
     696,  -767,  -767,   278,   301,  -767,   162,   184,  -767,  1143,
     324,   347,   377,  -767,  -767,  -767,  -767,  -767,  -767,  -767,
    -767,  -767,  -767,   301,  -767,   229,   256,    -7,   267,   405,
    -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,
    -767,  -767,  -767,  -767,  -767,   413,  -767,   303,  -767,   426,
    -767,  -767,  -767,  -767,  -767,  -767,   426,   426,   430,   307,
     325,   334,  -767,  -767,   290,  -767,   387,  -767,  -767,   -51,
    -767,  -767,   348,   373,  -767,  -767,  -767,  -767,  -767,   403,
     206,   389,  -767,   301,   404,  -767,   301,   414,  -767,    85,
    -767,  2157,  -767,  -767,   415,   117,    40,   421,  -767,  -767,
     172,  -767,   151,   267,  -767,   409,   155,   267,   409,   160,
     267,  -767,  -767,  -767,  -767,  -767,  -767,  -767,   107,   460,
    -767,  2459,  -767,   467,  -767,  -767,   469,   471,  1901,  2157,
    2157,  2157,  2157,  2157,  2157,  2157,  2157,  -767,  -767,   432,
     436,   125,   484,  -767,  -767,  -767,  -767,   489,   478,  -767,
    -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,
    -767,  -767,   284,  -767,  -767,  -767,   335,  -767,   288,   305,
     368,    57,   376,   443,   444,   442,   463,   150,  -767,  -767,
    -767,   294,  -767,   483,   409,  -767,   267,   330,   498,   488,
    -767,  -767,  -767,   584,   448,   492,  -767,  -767,   301,   543,
     452,   161,  -767,  -767,  -767,  -767,  -767,  -767,   879,  -767,
    -767,  -767,  -767,   354,  -767,  -767,  -767,  -767,  -767,   453,
     165,  -767,  -767,  -767,  2157,   595,  2157,  -767,   -11,   500,
      24,  2459,  2512,  2157,  -767,    26,    29,   300,   514,    30,
    -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,   598,   600,
    2157,   603,  1735,  -767,  2157,  -767,  -767,   606,  -767,  -767,
    -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,
    2157,  2157,  2157,  2157,  2157,  2157,  2157,  2459,  2459,  2157,
    2157,  2157,  2157,  2157,  2157,  2157,  2157,  2157,  2157,  2157,
    2157,  1735,  2157,   301,   199,  -767,  -767,  2459,  -767,  2459,
     482,    43,   473,  -767,   203,  -767,  -767,  2435,  -767,  -767,
    2382,  -767,  1510,  -767,  -767,  -767,  -767,   358,  -767,   527,
    1735,  2157,  1818,  -767,   -18,   528,     0,   529,    25,  -767,
    -767,   530,    25,  -767,   531,  1984,  2240,    25,  -767,  -767,
     361,  -767,  2157,  2157,   520,  -767,   534,  -767,  -767,  -767,
    2157,  -767,  -767,  -767,  -767,   288,   288,   305,   305,   303,
     303,   368,   368,   368,   368,    57,    57,   376,   443,   444,
     442,   463,  -767,   536,   366,   409,   879,  -767,   485,   209,
    -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,
       8,    33,  -767,  -767,  -767,  -767,  -767,  2459,   620,    39,
     -34,  2459,  2459,   573,   575,   624,    36,  -767,   362,  -767,
    -767,   372,   202,   501,   -39,  2459,   503,  1645,   544,   549,
     550,   350,   552,   553,  2157,   556,  2157,   512,   -25,   512,
     558,   559,  -767,    41,   432,   436,    -4,   137,   144,   147,
     163,   167,   335,  -767,  -767,  -767,  -767,   505,  1510,  -767,
    -767,  -767,   519,   521,  -767,   522,  -767,  -767,  -767,  -767,
    -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,
    -767,  -767,  -767,  -767,  -767,  -767,  -767,    82,  -767,  -767,
     563,   367,  2459,  -767,  -767,  -767,  -767,   532,   561,  -767,
     574,  -767,  -767,   587,  2157,  -767,  2157,  2157,  -767,   588,
    -767,  -767,  -767,  -767,  1735,  -767,  -767,   548,  -767,  -767,
    2315,  -767,  -767,  -767,  -767,  2157,    42,   674,   593,   580,
     172,    46,    52,  2459,  2459,   301,   109,  1218,   581,   174,
    -767,   596,    38,   586,   562,  -767,  -767,  -767,  -767,  -767,
    -767,  1510,  -767,  -767,    46,  -767,   602,  2459,  2074,  2459,
     564,  2157,   568,  2157,  2157,  -767,   572,  2157,   576,    68,
    -767,  -767,  2074,  2157,   567,   590,  -767,  -767,  -767,  -767,
    -767,  -767,   426,   -27,  -767,  1237,  -767,  2157,  -767,  -767,
    -767,  2157,  -767,  2157,   688,  -767,  -767,   374,   617,   172,
     582,    43,   627,   571,   222,  -767,   244,  -767,    -6,   115,
     618,  1818,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,
    -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,
    -767,  -767,  -767,  -767,   631,    43,   715,  -767,   172,   589,
    -767,    43,    43,  -767,   622,   642,    53,  -767,  -767,   601,
    -767,   635,    55,  -767,   605,  -767,  -767,   651,   652,  -767,
     656,  -767,   -10,   512,    68,  -767,  -767,  -767,  -767,   661,
     662,   625,   426,  2157,  -767,  -767,  -767,  -767,  -767,   665,
    -767,   619,  -767,   172,   671,    43,   370,   633,  2157,   760,
    -767,  -767,   639,  2459,  2459,   172,  -767,  2459,   371,  -767,
     679,    43,   375,   385,   630,   219,   235,  2157,   634,   189,
    -767,  -767,  2157,   732,  -767,  1645,  1645,   645,    40,  -767,
    -767,  -767,  -767,  1645,  1645,  -767,  -767,  -767,   676,   692,
    -767,   697,   374,   411,   644,  -767,    28,  -767,  -767,  -767,
    -767,    43,    56,    58,   701,    60,  -767,  -767,   648,  -767,
    -767,  -767,  -767,   694,  -767,  -767,   698,  -767,  -767,   704,
    -767,  1645,   788,  2157,  -767,  2157,   771,  -767,   364,  -767,
     795,   795,  -767,  -767,  -767,   512,   374,  -767,   374,   374,
    -767,   672,   716,   719,   412,   666,    43,    43,   721,   722,
    -767,   254,  -767,   397,   397,  -767,   681,  2157,  -767,  -767,
    -767,   684,  -767,   729,  1645,  2157,   677,   678,   364,  -767,
    1375,  -767,  -767,   733,   734,  -767,  -767,   236,   247,  -767,
      43,  1735,  1735,  -767,  -767,  -767,   725,  -767,   736,  -767,
    -767,  -767,  -767,  2459,  -767,  -767,  -767,  -767,  -767,  -767,
    -767,  -767,  1645,  -767,   700,  -767,  -767,  -767,  1510,  -767,
     512,   512,   730,   735,   699,   748,   750,   512,   512,  -767,
      66,  -767,  -767,  2157,  -767,  -767,  -767,  -767,   374,   374,
    -767,  -767,  -767,  -767,  -767,   751,   756,  -767,   635,  -767,
    -767,  -767,  -767,  -767,  -767,  1645,  -767
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -767,  -767,  -767,  -767,   -68,    35,   673,  -767,   -37,  -767,
     717,  -767,   -49,  -767,  -767,   675,   133,   -92,   457,  -767,
     298,  -767,  -767,  -767,  -767,  -356,  -340,  -767,  -767,  -150,
    -767,  -767,   -40,    31,  -767,   139,  -767,  -767,  -767,  -767,
    -767,  -767,  -767,  -767,  -767,  -767,   468,   224,   243,   333,
    -767,  -767,  -193,  -767,   474,  -157,   208,    90,   205,   518,
     524,   525,   517,   526,  -767,  -767,  -767,   314,  -767,  -767,
     425,  -581,  -610,  -487,  -426,  -250,  -767,     7,  -767,  -767,
    -767,  -234,  -445,   188,  -548,  -767,  -767,   272,   138,  -767,
    -589,  -767,  -767,  -767,  -767,  -767,  -767,    20,  -767,    19,
    -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,
    -767,  -767,  -767,   -33,  -767,  -767,  -767,  -767,  -767,  -767,
     395,  -767,  -767,  -767,   169,    65,   170,  -767,  -767,  -767,
    -767,  -767,  -767,  -767,    76,  -767,  -767,   805,     1,  -767,
    -767,    59,    -1,   427,  -767,  -767,   880,  -767,  -767,  -767,
     767,     9,  -142,  -239,  -767,   841,  -767,  -767,  -767,  -767,
    -128,  -767,  -767,  -767,  -767,   461,  -296,  -289,  -231,  -767,
    -767,  -539,  -767,  -767,  -357,   541,  -767,  -767,  -767,  -230,
     152,  -767,  -767,   154,   159,    62,  -229,  -767,    70,    72,
    -226,  -767,  -767,  -225,  -767,  -767,  -767,  -767,  -219,  -767,
    -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,  -767,
    -767,   636,  -278,  -767,  -767,  -767,  -767,  -767,  -767,  -767,
    -767,   658,  -767,  -767,  -767,  -767,  -767,    47,  -767,  -737,
    -767,  -767,  -767,  -767,  -767,  -767,   557,  -767,  -767,  -767,
    -767,   890,  -767,  -767,  -767,  -767,   776,  -767,  -767,  -767,
    -767,   755,  -373,  -321,  -545,  -766
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -547
static const short int yytable[] =
{
      10,   423,   373,   710,    13,   112,   486,   126,   158,   688,
     104,   617,   563,   363,   127,   128,    50,   259,   234,   360,
     694,   287,   100,   640,    51,   834,   835,   125,   125,   125,
     530,   642,   125,   125,    57,   817,   679,   564,   615,   822,
     576,   596,    31,   568,    56,   614,   637,   276,   431,  -546,
     643,  -301,   570,    76,   859,   432,   576,   748,   107,   753,
     828,   283,   829,    12,   831,   154,   874,   327,   154,   539,
     915,   112,   113,   713,     1,   370,   758,   715,   154,   856,
     733,   857,   858,  -219,   702,   125,   -11,   541,   577,    56,
    -306,    88,   362,   384,    97,  -219,   124,   233,    28,   823,
     724,   703,   328,   736,   683,   124,   362,   578,    91,   680,
     569,   486,   124,   433,   434,   435,   341,   124,   436,   437,
      50,   362,   104,   124,   367,   438,  -219,   646,   259,   286,
     342,   124,   113,   431,   100,   113,     8,   799,   113,   740,
     432,   285,   486,  -546,   921,   113,    50,   779,   379,   379,
     390,  -546,   379,   243,    51,   372,   124,   249,   298,   124,
     258,   299,   124,   804,   124,   124,   405,   406,   341,   124,
     107,   919,   920,   329,   330,   124,   124,   289,   124,   124,
     355,   124,   342,   124,   771,   543,   161,   560,   127,   124,
     331,   332,   424,   840,   549,  -311,   784,   387,   433,   434,
     435,   734,   427,   436,   437,   -11,   278,   274,   586,    30,
     438,   589,   247,    58,   593,   425,   257,  -546,    59,   272,
      81,   531,    60,    82,  -222,   300,    53,   609,   610,   611,
     821,  -223,   104,   104,  -220,   486,  -222,    61,   124,   275,
    -311,    28,   486,  -223,   100,   100,  -220,   113,    86,   651,
    -224,  -546,   249,    87,  -225,  -546,    31,   301,  -307,  -381,
    -546,  -546,  -224,    62,   884,  -546,  -225,  -222,    89,   339,
      90,   258,  -546,   676,  -223,   154,   801,  -220,   104,   104,
     107,   107,    92,    93,   726,    55,    94,   427,   802,   340,
     100,   100,  -514,  -224,    28,   345,  -486,  -225,   104,  -546,
     104,  -462,  -487,  -546,   677,    56,  -463,    64,   104,  -546,
     100,   104,   100,   485,   688,    77,   374,   376,   738,  -546,
     100,   729,   487,   100,   742,   484,   107,   107,   109,   806,
     807,   591,   901,   902,    28,  -546,  -546,   812,   813,    65,
    -361,   872,   113,   676,   445,   426,   107,  -546,   107,    28,
    -362,   110,   730,   873,   600,   243,   107,    29,   117,   107,
    -399,   527,   409,   410,   687,   601,    66,    67,    68,    69,
      70,    71,    72,   602,   731,   838,  -401,  -501,   708,   845,
     341,   111,   440,   346,   441,   347,   118,   846,  -502,   139,
     348,   140,   449,   488,   342,   456,   486,   120,   104,   486,
     486,   617,   104,   104,   305,   306,   307,   486,   486,   122,
     100,   320,   321,   322,   100,   100,   104,  -384,   883,   411,
     412,   413,   414,   385,   321,   322,   124,   487,   100,   125,
     426,   323,   324,   766,   129,   128,   130,   308,   309,   310,
     311,   312,   313,   314,   315,   486,   107,   316,   317,   485,
     107,   107,   759,   760,   133,   581,   904,   304,   487,   528,
     304,   484,   550,   136,   107,   304,   304,   559,   622,   351,
     351,   775,   786,   141,   351,   318,   789,   146,   325,   326,
     790,   791,   566,   104,   361,   362,   571,   572,   486,   150,
     333,   334,   585,   362,   486,   100,   149,   527,   488,   926,
     594,   489,   588,   362,   720,   721,   818,   819,   248,   863,
     864,   104,   290,   291,   292,   293,   294,   295,   296,   297,
     152,   895,   896,   100,   104,   104,   486,   875,   362,   488,
     712,   107,   486,   407,   408,   156,   100,   100,   415,   416,
     922,   923,   485,   898,   899,   159,   276,   486,   104,   485,
     104,   487,   235,   281,   484,   282,   232,   283,   487,   107,
     100,   484,   100,   485,   298,   855,   230,   623,   299,   486,
     302,   647,   107,   107,   650,   484,   303,   304,   335,   337,
     336,   338,   343,   876,   876,   350,   490,   351,   352,   353,
     527,   354,   356,   358,   365,   456,   107,   527,   107,   368,
     371,   386,   388,   288,   389,   491,   489,   391,   648,   649,
     399,   527,   442,   444,   529,   -92,   542,   544,   546,   554,
     712,   555,   488,   558,  -495,   573,   561,   574,  -379,   488,
     597,   592,   686,   595,   692,   598,   599,   489,   603,   604,
     906,   907,   607,   362,   612,   613,   616,   913,   914,   618,
     621,   619,   620,   401,   402,   403,   404,   404,   404,   404,
     625,   626,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   624,   627,   631,   493,   633,   638,   639,
     641,   675,   678,   743,   104,   104,   681,   685,   104,   676,
     810,   490,   719,   682,   693,   492,   100,   100,   695,   230,
     100,   369,   699,   723,   735,    32,   701,   651,   377,   811,
     491,   728,   487,   725,   727,   487,   487,   737,   401,   614,
     741,   729,   490,   487,   487,   230,   773,    33,   747,   398,
     489,   751,   107,   107,   752,   754,   107,   489,   755,   756,
      34,   491,   743,   757,    35,    36,   793,   796,   763,   764,
      37,   769,    38,    39,    40,    41,   372,   113,   772,    42,
     770,   487,   776,    43,   643,   422,   787,   230,   782,   783,
     781,   792,   785,   805,   800,    44,   808,   814,    45,   815,
      46,   493,   824,   488,   816,   820,   488,   488,   830,   832,
     791,   836,   748,   790,   488,   488,   230,   533,   844,   852,
     492,   485,   861,   860,   487,   862,   885,   865,   870,   871,
     487,   879,   493,   484,   881,   490,   882,   552,   552,   886,
     890,   891,   490,   864,   104,   556,   908,   866,   868,   905,
     909,   492,   488,   863,   491,   911,   100,   912,   924,   485,
     910,   491,   487,   925,   279,   767,   280,   151,   487,   527,
     553,   484,   632,   417,   548,   420,   545,   888,   892,   893,
     418,   773,   419,   487,   739,   421,   684,   780,   887,   889,
     918,   608,   107,   761,   762,   488,   854,   628,   839,   629,
     630,   488,   119,   582,    27,   487,   145,   527,    32,    63,
     562,   489,   443,   788,   489,   489,   878,   869,   867,   605,
     798,   605,   489,   489,   795,   493,   366,   894,   900,   359,
      33,   446,   493,   488,    52,   162,   273,     0,     0,   488,
       0,     0,     0,    34,   492,     0,     0,     0,    36,     0,
       0,   492,     0,    37,   488,    38,    39,    40,    41,     0,
     489,     0,    42,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   488,     0,    44,     0,
     716,    45,     0,    46,   717,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   490,     0,     0,   490,
     490,     0,     0,   489,     0,     0,     0,   490,   490,   489,
     635,     0,     0,     0,     0,   491,     0,     0,   491,   491,
       0,     0,     0,     0,     0,     0,   491,   491,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   489,     0,     0,     0,   490,   635,   489,   696,   698,
       0,     0,   700,     0,     0,     0,     0,   707,   696,     0,
       0,     0,   489,     0,   491,     0,     0,     0,     0,     0,
     533,  -300,     0,     0,     0,     0,     0,     0,   718,     0,
      32,     0,     0,     0,   489,     0,   493,     0,   490,   493,
     493,     0,     0,     0,   490,     0,   533,   493,   493,     0,
       0,     0,    33,     0,     0,   492,     0,   491,   492,   492,
       0,     0,     0,   491,     0,    34,   492,   492,     0,    35,
      36,     0,     0,     0,     0,    37,   490,    38,    39,    40,
      41,     0,   490,     0,    42,   493,     0,     0,    43,     0,
       0,     0,     0,     0,     0,   491,     0,   490,     0,     0,
      44,   491,     0,    45,   492,    46,     0,     0,   768,     0,
       0,     0,     0,     0,     0,     0,   491,    56,     0,   490,
       0,     0,     0,   635,     0,    80,     0,    81,   493,     0,
      82,     0,     0,     0,   493,    83,     0,     0,   491,    84,
       0,     0,   696,     0,     0,     0,     0,   492,    85,     0,
       0,     0,     0,   492,     0,    86,     0,     0,     0,     0,
      87,     0,     0,     0,    88,     0,   493,     0,     0,     0,
       0,     0,   493,     0,     0,    89,     0,    90,     0,     0,
       0,    91,     0,     0,     0,   492,     0,   493,     0,    92,
      93,   492,     0,    94,     0,     0,    95,     0,   696,     0,
     843,     0,     0,     0,     0,     0,   492,     0,     0,   493,
       0,    56,   164,   165,   166,   167,     0,     0,   168,    80,
     652,    81,     0,     0,    82,   169,     0,     0,   492,    83,
       0,     0,   880,    84,     0,     0,     0,     0,     0,   170,
     635,     0,    85,     0,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,    87,     0,   171,   172,    88,     0,
       0,   653,     0,     0,     0,     0,     0,     0,     0,    89,
       0,    90,   173,   532,     0,    91,     0,     0,   174,     0,
     175,     0,   176,    92,    93,   177,     0,    94,     0,     0,
       0,     0,     0,   178,     0,     0,     0,     0,   654,   655,
       0,     0,   656,   657,   658,   659,     0,     0,   660,   661,
       0,   662,   663,   664,   665,   666,   667,     0,     0,     0,
       0,   668,   669,   670,   671,   672,   673,   179,   180,     0,
     181,     0,     0,   182,   183,   184,     0,     0,   372,     0,
       0,     0,   185,     0,     0,   186,     0,     0,   714,   462,
     164,   165,   166,   167,     0,     0,   168,    80,   463,    81,
     845,     0,    82,   464,     0,   465,   466,    83,   846,     0,
     467,    84,     0,     0,     0,     0,     0,   170,     0,   468,
      85,   469,   470,   471,   472,     0,     0,    86,     0,     0,
       0,   473,    87,     0,   171,   172,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   474,    89,     0,    90,
     173,     0,     0,    91,     0,   475,   174,   476,   175,   477,
     176,    92,    93,   478,   479,    94,   480,     0,   277,     0,
     481,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179,   180,     0,   181,     0,
       0,   182,   183,   184,     0,   482,   362,     0,     0,     0,
     185,     0,     0,   186,   462,   164,   165,   166,   167,     0,
       0,   168,    80,   463,    81,     0,     0,    82,   464,     0,
     465,   466,    83,     0,     0,   467,    84,     0,     0,     0,
       0,     0,   170,     0,   468,    85,   469,   470,   471,   472,
       0,     0,    86,     0,     0,     0,   473,    87,     0,   171,
     172,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   474,    89,     0,    90,   173,     0,     0,    91,     0,
     475,   174,   476,   175,   477,   176,    92,    93,   478,   479,
      94,   480,     0,   277,     0,   481,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,   180,     0,   181,     0,     0,   182,   183,   184,     0,
     482,   362,     0,     0,     0,   185,     0,     0,   186,    56,
     164,   165,   166,   167,     0,     0,   168,    80,   463,    81,
       0,     0,    82,   464,     0,     0,   466,    83,     0,     0,
     467,    84,     0,     0,     0,     0,     0,   170,     0,   468,
      85,   469,   470,   471,   472,     0,     0,    86,     0,     0,
       0,   473,    87,     0,   171,   172,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   474,    89,     0,    90,
     173,     0,     0,    91,     0,   475,   174,   476,   175,   477,
     176,    92,    93,   478,   479,    94,   480,     0,     0,     0,
     481,   178,     0,     0,     0,     0,     0,     0,     0,    56,
     164,   165,   166,   167,     0,     0,   168,    80,     0,    81,
       0,     0,    82,   169,     0,     0,     0,    83,     0,     0,
       0,    84,     0,     0,     0,   179,   180,   170,   181,     0,
      85,   182,   183,   184,     0,   482,   362,    86,     0,     0,
     185,     0,    87,   186,   171,   172,    88,     0,   392,     0,
       0,     0,     0,     0,     0,   393,     0,    89,     0,    90,
     173,     0,     0,    91,     0,     0,   174,     0,   175,     0,
     176,    92,    93,   177,     0,    94,     0,     0,     0,     0,
       0,   178,    56,   164,   165,   166,   167,     0,     0,   168,
      80,     0,    81,     0,     0,    82,   169,     0,     0,     0,
      83,     0,     0,     0,    84,     0,     0,     0,     0,     0,
     170,     0,     0,    85,     0,   179,   180,     0,   181,     0,
      86,   182,   183,   184,     0,    87,     0,   171,   172,    88,
     185,     0,     0,   186,     0,     0,     0,     0,     0,     0,
      89,     0,    90,   173,   532,     0,    91,     0,     0,   174,
       0,   175,     0,   176,    92,    93,   177,     0,    94,     0,
       0,     0,     0,     0,   178,    56,   164,   165,   166,   167,
       0,     0,   168,    80,     0,    81,     0,     0,    82,   169,
       0,     0,     0,    83,     0,     0,     0,    84,     0,     0,
       0,     0,     0,   170,     0,     0,    85,     0,   179,   180,
       0,   181,     0,    86,   182,   183,   184,     0,    87,   372,
     171,   172,    88,   185,     0,     0,   186,     0,     0,     0,
       0,     0,     0,    89,     0,    90,   173,     0,     0,    91,
       0,     0,   174,     0,   175,     0,   176,    92,    93,   177,
       0,    94,     0,     0,   284,     0,     0,   178,    56,   164,
     165,   166,   167,     0,     0,   168,    80,     0,    81,     0,
       0,    82,   169,     0,     0,     0,    83,     0,     0,     0,
      84,     0,     0,     0,     0,     0,   170,     0,     0,    85,
       0,   179,   180,     0,   181,     0,    86,   182,   183,   184,
       0,    87,     0,   171,   172,    88,   185,     0,     0,   186,
       0,     0,     0,     0,     0,     0,    89,     0,    90,   173,
       0,     0,    91,     0,     0,   174,     0,   175,     0,   176,
      92,    93,   177,     0,    94,     0,     0,     0,     0,     0,
     178,   547,     0,     0,     0,     0,     0,     0,    56,   164,
     165,   166,   167,     0,     0,   168,    80,     0,    81,     0,
       0,    82,   169,     0,     0,     0,    83,     0,     0,     0,
      84,     0,     0,     0,   179,   180,   170,   181,     0,    85,
     182,   183,   184,     0,     0,     0,    86,     0,     0,   185,
       0,    87,   186,   171,   172,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    89,     0,    90,   173,
       0,     0,    91,     0,     0,   174,     0,   175,     0,   176,
      92,    93,   177,     0,    94,     0,     0,   277,     0,     0,
     178,    56,   164,   165,   166,   167,     0,     0,   168,    80,
       0,    81,     0,     0,    82,   169,     0,     0,     0,    83,
       0,     0,     0,    84,     0,     0,     0,     0,     0,   170,
       0,     0,    85,     0,   179,   180,     0,   181,     0,    86,
     182,   183,   184,     0,    87,     0,   171,   172,    88,   185,
       0,     0,   186,     0,     0,     0,     0,     0,     0,    89,
       0,    90,   173,     0,     0,    91,     0,     0,   174,     0,
     175,     0,   176,    92,    93,   177,     0,    94,     0,     0,
       0,     0,     0,   178,    56,   164,   165,   166,   167,     0,
       0,   168,    80,     0,    81,     0,     0,    82,   169,     0,
       0,     0,    83,     0,     0,     0,    84,     0,     0,     0,
       0,     0,   170,     0,     0,    85,     0,   179,   180,     0,
     181,     0,    86,   182,   183,   184,     0,    87,     0,   171,
     172,    88,   185,     0,     0,   186,     0,     0,     0,     0,
       0,     0,    89,     0,    90,   173,     0,     0,    91,     0,
       0,   174,     0,   175,     0,   176,    92,    93,   177,   450,
      94,     0,     0,     0,     0,     0,   178,    80,     0,    81,
       0,     0,    82,     0,    58,   451,     0,    83,     0,    59,
       0,    84,     0,    60,   452,   453,     0,     0,     0,     0,
      85,     0,     0,     0,     0,   454,     0,    86,    61,     0,
       0,     0,    87,     0,     0,     0,    88,     0,   184,     0,
       0,     0,     0,     0,     0,     0,     0,    89,   186,    90,
       0,     0,     0,    91,    62,     0,   450,     0,     0,     0,
       0,    92,    93,     0,    80,    94,    81,     0,   455,    82,
       0,    58,   451,     0,    83,     0,    59,     0,    84,     0,
      60,   452,   453,     0,     0,     0,     0,    85,     0,     0,
       0,     0,   454,     0,    86,    61,     0,     0,     0,    87,
       0,     0,     0,    88,     0,     0,     0,     0,     0,    56,
       0,     0,     0,   634,    89,     0,    90,    80,     0,    81,
      91,    62,    82,     0,     0,     0,     0,    83,    92,    93,
       0,    84,    94,    56,   447,   455,     0,     0,     0,     0,
      85,    80,     0,    81,     0,     0,    82,    86,     0,     0,
       0,    83,    87,     0,     0,    84,    88,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,    89,     0,    90,
       0,    86,     0,    91,     0,     0,    87,     0,     0,     0,
      88,    92,    93,     0,     0,    94,    56,     0,   448,     0,
       0,    89,     0,    90,    80,     0,    81,    91,     0,    82,
       0,     0,     0,     0,    83,    92,    93,     0,    84,    94,
       0,     0,   277,     0,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,    87,
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,     0,    90,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,    92,    93,
       0,     0,    94,     0,     0,   375
};

static const short int yycheck[] =
{
       1,   341,   280,   613,     3,    73,   362,    99,   136,   598,
      59,   498,     4,   263,   106,   107,    15,   159,   146,   258,
     601,   178,    59,   568,    15,   791,   792,     3,     3,     3,
     370,   570,     3,     3,    35,   772,   581,     4,   483,    11,
       4,   467,     4,     4,     4,     4,     4,    86,   344,   100,
       4,     0,    86,    54,   820,   344,     4,     4,    59,     4,
       4,    86,     4,     0,     4,   133,   832,    10,   136,    87,
       4,   139,    73,   100,    81,    86,    86,   625,   146,   816,
      86,   818,   819,    87,    16,     3,     4,    87,    52,     4,
     141,    51,   131,   286,    59,    99,   123,   146,   132,    71,
     639,    33,    45,   651,   591,   123,   131,    71,    68,    71,
      71,   467,   123,   344,   344,   344,    86,   123,   344,   344,
     119,   131,   171,   123,   274,   344,   130,   572,   270,   178,
     100,   123,   133,   429,   171,   136,     4,   747,   139,   678,
     429,   178,   498,   100,   910,   146,   145,   728,   123,   123,
     300,   100,   123,   152,   145,   131,   123,   156,   132,   123,
     159,   132,   123,   752,   123,   123,   323,   324,    86,   123,
     171,   908,   909,   116,   117,   123,   123,   178,   123,   123,
     248,   123,   100,   123,   723,   378,   101,   426,   280,   123,
     133,   134,   342,   803,   387,    86,   735,   289,   429,   429,
     429,    86,   344,   429,   429,   123,   171,   100,   458,   130,
     429,   461,   153,    19,   464,   343,   157,   100,    24,   160,
      14,   371,    28,    17,    87,   100,   100,   477,   478,   479,
     775,    87,   281,   282,    87,   591,    99,    43,   123,   132,
     131,   132,   598,    99,   281,   282,    99,   248,    42,   140,
      87,   100,   251,    47,    87,   100,     4,   132,   141,    87,
     100,   100,    99,    69,   845,   100,    99,   130,    62,   119,
      64,   270,   100,    99,   130,   343,    87,   130,   327,   328,
     281,   282,    76,    77,   641,   132,    80,   429,    99,   139,
     327,   328,   141,   130,   132,   236,   141,   130,   347,   100,
     349,   141,   141,   100,   130,     4,   141,    29,   357,   100,
     347,   360,   349,   362,   903,   131,   281,   282,   675,   100,
     357,    99,   362,   360,   681,   362,   327,   328,     4,   755,
     756,   129,   877,   878,   132,   100,   100,   763,   764,    61,
     141,    87,   343,    99,   141,   344,   347,   100,   349,   132,
     141,     4,   130,    99,     4,   354,   357,   140,   129,   360,
     141,   362,   327,   328,   598,    15,    88,    89,    90,    91,
      92,    93,    94,    23,   130,   801,   141,   141,   612,    15,
      86,     4,   347,    53,   349,    55,   130,    23,   141,    99,
      60,   101,   357,   362,   100,   360,   752,   130,   447,   755,
     756,   888,   451,   452,   120,   121,   122,   763,   764,     4,
     447,   123,   124,   125,   451,   452,   465,     4,   844,   329,
     330,   331,   332,   123,   124,   125,   123,   467,   465,     3,
     429,   126,   127,   711,     4,   527,   129,   102,   103,   104,
     105,   106,   107,   108,   109,   801,   447,   112,   113,   498,
     451,   452,   702,   703,   129,   456,   882,    99,   498,   101,
      99,   498,   101,   129,   465,    99,    99,   101,   101,    99,
      99,   101,   101,    86,    99,   140,   101,   129,   110,   111,
      95,    96,   447,   532,   130,   131,   451,   452,   844,    86,
     114,   115,   130,   131,   850,   532,   123,   498,   467,   925,
     465,   362,   130,   131,   130,   131,    95,    96,    99,    97,
      98,   560,   179,   180,   181,   182,   183,   184,   185,   186,
     131,   861,   862,   560,   573,   574,   882,   130,   131,   498,
     622,   532,   888,   325,   326,   131,   573,   574,   333,   334,
     913,   914,   591,   864,   865,   131,    86,   903,   597,   598,
     599,   591,   131,    86,   591,    86,   141,    86,   598,   560,
     597,   598,   599,   612,   132,   815,   141,   532,   132,   925,
      86,   572,   573,   574,   575,   612,    87,    99,   135,   137,
     136,   118,    99,   833,   834,    87,   362,    99,     4,   141,
     591,    99,    49,   141,   141,   560,   597,   598,   599,     4,
     100,    87,     4,   178,     4,   362,   467,     4,   573,   574,
       4,   612,   130,   140,    87,    87,    87,    87,    87,    99,
     712,    87,   591,    87,     4,    52,   141,    52,     4,   598,
      86,   130,   597,   130,   599,    86,    86,   498,    86,    86,
     890,   891,    86,   131,    86,    86,   141,   897,   898,   130,
      87,   130,   130,   320,   321,   322,   323,   324,   325,   326,
      99,    87,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   141,    87,    87,   362,   129,     4,    86,
     100,   100,    86,   682,   733,   734,   100,    85,   737,    99,
     758,   467,     4,   131,   130,   362,   733,   734,   130,   274,
     737,   276,   130,    86,    86,     9,   130,   140,   283,   758,
     467,   140,   752,   131,    87,   755,   756,    86,   385,     4,
     131,    99,   498,   763,   764,   300,   725,    31,    86,   304,
     591,   130,   733,   734,    99,   130,   737,   598,    87,    87,
      44,   498,   741,    87,    48,    49,   745,   746,    87,    87,
      54,    86,    56,    57,    58,    59,   131,   758,    87,    63,
     141,   801,   129,    67,     4,   340,    87,   342,   733,   734,
     131,   141,   737,    41,   140,    79,   131,   101,    82,    87,
      84,   467,   781,   752,    87,   141,   755,   756,    87,   141,
      96,    87,     4,    95,   763,   764,   371,   372,    27,     4,
     467,   850,    86,   131,   844,    86,   129,   141,    87,    87,
     850,   130,   498,   850,   130,   591,    87,   392,   393,   141,
      87,    87,   598,    98,   873,   400,    96,   826,   827,   129,
      95,   498,   801,    97,   591,    87,   873,    87,    87,   888,
     141,   598,   882,    87,   171,   712,   171,   130,   888,   850,
     393,   888,   554,   335,   386,   338,   382,   850,   857,   858,
     336,   860,   337,   903,   676,   339,   594,   729,   848,   850,
     903,   476,   873,   704,   704,   844,   811,   544,   802,   546,
     547,   850,    77,   456,     4,   925,   119,   888,     9,    48,
     429,   752,   351,   741,   755,   756,   834,   827,   826,   474,
     746,   476,   763,   764,   745,   591,   270,   860,   873,   251,
      31,   354,   598,   882,    24,   139,   161,    -1,    -1,   888,
      -1,    -1,    -1,    44,   591,    -1,    -1,    -1,    49,    -1,
      -1,   598,    -1,    54,   903,    56,    57,    58,    59,    -1,
     801,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   925,    -1,    79,    -1,
     627,    82,    -1,    84,   631,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   752,    -1,    -1,   755,
     756,    -1,    -1,   844,    -1,    -1,    -1,   763,   764,   850,
     565,    -1,    -1,    -1,    -1,   752,    -1,    -1,   755,   756,
      -1,    -1,    -1,    -1,    -1,    -1,   763,   764,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   882,    -1,    -1,    -1,   801,   601,   888,   603,   604,
      -1,    -1,   607,    -1,    -1,    -1,    -1,   612,   613,    -1,
      -1,    -1,   903,    -1,   801,    -1,    -1,    -1,    -1,    -1,
     625,     0,    -1,    -1,    -1,    -1,    -1,    -1,   633,    -1,
       9,    -1,    -1,    -1,   925,    -1,   752,    -1,   844,   755,
     756,    -1,    -1,    -1,   850,    -1,   651,   763,   764,    -1,
      -1,    -1,    31,    -1,    -1,   752,    -1,   844,   755,   756,
      -1,    -1,    -1,   850,    -1,    44,   763,   764,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,   882,    56,    57,    58,
      59,    -1,   888,    -1,    63,   801,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,   882,    -1,   903,    -1,    -1,
      79,   888,    -1,    82,   801,    84,    -1,    -1,   713,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   903,     4,    -1,   925,
      -1,    -1,    -1,   728,    -1,    12,    -1,    14,   844,    -1,
      17,    -1,    -1,    -1,   850,    22,    -1,    -1,   925,    26,
      -1,    -1,   747,    -1,    -1,    -1,    -1,   844,    35,    -1,
      -1,    -1,    -1,   850,    -1,    42,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    51,    -1,   882,    -1,    -1,    -1,
      -1,    -1,   888,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,   882,    -1,   903,    -1,    76,
      77,   888,    -1,    80,    -1,    -1,    83,    -1,   803,    -1,
     805,    -1,    -1,    -1,    -1,    -1,   903,    -1,    -1,   925,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      32,    14,    -1,    -1,    17,    18,    -1,    -1,   925,    22,
      -1,    -1,   837,    26,    -1,    -1,    -1,    -1,    -1,    32,
     845,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    66,    -1,    68,    -1,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,   110,   111,
      -1,    -1,   114,   115,   116,   117,    -1,    -1,   120,   121,
      -1,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,   133,   134,   135,   136,   137,   138,   120,   121,    -1,
     123,    -1,    -1,   126,   127,   128,    -1,    -1,   131,    -1,
      -1,    -1,   135,    -1,    -1,   138,    -1,    -1,   141,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    13,    14,
      15,    -1,    17,    18,    -1,    20,    21,    22,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,
      -1,    46,    47,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    83,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,   121,    -1,   123,    -1,
      -1,   126,   127,   128,    -1,   130,   131,    -1,    -1,    -1,
     135,    -1,    -1,   138,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    13,    14,    -1,    -1,    17,    18,    -1,
      20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    83,    -1,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,   121,    -1,   123,    -1,    -1,   126,   127,   128,    -1,
     130,   131,    -1,    -1,    -1,   135,    -1,    -1,   138,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    13,    14,
      -1,    -1,    17,    18,    -1,    -1,    21,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,
      -1,    46,    47,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    -1,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,   120,   121,    32,   123,    -1,
      35,   126,   127,   128,    -1,   130,   131,    42,    -1,    -1,
     135,    -1,    47,   138,    49,    50,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    86,     4,     5,     6,     7,     8,    -1,    -1,    11,
      12,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,   120,   121,    -1,   123,    -1,
      42,   126,   127,   128,    -1,    47,    -1,    49,    50,    51,
     135,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    -1,    68,    -1,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    86,     4,     5,     6,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    -1,   120,   121,
      -1,   123,    -1,    42,   126,   127,   128,    -1,    47,   131,
      49,    50,    51,   135,    -1,    -1,   138,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,    68,
      -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,   120,   121,    -1,   123,    -1,    42,   126,   127,   128,
      -1,    47,    -1,    49,    50,    51,   135,    -1,    -1,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      26,    -1,    -1,    -1,   120,   121,    32,   123,    -1,    35,
     126,   127,   128,    -1,    -1,    -1,    42,    -1,    -1,   135,
      -1,    47,   138,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,     4,     5,     6,     7,     8,    -1,    -1,    11,    12,
      -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,   120,   121,    -1,   123,    -1,    42,
     126,   127,   128,    -1,    47,    -1,    49,    50,    51,   135,
      -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    -1,    -1,    68,    -1,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,     4,     5,     6,     7,     8,    -1,
      -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,   120,   121,    -1,
     123,    -1,    42,   126,   127,   128,    -1,    47,    -1,    49,
      50,    51,   135,    -1,    -1,   138,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      -1,    71,    -1,    73,    -1,    75,    76,    77,    78,     4,
      80,    -1,    -1,    -1,    -1,    -1,    86,    12,    -1,    14,
      -1,    -1,    17,    -1,    19,    20,    -1,    22,    -1,    24,
      -1,    26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    -1,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,   138,    64,
      -1,    -1,    -1,    68,    69,    -1,     4,    -1,    -1,    -1,
      -1,    76,    77,    -1,    12,    80,    14,    -1,    83,    17,
      -1,    19,    20,    -1,    22,    -1,    24,    -1,    26,    -1,
      28,    29,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,     4,
      -1,    -1,    -1,   128,    62,    -1,    64,    12,    -1,    14,
      68,    69,    17,    -1,    -1,    -1,    -1,    22,    76,    77,
      -1,    26,    80,     4,    29,    83,    -1,    -1,    -1,    -1,
      35,    12,    -1,    14,    -1,    -1,    17,    42,    -1,    -1,
      -1,    22,    47,    -1,    -1,    26,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    62,    -1,    64,
      -1,    42,    -1,    68,    -1,    -1,    47,    -1,    -1,    -1,
      51,    76,    77,    -1,    -1,    80,     4,    -1,    83,    -1,
      -1,    62,    -1,    64,    12,    -1,    14,    68,    -1,    17,
      -1,    -1,    -1,    -1,    22,    76,    77,    -1,    26,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    80,    -1,    -1,    83
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,    81,   278,   279,   287,   288,   289,   291,     4,   145,
     284,   285,     0,   280,   282,   292,   293,   294,   298,   347,
     357,   372,   380,   381,   382,   383,   392,   288,   132,   140,
     130,     4,     9,    31,    44,    48,    49,    54,    56,    57,
      58,    59,    63,    67,    79,    82,    84,   295,   296,   297,
     280,   293,   383,   100,   290,   132,     4,   284,    19,    24,
      28,    43,    69,   297,    29,    61,    88,    89,    90,    91,
      92,    93,    94,   384,   385,   386,   284,   131,   286,   299,
      12,    14,    17,    22,    26,    35,    42,    47,    51,    62,
      64,    68,    76,    77,    80,    83,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   157,   284,   314,     4,
       4,     4,   146,   284,   387,   388,   390,   129,   130,   279,
     130,   283,     4,   156,   123,     3,   159,   159,   159,     4,
     129,   373,   374,   129,   358,   359,   129,   348,   349,    99,
     101,    86,   389,   391,   281,   292,   129,   300,   301,   123,
      86,   152,   131,   375,   146,   302,   131,   360,   302,   131,
     350,   101,   388,   393,     5,     6,     7,     8,    11,    18,
      32,    49,    50,    65,    71,    73,    75,    78,    86,   120,
     121,   123,   126,   127,   128,   135,   138,   143,   144,   150,
     154,   163,   164,   165,   166,   167,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   180,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   209,
     212,   284,   141,   154,   302,   131,   303,   280,   313,   316,
     317,   318,   320,   280,   376,   377,   378,   283,    99,   280,
     361,   362,   363,   364,   367,   368,   370,   283,   280,   294,
     308,   309,   310,   311,   321,   328,   332,   335,   340,   351,
     352,   353,   283,   393,   100,   132,    86,    83,   147,   148,
     157,    86,    86,    86,    83,   150,   154,   197,   212,   284,
     191,   191,   191,   191,   191,   191,   191,   191,   132,   132,
     100,   132,    86,    87,    99,   120,   121,   122,   102,   103,
     104,   105,   106,   107,   108,   109,   112,   113,   140,   211,
     123,   124,   125,   126,   127,   110,   111,    10,    45,   116,
     117,   133,   134,   114,   115,   135,   136,   137,   118,   119,
     139,    86,   100,    99,   304,   283,    53,    55,    60,   319,
      87,    99,     4,   141,    99,   146,    49,   366,   141,   363,
     295,   130,   131,   217,   315,   141,   353,   171,     4,   212,
      86,   100,   131,   354,   147,    83,   147,   212,   193,   123,
     159,   194,   195,   196,   194,   123,    87,   159,     4,     4,
     171,     4,    53,    60,   161,   162,   168,   212,   212,     4,
     210,   191,   191,   191,   191,   197,   197,   198,   198,   147,
     147,   199,   199,   199,   199,   200,   200,   201,   202,   203,
     204,   205,   212,   168,   171,   302,   280,   294,   305,   306,
     307,   308,   309,   310,   321,   328,   332,   335,   340,   344,
     147,   147,   130,   317,   140,   141,   378,    29,    83,   147,
       4,    20,    29,    30,    40,    83,   147,   333,   336,   337,
     339,   341,     4,    13,    18,    20,    21,    25,    34,    36,
      37,    38,    39,    46,    61,    70,    72,    74,    78,    79,
      81,    85,   130,   147,   150,   154,   167,   174,   175,   177,
     189,   190,   191,   209,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   228,   231,   232,   233,   234,   235,   242,
     243,   244,   245,   246,   256,   257,   258,   259,   260,   261,
     263,   264,   269,   270,   271,   272,   274,   284,   101,    87,
     168,   171,    66,   212,   226,   227,   354,   355,   356,    87,
     181,    87,    87,   194,    87,   196,    87,    87,   188,   194,
     101,   160,   212,   160,    99,    87,   212,   208,    87,   101,
     295,   141,   307,     4,     4,   379,   147,   365,     4,    71,
      86,   147,   147,    52,    52,   312,     4,    52,    71,   224,
     225,   284,   285,   334,   396,   130,   217,   345,   130,   217,
     346,   129,   130,   217,   147,   130,   216,    86,    86,    86,
       4,    15,    23,    86,    86,   212,   262,    86,   262,   217,
     217,   217,    86,    86,     4,   224,   141,   215,   130,   130,
     130,    87,   101,   147,   141,    99,    87,    87,   191,   191,
     191,    87,   162,   129,   128,   212,   213,     4,     4,    86,
     396,   100,   313,     4,   229,   230,   224,   284,   147,   147,
     284,   140,    32,    73,   110,   111,   114,   115,   116,   117,
     120,   121,   123,   124,   125,   126,   127,   128,   133,   134,
     135,   136,   137,   138,   338,   100,    99,   130,    86,   396,
      71,   100,   131,   215,   229,    85,   147,   223,   232,   249,
     252,   255,   147,   130,   213,   130,   212,   214,   212,   130,
     212,   130,    16,    33,   265,   266,   268,   212,   223,   273,
     214,   158,   159,   100,   141,   226,   191,   191,   212,     4,
     130,   131,   371,    86,   313,   131,   316,    87,   140,    99,
     130,   130,   394,    86,    86,    86,   226,    86,   316,   225,
     313,   131,   316,   280,   322,   325,   326,    86,     4,   275,
     276,   130,    99,     4,   130,    87,    87,    87,    86,   217,
     217,   266,   268,    87,    87,   179,   354,   158,   212,    86,
     141,   313,    87,   280,   369,   101,   129,   342,   343,   213,
     230,   131,   147,   147,   313,   147,   101,    87,   322,   101,
      95,    96,   141,   280,   323,   326,   280,   324,   325,   214,
     140,    87,    99,   247,   232,    41,   216,   216,   131,   236,
     146,   154,   216,   216,   101,    87,    87,   371,    95,    96,
     141,   396,    11,    71,   280,   329,   330,   331,     4,     4,
      87,     4,   141,   397,   397,   397,    87,   277,   216,   276,
     214,   250,   253,   212,    27,    15,    23,   237,   238,   239,
     240,   241,     4,   267,   267,   217,   371,   371,   371,   397,
     131,    86,    86,    97,    98,   141,   280,   331,   280,   330,
      87,    87,    87,    99,   397,   130,   217,   327,   327,   130,
     212,   130,    87,   216,   213,   129,   141,   239,   219,   241,
      87,    87,   280,   280,   369,   168,   168,   395,   395,   395,
     147,   396,   396,   248,   216,   129,   217,   217,    96,    95,
     141,    87,    87,   217,   217,     4,   251,   254,   255,   371,
     371,   397,   394,   394,    87,    87,   216
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
#line 114 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"ggG" << endl;;}
    break;

  case 13:
#line 115 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"fff" << endl;;}
    break;

  case 21:
#line 131 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"hhh" << endl;;}
    break;

  case 28:
#line 136 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::int" << endl;;}
    break;

  case 38:
#line 146 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc:void3"<<endl;;}
    break;

  case 92:
#line 249 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc:void4"<<endl;;}
    break;

  case 122:
#line 305 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc:void5"<<endl;;}
    break;

  case 161:
#line 371 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::7"<<endl;;}
    break;

  case 162:
#line 371 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::6"<<endl;;}
    break;

  case 163:
#line 374 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::1"<<endl;;}
    break;

  case 164:
#line 374 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::5"<<endl;;}
    break;

  case 165:
#line 377 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::equal4" << endl;;}
    break;

  case 180:
#line 392 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::labeled_statement" << endl;;}
    break;

  case 181:
#line 393 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::declaration_statement" << endl;;}
    break;

  case 182:
#line 394 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::embedded_statement" << endl;;}
    break;

  case 201:
#line 424 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon21"<<endl;;}
    break;

  case 203:
#line 430 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon22"<<endl;;}
    break;

  case 204:
#line 431 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon23"<<endl;;}
    break;

  case 214:
#line 453 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::10"<<endl;;}
    break;

  case 215:
#line 456 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::9"<<endl;;}
    break;

  case 218:
#line 463 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon24"<<endl;;}
    break;

  case 221:
#line 468 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::*1"<<endl;;}
    break;

  case 247:
#line 520 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon25"<<endl;;}
    break;

  case 248:
#line 523 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon26"<<endl;;}
    break;

  case 249:
#line 523 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon27"<<endl;;}
    break;

  case 269:
#line 562 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon1"<<endl;;}
    break;

  case 270:
#line 565 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon2"<<endl;;}
    break;

  case 271:
#line 568 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon3"<<endl;;}
    break;

  case 272:
#line 569 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon4"<<endl;;}
    break;

  case 273:
#line 570 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon5"<<endl;;}
    break;

  case 274:
#line 573 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon6"<<endl;;}
    break;

  case 277:
#line 580 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon7"<<endl;;}
    break;

  case 298:
#line 628 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::equal1" << endl;;}
    break;

  case 300:
#line 631 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Empty"<<endl;;}
    break;

  case 301:
#line 632 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::start"<<endl;;}
    break;

  case 310:
#line 651 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon8"<<endl;;}
    break;

  case 320:
#line 679 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::equal2" << endl;;}
    break;

  case 321:
#line 679 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon9"<<endl;;}
    break;

  case 322:
#line 682 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon10"<<endl;;}
    break;

  case 350:
#line 733 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    { cout<<"Yacc::Class"<<endl;;}
    break;

  case 359:
#line 749 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"---"<<endl;;}
    break;

  case 360:
#line 749 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"---"<<endl;;}
    break;

  case 375:
#line 773 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon11"<<endl;;}
    break;

  case 376:
#line 776 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon12"<<endl;;}
    break;

  case 379:
#line 784 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc:void6"<<endl;;}
    break;

  case 384:
#line 792 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc:void1"<<endl;;}
    break;

  case 386:
#line 796 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon13"<<endl;;}
    break;

  case 406:
#line 850 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon14"<<endl;;}
    break;

  case 407:
#line 853 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon15"<<endl;;}
    break;

  case 454:
#line 943 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon16"<<endl;;}
    break;

  case 456:
#line 947 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon17"<<endl;;}
    break;

  case 495:
#line 1030 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc:void2"<<endl;;}
    break;

  case 506:
#line 1062 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon18"<<endl;;}
    break;

  case 519:
#line 1091 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::equal3" << endl;;}
    break;

  case 521:
#line 1096 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {cout<<"yacc::Semicolon19"<<endl;;}
    break;

  case 546:
#line 1151 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {;}
    break;

  case 547:
#line 1154 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {;}
    break;

  case 548:
#line 1157 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {;}
    break;

  case 549:
#line 1160 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {;}
    break;

  case 550:
#line 1163 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {;}
    break;

  case 551:
#line 1166 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"
    {;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3054 "yacc.cpp"

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


#line 1169 "C:\\Users\\Ranim\\Documents\\Visual Studio 2012\\Projects\\Compare\\ConsoleApplication2 - 9 - Copy (2)\\yacc.y"




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
	freopen("code.txt","r",stdin);
   	freopen("out.txt","w",stdout);
	Parser* p = new Parser();
	p->parse();
}

