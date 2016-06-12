/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
#line 12 "yacc.y" /* yacc.c:1909  */
 int num; char ch; char* chs; float f; double d; 

#line 115 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
