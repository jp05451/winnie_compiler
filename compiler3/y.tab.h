/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 56 "hw3.y"
{
    char strval[MAX_LINE_LENG];
    struct symbol info;
}
/* Line 1529 of yacc.c.  */
#line 176 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

