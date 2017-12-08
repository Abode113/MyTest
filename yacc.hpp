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
/* Line 1447 of yacc.c.  */
#line 335 "yacc.hpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



