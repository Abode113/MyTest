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
     WHITE_SPACE = 261,
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
     OpenBracket = 342,
     CloseBracket = 343,
     ASSEMBLY = 344,
     FIELD = 345,
     METHOD = 346,
     MODULE = 347,
     PARAM = 348,
     PROPERTY = 349,
     TYPE = 350,
     GET = 351,
     SET = 352,
     ADD = 353,
     REMOVE = 354,
     COMMA = 355,
     LEFT_BRACKET = 356,
     RIGHT_BRACKET = 357,
     PLUSEQ = 358,
     MINUSEQ = 359,
     STAREQ = 360,
     DIVEQ = 361,
     MODEQ = 362,
     XOREQ = 363,
     ANDEQ = 364,
     OREQ = 365,
     LTLT = 366,
     GTGT = 367,
     GTGTEQ = 368,
     LTLTEQ = 369,
     EQEQ = 370,
     NOTEQ = 371,
     LEQ = 372,
     GEQ = 373,
     ANDAND = 374,
     OROR = 375,
     PLUSPLUS = 376,
     MINUSMINUS = 377,
     ARROW = 378,
     Multiple_N1 = 379,
     PercenSign = 380,
     Division = 381,
     Dash = 382,
     Plus_S = 383,
     Maddeh = 384,
     Colon = 385,
     Semicolon = 386,
     OpenBracket_T1 = 387,
     Dot = 388,
     Less = 389,
     Greater = 390,
     And = 391,
     Shapo = 392,
     Vertical_Mark = 393,
     Ta3ajob = 394,
     Quest_Mark = 395,
     Equal = 396,
     CloseBracket_T1 = 397,
     WHILE = 400
   };
#endif
/* Tokens.  */
#define RANK_SPECIFIER 258
#define IDENTIFIER 259
#define NoId 260
#define WHITE_SPACE 261
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
#define OpenBracket 342
#define CloseBracket 343
#define ASSEMBLY 344
#define FIELD 345
#define METHOD 346
#define MODULE 347
#define PARAM 348
#define PROPERTY 349
#define TYPE 350
#define GET 351
#define SET 352
#define ADD 353
#define REMOVE 354
#define COMMA 355
#define LEFT_BRACKET 356
#define RIGHT_BRACKET 357
#define PLUSEQ 358
#define MINUSEQ 359
#define STAREQ 360
#define DIVEQ 361
#define MODEQ 362
#define XOREQ 363
#define ANDEQ 364
#define OREQ 365
#define LTLT 366
#define GTGT 367
#define GTGTEQ 368
#define LTLTEQ 369
#define EQEQ 370
#define NOTEQ 371
#define LEQ 372
#define GEQ 373
#define ANDAND 374
#define OROR 375
#define PLUSPLUS 376
#define MINUSMINUS 377
#define ARROW 378
#define Multiple_N1 379
#define PercenSign 380
#define Division 381
#define Dash 382
#define Plus_S 383
#define Maddeh 384
#define Colon 385
#define Semicolon 386
#define OpenBracket_T1 387
#define Dot 388
#define Less 389
#define Greater 390
#define And 391
#define Shapo 392
#define Vertical_Mark 393
#define Ta3ajob 394
#define Quest_Mark 395
#define Equal 396
#define CloseBracket_T1 397
#define WHILE 400




/* Copy the first part of user declarations.  */
#line 2 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"

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

	int lc=0;
	int rc=0;

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
#line 101 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
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
#line 415 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 427 "yacc.cpp"

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
#define YYLAST   2949

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  149
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  271
/* YYNRULES -- Number of rules. */
#define YYNRULES  587
/* YYNRULES -- Number of states. */
#define YYNSTATES  971

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   403

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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    70,    71,    75,    78,    81,
      84,    85,    88,    90,    92,    94,    98,   100,   103,   106,
     108,   110,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   130,   132,   134,   138,   142,   146,   150,   155,   160,
     161,   163,   168,   173,   174,   176,   178,   182,   184,   188,
     193,   196,   199,   201,   207,   215,   219,   220,   222,   227,
     228,   234,   239,   244,   248,   251,   256,   258,   260,   262,
     264,   266,   268,   271,   274,   276,   279,   282,   284,   287,
     290,   293,   295,   297,   299,   304,   310,   317,   323,   329,
     330,   337,   338,   340,   342,   345,   347,   349,   351,   355,
     359,   363,   365,   369,   373,   375,   379,   383,   385,   389,
     393,   397,   401,   405,   409,   411,   415,   419,   421,   425,
     427,   431,   433,   437,   439,   443,   445,   449,   451,   452,
     459,   460,   465,   467,   469,   471,   473,   475,   477,   479,
     481,   483,   485,   487,   489,   491,   493,   495,   497,   499,
     501,   503,   505,   507,   509,   511,   513,   515,   517,   519,
     521,   523,   525,   527,   528,   533,   534,   536,   538,   541,
     543,   547,   550,   553,   556,   558,   562,   564,   568,   570,
     572,   574,   580,   584,   586,   590,   594,   597,   599,   601,
     603,   605,   607,   609,   611,   613,   615,   621,   629,   632,
     637,   643,   644,   649,   650,   652,   654,   657,   660,   662,
     665,   669,   672,   675,   677,   679,   681,   683,   686,   692,
     700,   703,   704,   705,   717,   722,   723,   725,   726,   728,
     729,   731,   733,   735,   737,   739,   741,   745,   754,   756,
     758,   760,   762,   764,   767,   769,   772,   776,   781,   785,
     789,   790,   792,   796,   800,   804,   809,   812,   815,   817,
     820,   827,   834,   837,   838,   840,   843,   846,   849,   855,
     861,   863,   865,   872,   874,   878,   879,   884,   887,   890,
     891,   893,   894,   896,   897,   899,   905,   906,   908,   910,
     913,   916,   920,   921,   927,   929,   932,   934,   936,   937,
     944,   948,   950,   953,   955,   957,   959,   961,   963,   965,
     967,   968,   970,   972,   975,   977,   979,   981,   983,   985,
     987,   989,   991,   993,   995,   997,   999,  1001,  1003,  1004,
    1013,  1021,  1022,  1024,  1027,  1030,  1035,  1037,  1041,  1042,
    1047,  1048,  1050,  1052,  1055,  1057,  1059,  1061,  1063,  1065,
    1067,  1069,  1071,  1073,  1075,  1077,  1084,  1090,  1093,  1101,
    1109,  1116,  1117,  1126,  1127,  1129,  1131,  1133,  1135,  1137,
    1139,  1143,  1145,  1147,  1152,  1153,  1155,  1157,  1162,  1163,
    1164,  1176,  1179,  1182,  1183,  1185,  1186,  1188,  1194,  1200,
    1202,  1204,  1211,  1212,  1213,  1226,  1229,  1232,  1238,  1244,
    1245,  1246,  1257,  1263,  1269,  1272,  1277,  1279,  1281,  1289,
    1300,  1302,  1304,  1306,  1308,  1310,  1312,  1314,  1316,  1318,
    1320,  1322,  1324,  1326,  1328,  1330,  1332,  1334,  1336,  1338,
    1340,  1342,  1344,  1352,  1360,  1365,  1371,  1372,  1374,  1380,
    1386,  1394,  1396,  1398,  1400,  1402,  1410,  1411,  1413,  1416,
    1417,  1422,  1423,  1425,  1427,  1430,  1432,  1434,  1436,  1438,
    1440,  1442,  1444,  1446,  1448,  1452,  1457,  1458,  1460,  1462,
    1466,  1474,  1475,  1477,  1480,  1481,  1486,  1487,  1489,  1491,
    1494,  1496,  1498,  1500,  1502,  1511,  1512,  1522,  1523,  1525,
    1526,  1527,  1539,  1540,  1541,  1556,  1560,  1564,  1571,  1578,
    1585,  1587,  1588,  1592,  1600,  1601,  1603,  1606,  1610,  1615,
    1616,  1618,  1620,  1624,  1627,  1628,  1634,  1644,  1646,  1648,
    1651,  1658,  1666,  1667,  1669,  1672,  1674,  1676,  1678,  1680,
    1682,  1684,  1686,  1688,  1690,  1692,  1696,  1699,  1700,  1702,
    1704,  1708,  1710,  1712,  1714,  1716,  1718,  1720,  1722,  1724,
    1726,  1728,  1730,  1731,  1732,  1733,  1734,  1735
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     285,     0,    -1,   151,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,    52,    -1,    75,    -1,    34,    -1,   291,
      -1,   154,    -1,   162,    -1,   155,    -1,   159,    -1,   160,
      -1,   156,    -1,    14,    -1,   157,    -1,   158,    -1,    24,
      -1,    64,    -1,    16,    -1,    66,    -1,    82,    -1,    44,
      -1,    78,    -1,    49,    -1,    79,    -1,    19,    -1,    37,
      -1,    28,    -1,    53,    -1,    70,    -1,   153,   124,    -1,
      -1,    85,   161,   124,    -1,   162,   164,    -1,   154,   164,
      -1,   291,   164,    -1,    -1,   164,   163,    -1,     3,    -1,
     217,    -1,   167,    -1,   166,   100,   167,    -1,   217,    -1,
      62,   165,    -1,    55,   165,    -1,   170,    -1,   169,    -1,
     150,    -1,   183,    -1,   171,    -1,   172,    -1,   174,    -1,
     177,    -1,   178,    -1,   181,    -1,   185,    -1,   191,    -1,
     187,    -1,   188,    -1,    87,   217,    88,    -1,   168,   133,
       4,    -1,   155,   133,     4,    -1,   159,   133,     4,    -1,
     169,    87,   173,    88,    -1,   291,    87,   173,    88,    -1,
      -1,   166,    -1,   168,   101,   176,   102,    -1,   291,   101,
     176,   102,    -1,    -1,   176,    -1,   217,    -1,   176,   100,
     217,    -1,    73,    -1,    13,   133,     4,    -1,    13,   101,
     176,   102,    -1,   192,   121,    -1,   192,   122,    -1,   182,
      -1,    51,   153,    87,   173,    88,    -1,    51,   154,   101,
     176,   102,   163,   184,    -1,    51,   162,   369,    -1,    -1,
     369,    -1,    77,    87,   153,    88,    -1,    -1,    77,    87,
      85,   186,    88,    -1,    20,    87,   217,    88,    -1,    80,
      87,   217,    88,    -1,   192,   123,     4,    -1,   136,   196,
      -1,    67,    87,   153,    88,    -1,   168,    -1,   291,    -1,
     179,    -1,   180,    -1,   189,    -1,   192,    -1,   139,   196,
      -1,   129,   196,    -1,   197,    -1,   121,   196,    -1,   122,
     196,    -1,   193,    -1,   128,   196,    -1,   127,   196,    -1,
     124,   196,    -1,   194,    -1,   195,    -1,   190,    -1,    87,
     217,    88,   193,    -1,    87,   202,   124,    88,   196,    -1,
      87,   291,   164,   199,    88,   196,    -1,    87,   155,   199,
      88,   196,    -1,    87,   159,   199,    88,   196,    -1,    -1,
      87,    85,   198,   199,    88,   196,    -1,    -1,   200,    -1,
     201,    -1,   200,   201,    -1,   164,    -1,   124,    -1,   196,
      -1,   202,   124,   196,    -1,   202,   126,   196,    -1,   202,
     125,   196,    -1,   202,    -1,   203,   128,   202,    -1,   203,
     127,   202,    -1,   203,    -1,   204,   111,   203,    -1,   204,
     112,   203,    -1,   204,    -1,   205,   134,   204,    -1,   205,
     135,   204,    -1,   205,   117,   204,    -1,   205,   118,   204,
      -1,   205,    47,   153,    -1,   205,    12,   153,    -1,   205,
      -1,   206,   115,   205,    -1,   206,   116,   205,    -1,   206,
      -1,   207,   136,   206,    -1,   207,    -1,   208,   137,   207,
      -1,   208,    -1,   209,   138,   208,    -1,   209,    -1,   210,
     119,   209,    -1,   210,    -1,   211,   120,   210,    -1,   211,
      -1,    -1,   211,   140,   217,   213,   130,   217,    -1,    -1,
     196,   216,   215,   217,    -1,   141,    -1,   103,    -1,   104,
      -1,   105,    -1,   106,    -1,   107,    -1,   108,    -1,   109,
      -1,   110,    -1,   113,    -1,   114,    -1,   212,    -1,   214,
      -1,   217,    -1,   217,    -1,   227,    -1,   228,    -1,   221,
      -1,   222,    -1,   226,    -1,   237,    -1,   239,    -1,   249,
      -1,   264,    -1,   271,    -1,   276,    -1,   277,    -1,   278,
      -1,   279,    -1,   250,    -1,   281,    -1,    -1,   132,   223,
     224,   142,    -1,    -1,   225,    -1,   220,    -1,   225,   220,
      -1,   131,    -1,     4,   130,   220,    -1,   229,   131,    -1,
     234,   131,    -1,   153,   230,    -1,   231,    -1,   230,   100,
     231,    -1,     4,    -1,     4,   141,   232,    -1,   217,    -1,
     369,    -1,   233,    -1,    68,   153,   101,   217,   102,    -1,
      22,   153,   235,    -1,   236,    -1,   235,   100,   236,    -1,
       4,   141,   218,    -1,   238,   131,    -1,   172,    -1,   182,
      -1,   214,    -1,   179,    -1,   180,    -1,   194,    -1,   195,
      -1,   240,    -1,   241,    -1,    41,    87,   219,    88,   221,
      -1,    41,    87,   219,    88,   221,    29,   221,    -1,    29,
     221,    -1,    41,    87,    88,   221,    -1,    72,    87,   217,
      88,   242,    -1,    -1,   132,   243,   244,   142,    -1,    -1,
     245,    -1,   246,    -1,   245,   246,    -1,   247,   225,    -1,
     248,    -1,   247,   248,    -1,    17,   218,   130,    -1,    25,
     130,    -1,    17,   130,    -1,   251,    -1,   252,    -1,   253,
      -1,   263,    -1,    81,   222,    -1,   145,    87,   219,    88,
     221,    -1,    27,   221,   145,    87,   219,    88,   131,    -1,
      27,   221,    -1,    -1,    -1,    38,    87,   256,   131,   254,
     257,   131,   255,   258,    88,   221,    -1,    38,    87,    88,
     221,    -1,    -1,   259,    -1,    -1,   260,    -1,    -1,   261,
      -1,   229,    -1,   262,    -1,   219,    -1,   262,    -1,   238,
      -1,   262,   100,   238,    -1,    39,    87,   153,     4,    43,
     217,    88,   221,    -1,   265,    -1,   266,    -1,   267,    -1,
     268,    -1,   270,    -1,    15,   131,    -1,    15,    -1,    23,
     131,    -1,    40,     4,   131,    -1,    40,    17,   218,   131,
      -1,    40,    25,   131,    -1,    63,   269,   131,    -1,    -1,
     217,    -1,    74,   269,   131,    -1,    76,   222,   272,    -1,
      76,   222,   275,    -1,    76,   222,   272,   275,    -1,    76,
     222,    -1,   222,   272,    -1,   273,    -1,   272,   273,    -1,
      18,    87,   159,   274,    88,   222,    -1,    18,    87,   291,
     274,    88,   222,    -1,    18,   222,    -1,    -1,     4,    -1,
      35,   222,    -1,    20,   222,    -1,    80,   222,    -1,    48,
      87,   217,    88,   221,    -1,    83,    87,   280,    88,   221,
      -1,   229,    -1,   217,    -1,    36,    87,   153,   282,    88,
     221,    -1,   283,    -1,   282,   100,   283,    -1,    -1,     4,
     141,   284,   217,    -1,   286,   287,    -1,   286,   300,    -1,
      -1,   295,    -1,    -1,   402,    -1,    -1,   300,    -1,   287,
      50,   291,   293,   290,    -1,    -1,   131,    -1,     4,    -1,
     292,     4,    -1,     4,   133,    -1,   292,     4,   133,    -1,
      -1,   132,   294,   286,   288,   142,    -1,   296,    -1,   295,
     296,    -1,   297,    -1,   299,    -1,    -1,    83,     4,   141,
     298,   291,   131,    -1,    83,   152,   131,    -1,   301,    -1,
     300,   301,    -1,   289,    -1,   302,    -1,   306,    -1,   361,
      -1,   372,    -1,   393,    -1,   401,    -1,    -1,   304,    -1,
     305,    -1,   304,   305,    -1,    11,    -1,    33,    -1,    46,
      -1,    51,    -1,    56,    -1,    58,    -1,    59,    -1,    60,
      -1,    61,    -1,    65,    -1,    69,    -1,    81,    -1,    84,
      -1,    86,    -1,    -1,   287,   303,    21,   307,     4,   308,
     311,   290,    -1,   287,   303,    21,     5,   308,   311,   290,
      -1,    -1,   309,    -1,   130,   159,    -1,   130,   310,    -1,
     130,   159,   100,   310,    -1,   291,    -1,   310,   100,   291,
      -1,    -1,   132,   312,   313,   142,    -1,    -1,   314,    -1,
     315,    -1,   314,   315,    -1,   316,    -1,   317,    -1,   318,
      -1,   329,    -1,   338,    -1,   344,    -1,   349,    -1,   354,
      -1,   358,    -1,   302,    -1,   413,    -1,   287,   303,    22,
     153,   235,   131,    -1,   287,   303,   153,   230,   131,    -1,
     319,   323,    -1,   287,   303,   153,   291,    87,   321,    88,
      -1,   287,   303,   153,     5,    87,   321,    88,    -1,   287,
     303,   153,    87,   321,    88,    -1,    -1,   287,   303,    85,
     320,   291,    87,   321,    88,    -1,    -1,   324,    -1,   153,
      -1,    85,    -1,   222,    -1,   131,    -1,   325,    -1,   324,
     100,   325,    -1,   326,    -1,   328,    -1,   287,   327,   153,
       4,    -1,    -1,    62,    -1,    55,    -1,   287,    57,   153,
       4,    -1,    -1,    -1,   287,   303,   153,   291,   418,   132,
     330,   332,   142,   331,   419,    -1,   335,   333,    -1,   336,
     334,    -1,    -1,   336,    -1,    -1,   335,    -1,   287,    96,
     419,   337,   418,    -1,   287,    97,   419,   337,   418,    -1,
     222,    -1,   131,    -1,   287,   303,    31,   153,   230,   131,
      -1,    -1,    -1,   287,   303,    31,   153,   291,   416,   132,
     339,   341,   142,   340,   417,    -1,   342,   343,    -1,   343,
     342,    -1,   287,    98,   417,   222,   416,    -1,   287,    99,
     417,   222,   416,    -1,    -1,    -1,   287,   303,   347,   418,
     132,   345,   332,   142,   346,   419,    -1,   153,    73,   101,
     324,   102,    -1,   153,   348,   101,   324,   102,    -1,   292,
      73,    -1,   287,   303,   350,   359,    -1,   351,    -1,   353,
      -1,   153,    54,   352,    87,   153,     4,    88,    -1,   153,
      54,   352,    87,   153,     4,   100,   153,     4,    88,    -1,
     128,    -1,   127,    -1,   139,    -1,   129,    -1,   121,    -1,
     122,    -1,    75,    -1,    34,    -1,   124,    -1,   126,    -1,
     125,    -1,   136,    -1,   138,    -1,   137,    -1,   111,    -1,
     112,    -1,   115,    -1,   116,    -1,   135,    -1,   134,    -1,
     118,    -1,   117,    -1,    42,    54,   153,    87,   153,     4,
      88,    -1,    32,    54,   153,    87,   153,     4,    88,    -1,
     287,   303,   355,   360,    -1,     4,    87,   321,    88,   356,
      -1,    -1,   357,    -1,   130,    13,    87,   173,    88,    -1,
     130,    73,    87,   173,    88,    -1,   287,   303,   129,     4,
      87,    88,   222,    -1,   222,    -1,   131,    -1,   222,    -1,
     131,    -1,   287,   303,    71,     4,   362,   364,   290,    -1,
      -1,   363,    -1,   130,   310,    -1,    -1,   132,   365,   366,
     142,    -1,    -1,   367,    -1,   368,    -1,   367,   368,    -1,
     316,    -1,   317,    -1,   318,    -1,   329,    -1,   338,    -1,
     344,    -1,   349,    -1,   354,    -1,   302,    -1,   132,   370,
     142,    -1,   132,   371,   100,   142,    -1,    -1,   371,    -1,
     232,    -1,   371,   100,   232,    -1,   287,   303,    45,     4,
     373,   375,   290,    -1,    -1,   374,    -1,   130,   310,    -1,
      -1,   132,   376,   377,   142,    -1,    -1,   378,    -1,   379,
      -1,   378,   379,    -1,   380,    -1,   383,    -1,   390,    -1,
     386,    -1,   287,   382,   153,     4,    87,   321,    88,   391,
      -1,    -1,   287,   382,    85,   381,     4,    87,   321,    88,
     391,    -1,    -1,    51,    -1,    -1,    -1,   287,   382,   153,
       4,   418,   132,   384,   389,   142,   385,   419,    -1,    -1,
      -1,   287,   382,   153,    73,   101,   324,   102,   418,   132,
     387,   389,   142,   388,   419,    -1,   287,    96,   391,    -1,
     287,    97,   391,    -1,   287,    96,   391,   287,    97,   391,
      -1,   287,    97,   391,   287,    96,   391,    -1,   287,   382,
      31,   153,     4,   391,    -1,   131,    -1,    -1,   132,   392,
     142,    -1,   287,   303,    30,     4,   394,   396,   290,    -1,
      -1,   395,    -1,   130,   157,    -1,   132,   397,   142,    -1,
     132,   398,   100,   142,    -1,    -1,   398,    -1,   399,    -1,
     398,   100,   399,    -1,   287,     4,    -1,    -1,   287,     4,
     141,   400,   218,    -1,   287,   303,    26,   322,     4,    87,
     321,    88,   131,    -1,   403,    -1,   404,    -1,   403,   404,
      -1,   414,   101,   405,   408,   102,   415,    -1,   414,   101,
     405,   408,   100,   102,   415,    -1,    -1,   406,    -1,   407,
     130,    -1,    89,    -1,    90,    -1,    31,    -1,    91,    -1,
      92,    -1,    93,    -1,    94,    -1,    63,    -1,    95,    -1,
     409,    -1,   408,   100,   409,    -1,   411,   410,    -1,    -1,
     412,    -1,   291,    -1,    87,   175,    88,    -1,   240,    -1,
     241,    -1,   265,    -1,   266,    -1,   267,    -1,   268,    -1,
     270,    -1,   251,    -1,   252,    -1,   253,    -1,   263,    -1,
      -1,    -1,    -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   118,   118,   119,   120,   121,   122,   123,   126,   127,
     134,   139,   140,   144,   145,   146,   149,   150,   153,   154,
     155,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     161,   161,   164,   164,   167,   168,   168,   171,   172,   173,
     175,   177,   180,   184,   188,   189,   192,   193,   194,   197,
     198,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   215,   218,   219,   220,   223,   224,   226,
     228,   231,   232,   234,   236,   239,   240,   243,   246,   247,
     250,   253,   256,   259,   262,   263,   265,   267,   270,   271,
     271,   274,   277,   280,   283,   286,   289,   290,   291,   292,
     293,   296,   297,   298,   299,   302,   305,   308,   309,   310,
     311,   312,   313,   314,   322,   323,   324,   325,   326,   327,
     327,   329,   331,   334,   335,   338,   339,   342,   343,   344,
     345,   348,   349,   350,   353,   354,   355,   358,   359,   360,
     361,   362,   363,   364,   367,   368,   369,   372,   373,   376,
     377,   380,   381,   384,   385,   388,   389,   392,   393,   393,
     396,   396,   399,   399,   399,   399,   399,   399,   400,   400,
     400,   400,   400,   403,   404,   407,   410,   414,   415,   416,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   434,   434,   436,   438,   442,   443,   446,
     449,   452,   453,   456,   460,   461,   464,   465,   468,   469,
     470,   473,   476,   479,   480,   483,   486,   489,   490,   491,
     492,   493,   494,   495,   498,   499,   502,   503,   504,   506,
     510,   513,   513,   515,   517,   520,   521,   524,   527,   528,
     531,   532,   533,   537,   538,   539,   540,   543,   546,   549,
     550,   555,   555,   555,   556,   559,   561,   563,   565,   567,
     569,   572,   573,   576,   579,   582,   583,   586,   589,   590,
     591,   592,   593,   596,   597,   603,   606,   607,   608,   611,
     613,   615,   618,   621,   622,   623,   624,   626,   633,   634,
     637,   638,   639,   641,   643,   646,   649,   652,   655,   658,
     660,   661,   665,   668,   669,   672,   672,   675,   676,   678,
     680,   682,   684,   686,   688,   691,   693,   695,   704,   705,
     708,   709,   712,   712,   715,   716,   719,   720,   723,   723,
     726,   729,   730,   733,   734,   737,   738,   739,   740,   741,
     751,   753,   756,   757,   760,   761,   762,   763,   764,   765,
     766,   767,   768,   769,   770,   771,   772,   773,   777,   777,
     779,   782,   784,   787,   788,   789,   792,   793,   796,   796,
     798,   800,   803,   804,   807,   808,   809,   810,   811,   812,
     813,   814,   815,   817,   818,   822,   825,   828,   832,   833,
     836,   839,   839,   842,   844,   847,   848,   851,   852,   855,
     856,   859,   860,   863,   865,   867,   868,   872,   877,   877,
     875,   881,   882,   884,   886,   888,   890,   893,   899,   905,
     906,   909,   912,   912,   910,   916,   917,   920,   926,   934,
     934,   932,   938,   940,   943,   947,   950,   951,   954,   955,
     958,   958,   959,   959,   959,   959,   959,   959,   960,   960,
     960,   960,   960,   960,   961,   961,   961,   961,   961,   961,
     961,   961,   964,   965,   967,   970,   972,   974,   977,   978,
     994,   997,   998,  1001,  1002,  1007,  1009,  1011,  1014,  1017,
    1017,  1019,  1021,  1024,  1025,  1028,  1029,  1030,  1031,  1032,
    1033,  1034,  1035,  1037,  1042,  1043,  1045,  1047,  1050,  1051,
    1056,  1058,  1060,  1063,  1066,  1066,  1068,  1070,  1073,  1074,
    1077,  1078,  1079,  1080,  1084,  1085,  1085,  1087,  1089,  1094,
    1094,  1092,  1101,  1101,  1098,  1106,  1107,  1108,  1109,  1112,
    1117,  1118,  1118,  1123,  1125,  1127,  1130,  1133,  1134,  1136,
    1138,  1141,  1142,  1145,  1146,  1146,  1151,  1156,  1159,  1160,
    1163,  1164,  1166,  1168,  1171,  1174,  1175,  1176,  1177,  1178,
    1179,  1180,  1181,  1182,  1185,  1186,  1189,  1191,  1193,  1196,
    1199,  1202,  1203,  1204,  1205,  1206,  1207,  1208,  1209,  1210,
    1211,  1212,  1218,  1221,  1224,  1227,  1230,  1233
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RANK_SPECIFIER", "IDENTIFIER", "NoId",
  "WHITE_SPACE", "INTEGER_LITERAL", "REAL_LITERAL", "CHARACTER_LITERAL",
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
  "UNSAFE", "USHORT", "USING", "VIRTUAL", "VOID", "VOLATILE",
  "OpenBracket", "CloseBracket", "ASSEMBLY", "FIELD", "METHOD", "MODULE",
  "PARAM", "PROPERTY", "TYPE", "GET", "SET", "ADD", "REMOVE", "\",\"",
  "LEFT_BRACKET", "RIGHT_BRACKET", "PLUSEQ", "MINUSEQ", "STAREQ", "DIVEQ",
  "MODEQ", "XOREQ", "ANDEQ", "OREQ", "LTLT", "GTGT", "GTGTEQ", "LTLTEQ",
  "EQEQ", "NOTEQ", "LEQ", "GEQ", "ANDAND", "OROR", "PLUSPLUS",
  "MINUSMINUS", "ARROW", "Multiple_N1", "PercenSign", "Division", "Dash",
  "Plus_S", "Maddeh", "Colon", "Semicolon", "OpenBracket_T1", "Dot",
  "Less", "Greater", "And", "Shapo", "Vertical_Mark", "Ta3ajob",
  "Quest_Mark", "Equal", "CloseBracket_T1", "\"then\"", "\"e1\"", "WHILE",
  "\"e10\"", "\"eb\"", "\"e2\"", "$accept", "literal", "boolean_literal",
  "namespace_name", "type", "simple_type", "primitive_type",
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
  "embedded_statement", "block", "@6", "statement_list_opt",
  "statement_list", "empty_statement", "labeled_statement",
  "declaration_statement", "local_variable_declaration",
  "variable_declarators", "variable_declarator", "variable_initializer",
  "stackalloc_initializer", "local_constant_declaration",
  "constant_declarators", "constant_declarator", "expression_statement",
  "statement_expression", "selection_statement", "if_statement",
  "switch_statement", "switch_block", "@7", "switch_sections_opt",
  "switch_sections", "switch_section", "switch_labels", "switch_label",
  "iteration_statement", "unsafe_statement", "while_statement",
  "do_statement", "for_statement", "@8", "@9", "for_initializer_opt",
  "for_condition_opt", "for_iterator_opt", "for_initializer",
  "for_condition", "for_iterator", "statement_expression_list",
  "foreach_statement", "jump_statement", "break_statement",
  "continue_statement", "goto_statement", "return_statement",
  "expression_opt", "throw_statement", "try_statement", "catch_clauses",
  "catch_clause", "identifier_opt", "finally_clause", "checked_statement",
  "unchecked_statement", "lock_statement", "using_statement",
  "resource_acquisition", "fixed_statement", "fixed_pointer_declarators",
  "fixed_pointer_declarator", "@10", "compilation_unit",
  "using_directives_opt", "attributes_opt",
  "namespace_member_declarations_opt", "namespace_declaration",
  "comma_opt", "qualified_identifier", "qualifier", "namespace_body",
  "@11", "using_directives", "using_directive", "using_alias_directive",
  "@12", "using_namespace_directive", "namespace_member_declarations",
  "namespace_member_declaration", "type_declaration", "modifiers_opt",
  "modifiers", "modifier", "class_declaration", "@13", "class_base_opt",
  "class_base", "interface_type_list", "class_body", "@14",
  "class_member_declarations_opt", "class_member_declarations",
  "class_member_declaration", "constant_declaration", "field_declaration",
  "method_declaration", "method_header", "@15",
  "formal_parameter_list_opt", "return_type", "method_body",
  "formal_parameter_list", "formal_parameter", "fixed_parameter",
  "parameter_modifier_opt", "parameter_array", "property_declaration",
  "@16", "@17", "accessor_declarations", "set_accessor_declaration_opt",
  "get_accessor_declaration_opt", "get_accessor_declaration",
  "set_accessor_declaration", "accessor_body", "event_declaration", "@18",
  "@19", "event_accessor_declarations", "add_accessor_declaration",
  "remove_accessor_declaration", "indexer_declaration", "@20", "@21",
  "indexer_declarator", "qualified_this", "operator_declaration",
  "operator_declarator", "overloadable_operator_declarator",
  "overloadable_operator", "conversion_operator_declarator",
  "constructor_declaration", "constructor_declarator",
  "constructor_initializer_opt", "constructor_initializer",
  "destructor_declaration", "operator_body", "constructor_body",
  "struct_declaration", "struct_interfaces_opt", "struct_interfaces",
  "struct_body", "@22", "struct_member_declarations_opt",
  "struct_member_declarations", "struct_member_declaration",
  "array_initializer", "variable_initializer_list_opt",
  "variable_initializer_list", "interface_declaration",
  "interface_base_opt", "interface_base", "interface_body", "@23",
  "interface_member_declarations_opt", "interface_member_declarations",
  "interface_member_declaration", "interface_method_declaration", "@24",
  "new_opt", "interface_property_declaration", "@25", "@26",
  "interface_indexer_declaration", "@27", "@28", "interface_accessors",
  "interface_event_declaration", "interface_empty_body", "@29",
  "enum_declaration", "enum_base_opt", "enum_base", "enum_body",
  "enum_member_declarations_opt", "enum_member_declarations",
  "enum_member_declaration", "@30", "delegate_declaration", "attributes",
  "attribute_sections", "attribute_section",
  "attribute_target_specifier_opt", "attribute_target_specifier",
  "attribute_target", "attribute_list", "attribute",
  "attribute_arguments_opt", "attribute_name", "attribute_arguments",
  "statment_out_function", "ENTER_attrib", "EXIT_attrib",
  "ENTER_accessor_decl", "EXIT_accessor_decl", "ENTER_getset",
  "EXIT_getset", 0
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
     395,   396,   397,   398,   399,   400,   401,   402,   403
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   149,   150,   150,   150,   150,   150,   150,   151,   151,
     152,   153,   153,   154,   154,   154,   155,   155,   156,   156,
     156,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     158,   158,   159,   159,   160,   161,   160,   162,   162,   162,
     163,   163,   164,   165,   166,   166,   167,   167,   167,   168,
     168,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   170,   171,   171,   171,   172,   172,   173,
     173,   174,   174,   175,   175,   176,   176,   177,   178,   178,
     179,   180,   181,   182,   183,   183,   184,   184,   185,   186,
     185,   187,   188,   189,   190,   191,   192,   192,   192,   192,
     192,   193,   193,   193,   193,   194,   195,   196,   196,   196,
     196,   196,   196,   196,   197,   197,   197,   197,   197,   198,
     197,   199,   199,   200,   200,   201,   201,   202,   202,   202,
     202,   203,   203,   203,   204,   204,   204,   205,   205,   205,
     205,   205,   205,   205,   206,   206,   206,   207,   207,   208,
     208,   209,   209,   210,   210,   211,   211,   212,   213,   212,
     215,   214,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   217,   217,   218,   219,   220,   220,   220,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   223,   222,   224,   224,   225,   225,   226,
     227,   228,   228,   229,   230,   230,   231,   231,   232,   232,
     232,   233,   234,   235,   235,   236,   237,   238,   238,   238,
     238,   238,   238,   238,   239,   239,   240,   240,   240,   240,
     241,   243,   242,   244,   244,   245,   245,   246,   247,   247,
     248,   248,   248,   249,   249,   249,   249,   250,   251,   252,
     252,   254,   255,   253,   253,   256,   256,   257,   257,   258,
     258,   259,   259,   260,   261,   262,   262,   263,   264,   264,
     264,   264,   264,   265,   265,   266,   267,   267,   267,   268,
     269,   269,   270,   271,   271,   271,   271,   271,   272,   272,
     273,   273,   273,   274,   274,   275,   276,   277,   278,   279,
     280,   280,   281,   282,   282,   284,   283,   285,   285,   286,
     286,   287,   287,   288,   288,   289,   290,   290,   291,   291,
     292,   292,   294,   293,   295,   295,   296,   296,   298,   297,
     299,   300,   300,   301,   301,   302,   302,   302,   302,   302,
     303,   303,   304,   304,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   307,   306,
     306,   308,   308,   309,   309,   309,   310,   310,   312,   311,
     313,   313,   314,   314,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   316,   317,   318,   319,   319,
     319,   320,   319,   321,   321,   322,   322,   323,   323,   324,
     324,   325,   325,   326,   327,   327,   327,   328,   330,   331,
     329,   332,   332,   333,   333,   334,   334,   335,   336,   337,
     337,   338,   339,   340,   338,   341,   341,   342,   343,   345,
     346,   344,   347,   347,   348,   349,   350,   350,   351,   351,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   353,   353,   354,   355,   356,   356,   357,   357,
     358,   359,   359,   360,   360,   361,   362,   362,   363,   365,
     364,   366,   366,   367,   367,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   369,   369,   370,   370,   371,   371,
     372,   373,   373,   374,   376,   375,   377,   377,   378,   378,
     379,   379,   379,   379,   380,   381,   380,   382,   382,   384,
     385,   383,   387,   388,   386,   389,   389,   389,   389,   390,
     391,   392,   391,   393,   394,   394,   395,   396,   396,   397,
     397,   398,   398,   399,   400,   399,   401,   402,   403,   403,
     404,   404,   405,   405,   406,   407,   407,   407,   407,   407,
     407,   407,   407,   407,   408,   408,   409,   410,   410,   411,
     412,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   414,   415,   416,   417,   418,   419
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     3,     2,     2,     2,
       0,     2,     1,     1,     1,     3,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     4,     4,     0,
       1,     4,     4,     0,     1,     1,     3,     1,     3,     4,
       2,     2,     1,     5,     7,     3,     0,     1,     4,     0,
       5,     4,     4,     3,     2,     4,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       2,     1,     1,     1,     4,     5,     6,     5,     5,     0,
       6,     0,     1,     1,     2,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     0,     6,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     0,     1,     1,     2,     1,
       3,     2,     2,     2,     1,     3,     1,     3,     1,     1,
       1,     5,     3,     1,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     2,     4,
       5,     0,     4,     0,     1,     1,     2,     2,     1,     2,
       3,     2,     2,     1,     1,     1,     1,     2,     5,     7,
       2,     0,     0,    11,     4,     0,     1,     0,     1,     0,
       1,     1,     1,     1,     1,     1,     3,     8,     1,     1,
       1,     1,     1,     2,     1,     2,     3,     4,     3,     3,
       0,     1,     3,     3,     3,     4,     2,     2,     1,     2,
       6,     6,     2,     0,     1,     2,     2,     2,     5,     5,
       1,     1,     6,     1,     3,     0,     4,     2,     2,     0,
       1,     0,     1,     0,     1,     5,     0,     1,     1,     2,
       2,     3,     0,     5,     1,     2,     1,     1,     0,     6,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     8,
       7,     0,     1,     2,     2,     4,     1,     3,     0,     4,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     5,     2,     7,     7,
       6,     0,     8,     0,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     4,     0,     1,     1,     4,     0,     0,
      11,     2,     2,     0,     1,     0,     1,     5,     5,     1,
       1,     6,     0,     0,    12,     2,     2,     5,     5,     0,
       0,    10,     5,     5,     2,     4,     1,     1,     7,    10,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     7,     4,     5,     0,     1,     5,     5,
       7,     1,     1,     1,     1,     7,     0,     1,     2,     0,
       4,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     0,     1,     1,     3,
       7,     0,     1,     2,     0,     4,     0,     1,     1,     2,
       1,     1,     1,     1,     8,     0,     9,     0,     1,     0,
       0,    11,     0,     0,    14,     3,     3,     6,     6,     6,
       1,     0,     3,     7,     0,     1,     2,     3,     4,     0,
       1,     1,     3,     2,     0,     5,     9,     1,     1,     2,
       6,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     0,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     0,     0,     0,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
     309,     0,     0,   311,   310,   324,   326,   327,   318,     0,
      10,     0,     1,   340,   333,   311,   331,   334,   335,   336,
     337,   338,   339,   312,   547,   548,     0,   325,   320,   328,
     330,   319,   344,   345,   346,     0,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,     0,   341,   342,
     340,   332,   549,   552,     0,   321,   318,     0,   358,     0,
       0,     0,     0,   343,   557,   562,   555,   556,   558,   559,
     560,   561,   563,     0,   553,     0,     0,   322,   316,   361,
       0,    17,    22,    29,    20,    31,    30,    25,    27,    32,
      21,    23,    33,    26,    28,    24,    35,   395,    11,    13,
      16,    18,    19,    14,    15,    12,     0,     0,   534,   501,
     476,   569,     0,   564,   567,   554,   329,   309,   317,   315,
       0,     0,   362,   361,     0,    34,    42,    38,    37,    39,
       0,     0,     0,   535,     0,     0,   502,     0,     0,   477,
       0,   583,    73,   566,   568,   311,   363,   366,   364,   368,
     316,     0,    36,   311,   536,   311,   316,   503,   504,   316,
     478,   479,   316,   583,   565,   550,     3,     4,     5,     6,
       0,     0,     9,     0,     7,     0,    77,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       2,     0,     0,    96,    50,    49,    53,    54,    55,     0,
      74,    56,    57,    98,    99,    58,    82,    52,    59,    61,
      62,   100,   113,    60,   101,   107,   111,   112,   127,   104,
     131,   134,   137,   144,   147,   149,   151,   153,   155,   157,
     173,   174,    75,    97,     0,   311,     0,     0,   311,   360,
     316,   404,     0,   394,   399,   401,   402,     0,     0,   540,
     541,   533,   311,   500,   311,   475,   551,     0,     0,     0,
      35,     0,    11,    12,     0,     0,     0,   119,   121,   121,
     131,     0,    97,   105,   106,   110,   109,   108,   103,    94,
     102,     0,     0,     0,     0,    69,   570,     0,    80,    81,
       0,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   162,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,     0,   323,   365,   367,   274,
       0,     0,     0,     0,     0,     0,     0,   280,     0,   280,
       0,   571,   572,   578,   579,   580,   581,   573,   574,   575,
     576,   577,   340,   383,     0,   311,   372,   374,   375,   376,
       0,   377,   378,   379,   380,   381,   382,   384,   359,   406,
       0,   405,     0,     0,   311,   543,   537,   311,   517,     0,
     311,   508,   510,   511,   513,   512,   340,   493,   485,   486,
     487,   488,   489,   490,   491,   492,     0,   311,   483,     0,
      78,     0,    69,     0,   496,    85,     0,    35,     0,     0,
     121,   126,   125,     0,   122,   123,     0,     0,    63,   121,
      65,    66,     0,    64,     0,     0,    70,    44,     0,    46,
      76,    93,     0,   128,   130,   129,   127,   133,   132,   135,
     136,   143,   142,   140,   141,   138,   139,   145,   146,   148,
     150,   152,   154,   156,   158,     0,     0,   273,   275,     0,
       0,     0,     0,     0,     0,     0,   199,   193,    54,    98,
      99,    82,   111,   112,     0,   219,   250,   180,   181,   182,
       0,   183,   224,   225,   184,   191,   243,   244,   245,   246,
     185,   268,   269,   270,   271,   272,   186,   187,   188,   189,
     190,   192,   228,   255,     0,     0,     0,     0,     0,   281,
       0,     0,     0,     0,     0,   369,   373,   398,   397,   387,
       0,     0,   546,   400,   544,   538,   542,   518,     0,   505,
     509,     0,   480,   484,    79,    91,     0,     0,     0,   208,
     498,   210,   209,     0,   497,    95,     0,    88,    92,     0,
       0,   124,     0,     0,   114,     0,    71,    48,    43,    47,
       0,    67,   161,     0,    68,    72,   296,     0,     0,   286,
     297,   247,     0,   195,     0,     0,   287,   288,   216,     0,
       0,    13,    14,   261,   265,     0,   256,   262,    97,     0,
     276,   175,     0,   278,     0,   176,     0,   279,     0,   282,
       0,   318,     0,     0,     0,     0,    35,     0,     0,   586,
       0,   436,   437,     0,   407,   403,     0,     0,    35,     0,
      83,    40,     0,   494,     0,    90,     0,   117,   118,   115,
       0,    45,     0,     0,     0,     0,   283,   284,   301,   300,
       0,   318,     0,   197,   179,     0,   196,   177,   178,     0,
       0,     0,     0,   292,   289,   254,   206,   203,   204,   251,
       0,     0,   277,   229,     0,     0,     0,   311,     0,     0,
       0,     0,     0,     0,   206,     0,     0,     0,   311,     0,
     586,     0,     0,     0,   472,   471,   435,   474,   473,   464,
     545,     0,     0,   586,     0,    86,    40,     0,   495,   499,
     120,   116,   159,     0,     0,   303,     0,   295,   285,     0,
       0,     0,   194,   198,   201,   202,     0,   293,   293,     0,
       0,   257,   266,     0,   226,   231,   230,   248,     0,     0,
       0,   213,     0,   584,     0,     0,     0,     0,   311,   447,
     446,   454,   455,   456,   457,   461,   460,   444,   445,   448,
     450,   449,   441,   440,   443,   459,   458,   451,   453,   452,
     442,     0,   311,     0,   386,   311,     0,   434,   311,   429,
       0,     0,   311,     0,   311,    84,    87,    41,     0,   305,
       0,     0,   298,   299,   200,   212,     0,   294,     0,     0,
     207,   205,   263,     0,   258,     0,     0,   233,   466,     0,
       0,   385,   421,     0,     0,     0,   311,     0,     0,     0,
       0,   390,     0,   408,     0,   311,   530,   531,   529,   311,
       0,   519,     0,   211,     0,   302,   304,   249,     0,     0,
     252,     0,   227,     0,     0,     0,   234,   235,     0,   238,
       0,   465,   467,   215,   214,   422,     0,     0,     0,   470,
     389,     0,   432,   388,   311,   433,     0,     0,   311,   311,
       0,     0,     0,   311,   586,   306,   290,   291,   259,   267,
     242,     0,   241,   232,   236,   237,   239,     0,     0,   311,
       0,     0,   392,     0,     0,   587,   587,   430,     0,   411,
     414,     0,   412,   416,   532,     0,   514,     0,     0,     0,
       0,   260,   264,   240,    69,    69,     0,     0,   311,   311,
     463,   462,   438,     0,   409,     0,     0,   587,   516,     0,
       0,   520,   522,     0,     0,     0,   585,   585,   423,     0,
     425,     0,   426,     0,   587,   420,   419,   586,   586,   431,
     311,   311,   587,   311,   253,   468,   469,     0,     0,   585,
       0,   410,   417,   418,     0,     0,   521,     0,   584,   584,
     424,   439,     0,     0,   523,   427,   428,   527,   528,   587,
     524
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,   189,   190,     9,   580,    98,   191,   100,   101,   102,
     192,   104,   124,   105,   695,   412,   557,   426,   427,   193,
     194,   195,   196,   197,   428,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   775,   208,   546,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   410,
     413,   414,   415,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   563,   231,   432,   302,   429,   592,
     596,   643,   644,   477,   573,   645,   646,   478,   647,   648,
     649,   657,   658,   540,   541,   650,   730,   731,   479,   480,
     481,   482,   483,   726,   797,   835,   836,   837,   838,   839,
     484,   485,   486,   487,   488,   721,   868,   585,   793,   900,
     586,   794,   901,   587,   489,   490,   491,   492,   493,   494,
     510,   495,   496,   576,   577,   788,   637,   497,   498,   499,
     500,   640,   501,   704,   705,   824,     2,     3,   241,   234,
      14,   119,   233,    11,    78,   117,     4,     5,     6,    54,
       7,    15,    16,    17,    47,    48,    49,    18,    80,   121,
     122,   148,   150,   238,   354,   355,   356,   357,   358,   359,
     360,   672,   242,   107,   519,   243,   244,   245,   372,   246,
     361,   854,   934,   857,   889,   892,   858,   859,   937,   362,
     879,   949,   907,   908,   909,   363,   815,   917,   609,   682,
     364,   610,   611,   761,   612,   365,   613,   841,   842,   366,
     686,   689,    19,   138,   139,   162,   254,   396,   397,   398,
     542,   543,   544,    20,   135,   136,   159,   252,   379,   380,
     381,   382,   692,   528,   383,   863,   942,   384,   943,   969,
     898,   385,   818,   860,    21,   132,   133,   156,   248,   249,
     250,   616,    22,    23,    24,    25,    73,    74,    75,   112,
     113,   143,   114,   144,   367,    26,   165,   803,   947,   683,
     915
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -671
static const short int yypact[] =
{
     -46,    58,   123,    32,   -46,  -671,  -671,  -671,   321,    62,
    -671,   236,  -671,   961,  -671,    43,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,    32,  -671,   201,  -671,  -671,  -671,
    -671,   140,  -671,  -671,  -671,   293,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,   308,  2863,  -671,
    1052,  -671,  -671,   682,   293,  -671,   222,   239,   370,  1269,
     391,   405,   425,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,   293,  -671,   329,   307,  -671,   350,   344,
     496,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,   502,   402,   507,  -671,
    -671,  -671,  -671,  -671,  -671,   507,   507,   525,   410,   412,
     428,  -671,   377,  -671,   445,  -671,  -671,   -46,  -671,  -671,
      61,   438,  -671,   344,   444,  -671,  -671,  -671,  -671,  -671,
     450,   314,   446,  -671,   293,   448,  -671,   293,   455,  -671,
      41,  -671,  2566,  -671,  -671,   -38,   488,  -671,   489,  -671,
     350,   438,  -671,   299,  -671,    -1,   350,   489,  -671,   350,
     489,  -671,   350,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
     182,   505,  -671,  1366,  -671,   510,  -671,  -671,   512,   514,
    2156,  2566,  2566,  2566,  2566,  2566,  2566,  2566,  2566,  -671,
    -671,   471,   474,   192,   522,  -671,  -671,  -671,  -671,   523,
     513,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,   342,  -671,  -671,  -671,   727,  -671,
     343,   -61,   338,    28,   310,   482,   473,   483,   501,   228,
    -671,  -671,  -671,   144,   484,    14,   293,   293,    56,  -671,
     350,   357,   536,   528,  -671,  -671,  -671,   621,   487,   530,
    -671,  -671,   104,  -671,   156,  -671,  -671,  2566,   627,  2566,
    -671,     2,   113,    23,  1366,  2828,  2566,  -671,    26,    52,
     369,   544,   194,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,   629,   630,  2566,   633,  1911,  -671,  2566,  -671,  -671,
     634,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  2566,  2566,  2566,  2566,  2566,  2566,  2566,
    1366,  1366,  2566,  2566,  2566,  2566,  2566,  2566,  2566,  2566,
    2566,  2566,  2566,  2566,  1911,  2566,  -671,   489,  -671,   508,
     509,  1740,  1740,   554,   556,   435,   560,  2566,   561,  2566,
     562,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  2863,  -671,   511,   265,  -671,  -671,  -671,  -671,
     339,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    1366,  -671,  1366,   519,    32,   515,  -671,   158,   600,   516,
     159,  -671,  -671,  -671,  -671,  -671,  2863,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,   524,   165,  -671,   389,
    -671,   567,  1911,  2566,  1992,  -671,   -37,   569,   155,   573,
      27,  -671,  -671,   576,    27,  -671,   577,  2238,  2647,    27,
    -671,  -671,   396,  -671,  2566,  2566,   568,  -671,   579,  -671,
    -671,  -671,  2566,  -671,  -671,  -671,  -671,   343,   343,   -61,
     -61,   402,   402,   338,   338,   338,   338,    28,    28,   310,
     482,   473,   483,   501,  -671,   586,   399,  -671,  -671,   116,
     589,   590,   552,   142,   552,   595,  -671,  -671,   -32,   257,
     259,   273,   315,   320,   727,  -671,   540,   668,  -671,  -671,
     558,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  2074,  1366,   563,  2566,   564,  2320,  -671,
     570,  2566,   571,  2566,  2714,  -671,  -671,  -671,  -671,  -671,
      54,    65,  -671,  -671,  -671,  -671,  -671,  -671,   659,  -671,
    -671,  2784,  -671,  -671,  -671,  -671,   603,   407,  1366,  -671,
    -671,  -671,  -671,   565,   592,  -671,   610,  -671,  -671,   612,
    2566,  -671,  2566,  2566,  -671,   616,  -671,  -671,  -671,  -671,
    1911,  -671,  -671,   575,  -671,  -671,  -671,  1366,  2566,   349,
    -671,  -671,  2402,  1607,   619,   157,   668,  -671,  -671,  1740,
      66,   471,   474,  -671,  -671,   578,  -671,   614,   194,    68,
    -671,  -671,   580,  -671,  1740,  -671,   628,  -671,   631,  -671,
     632,    -6,  1366,  1366,   661,   667,   718,   720,   134,  -671,
     413,  -671,  -671,   417,  -671,  -671,  2566,  1366,   722,    34,
    -671,   507,   211,  -671,  1829,  -671,  2566,  -671,  -671,  -671,
    2566,  -671,  2566,    72,   639,   552,   349,  -671,  -671,  -671,
     640,   283,  1366,  -671,  -671,   588,  1607,  -671,  -671,   601,
     602,  2566,    61,  -671,  -671,  -671,   593,   635,  -671,  -671,
    2566,   688,  -671,  -671,  1740,   604,  1740,   299,    78,    80,
    1366,  1366,   293,   660,   185,   663,   306,   645,   299,    22,
     664,    40,   651,   622,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,    82,   751,   671,   658,   636,   507,  2566,  -671,  -671,
    -671,  -671,  -671,   624,   301,  -671,  1740,  -671,  -671,  1740,
    1607,    78,  -671,  -671,  -671,  -671,   672,   759,   759,  1992,
     762,  2566,  -671,  2566,   741,  -671,  -671,  -671,   692,   643,
     196,  -671,   251,  -671,   146,   212,   694,   697,   299,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,   699,    32,   700,  -671,   299,   655,  -671,    32,  -671,
     419,   702,   299,   669,    32,  -671,  -671,  -671,   689,  -671,
    1740,   796,  -671,  -671,  -671,   703,   675,  -671,   714,   723,
    -671,  -671,  -671,   677,  -671,   726,  1740,   436,   680,  2566,
     811,  -671,  -671,   686,  1366,  1366,   299,   552,   732,  1366,
     418,  -671,   733,  -671,   421,    32,  -671,  -671,  -671,   299,
     734,  -671,   433,  -671,  2566,  -671,  -671,  -671,   552,   552,
    -671,  1740,  -671,  2484,   693,   704,   436,  -671,  1474,  -671,
      39,  -671,  -671,  -671,  -671,  -671,    86,    87,   757,  -671,
    -671,    88,  -671,  -671,    32,  -671,   456,   705,   181,   190,
     706,   761,   419,    32,  -671,  -671,  -671,  -671,  2566,  -671,
    -671,   724,  -671,  -671,  -671,  1607,  -671,   763,   765,    32,
     770,   771,  -671,   311,   711,  -671,  -671,  -671,   764,  -671,
    -671,   766,  -671,  -671,  -671,   419,  -671,   460,   721,   735,
     778,  -671,   614,  -671,  1911,  1911,   461,   728,    32,    32,
    -671,  -671,  -671,  1366,  -671,   431,   431,  -671,  -671,   419,
     419,  -671,  -671,  1740,   781,   785,  -671,  -671,  -671,   775,
    -671,   780,  -671,    89,  -671,  -671,  -671,  -671,  -671,  -671,
     207,   208,  -671,    32,  -671,  -671,  -671,   552,   552,  -671,
     791,  -671,  -671,  -671,   787,   789,  -671,   744,  -671,  -671,
    -671,  -671,   419,   419,  -671,  -671,  -671,  -671,  -671,  -671,
    -671
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -671,  -671,  -671,  -671,   -26,   717,   -48,  -671,   760,  -671,
     -56,  -671,  -671,   719,   197,   -91,   469,  -671,   335,  -671,
    -671,  -671,  -671,  -304,  -322,  -671,  -671,  -237,  -671,  -671,
      33,   304,  -671,   386,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,   478,   485,   494,   611,  -671,  -671,
    -250,  -671,   486,  -120,   266,   172,   249,   581,   583,   584,
     582,   587,  -671,  -671,  -671,   550,  -671,  -671,   256,  -599,
    -497,  -633,  -323,   380,  -671,  -671,    59,  -671,  -671,  -671,
    -454,  -560,   191,  -571,  -671,  -671,   199,   112,  -671,  -499,
    -671,  -181,  -164,  -671,  -671,  -671,  -671,    85,  -671,    84,
    -671,  -671,  -160,  -140,  -137,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,    67,  -135,  -671,  -133,  -132,  -130,  -128,
     597,  -127,  -671,   365,  -515,   221,   305,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,   163,  -671,  -671,   828,    -3,  -671,
    -671,    91,     0,   340,  -671,  -671,  -671,   942,  -671,  -671,
    -671,   802,    -9,  -220,   -65,  -671,   901,  -671,  -671,   829,
    -671,   -87,   800,  -671,  -671,  -671,   599,  -233,  -232,  -230,
    -671,  -671,  -636,  -671,  -671,  -377,   607,  -671,  -671,  -671,
    -229,  -671,  -671,   103,  -671,  -671,    99,   102,    46,  -222,
    -671,  -671,  -671,    57,    55,  -218,  -671,  -671,  -671,  -671,
    -215,  -671,  -671,  -671,  -671,  -213,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,   572,
    -258,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
     591,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
      24,  -671,  -643,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
     596,  -671,  -671,  -671,  -671,   950,  -671,  -671,  -671,  -671,
     836,  -671,  -671,  -671,  -671,  -671,   815,  -374,  -573,  -670,
    -656
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -583
static const short int yytable[] =
{
      13,    10,   455,   103,   584,   405,    51,   127,   476,   502,
     766,    99,    50,   713,   128,   129,   600,   690,   353,   416,
     399,   388,   389,   773,   390,   391,   126,   468,   468,   126,
     126,   728,   392,    97,   387,    57,   393,     1,   693,   394,
     310,   395,   763,  -308,    31,    56,   422,   157,   679,   583,
     160,   545,   877,   699,    76,   126,  -217,   341,   614,   106,
     270,   654,     8,  -582,   146,    56,   306,   307,  -217,   615,
     656,   329,   661,   111,   342,   311,   703,   784,   343,   330,
     536,   667,   729,   331,   674,   332,   770,   125,   456,   402,
     880,   881,   883,   950,   333,   334,   335,   336,   344,  -217,
    -582,   345,   808,   346,  -313,   347,   348,   694,   349,   732,
     350,   351,   878,   767,    89,  -582,   126,   103,   639,   337,
     147,   654,   720,    12,   269,    99,   125,    28,   338,   812,
     339,    92,   268,  -582,   147,   353,   820,   147,   674,   675,
     111,  -539,    50,   163,  -582,   312,   313,   261,   790,   327,
     411,   411,   247,   764,   716,   404,  -314,  -582,   125,   281,
     549,   722,   314,   315,   388,   389,   537,   390,   391,   555,
     848,   127,   128,   106,   341,   392,   411,   387,   125,   393,
     272,   419,   394,   861,   395,   282,   437,   438,   676,   125,
     125,   342,   125,    30,   899,   343,   125,   126,  -370,   468,
     843,   340,   125,   259,   125,  -582,   125,   677,   103,   103,
     125,   125,   125,   125,   403,   344,    99,    99,   345,   896,
     346,   678,   347,   348,   792,   349,    51,   350,   351,   266,
     916,   324,    50,   804,   871,   352,   147,   328,   406,   408,
      31,   239,   713,   547,   652,   325,  -506,   251,   467,   378,
     253,   386,   918,   255,   103,   103,   655,  -582,   125,  -582,
    -582,   939,    99,    99,   106,   106,  -582,   952,   953,   468,
     125,   663,  -318,    55,   467,   468,   940,   941,   951,   125,
     329,   324,  -582,   257,   441,   442,   956,   514,   330,   467,
     468,  -582,   331,   283,   332,   325,   800,    56,  -481,   805,
     525,  -507,    53,   333,   334,   335,   336,  -482,  -582,  -582,
     106,   106,   697,   970,   103,   258,   103,  -318,    28,   967,
     968,   531,    99,  -413,    99,   284,   719,   801,   337,    58,
      82,   368,  -415,    83,    59,   125,   125,   338,    60,   339,
     739,   724,   468,   727,   520,  -220,   521,  -221,   322,  -525,
    -526,   720,   352,    61,   948,    28,   468,  -220,    87,  -221,
     468,  -218,   468,    88,   469,   469,  -582,   575,   323,   584,
     106,    77,   106,  -218,   247,    79,   960,   378,    90,    62,
      91,   740,   802,   782,   635,   810,   783,  -393,  -220,   780,
    -221,   814,    93,    94,   386,   108,    95,   822,   232,   912,
    -582,   781,   468,  -222,  -218,   468,   468,  -371,  -223,   109,
     340,   913,   369,   710,   370,  -222,    28,   741,   742,   371,
    -223,   743,   744,   745,   746,   316,   317,   747,   748,   110,
     749,   750,   751,   752,   753,   754,   271,   776,   116,   505,
     755,   756,   757,   758,   759,   760,  -222,   582,   103,   308,
     309,  -223,   506,   833,    28,   581,    99,   825,   103,   115,
     507,   834,    29,   288,   289,   290,    99,   303,   304,   305,
     517,   467,   103,   832,   120,   103,   468,   140,   589,   141,
      99,   118,   103,    99,   443,   444,   445,   446,   608,   287,
      99,   534,   468,   417,   304,   305,   287,   129,   556,   287,
     123,   565,   619,   588,   106,   608,  -396,   287,   869,   621,
     126,   103,   622,   232,   106,   401,   582,   582,   374,    99,
     852,   374,   409,   855,   581,   581,   125,   468,   106,   130,
     696,   106,   142,   374,   468,   864,   469,   153,   106,   232,
     131,   633,   134,   430,   684,   467,   103,   103,   687,   467,
     816,   817,   885,   886,    99,    99,   919,   920,   137,   926,
     927,   103,   935,   467,   468,   447,   448,   106,   152,    99,
     149,   468,   588,   588,   439,   440,   668,   669,   155,   454,
     158,   232,   924,   925,   965,   966,   103,   161,   236,   237,
     582,   691,   259,   509,    99,   509,   717,   264,   581,   265,
     944,   266,   106,   106,   281,   696,   469,   282,   680,   285,
     319,   286,   469,   287,   103,   103,   711,   106,   318,   468,
     321,   320,    99,    99,   373,   375,   326,   469,   374,   376,
     377,   400,   418,   420,   421,   470,   470,   423,   431,   457,
     458,   503,   106,   504,   734,   735,   588,   508,   511,   513,
     522,   527,   718,   515,   582,   535,   524,   -89,   529,   232,
     539,   548,   581,    56,   550,   552,   532,   561,   560,   733,
     106,   106,   736,    81,   564,    82,   567,   568,    83,   469,
     558,   558,   572,    84,   467,   574,   575,    85,   562,   578,
     617,   620,   624,   469,   590,   593,    86,   469,   625,   469,
     626,   597,   599,    87,   630,   632,   651,   623,    88,   659,
     588,   662,    89,    64,   660,   670,   664,   471,   471,   665,
     666,   671,  -391,    90,   673,    91,  -515,   706,   709,    92,
     712,   723,   714,   715,   719,   720,   725,    93,    94,   469,
     518,    95,   469,   469,   618,    65,   762,   737,   103,   103,
     738,   765,   768,   103,   769,   771,    99,    99,   772,   774,
     786,    99,   591,   787,   595,   779,   656,   598,   404,   595,
     796,    66,    67,    68,    69,    70,    71,    72,   846,   847,
     798,   806,   582,   851,   799,   807,   809,   813,   811,   819,
     581,   823,   273,   274,   275,   276,   277,   278,   279,   280,
     703,   821,   828,   800,   106,   106,   827,   470,   830,   106,
     840,   829,   856,   469,   831,   729,   472,   472,   845,   582,
     850,   853,   862,   872,   634,   473,   473,   581,   638,   469,
     291,   292,   293,   294,   295,   296,   297,   298,   588,   566,
     299,   300,   569,   570,   571,   882,   873,   887,   894,   895,
     904,   856,   905,   914,   903,   888,   891,   103,   910,   911,
     897,   886,   885,   921,   469,    99,   923,   922,   301,   945,
     928,   469,   591,   946,   927,   588,   906,   470,   926,   961,
     539,   475,   475,   470,   962,   963,   964,   933,   702,   471,
     262,   154,   263,   777,   559,   631,   554,   875,   470,   449,
     551,   469,   450,   452,   451,   929,   931,   595,   469,   453,
     785,   791,   844,   106,   433,   434,   435,   436,   436,   436,
     436,   874,   876,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   636,   902,   512,   954,   955,   789,
     897,   708,   474,   474,   826,   145,    27,   235,   681,    63,
     470,   240,   151,   778,   516,   653,   469,   884,   893,   471,
     890,  -307,   938,   930,   470,   471,   932,   957,   470,   533,
     470,   530,    32,   526,    52,   539,   164,   595,   256,   795,
     471,   523,     0,     0,     0,     0,     0,     0,   472,     0,
     685,     0,     0,   688,    33,     0,     0,   473,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
     470,    35,    36,   470,   470,   707,     0,    37,     0,    38,
      39,    40,    41,     0,     0,     0,    42,     0,   433,     0,
      43,     0,   471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,    45,   471,    46,     0,     0,
     471,     0,   471,   475,     0,   591,     0,     0,   472,     0,
       0,     0,     0,    32,   472,     0,     0,   473,     0,     0,
       0,     0,     0,   473,     0,     0,     0,     0,     0,   472,
     865,     0,     0,     0,   470,    33,     0,     0,   473,   591,
       0,     0,   471,     0,     0,   471,   471,     0,    34,     0,
     470,     0,    35,    36,     0,     0,     0,     0,    37,     0,
      38,    39,    40,    41,   474,     0,     0,    42,     0,     0,
       0,    43,     0,   475,     0,     0,     0,     0,     0,   475,
       0,   472,     0,    44,     0,   470,    45,     0,    46,     0,
     473,     0,   470,     0,   475,   472,     0,     0,     0,   472,
       0,   472,     0,     0,   473,     0,     0,     0,   473,     0,
     473,   627,     0,   628,   629,     0,   471,     0,     0,     0,
       0,     0,   470,     0,     0,     0,     0,     0,     0,   470,
       0,     0,   471,     0,   474,     0,     0,   849,     0,     0,
     474,   472,     0,     0,   472,   472,   475,     0,     0,     0,
     473,     0,     0,   473,   473,   474,     0,     0,   866,   867,
     475,     0,     0,     0,   475,     0,   475,   471,     0,     0,
       0,     0,     0,     0,   471,     0,     0,   470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   700,     0,     0,
       0,   701,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   471,     0,   475,   474,     0,   475,
     475,   471,     0,     0,     0,   472,     0,     0,     0,     0,
       0,   474,     0,    56,   473,   474,     0,   474,     0,     0,
       0,   472,     0,    81,     0,    82,     0,     0,    83,     0,
     473,     0,     0,    84,     0,   936,   936,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    86,     0,     0,   471,
       0,     0,     0,    87,     0,     0,   472,   474,    88,     0,
     474,   474,    89,   472,     0,   473,     0,   958,   959,     0,
     475,     0,   473,    90,     0,    91,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,   475,    93,    94,     0,
       0,    95,     0,   472,    96,     0,     0,     0,     0,     0,
     472,     0,   473,     0,     0,     0,     0,     0,     0,   473,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,   475,    82,     0,     0,    83,     0,     0,   475,     0,
      84,   474,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,   474,   472,     0,
      87,     0,     0,     0,     0,    88,     0,   473,   475,    89,
       0,     0,     0,     0,     0,   475,     0,     0,     0,     0,
      90,     0,    91,     0,     0,     0,    92,     0,     0,     0,
       0,     0,   474,     0,    93,    94,     0,     0,    95,   474,
       0,   260,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   475,     0,     0,     0,     0,   641,   474,
       0,   166,   167,   168,   169,     0,   474,   170,    81,   329,
      82,   833,     0,    83,   459,     0,   642,   330,    84,   834,
       0,   331,    85,   332,     0,     0,     0,     0,   172,     0,
     460,    86,   333,   334,   335,   336,     0,     0,    87,     0,
       0,     0,   461,    88,     0,   173,   174,    89,     0,     0,
       0,     0,     0,     0,   474,     0,     0,   337,    90,     0,
      91,   175,     0,     0,    92,     0,   338,   176,   339,   177,
     462,   178,    93,    94,   463,   464,    95,   465,     0,   260,
       0,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   182,     0,   183,     0,
       0,   184,   185,   186,     0,   466,   467,     0,     0,     0,
     187,   641,     0,   188,   166,   167,   168,   169,     0,   340,
     170,    81,   329,    82,     0,     0,    83,   459,     0,   642,
     330,    84,     0,     0,   331,    85,   332,     0,     0,     0,
       0,   172,     0,   460,    86,   333,   334,   335,   336,     0,
       0,    87,     0,     0,     0,   461,    88,     0,   173,   174,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     337,    90,     0,    91,   175,     0,     0,    92,     0,   338,
     176,   339,   177,   462,   178,    93,    94,   463,   464,    95,
     465,     0,   260,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,   182,
       0,   183,     0,     0,   184,   185,   186,     0,   466,   467,
       0,     0,     0,   187,    56,     0,   188,   166,   167,   168,
     169,     0,   340,   170,    81,   329,    82,     0,     0,    83,
     459,     0,     0,   330,    84,     0,     0,   331,    85,   332,
       0,     0,     0,     0,   172,     0,   460,    86,   333,   334,
     335,   336,     0,     0,    87,     0,     0,     0,   461,    88,
       0,   173,   174,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   337,    90,     0,    91,   175,     0,     0,
      92,     0,   338,   176,   339,   177,   462,   178,    93,    94,
     463,   464,    95,   465,     0,     0,     0,   180,     0,     0,
       0,     0,     0,    56,     0,     0,   166,   167,   168,   169,
       0,     0,   170,    81,     0,    82,     0,     0,    83,   171,
       0,     0,     0,    84,     0,     0,     0,    85,     0,     0,
       0,   181,   182,   172,   183,     0,    86,   184,   185,   186,
       0,   466,   467,    87,     0,     0,   187,     0,    88,   188,
     173,   174,    89,     0,     0,   340,     0,     0,     0,     0,
       0,     0,     0,    90,     0,    91,   175,   538,     0,    92,
       0,     0,   176,     0,   177,     0,   178,    93,    94,   179,
       0,    95,     0,     0,     0,    56,   180,     0,   166,   167,
     168,   169,     0,     0,   170,    81,     0,    82,     0,     0,
      83,   171,     0,     0,     0,    84,     0,     0,     0,    85,
       0,     0,     0,     0,     0,   172,     0,     0,    86,     0,
     181,   182,     0,   183,     0,    87,   184,   185,   186,     0,
      88,   404,   173,   174,    89,   187,   424,     0,   188,     0,
       0,   698,     0,   425,     0,    90,     0,    91,   175,     0,
       0,    92,     0,     0,   176,     0,   177,     0,   178,    93,
      94,   179,     0,    95,     0,     0,    56,     0,   180,   166,
     167,   168,   169,     0,     0,   170,    81,     0,    82,     0,
       0,    83,   171,     0,     0,     0,    84,     0,     0,     0,
      85,     0,     0,     0,     0,     0,   172,     0,     0,    86,
       0,     0,   181,   182,     0,   183,    87,     0,   184,   185,
     186,    88,     0,   173,   174,    89,     0,   187,     0,     0,
     188,     0,     0,     0,     0,     0,    90,     0,    91,   175,
     538,     0,    92,     0,     0,   176,     0,   177,     0,   178,
      93,    94,   179,     0,    95,     0,     0,     0,    56,   180,
       0,   166,   167,   168,   169,     0,     0,   170,    81,     0,
      82,     0,     0,    83,   171,     0,     0,     0,    84,     0,
       0,     0,    85,     0,     0,     0,     0,     0,   172,     0,
       0,    86,     0,   181,   182,     0,   183,     0,    87,   184,
     185,   186,     0,    88,   404,   173,   174,    89,   187,     0,
       0,   188,     0,     0,     0,     0,     0,     0,    90,     0,
      91,   175,     0,     0,    92,     0,     0,   176,     0,   177,
       0,   178,    93,    94,   179,     0,    95,     0,     0,   260,
      56,   180,   579,   166,   167,   168,   169,     0,     0,   170,
      81,     0,    82,     0,     0,    83,   171,     0,     0,     0,
      84,     0,     0,     0,    85,     0,     0,     0,     0,     0,
     172,     0,     0,    86,     0,   181,   182,     0,   183,     0,
      87,   184,   185,   186,     0,    88,     0,   173,   174,    89,
     187,     0,     0,   188,     0,     0,     0,     0,     0,     0,
      90,     0,    91,   175,     0,     0,    92,     0,     0,   176,
       0,   177,     0,   178,    93,    94,   179,     0,    95,     0,
       0,   267,    56,   180,     0,   166,   167,   168,   169,     0,
       0,   170,    81,     0,    82,     0,     0,    83,   171,     0,
       0,     0,    84,     0,     0,     0,    85,     0,     0,     0,
       0,     0,   172,     0,     0,    86,     0,   181,   182,     0,
     183,     0,    87,   184,   185,   186,     0,    88,     0,   173,
     174,    89,   187,     0,     0,   188,     0,     0,     0,     0,
       0,     0,    90,     0,    91,   175,     0,     0,    92,     0,
       0,   176,     0,   177,     0,   178,    93,    94,   179,     0,
      95,     0,     0,     0,    56,   180,   553,   166,   167,   168,
     169,     0,     0,   170,    81,     0,    82,     0,     0,    83,
     171,     0,     0,     0,    84,     0,     0,     0,    85,     0,
       0,     0,     0,     0,   172,     0,     0,    86,     0,   181,
     182,     0,   183,     0,    87,   184,   185,   186,     0,    88,
       0,   173,   174,    89,   187,     0,     0,   188,     0,     0,
       0,     0,     0,     0,    90,     0,    91,   175,     0,     0,
      92,     0,     0,   176,     0,   177,     0,   178,    93,    94,
     179,     0,    95,     0,     0,     0,    56,   180,   594,   166,
     167,   168,   169,     0,     0,   170,    81,     0,    82,     0,
       0,    83,   171,     0,     0,     0,    84,     0,     0,     0,
      85,     0,     0,     0,     0,     0,   172,     0,     0,    86,
       0,   181,   182,     0,   183,     0,    87,   184,   185,   186,
       0,    88,     0,   173,   174,    89,   187,     0,     0,   188,
       0,     0,     0,     0,     0,     0,    90,     0,    91,   175,
       0,     0,    92,     0,     0,   176,     0,   177,     0,   178,
      93,    94,   179,     0,    95,     0,     0,   260,    56,   180,
       0,   166,   167,   168,   169,     0,     0,   170,    81,     0,
      82,     0,     0,    83,   171,     0,     0,     0,    84,     0,
       0,     0,    85,     0,     0,     0,     0,     0,   172,     0,
       0,    86,     0,   181,   182,     0,   183,     0,    87,   184,
     185,   186,     0,    88,     0,   173,   174,    89,   187,     0,
       0,   188,     0,     0,     0,     0,     0,     0,    90,     0,
      91,   175,     0,     0,    92,     0,     0,   176,     0,   177,
       0,   178,    93,    94,   179,     0,    95,     0,     0,     0,
      56,   180,     0,   166,   167,   168,   169,     0,     0,   170,
      81,     0,    82,     0,     0,    83,   171,     0,     0,     0,
      84,     0,     0,     0,    85,     0,     0,     0,     0,     0,
     172,     0,     0,    86,     0,   181,   182,     0,   183,     0,
      87,   184,   185,   186,   870,    88,     0,   173,   174,    89,
     187,     0,     0,   188,     0,     0,     0,     0,     0,     0,
      90,     0,    91,   175,     0,     0,    92,     0,     0,   176,
       0,   177,     0,   178,    93,    94,   179,     0,    95,     0,
       0,    56,     0,   180,   166,   167,   168,   169,     0,     0,
     170,    81,     0,    82,     0,     0,    83,   171,     0,     0,
       0,    84,     0,     0,     0,    85,     0,     0,     0,     0,
       0,   172,     0,     0,    86,     0,     0,   181,   182,     0,
     183,    87,     0,   184,   185,   186,    88,     0,   173,   174,
      89,     0,   187,     0,     0,   188,     0,     0,     0,     0,
       0,    90,     0,    91,   175,     0,     0,    92,   601,     0,
     176,     0,   177,     0,   178,    93,    94,   179,    81,    95,
      82,     0,     0,    83,   180,    58,   602,     0,    84,     0,
      59,     0,    85,     0,    60,   603,   604,     0,     0,     0,
       0,    86,     0,     0,     0,     0,   605,     0,    87,    61,
       0,     0,     0,    88,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,   186,     0,    90,     0,
      91,     0,     0,     0,    92,    62,   188,     0,   601,     0,
       0,     0,    93,    94,     0,     0,    95,     0,    81,   606,
      82,     0,     0,    83,     0,    58,   602,     0,    84,     0,
      59,     0,    85,     0,    60,   603,   604,     0,     0,     0,
       0,    86,     0,     0,     0,     0,   605,     0,    87,    61,
       0,     0,    56,    88,     0,     0,     0,    89,     0,     0,
       0,     0,    81,   607,    82,     0,     0,    83,    90,     0,
      91,     0,    84,     0,    92,    62,    85,     0,     0,     0,
       0,     0,    93,    94,     0,    86,    95,     0,     0,   606,
       0,     0,    87,     0,    32,     0,     0,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,     0,    91,     0,    33,     0,    92,     0,
       0,     0,     0,     0,     0,     0,    93,    94,     0,    34,
      95,     0,     0,   407,    36,     0,     0,     0,     0,    37,
       0,    38,    39,    40,    41,     0,     0,     0,    42,     0,
       0,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44,     0,     0,    45,     0,    46
};

static const short int yycheck[] =
{
       3,     1,   324,    59,   503,   263,    15,    98,   331,   332,
     680,    59,    15,   646,   105,   106,   513,   616,   238,   269,
     257,   254,   254,   693,   254,   254,     3,   331,   332,     3,
       3,   667,   254,    59,   254,    35,   254,    83,     4,   254,
      12,   254,   678,     0,     4,     4,   283,   134,   608,   503,
     137,    88,    13,   624,    54,     3,    88,   238,     4,    59,
     180,   576,     4,   101,   120,     4,   127,   128,   100,     4,
       4,    15,     4,    73,   238,    47,     4,   710,   238,    23,
     402,    87,     4,    27,     4,    29,     4,   124,   325,    87,
       4,     4,     4,     4,    38,    39,    40,    41,   238,   131,
     101,   238,   738,   238,   142,   238,   238,    73,   238,   669,
     238,   238,    73,    73,    53,   101,     3,   173,   572,    63,
     120,   636,   100,     0,   180,   173,   124,   133,    72,   765,
      74,    70,   180,   101,   134,   355,   772,   137,     4,     5,
     140,   142,   145,   102,   101,   117,   118,   173,   719,   236,
     124,   124,   155,   131,   651,   132,   142,   101,   124,   133,
     410,   660,   134,   135,   397,   397,   403,   397,   397,   419,
     806,   262,   263,   173,   355,   397,   124,   397,   124,   397,
     180,   272,   397,   819,   397,   133,   306,   307,    54,   124,
     124,   355,   124,   131,   864,   355,   124,     3,   142,   503,
     799,   145,   124,    87,   124,   101,   124,    73,   264,   265,
     124,   124,   124,   124,   101,   355,   264,   265,   355,   862,
     355,    87,   355,   355,   721,   355,   235,   355,   355,    87,
     886,    87,   235,    87,   833,   238,   236,   237,   264,   265,
       4,   150,   875,    88,    87,   101,   142,   156,   132,   252,
     159,   254,   895,   162,   310,   311,   579,   101,   124,   101,
     101,   917,   310,   311,   264,   265,   101,   937,   938,   573,
     124,   594,    87,   133,   132,   579,   919,   920,   934,   124,
      15,    87,   101,   101,   310,   311,   942,   352,    23,   132,
     594,   101,    27,   101,    29,   101,   100,     4,   142,    87,
     142,   142,   101,    38,    39,    40,    41,   142,   101,   101,
     310,   311,   101,   969,   370,   133,   372,   132,   133,   962,
     963,   386,   370,   142,   372,   133,   141,   131,    63,    21,
      16,   240,   142,    19,    26,   124,   124,    72,    30,    74,
      34,   664,   646,   666,   370,    88,   372,    88,   120,   142,
     142,   100,   355,    45,   927,   133,   660,   100,    44,   100,
     664,    88,   666,    49,   331,   332,   101,    18,   140,   868,
     370,   132,   372,   100,   377,     5,   949,   380,    64,    71,
      66,    75,   131,   706,    35,   762,   709,    88,   131,    88,
     131,   768,    78,    79,   397,     4,    82,   774,   142,    88,
     101,   100,   706,    88,   131,   709,   710,   142,    88,     4,
     145,   100,    55,   130,    57,   100,   133,   111,   112,    62,
     100,   115,   116,   117,   118,   115,   116,   121,   122,     4,
     124,   125,   126,   127,   128,   129,   180,   695,   131,     4,
     134,   135,   136,   137,   138,   139,   131,   503,   504,   111,
     112,   131,    17,    17,   133,   503,   504,   780,   514,   130,
      25,    25,   141,   121,   122,   123,   514,   124,   125,   126,
     131,   132,   528,   796,   130,   531,   780,   100,   504,   102,
     528,   131,   538,   531,   312,   313,   314,   315,   514,   100,
     538,   102,   796,   124,   125,   126,   100,   588,   102,   100,
       4,   102,   528,   503,   504,   531,     4,   100,   831,   102,
       3,   567,   538,   257,   514,   259,   572,   573,   100,   567,
     102,   100,   266,   102,   572,   573,   124,   831,   528,     4,
     621,   531,    87,   100,   838,   102,   503,    87,   538,   283,
     130,   567,   130,   287,   131,   132,   602,   603,   131,   132,
     131,   132,    96,    97,   602,   603,    96,    97,   130,    98,
      99,   617,   131,   132,   868,   316,   317,   567,   124,   617,
     132,   875,   572,   573,   308,   309,   602,   603,   132,   323,
     132,   325,   904,   905,   958,   959,   642,   132,   100,   100,
     646,   617,    87,   337,   642,   339,   652,    87,   646,    87,
     923,    87,   602,   603,   133,   696,   573,   133,   608,    87,
     137,    88,   579,   100,   670,   671,   642,   617,   136,   923,
     119,   138,   670,   671,    88,     4,   142,   594,   100,   142,
     100,     4,    88,     4,     4,   331,   332,     4,     4,   131,
     131,    87,   642,    87,   670,   671,   646,    87,    87,    87,
     131,    51,   652,   142,   710,    88,   141,    88,   142,   403,
     404,    88,   710,     4,    88,    88,   142,    88,   100,   669,
     670,   671,   672,    14,    88,    16,    87,    87,    19,   646,
     424,   425,    87,    24,   132,   145,    18,    28,   432,   131,
      31,    88,   100,   660,   131,   131,    37,   664,    88,   666,
      88,   131,   131,    44,    88,   130,    87,   142,    49,   131,
     710,   131,    53,    31,   100,    54,    88,   331,   332,    88,
      88,    54,     4,    64,     4,    66,     4,    88,    88,    70,
     142,    43,   131,   131,   141,   100,   132,    78,    79,   706,
     360,    82,   709,   710,    85,    63,   101,    87,   804,   805,
      87,    87,   101,   809,   132,     4,   804,   805,    87,   101,
      88,   809,   506,     4,   508,   141,     4,   511,   132,   513,
      29,    89,    90,    91,    92,    93,    94,    95,   804,   805,
      88,    87,   838,   809,   141,    88,    87,   132,    88,    87,
     838,   102,   181,   182,   183,   184,   185,   186,   187,   188,
       4,   132,    88,   100,   804,   805,   131,   503,   131,   809,
     130,    88,   815,   780,    88,     4,   331,   332,   132,   875,
      88,    88,    88,   130,   568,   331,   332,   875,   572,   796,
     103,   104,   105,   106,   107,   108,   109,   110,   838,   459,
     113,   114,   462,   463,   464,    88,   142,   142,   142,    88,
      87,   854,    87,   142,   130,   858,   859,   913,    88,    88,
     863,    97,    96,   142,   831,   913,    88,   132,   141,    88,
     142,   838,   616,    88,    99,   875,   879,   573,    98,    88,
     624,   331,   332,   579,    97,    96,   142,   913,   632,   503,
     173,   131,   173,   696,   425,   560,   418,   838,   594,   318,
     414,   868,   319,   321,   320,   908,   909,   651,   875,   322,
     711,   720,   800,   913,   303,   304,   305,   306,   307,   308,
     309,   836,   838,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   569,   868,   339,   940,   941,   718,
     943,   636,   331,   332,   781,   117,     4,   145,   608,    48,
     646,   151,   123,   697,   355,   575,   923,   854,   859,   573,
     858,     0,   916,   908,   660,   579,   909,   943,   664,   397,
     666,   380,    11,   377,    24,   719,   140,   721,   163,   723,
     594,   374,    -1,    -1,    -1,    -1,    -1,    -1,   503,    -1,
     610,    -1,    -1,   613,    33,    -1,    -1,   503,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
     706,    50,    51,   709,   710,   635,    -1,    56,    -1,    58,
      59,    60,    61,    -1,    -1,    -1,    65,    -1,   417,    -1,
      69,    -1,   646,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    84,   660,    86,    -1,    -1,
     664,    -1,   666,   503,    -1,   799,    -1,    -1,   573,    -1,
      -1,    -1,    -1,    11,   579,    -1,    -1,   573,    -1,    -1,
      -1,    -1,    -1,   579,    -1,    -1,    -1,    -1,    -1,   594,
     824,    -1,    -1,    -1,   780,    33,    -1,    -1,   594,   833,
      -1,    -1,   706,    -1,    -1,   709,   710,    -1,    46,    -1,
     796,    -1,    50,    51,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,   503,    -1,    -1,    65,    -1,    -1,
      -1,    69,    -1,   573,    -1,    -1,    -1,    -1,    -1,   579,
      -1,   646,    -1,    81,    -1,   831,    84,    -1,    86,    -1,
     646,    -1,   838,    -1,   594,   660,    -1,    -1,    -1,   664,
      -1,   666,    -1,    -1,   660,    -1,    -1,    -1,   664,    -1,
     666,   550,    -1,   552,   553,    -1,   780,    -1,    -1,    -1,
      -1,    -1,   868,    -1,    -1,    -1,    -1,    -1,    -1,   875,
      -1,    -1,   796,    -1,   573,    -1,    -1,   807,    -1,    -1,
     579,   706,    -1,    -1,   709,   710,   646,    -1,    -1,    -1,
     706,    -1,    -1,   709,   710,   594,    -1,    -1,   828,   829,
     660,    -1,    -1,    -1,   664,    -1,   666,   831,    -1,    -1,
      -1,    -1,    -1,    -1,   838,    -1,    -1,   923,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   626,    -1,    -1,
      -1,   630,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   868,    -1,   706,   646,    -1,   709,
     710,   875,    -1,    -1,    -1,   780,    -1,    -1,    -1,    -1,
      -1,   660,    -1,     4,   780,   664,    -1,   666,    -1,    -1,
      -1,   796,    -1,    14,    -1,    16,    -1,    -1,    19,    -1,
     796,    -1,    -1,    24,    -1,   915,   916,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,   923,
      -1,    -1,    -1,    44,    -1,    -1,   831,   706,    49,    -1,
     709,   710,    53,   838,    -1,   831,    -1,   947,   948,    -1,
     780,    -1,   838,    64,    -1,    66,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,   796,    78,    79,    -1,
      -1,    82,    -1,   868,    85,    -1,    -1,    -1,    -1,    -1,
     875,    -1,   868,    -1,    -1,    -1,    -1,    -1,    -1,   875,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,   831,    16,    -1,    -1,    19,    -1,    -1,   838,    -1,
      24,   780,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,   796,   923,    -1,
      44,    -1,    -1,    -1,    -1,    49,    -1,   923,   868,    53,
      -1,    -1,    -1,    -1,    -1,   875,    -1,    -1,    -1,    -1,
      64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,   831,    -1,    78,    79,    -1,    -1,    82,   838,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   923,    -1,    -1,    -1,    -1,     4,   868,
      -1,     7,     8,     9,    10,    -1,   875,    13,    14,    15,
      16,    17,    -1,    19,    20,    -1,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    44,    -1,
      -1,    -1,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,   923,    -1,    -1,    63,    64,    -1,
      66,    67,    -1,    -1,    70,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,    -1,   124,    -1,
      -1,   127,   128,   129,    -1,   131,   132,    -1,    -1,    -1,
     136,     4,    -1,   139,     7,     8,     9,    10,    -1,   145,
      13,    14,    15,    16,    -1,    -1,    19,    20,    -1,    22,
      23,    24,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    -1,    66,    67,    -1,    -1,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    85,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
      -1,   124,    -1,    -1,   127,   128,   129,    -1,   131,   132,
      -1,    -1,    -1,   136,     4,    -1,   139,     7,     8,     9,
      10,    -1,   145,    13,    14,    15,    16,    -1,    -1,    19,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    44,    -1,    -1,    -1,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    -1,    66,    67,    -1,    -1,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,
      -1,    -1,    13,    14,    -1,    16,    -1,    -1,    19,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,
      -1,   121,   122,    34,   124,    -1,    37,   127,   128,   129,
      -1,   131,   132,    44,    -1,    -1,   136,    -1,    49,   139,
      51,    52,    53,    -1,    -1,   145,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    66,    67,    68,    -1,    70,
      -1,    -1,    73,    -1,    75,    -1,    77,    78,    79,    80,
      -1,    82,    -1,    -1,    -1,     4,    87,    -1,     7,     8,
       9,    10,    -1,    -1,    13,    14,    -1,    16,    -1,    -1,
      19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
     121,   122,    -1,   124,    -1,    44,   127,   128,   129,    -1,
      49,   132,    51,    52,    53,   136,    55,    -1,   139,    -1,
      -1,   142,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      -1,    70,    -1,    -1,    73,    -1,    75,    -1,    77,    78,
      79,    80,    -1,    82,    -1,    -1,     4,    -1,    87,     7,
       8,     9,    10,    -1,    -1,    13,    14,    -1,    16,    -1,
      -1,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,
      -1,    -1,   121,   122,    -1,   124,    44,    -1,   127,   128,
     129,    49,    -1,    51,    52,    53,    -1,   136,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    67,
      68,    -1,    70,    -1,    -1,    73,    -1,    75,    -1,    77,
      78,    79,    80,    -1,    82,    -1,    -1,    -1,     4,    87,
      -1,     7,     8,     9,    10,    -1,    -1,    13,    14,    -1,
      16,    -1,    -1,    19,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    -1,   121,   122,    -1,   124,    -1,    44,   127,
     128,   129,    -1,    49,   132,    51,    52,    53,   136,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      66,    67,    -1,    -1,    70,    -1,    -1,    73,    -1,    75,
      -1,    77,    78,    79,    80,    -1,    82,    -1,    -1,    85,
       4,    87,    88,     7,     8,     9,    10,    -1,    -1,    13,
      14,    -1,    16,    -1,    -1,    19,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,    -1,   121,   122,    -1,   124,    -1,
      44,   127,   128,   129,    -1,    49,    -1,    51,    52,    53,
     136,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      -1,    75,    -1,    77,    78,    79,    80,    -1,    82,    -1,
      -1,    85,     4,    87,    -1,     7,     8,     9,    10,    -1,
      -1,    13,    14,    -1,    16,    -1,    -1,    19,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    37,    -1,   121,   122,    -1,
     124,    -1,    44,   127,   128,   129,    -1,    49,    -1,    51,
      52,    53,   136,    -1,    -1,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    66,    67,    -1,    -1,    70,    -1,
      -1,    73,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      82,    -1,    -1,    -1,     4,    87,    88,     7,     8,     9,
      10,    -1,    -1,    13,    14,    -1,    16,    -1,    -1,    19,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,   121,
     122,    -1,   124,    -1,    44,   127,   128,   129,    -1,    49,
      -1,    51,    52,    53,   136,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    66,    67,    -1,    -1,
      70,    -1,    -1,    73,    -1,    75,    -1,    77,    78,    79,
      80,    -1,    82,    -1,    -1,    -1,     4,    87,    88,     7,
       8,     9,    10,    -1,    -1,    13,    14,    -1,    16,    -1,
      -1,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,
      -1,   121,   122,    -1,   124,    -1,    44,   127,   128,   129,
      -1,    49,    -1,    51,    52,    53,   136,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    67,
      -1,    -1,    70,    -1,    -1,    73,    -1,    75,    -1,    77,
      78,    79,    80,    -1,    82,    -1,    -1,    85,     4,    87,
      -1,     7,     8,     9,    10,    -1,    -1,    13,    14,    -1,
      16,    -1,    -1,    19,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    -1,   121,   122,    -1,   124,    -1,    44,   127,
     128,   129,    -1,    49,    -1,    51,    52,    53,   136,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      66,    67,    -1,    -1,    70,    -1,    -1,    73,    -1,    75,
      -1,    77,    78,    79,    80,    -1,    82,    -1,    -1,    -1,
       4,    87,    -1,     7,     8,     9,    10,    -1,    -1,    13,
      14,    -1,    16,    -1,    -1,    19,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,    -1,   121,   122,    -1,   124,    -1,
      44,   127,   128,   129,   130,    49,    -1,    51,    52,    53,
     136,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    67,    -1,    -1,    70,    -1,    -1,    73,
      -1,    75,    -1,    77,    78,    79,    80,    -1,    82,    -1,
      -1,     4,    -1,    87,     7,     8,     9,    10,    -1,    -1,
      13,    14,    -1,    16,    -1,    -1,    19,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    -1,   121,   122,    -1,
     124,    44,    -1,   127,   128,   129,    49,    -1,    51,    52,
      53,    -1,   136,    -1,    -1,   139,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    66,    67,    -1,    -1,    70,     4,    -1,
      73,    -1,    75,    -1,    77,    78,    79,    80,    14,    82,
      16,    -1,    -1,    19,    87,    21,    22,    -1,    24,    -1,
      26,    -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,    64,    -1,
      66,    -1,    -1,    -1,    70,    71,   139,    -1,     4,    -1,
      -1,    -1,    78,    79,    -1,    -1,    82,    -1,    14,    85,
      16,    -1,    -1,    19,    -1,    21,    22,    -1,    24,    -1,
      26,    -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,
      -1,    -1,     4,    49,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    14,   129,    16,    -1,    -1,    19,    64,    -1,
      66,    -1,    24,    -1,    70,    71,    28,    -1,    -1,    -1,
      -1,    -1,    78,    79,    -1,    37,    82,    -1,    -1,    85,
      -1,    -1,    44,    -1,    11,    -1,    -1,    49,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    66,    -1,    33,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    -1,    46,
      82,    -1,    -1,    85,    51,    -1,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    86
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,    83,   285,   286,   295,   296,   297,   299,     4,   152,
     291,   292,     0,   287,   289,   300,   301,   302,   306,   361,
     372,   393,   401,   402,   403,   404,   414,   296,   133,   141,
     131,     4,    11,    33,    46,    50,    51,    56,    58,    59,
      60,    61,    65,    69,    81,    84,    86,   303,   304,   305,
     287,   301,   404,   101,   298,   133,     4,   291,    21,    26,
      30,    45,    71,   305,    31,    63,    89,    90,    91,    92,
      93,    94,    95,   405,   406,   407,   291,   132,   293,     5,
     307,    14,    16,    19,    24,    28,    37,    44,    49,    53,
      64,    66,    70,    78,    79,    82,    85,   153,   154,   155,
     156,   157,   158,   159,   160,   162,   291,   322,     4,     4,
       4,   291,   408,   409,   411,   130,   131,   294,   131,   290,
     130,   308,   309,     4,   161,   124,     3,   164,   164,   164,
       4,   130,   394,   395,   130,   373,   374,   130,   362,   363,
     100,   102,    87,   410,   412,   286,   159,   291,   310,   132,
     311,   308,   124,    87,   157,   132,   396,   310,   132,   375,
     310,   132,   364,   102,   409,   415,     7,     8,     9,    10,
      13,    20,    34,    51,    52,    67,    73,    75,    77,    80,
      87,   121,   122,   124,   127,   128,   129,   136,   139,   150,
     151,   155,   159,   168,   169,   170,   171,   172,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   185,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   214,   217,   291,   288,   300,   100,   100,   312,   290,
     311,   287,   321,   324,   325,   326,   328,   287,   397,   398,
     399,   290,   376,   290,   365,   290,   415,   101,   133,    87,
      85,   153,   154,   162,    87,    87,    87,    85,   155,   159,
     202,   217,   291,   196,   196,   196,   196,   196,   196,   196,
     196,   133,   133,   101,   133,    87,    88,   100,   121,   122,
     123,   103,   104,   105,   106,   107,   108,   109,   110,   113,
     114,   141,   216,   124,   125,   126,   127,   128,   111,   112,
      12,    47,   117,   118,   134,   135,   115,   116,   136,   137,
     138,   119,   120,   140,    87,   101,   142,   310,   291,    15,
      23,    27,    29,    38,    39,    40,    41,    63,    72,    74,
     145,   240,   241,   251,   252,   253,   263,   265,   266,   267,
     268,   270,   287,   302,   313,   314,   315,   316,   317,   318,
     319,   329,   338,   344,   349,   354,   358,   413,   290,    55,
      57,    62,   327,    88,   100,     4,   142,   100,   287,   377,
     378,   379,   380,   383,   386,   390,   287,   302,   316,   317,
     318,   329,   338,   344,   349,   354,   366,   367,   368,   176,
       4,   217,    87,   101,   132,   369,   153,    85,   153,   217,
     198,   124,   164,   199,   200,   201,   199,   124,    88,   164,
       4,     4,   176,     4,    55,    62,   166,   167,   173,   217,
     217,     4,   215,   196,   196,   196,   196,   202,   202,   203,
     203,   153,   153,   204,   204,   204,   204,   205,   205,   206,
     207,   208,   209,   210,   217,   173,   176,   131,   131,    20,
      36,    48,    76,    80,    81,    83,   131,   132,   172,   179,
     180,   182,   194,   195,   196,   214,   221,   222,   226,   237,
     238,   239,   240,   241,   249,   250,   251,   252,   253,   263,
     264,   265,   266,   267,   268,   270,   271,   276,   277,   278,
     279,   281,   221,    87,    87,     4,    17,    25,    87,   217,
     269,    87,   269,    87,   303,   142,   315,   131,   222,   323,
     153,   153,   131,   325,   141,   142,   399,    51,   382,   142,
     379,   303,   142,   368,   102,    88,   173,   176,    68,   217,
     232,   233,   369,   370,   371,    88,   186,    88,    88,   199,
      88,   201,    88,    88,   193,   199,   102,   165,   217,   165,
     100,    88,   217,   213,    88,   102,   222,    87,    87,   222,
     222,   222,    87,   223,   145,    18,   272,   273,   131,    88,
     153,   155,   159,   229,   238,   256,   259,   262,   291,   153,
     131,   217,   218,   131,    88,   217,   219,   131,   217,   131,
     219,     4,    22,    31,    32,    42,    85,   129,   153,   347,
     350,   351,   353,   355,     4,     4,   400,    31,    85,   153,
      88,   102,   153,   142,   100,    88,    88,   196,   196,   196,
      88,   167,   130,   153,   217,    35,   272,   275,   217,   229,
     280,     4,    22,   220,   221,   224,   225,   227,   228,   229,
     234,    87,    87,   222,   273,   221,     4,   230,   231,   131,
     100,     4,   131,   221,    88,    88,    88,    87,   153,   153,
      54,    54,   320,     4,     4,     5,    54,    73,    87,   230,
     291,   292,   348,   418,   131,   222,   359,   131,   222,   360,
     218,   153,   381,     4,    73,   163,   164,   101,   142,   232,
     196,   196,   217,     4,   282,   283,    88,   222,   275,    88,
     130,   153,   142,   220,   131,   131,   219,   159,   291,   141,
     100,   254,   238,    43,   221,   132,   242,   221,   321,     4,
     235,   236,   230,   291,   153,   153,   291,    87,    87,    34,
      75,   111,   112,   115,   116,   117,   118,   121,   122,   124,
     125,   126,   127,   128,   129,   134,   135,   136,   137,   138,
     139,   352,   101,   321,   131,    87,   418,    73,   101,   132,
       4,     4,    87,   418,   101,   184,   369,   163,   217,   141,
      88,   100,   221,   221,   220,   235,    88,     4,   274,   274,
     232,   231,   219,   257,   260,   217,    29,   243,    88,   141,
     100,   131,   131,   416,    87,    87,    87,    88,   321,    87,
     324,    88,   321,   132,   324,   345,   131,   132,   391,    87,
     321,   132,   324,   102,   284,   221,   283,   131,    88,    88,
     131,    88,   221,    17,    25,   244,   245,   246,   247,   248,
     130,   356,   357,   218,   236,   132,   153,   153,   321,   222,
      88,   153,   102,    88,   330,   102,   287,   332,   335,   336,
     392,   321,    88,   384,   102,   217,   222,   222,   255,   221,
     130,   218,   130,   142,   246,   225,   248,    13,    73,   339,
       4,     4,    88,     4,   332,    96,    97,   142,   287,   333,
     336,   287,   334,   335,   142,    88,   391,   287,   389,   418,
     258,   261,   262,   130,    87,    87,   287,   341,   342,   343,
      88,    88,    88,   100,   142,   419,   419,   346,   391,    96,
      97,   142,   132,    88,   173,   173,    98,    99,   142,   287,
     343,   287,   342,   153,   331,   131,   222,   337,   337,   419,
     391,   391,   385,   387,   221,    88,    88,   417,   417,   340,
       4,   419,   418,   418,   287,   287,   419,   389,   222,   222,
     417,    88,    97,    96,   142,   416,   416,   391,   391,   388,
     419
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
        case 11:
#line 139 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"ggG" << endl;;}
    break;

  case 12:
#line 140 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"fff" << endl;;}
    break;

  case 18:
#line 153 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"hhh" << endl;;}
    break;

  case 25:
#line 158 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::int" << endl;;}
    break;

  case 35:
#line 168 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc:void3"<<endl;;}
    break;

  case 89:
#line 271 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc:void4"<<endl;;}
    break;

  case 115:
#line 323 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {  ;}
    break;

  case 116:
#line 324 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {  ;}
    break;

  case 117:
#line 325 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {  ;}
    break;

  case 118:
#line 326 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {  ;}
    break;

  case 119:
#line 327 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc:void5"<<endl;;}
    break;

  case 120:
#line 327 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {  ;}
    break;

  case 158:
#line 393 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::7"<<endl;;}
    break;

  case 159:
#line 393 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::6"<<endl;;}
    break;

  case 160:
#line 396 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::1"<<endl;;}
    break;

  case 161:
#line 396 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::5"<<endl;;}
    break;

  case 162:
#line 399 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::equal4" << endl;;}
    break;

  case 177:
#line 414 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::labeled_statement" << endl;;}
    break;

  case 178:
#line 415 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::declaration_statement" << endl;;}
    break;

  case 179:
#line 416 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::embedded_statement" << endl;;}
    break;

  case 193:
#line 434 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {lc++; ;}
    break;

  case 194:
#line 434 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { rc++; ;}
    break;

  case 199:
#line 446 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon21"<<endl;;}
    break;

  case 201:
#line 452 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon22"<<endl;;}
    break;

  case 202:
#line 453 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon23"<<endl;;}
    break;

  case 212:
#line 476 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::10"<<endl;;}
    break;

  case 213:
#line 479 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::9"<<endl;;}
    break;

  case 216:
#line 486 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon24"<<endl;;}
    break;

  case 219:
#line 491 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::*1"<<endl;;}
    break;

  case 228:
#line 505 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { error->errQ->enqueue((yyvsp[-1].r.myLineNo) , (yyvsp[-1].r.myColno) , "Error:you should add if "," "); error->printErrQueue(); exit(1); ;}
    break;

  case 229:
#line 507 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { error->errQ->enqueue((yyvsp[-1].r.myLineNo) , (yyvsp[-1].r.myColno) , "Error:invalid expression term )"," "); error->printErrQueue(); exit(1); ;}
    break;

  case 231:
#line 513 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {lc++;;}
    break;

  case 232:
#line 513 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { rc++; ;}
    break;

  case 242:
#line 534 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { error->errQ->enqueue((yyvsp[0].r.myLineNo) , (yyvsp[0].r.myColno) , "Error:You should add constant value "," "); error->printErrQueue(); exit(1); ;}
    break;

  case 248:
#line 546 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {  ;}
    break;

  case 249:
#line 549 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon25"<<endl;   ;}
    break;

  case 250:
#line 551 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { error->errQ->enqueue((yyvsp[0].r.myLineNo) , (yyvsp[0].r.myColno) , "Error:you should add while "," "); error->printErrQueue(); exit(1); ;}
    break;

  case 251:
#line 555 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon26"<<endl;   ;}
    break;

  case 252:
#line 555 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon27"<<endl;;}
    break;

  case 254:
#line 557 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { error->errQ->enqueue((yyvsp[-2].r.myLineNo) , (yyvsp[-2].r.myColno) , "Error: you should add semicolon "," "); error->printErrQueue(); exit(1); ;}
    break;

  case 267:
#line 586 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {  ;}
    break;

  case 273:
#line 596 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon1"<<endl;;}
    break;

  case 274:
#line 598 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { error->errQ->enqueue((yyvsp[0].r.myLineNo) , (yyvsp[0].r.myColno) , "Error:you should add semicolon"," "); error->printErrQueue(); exit(1); ;}
    break;

  case 275:
#line 603 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon2"<<endl;;}
    break;

  case 276:
#line 606 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon3"<<endl;;}
    break;

  case 277:
#line 607 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon4"<<endl;;}
    break;

  case 278:
#line 608 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon5"<<endl;;}
    break;

  case 279:
#line 611 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon6"<<endl;;}
    break;

  case 282:
#line 618 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon7"<<endl;;}
    break;

  case 286:
#line 625 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { error->errQ->enqueue((yyvsp[0].r.myLineNo) , (yyvsp[0].r.myColno) , "Error:you should add catch or finally"," "); error->printErrQueue(); exit(1); ;}
    break;

  case 287:
#line 627 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { error->errQ->enqueue((yyvsp[-1].r.myLineNo) , (yyvsp[-1].r.myColno) , "Error:you should add try"," "); error->printErrQueue(); exit(1); ;}
    break;

  case 290:
#line 637 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {  ;}
    break;

  case 291:
#line 638 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {  ;}
    break;

  case 305:
#line 672 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::equal1" << endl;;}
    break;

  case 307:
#line 675 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Empty"<<endl;;}
    break;

  case 308:
#line 676 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::start"<<endl;;}
    break;

  case 317:
#line 695 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon8"<<endl;;}
    break;

  case 322:
#line 712 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {lc++;;}
    break;

  case 323:
#line 712 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {rc++;;}
    break;

  case 328:
#line 723 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::equal2" << endl;;}
    break;

  case 329:
#line 723 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon9"<<endl;;}
    break;

  case 330:
#line 726 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon10"<<endl;;}
    break;

  case 358:
#line 777 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { cout<<"Yacc::Class"<<endl;;}
    break;

  case 360:
#line 780 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { error->errQ->enqueue((yyvsp[-3].r.myLineNo) , (yyvsp[-3].r.myColno) , "Error:Name Error"," "); error->printErrQueue(); exit(1); ;}
    break;

  case 368:
#line 796 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"---"<<endl;  lc++; ;}
    break;

  case 369:
#line 796 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"---"<<endl; rc++; ;}
    break;

  case 384:
#line 819 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { error->errQ->enqueue((yyvsp[0].r.myLineNo) , (yyvsp[0].r.myColno) , "Error: Statment_Out_Function"," "); error->printErrQueue(); exit(1);;}
    break;

  case 385:
#line 822 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon11"<<endl;;}
    break;

  case 386:
#line 825 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon12"<<endl;;}
    break;

  case 389:
#line 834 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { error->errQ->enqueue((yyvsp[-3].r.myLineNo) , (yyvsp[-3].r.myColno) , "Error:Name Error"," "); error->printErrQueue(); exit(1); ;}
    break;

  case 390:
#line 837 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { error->errQ->enqueue((yyvsp[-2].r.myLineNo) , (yyvsp[-2].r.myColno) , "Error:you should add name"," "); error->printErrQueue(); exit(1); ;}
    break;

  case 391:
#line 839 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc:void6"<<endl;;}
    break;

  case 396:
#line 848 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc:void1"<<endl;;}
    break;

  case 398:
#line 852 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon13"<<endl;;}
    break;

  case 408:
#line 877 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {lc++;;}
    break;

  case 409:
#line 877 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {rc++;;}
    break;

  case 420:
#line 906 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon14"<<endl;;}
    break;

  case 421:
#line 909 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon15"<<endl;;}
    break;

  case 422:
#line 912 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { lc++; ;}
    break;

  case 423:
#line 912 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {rc++;;}
    break;

  case 429:
#line 934 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { lc++; ;}
    break;

  case 430:
#line 934 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    { rc++; ;}
    break;

  case 472:
#line 998 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon16"<<endl;;}
    break;

  case 474:
#line 1002 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon17"<<endl;;}
    break;

  case 479:
#line 1017 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {lc++;;}
    break;

  case 480:
#line 1017 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {rc++;;}
    break;

  case 504:
#line 1066 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {lc++;;}
    break;

  case 505:
#line 1066 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {rc++;;}
    break;

  case 515:
#line 1085 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc:void2"<<endl;;}
    break;

  case 516:
#line 1085 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {  ;}
    break;

  case 519:
#line 1094 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {lc++;;}
    break;

  case 520:
#line 1094 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {rc++;;}
    break;

  case 522:
#line 1101 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {lc++;;}
    break;

  case 523:
#line 1101 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {rc++;;}
    break;

  case 530:
#line 1117 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon18"<<endl;;}
    break;

  case 531:
#line 1118 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {lc++;;}
    break;

  case 532:
#line 1118 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {rc++;;}
    break;

  case 544:
#line 1146 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::equal3" << endl;;}
    break;

  case 546:
#line 1151 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {cout<<"yacc::Semicolon19"<<endl;  ;}
    break;

  case 570:
#line 1199 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {  ;}
    break;

  case 582:
#line 1218 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {;}
    break;

  case 583:
#line 1221 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {;}
    break;

  case 584:
#line 1224 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {;}
    break;

  case 585:
#line 1227 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {;}
    break;

  case 586:
#line 1230 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {;}
    break;

  case 587:
#line 1233 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"
    {;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3407 "yacc.cpp"

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


#line 1236 "E:\\Compiler\\29.11.2017\\ConsoleApplication2  -19\\yacc.y"




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
	
	
	if(lc == rc)
	{
	}

	else{
	cout<<"Bracket missing";
	}

	
	
}

