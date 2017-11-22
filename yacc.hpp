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
/* Line 1447 of yacc.c.  */
#line 331 "yacc.hpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



