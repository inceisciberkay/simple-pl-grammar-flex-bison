/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    COLON = 258,                   /* COLON  */
    SEMICOLON = 259,               /* SEMICOLON  */
    LP = 260,                      /* LP  */
    RP = 261,                      /* RP  */
    COMMA = 262,                   /* COMMA  */
    LB = 263,                      /* LB  */
    RB = 264,                      /* RB  */
    TILDA = 265,                   /* TILDA  */
    LSB = 266,                     /* LSB  */
    RSB = 267,                     /* RSB  */
    ASSIGN_OP = 268,               /* ASSIGN_OP  */
    INCREMENT_OP = 269,            /* INCREMENT_OP  */
    DECREMENT_OP = 270,            /* DECREMENT_OP  */
    ADDITION_OP = 271,             /* ADDITION_OP  */
    SUBTRACTION_OP = 272,          /* SUBTRACTION_OP  */
    MULTIPLICATION_OP = 273,       /* MULTIPLICATION_OP  */
    DIVISION_OP = 274,             /* DIVISION_OP  */
    MOD_OP = 275,                  /* MOD_OP  */
    AND_OP = 276,                  /* AND_OP  */
    OR_OP = 277,                   /* OR_OP  */
    XOR_OP = 278,                  /* XOR_OP  */
    NOT_OP = 279,                  /* NOT_OP  */
    EQUAL_OP = 280,                /* EQUAL_OP  */
    NOT_EQUAL_OP = 281,            /* NOT_EQUAL_OP  */
    LESS_THAN_OP = 282,            /* LESS_THAN_OP  */
    LESS_THAN_EQUAL_OP = 283,      /* LESS_THAN_EQUAL_OP  */
    GREATER_THAN_OP = 284,         /* GREATER_THAN_OP  */
    GREATER_THAN_EQUAL_OP = 285,   /* GREATER_THAN_EQUAL_OP  */
    MAIN = 286,                    /* MAIN  */
    FN = 287,                      /* FN  */
    CONST = 288,                   /* CONST  */
    FOR = 289,                     /* FOR  */
    WHILE = 290,                   /* WHILE  */
    IF = 291,                      /* IF  */
    ELSE = 292,                    /* ELSE  */
    BREAK = 293,                   /* BREAK  */
    RETURN = 294,                  /* RETURN  */
    ON = 295,                      /* ON  */
    OFF = 296,                     /* OFF  */
    READ = 297,                    /* READ  */
    WRITE = 298,                   /* WRITE  */
    TIMER = 299,                   /* TIMER  */
    CONNECTED_DEV = 300,           /* CONNECTED_DEV  */
    TEMPERATURE = 301,             /* TEMPERATURE  */
    HUMIDITY = 302,                /* HUMIDITY  */
    AIRPRESSURE = 303,             /* AIRPRESSURE  */
    AIRQUALITY = 304,              /* AIRQUALITY  */
    LIGHT = 305,                   /* LIGHT  */
    SOUND = 306,                   /* SOUND  */
    SW1 = 307,                     /* SW1  */
    SW2 = 308,                     /* SW2  */
    SW3 = 309,                     /* SW3  */
    SW4 = 310,                     /* SW4  */
    SW5 = 311,                     /* SW5  */
    SW6 = 312,                     /* SW6  */
    SW7 = 313,                     /* SW7  */
    SW8 = 314,                     /* SW8  */
    SW9 = 315,                     /* SW9  */
    SW10 = 316,                    /* SW10  */
    BOOLEAN = 317,                 /* BOOLEAN  */
    FLOAT = 318,                   /* FLOAT  */
    INTEGER = 319,                 /* INTEGER  */
    STRING = 320,                  /* STRING  */
    IDENTIFIER = 321               /* IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define COLON 258
#define SEMICOLON 259
#define LP 260
#define RP 261
#define COMMA 262
#define LB 263
#define RB 264
#define TILDA 265
#define LSB 266
#define RSB 267
#define ASSIGN_OP 268
#define INCREMENT_OP 269
#define DECREMENT_OP 270
#define ADDITION_OP 271
#define SUBTRACTION_OP 272
#define MULTIPLICATION_OP 273
#define DIVISION_OP 274
#define MOD_OP 275
#define AND_OP 276
#define OR_OP 277
#define XOR_OP 278
#define NOT_OP 279
#define EQUAL_OP 280
#define NOT_EQUAL_OP 281
#define LESS_THAN_OP 282
#define LESS_THAN_EQUAL_OP 283
#define GREATER_THAN_OP 284
#define GREATER_THAN_EQUAL_OP 285
#define MAIN 286
#define FN 287
#define CONST 288
#define FOR 289
#define WHILE 290
#define IF 291
#define ELSE 292
#define BREAK 293
#define RETURN 294
#define ON 295
#define OFF 296
#define READ 297
#define WRITE 298
#define TIMER 299
#define CONNECTED_DEV 300
#define TEMPERATURE 301
#define HUMIDITY 302
#define AIRPRESSURE 303
#define AIRQUALITY 304
#define LIGHT 305
#define SOUND 306
#define SW1 307
#define SW2 308
#define SW3 309
#define SW4 310
#define SW5 311
#define SW6 312
#define SW7 313
#define SW8 314
#define SW9 315
#define SW10 316
#define BOOLEAN 317
#define FLOAT 318
#define INTEGER 319
#define STRING 320
#define IDENTIFIER 321

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
