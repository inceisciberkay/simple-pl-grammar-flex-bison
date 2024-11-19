/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "alot.yacc"

#include <stdio.h>
int yylex(); // avoid implicit declaration warning
void yyerror(char *); // avoid implicit declaration warning

#line 77 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_COLON = 3,                      /* COLON  */
  YYSYMBOL_SEMICOLON = 4,                  /* SEMICOLON  */
  YYSYMBOL_LP = 5,                         /* LP  */
  YYSYMBOL_RP = 6,                         /* RP  */
  YYSYMBOL_COMMA = 7,                      /* COMMA  */
  YYSYMBOL_LB = 8,                         /* LB  */
  YYSYMBOL_RB = 9,                         /* RB  */
  YYSYMBOL_TILDA = 10,                     /* TILDA  */
  YYSYMBOL_LSB = 11,                       /* LSB  */
  YYSYMBOL_RSB = 12,                       /* RSB  */
  YYSYMBOL_ASSIGN_OP = 13,                 /* ASSIGN_OP  */
  YYSYMBOL_INCREMENT_OP = 14,              /* INCREMENT_OP  */
  YYSYMBOL_DECREMENT_OP = 15,              /* DECREMENT_OP  */
  YYSYMBOL_ADDITION_OP = 16,               /* ADDITION_OP  */
  YYSYMBOL_SUBTRACTION_OP = 17,            /* SUBTRACTION_OP  */
  YYSYMBOL_MULTIPLICATION_OP = 18,         /* MULTIPLICATION_OP  */
  YYSYMBOL_DIVISION_OP = 19,               /* DIVISION_OP  */
  YYSYMBOL_MOD_OP = 20,                    /* MOD_OP  */
  YYSYMBOL_AND_OP = 21,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 22,                     /* OR_OP  */
  YYSYMBOL_XOR_OP = 23,                    /* XOR_OP  */
  YYSYMBOL_NOT_OP = 24,                    /* NOT_OP  */
  YYSYMBOL_EQUAL_OP = 25,                  /* EQUAL_OP  */
  YYSYMBOL_NOT_EQUAL_OP = 26,              /* NOT_EQUAL_OP  */
  YYSYMBOL_LESS_THAN_OP = 27,              /* LESS_THAN_OP  */
  YYSYMBOL_LESS_THAN_EQUAL_OP = 28,        /* LESS_THAN_EQUAL_OP  */
  YYSYMBOL_GREATER_THAN_OP = 29,           /* GREATER_THAN_OP  */
  YYSYMBOL_GREATER_THAN_EQUAL_OP = 30,     /* GREATER_THAN_EQUAL_OP  */
  YYSYMBOL_MAIN = 31,                      /* MAIN  */
  YYSYMBOL_FN = 32,                        /* FN  */
  YYSYMBOL_CONST = 33,                     /* CONST  */
  YYSYMBOL_FOR = 34,                       /* FOR  */
  YYSYMBOL_WHILE = 35,                     /* WHILE  */
  YYSYMBOL_IF = 36,                        /* IF  */
  YYSYMBOL_ELSE = 37,                      /* ELSE  */
  YYSYMBOL_BREAK = 38,                     /* BREAK  */
  YYSYMBOL_RETURN = 39,                    /* RETURN  */
  YYSYMBOL_ON = 40,                        /* ON  */
  YYSYMBOL_OFF = 41,                       /* OFF  */
  YYSYMBOL_READ = 42,                      /* READ  */
  YYSYMBOL_WRITE = 43,                     /* WRITE  */
  YYSYMBOL_TIMER = 44,                     /* TIMER  */
  YYSYMBOL_CONNECTED_DEV = 45,             /* CONNECTED_DEV  */
  YYSYMBOL_TEMPERATURE = 46,               /* TEMPERATURE  */
  YYSYMBOL_HUMIDITY = 47,                  /* HUMIDITY  */
  YYSYMBOL_AIRPRESSURE = 48,               /* AIRPRESSURE  */
  YYSYMBOL_AIRQUALITY = 49,                /* AIRQUALITY  */
  YYSYMBOL_LIGHT = 50,                     /* LIGHT  */
  YYSYMBOL_SOUND = 51,                     /* SOUND  */
  YYSYMBOL_SW1 = 52,                       /* SW1  */
  YYSYMBOL_SW2 = 53,                       /* SW2  */
  YYSYMBOL_SW3 = 54,                       /* SW3  */
  YYSYMBOL_SW4 = 55,                       /* SW4  */
  YYSYMBOL_SW5 = 56,                       /* SW5  */
  YYSYMBOL_SW6 = 57,                       /* SW6  */
  YYSYMBOL_SW7 = 58,                       /* SW7  */
  YYSYMBOL_SW8 = 59,                       /* SW8  */
  YYSYMBOL_SW9 = 60,                       /* SW9  */
  YYSYMBOL_SW10 = 61,                      /* SW10  */
  YYSYMBOL_BOOLEAN = 62,                   /* BOOLEAN  */
  YYSYMBOL_FLOAT = 63,                     /* FLOAT  */
  YYSYMBOL_INTEGER = 64,                   /* INTEGER  */
  YYSYMBOL_STRING = 65,                    /* STRING  */
  YYSYMBOL_IDENTIFIER = 66,                /* IDENTIFIER  */
  YYSYMBOL_YYACCEPT = 67,                  /* $accept  */
  YYSYMBOL_program = 68,                   /* program  */
  YYSYMBOL_main_procedure = 69,            /* main_procedure  */
  YYSYMBOL_function_definitions = 70,      /* function_definitions  */
  YYSYMBOL_function_definition = 71,       /* function_definition  */
  YYSYMBOL_parameter_list = 72,            /* parameter_list  */
  YYSYMBOL_non_empty_parameter_list = 73,  /* non_empty_parameter_list  */
  YYSYMBOL_parameter = 74,                 /* parameter  */
  YYSYMBOL_compound_statement = 75,        /* compound_statement  */
  YYSYMBOL_statement_list = 76,            /* statement_list  */
  YYSYMBOL_statement = 77,                 /* statement  */
  YYSYMBOL_connection_statement = 78,      /* connection_statement  */
  YYSYMBOL_switch_statement = 79,          /* switch_statement  */
  YYSYMBOL_switch_type = 80,               /* switch_type  */
  YYSYMBOL_read_statement = 81,            /* read_statement  */
  YYSYMBOL_sensor_type = 82,               /* sensor_type  */
  YYSYMBOL_connected_device = 83,          /* connected_device  */
  YYSYMBOL_write_statement = 84,           /* write_statement  */
  YYSYMBOL_const_declaration_statement = 85, /* const_declaration_statement  */
  YYSYMBOL_assignment_statement = 86,      /* assignment_statement  */
  YYSYMBOL_increment_statement = 87,       /* increment_statement  */
  YYSYMBOL_decrement_statement = 88,       /* decrement_statement  */
  YYSYMBOL_conditional_statement = 89,     /* conditional_statement  */
  YYSYMBOL_loop_statement = 90,            /* loop_statement  */
  YYSYMBOL_while_loop = 91,                /* while_loop  */
  YYSYMBOL_for_loop = 92,                  /* for_loop  */
  YYSYMBOL_return_statement = 93,          /* return_statement  */
  YYSYMBOL_break_statement = 94,           /* break_statement  */
  YYSYMBOL_expression = 95,                /* expression  */
  YYSYMBOL_or_expression = 96,             /* or_expression  */
  YYSYMBOL_and_expression = 97,            /* and_expression  */
  YYSYMBOL_xor_expression = 98,            /* xor_expression  */
  YYSYMBOL_compare_expression = 99,        /* compare_expression  */
  YYSYMBOL_additive_expression = 100,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 101, /* multiplicative_expression  */
  YYSYMBOL_not_expression = 102,           /* not_expression  */
  YYSYMBOL_term = 103,                     /* term  */
  YYSYMBOL_number = 104,                   /* number  */
  YYSYMBOL_function_call = 105,            /* function_call  */
  YYSYMBOL_argument_list = 106,            /* argument_list  */
  YYSYMBOL_non_empty_argument_list = 107   /* non_empty_argument_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   180

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   321


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      65,    66
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    70,    70,    72,    74,    75,    77,    79,    80,    82,
      83,    85,    86,    88,    90,    91,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   106,   107,
     109,   110,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   123,   124,   125,   127,   128,   129,   130,   131,
     132,   134,   136,   137,   139,   141,   142,   143,   145,   146,
     148,   149,   151,   152,   154,   155,   157,   158,   160,   162,
     164,   165,   167,   168,   170,   171,   173,   174,   176,   177,
     178,   179,   180,   181,   182,   184,   185,   186,   188,   189,
     190,   191,   193,   194,   196,   197,   198,   199,   200,   201,
     203,   204,   206,   208,   209,   211,   212
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "COLON", "SEMICOLON",
  "LP", "RP", "COMMA", "LB", "RB", "TILDA", "LSB", "RSB", "ASSIGN_OP",
  "INCREMENT_OP", "DECREMENT_OP", "ADDITION_OP", "SUBTRACTION_OP",
  "MULTIPLICATION_OP", "DIVISION_OP", "MOD_OP", "AND_OP", "OR_OP",
  "XOR_OP", "NOT_OP", "EQUAL_OP", "NOT_EQUAL_OP", "LESS_THAN_OP",
  "LESS_THAN_EQUAL_OP", "GREATER_THAN_OP", "GREATER_THAN_EQUAL_OP", "MAIN",
  "FN", "CONST", "FOR", "WHILE", "IF", "ELSE", "BREAK", "RETURN", "ON",
  "OFF", "READ", "WRITE", "TIMER", "CONNECTED_DEV", "TEMPERATURE",
  "HUMIDITY", "AIRPRESSURE", "AIRQUALITY", "LIGHT", "SOUND", "SW1", "SW2",
  "SW3", "SW4", "SW5", "SW6", "SW7", "SW8", "SW9", "SW10", "BOOLEAN",
  "FLOAT", "INTEGER", "STRING", "IDENTIFIER", "$accept", "program",
  "main_procedure", "function_definitions", "function_definition",
  "parameter_list", "non_empty_parameter_list", "parameter",
  "compound_statement", "statement_list", "statement",
  "connection_statement", "switch_statement", "switch_type",
  "read_statement", "sensor_type", "connected_device", "write_statement",
  "const_declaration_statement", "assignment_statement",
  "increment_statement", "decrement_statement", "conditional_statement",
  "loop_statement", "while_loop", "for_loop", "return_statement",
  "break_statement", "expression", "or_expression", "and_expression",
  "xor_expression", "compare_expression", "additive_expression",
  "multiplicative_expression", "not_expression", "term", "number",
  "function_call", "argument_list", "non_empty_argument_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-81)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-104)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -81,     9,   -20,   -81,    31,   -40,   -81,   -81,    30,    41,
     -81,   -81,     0,    18,   -81,   -81,    49,    58,   -81,   -81,
     -81,    34,   -81,     2,    29,    45,    48,   110,   111,   113,
     -81,    34,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,    76,   -81,   107,   -81,   133,   134,
     136,   138,   139,   140,   141,   -81,   -81,   -81,   -81,   -81,
     -81,   143,   144,   152,   118,   137,   142,   -81,   -12,    25,
     -81,   -81,   -81,   -81,    30,    24,   -81,   154,   151,   -81,
     -81,   -81,   147,    -7,    34,    34,   -81,   116,    23,   -45,
      34,   -81,   -81,    79,   116,   -81,   -81,   -10,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,   -81,
     -81,   -81,    34,    47,   158,   157,   160,   153,   -81,   -81,
     161,   162,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   137,   142,   -81,
      25,    25,    20,    20,    20,    20,    20,    20,   -81,   -81,
     -81,   -81,    34,    30,    30,   102,   -81,    34,   166,   -81,
     135,   159,   -81,    -7,    30,   -81,   167,   -81,    30,   -81
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     1,     0,     0,     2,     5,     0,     0,
      14,     3,     0,     0,    12,    11,     0,     8,     9,    71,
      16,     0,    13,     0,     0,     0,     0,     0,     0,     0,
      69,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    95,   101,   100,    97,    96,    15,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    23,    24,    64,
      65,     0,     0,     0,    70,    72,    74,    76,    78,    85,
      88,    92,    98,    99,     0,     0,   100,    96,     0,    59,
      61,    93,     0,     0,     0,     0,    68,     0,     0,     0,
       0,    58,    60,     0,     0,    17,    18,     0,    19,    20,
      21,    22,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      10,    94,     0,     0,     0,     0,     0,     0,    53,   105,
       0,   104,    28,    29,    55,    43,    45,    46,    47,    48,
      49,    50,    42,    44,    52,    30,    31,    73,    75,    77,
      86,    87,    79,    80,    81,    82,    83,    84,    89,    90,
      91,    54,     0,     0,     0,     0,   102,     0,     0,    66,
      62,     0,   106,     0,     0,    51,     0,    63,     0,    67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   -81,   -81,   -81,   -81,   -81,    99,   -72,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -53,   -81,   -81,   -80,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -21,   -81,
      70,    71,    69,    21,   -60,   -13,   155,   -81,   -81,   -81,
     -81
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     6,     2,     7,    16,    17,    18,    11,    13,
      47,    48,    49,    50,    51,   142,   128,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,   130,
     131
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,    14,   119,   124,   108,   109,    -7,    23,    24,     3,
      86,     4,     5,   110,   111,   112,   113,   114,   115,    19,
     132,   133,    20,    21,    19,    14,     9,    22,    21,  -103,
     145,   146,    23,    24,     8,    19,   108,   109,    10,    21,
     143,   144,    25,   116,   117,   118,    12,    25,   150,   151,
      21,    26,    27,    28,    29,    74,    30,    31,    25,   123,
      90,    91,    92,   125,   126,    75,    15,   129,    79,   134,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    42,    43,    76,    45,    77,
      15,   169,   170,   176,    21,    80,    42,    43,    76,    45,
      77,   161,   177,   158,   159,   160,   179,    42,    43,    76,
      45,    77,    88,    25,    82,    83,    84,    89,    85,    87,
      90,    91,    92,   135,   127,   136,   137,   138,   139,   140,
     141,   152,   153,   154,   155,   156,   157,    95,    96,    97,
     105,   168,    98,    99,   100,   101,   172,   102,   103,    93,
      94,    42,    43,    76,    45,    77,   104,   121,   106,    88,
     122,   127,   162,   163,   165,   107,   164,   166,   171,   167,
     173,   175,   174,   178,   120,   147,   149,   148,     0,     0,
      81
};

static const yytype_int16 yycheck[] =
{
      21,     1,    74,    83,    16,    17,     6,    14,    15,     0,
      31,    31,    32,    25,    26,    27,    28,    29,    30,     1,
      65,    66,     4,     5,     1,     1,    66,     9,     5,     6,
      40,    41,    14,    15,     3,     1,    16,    17,     8,     5,
      93,    94,    24,    18,    19,    20,     5,    24,   108,   109,
       5,    33,    34,    35,    36,     6,    38,    39,    24,    66,
      13,    14,    15,    84,    85,     7,    66,    88,    66,    90,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    62,    63,    64,    65,    66,
      66,   163,   164,   173,     5,    66,    62,    63,    64,    65,
      66,   122,   174,   116,   117,   118,   178,    62,    63,    64,
      65,    66,     5,    24,    66,     5,     5,    10,     5,    43,
      13,    14,    15,    44,    45,    46,    47,    48,    49,    50,
      51,   110,   111,   112,   113,   114,   115,     4,     4,     3,
      22,   162,     4,     4,     4,     4,   167,     4,     4,    42,
      43,    62,    63,    64,    65,    66,     4,     6,    21,     5,
      13,    45,     4,     6,    11,    23,     6,     6,    66,     7,
       4,    12,    37,     6,    75,   105,   107,   106,    -1,    -1,
      25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    68,    70,     0,    31,    32,    69,    71,     3,    66,
       8,    75,     5,    76,     1,    66,    72,    73,    74,     1,
       4,     5,     9,    14,    15,    24,    33,    34,    35,    36,
      38,    39,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    77,    78,    79,
      80,    81,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     6,     7,    64,    66,    95,    66,
      66,   103,    66,     5,     5,     5,    95,    43,     5,    10,
      13,    14,    15,    42,    43,     4,     4,     3,     4,     4,
       4,     4,     4,     4,     4,    22,    21,    23,    16,    17,
      25,    26,    27,    28,    29,    30,    18,    19,    20,    75,
      74,     6,    13,    66,    86,    95,    95,    45,    83,    95,
     106,   107,    65,    66,    95,    44,    46,    47,    48,    49,
      50,    51,    82,    83,    83,    40,    41,    97,    98,    99,
     101,   101,   100,   100,   100,   100,   100,   100,   102,   102,
     102,    95,     4,     6,     6,    11,     6,     7,    95,    75,
      75,    66,    95,     4,    37,    12,    86,    75,     6,    75
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    67,    68,    69,    70,    70,    71,    72,    72,    73,
      73,    74,    74,    75,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    78,    78,
      79,    79,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    83,    84,    84,    85,    86,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    92,    93,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
      99,    99,    99,    99,    99,   100,   100,   100,   101,   101,
     101,   101,   102,   102,   103,   103,   103,   103,   103,   103,
     104,   104,   105,   106,   106,   107,   107
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     0,     2,     6,     0,     1,     1,
       3,     1,     1,     3,     0,     2,     1,     2,     2,     2,
       2,     2,     2,     1,     1,     2,     2,     2,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     4,     3,     3,     4,     3,     1,     1,     2,     2,
       2,     2,     5,     7,     1,     1,     5,     9,     2,     1,
       1,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     4,     0,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1480 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 214 "alot.yacc"

int lineno = 1;

void yyerror(char *str) { fprintf(stderr, "Syntax error on line %d!\n", lineno); }

int main(){
	int result = yyparse();
	if(yynerrs == 0){
		printf("Input program is valid\n");
	}

	return result;
}
