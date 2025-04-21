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

#ifndef YY_YY_220101048_TAB_H_INCLUDED
# define YY_YY_220101048_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    CHAR = 258,                    /* CHAR  */
    ELSE = 259,                    /* ELSE  */
    FOR = 260,                     /* FOR  */
    IF = 261,                      /* IF  */
    INT = 262,                     /* INT  */
    RETURN = 263,                  /* RETURN  */
    VOID = 264,                    /* VOID  */
    WHILE = 265,                   /* WHILE  */
    DO = 266,                      /* DO  */
    FLOAT = 267,                   /* FLOAT  */
    BEG = 268,                     /* BEG  */
    END = 269,                     /* END  */
    LEFT_SQUARE_BRACKET = 270,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 271,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_PARENTHESIS = 272,        /* LEFT_PARENTHESIS  */
    RIGHT_PARENTHESIS = 273,       /* RIGHT_PARENTHESIS  */
    ARROW = 274,                   /* ARROW  */
    BITWISE_AND = 275,             /* BITWISE_AND  */
    BITWISE_OR = 276,              /* BITWISE_OR  */
    BITWISE_XOR = 277,             /* BITWISE_XOR  */
    MULTIPLICATION = 278,          /* MULTIPLICATION  */
    ADDITION = 279,                /* ADDITION  */
    SUBTRACTION = 280,             /* SUBTRACTION  */
    NOT = 281,                     /* NOT  */
    DIVISION = 282,                /* DIVISION  */
    MODULO = 283,                  /* MODULO  */
    LESS_THAN = 284,               /* LESS_THAN  */
    GREATER_THAN = 285,            /* GREATER_THAN  */
    LESS_THAN_OR_EQUAL_TO = 286,   /* LESS_THAN_OR_EQUAL_TO  */
    GREATER_THAN_OR_EQUAL_TO = 287, /* GREATER_THAN_OR_EQUAL_TO  */
    EQUAL = 288,                   /* EQUAL  */
    NOT_EQUAL = 289,               /* NOT_EQUAL  */
    LOGICAL_AND = 290,             /* LOGICAL_AND  */
    LOGICAL_OR = 291,              /* LOGICAL_OR  */
    QUESTION_MARK = 292,           /* QUESTION_MARK  */
    COLON = 293,                   /* COLON  */
    SEMICOLON = 294,               /* SEMICOLON  */
    ASSIGN = 295,                  /* ASSIGN  */
    COMMA = 296,                   /* COMMA  */
    LSHIFT = 297,                  /* LSHIFT  */
    RSHIFT = 298,                  /* RSHIFT  */
    IFX = 299,                     /* IFX  */
    IDENTIFIER = 300,              /* IDENTIFIER  */
    INTEGER_CONSTANT = 301,        /* INTEGER_CONSTANT  */
    CHARACTER_CONSTANT = 302,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 303,          /* STRING_LITERAL  */
    FLOAT_CONST = 304,             /* FLOAT_CONST  */
    THEN = 305                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 154 "220101048.y"

    int int_value;
    float floatVal;
    char* string_value;
    char* charVal;
    char *unaryOperator;
    int instr;
    char unaryOp;
    int numParams;
    Expression* expr;
    Statement* stmt;
    symbolTableInit* symptr;
    symbolTableData* symType;
    Array* arr;

#line 130 "220101048.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_220101048_TAB_H_INCLUDED  */
