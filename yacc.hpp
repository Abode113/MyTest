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
/* Line 1447 of yacc.c.  */
#line 335 "yacc.hpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



