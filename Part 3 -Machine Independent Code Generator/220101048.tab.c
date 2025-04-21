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
#line 1 "220101048.y"

#include <bits/stdc++.h>
#include "220101048_translator.h"
using namespace std;

extern int yylex();
void yyerror(string s);
extern char* yytext;
extern int yylineno;
extern string prevType;
Expression* tmpForBool;

#line 84 "220101048.tab.c"

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

#include "220101048.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CHAR = 3,                       /* CHAR  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_DO = 11,                        /* DO  */
  YYSYMBOL_FLOAT = 12,                     /* FLOAT  */
  YYSYMBOL_BEG = 13,                       /* BEG  */
  YYSYMBOL_END = 14,                       /* END  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 15,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 16,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESIS = 17,          /* LEFT_PARENTHESIS  */
  YYSYMBOL_RIGHT_PARENTHESIS = 18,         /* RIGHT_PARENTHESIS  */
  YYSYMBOL_ARROW = 19,                     /* ARROW  */
  YYSYMBOL_BITWISE_AND = 20,               /* BITWISE_AND  */
  YYSYMBOL_BITWISE_OR = 21,                /* BITWISE_OR  */
  YYSYMBOL_BITWISE_XOR = 22,               /* BITWISE_XOR  */
  YYSYMBOL_MULTIPLICATION = 23,            /* MULTIPLICATION  */
  YYSYMBOL_ADDITION = 24,                  /* ADDITION  */
  YYSYMBOL_SUBTRACTION = 25,               /* SUBTRACTION  */
  YYSYMBOL_NOT = 26,                       /* NOT  */
  YYSYMBOL_DIVISION = 27,                  /* DIVISION  */
  YYSYMBOL_MODULO = 28,                    /* MODULO  */
  YYSYMBOL_LESS_THAN = 29,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 30,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_OR_EQUAL_TO = 31,     /* LESS_THAN_OR_EQUAL_TO  */
  YYSYMBOL_GREATER_THAN_OR_EQUAL_TO = 32,  /* GREATER_THAN_OR_EQUAL_TO  */
  YYSYMBOL_EQUAL = 33,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 34,                 /* NOT_EQUAL  */
  YYSYMBOL_LOGICAL_AND = 35,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 36,                /* LOGICAL_OR  */
  YYSYMBOL_QUESTION_MARK = 37,             /* QUESTION_MARK  */
  YYSYMBOL_COLON = 38,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 39,                 /* SEMICOLON  */
  YYSYMBOL_ASSIGN = 40,                    /* ASSIGN  */
  YYSYMBOL_COMMA = 41,                     /* COMMA  */
  YYSYMBOL_LSHIFT = 42,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 43,                    /* RSHIFT  */
  YYSYMBOL_IFX = 44,                       /* IFX  */
  YYSYMBOL_IDENTIFIER = 45,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 46,          /* INTEGER_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 47,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 48,            /* STRING_LITERAL  */
  YYSYMBOL_FLOAT_CONST = 49,               /* FLOAT_CONST  */
  YYSYMBOL_THEN = 50,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_primary_expression = 52,        /* primary_expression  */
  YYSYMBOL_constant = 53,                  /* constant  */
  YYSYMBOL_postfix_expression = 54,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 55,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 56,          /* unary_expression  */
  YYSYMBOL_unary_operator = 57,            /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 58, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 59,       /* additive_expression  */
  YYSYMBOL_shift_expression = 60,          /* shift_expression  */
  YYSYMBOL_relational_expression = 61,     /* relational_expression  */
  YYSYMBOL_bitwise_AND_expression = 62,    /* bitwise_AND_expression  */
  YYSYMBOL_bitwise_XOR_expression = 63,    /* bitwise_XOR_expression  */
  YYSYMBOL_bitwise_OR_expression = 64,     /* bitwise_OR_expression  */
  YYSYMBOL_equality_expression = 65,       /* equality_expression  */
  YYSYMBOL_logical_and_expression = 66,    /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 67,     /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 68,    /* conditional_expression  */
  YYSYMBOL_A = 69,                         /* A  */
  YYSYMBOL_B = 70,                         /* B  */
  YYSYMBOL_assignment_expression = 71,     /* assignment_expression  */
  YYSYMBOL_assignment_operator = 72,       /* assignment_operator  */
  YYSYMBOL_expression = 73,                /* expression  */
  YYSYMBOL_declaration = 74,               /* declaration  */
  YYSYMBOL_init_declarator = 75,           /* init_declarator  */
  YYSYMBOL_type_specifier = 76,            /* type_specifier  */
  YYSYMBOL_declarator = 77,                /* declarator  */
  YYSYMBOL_intermediate_identifier = 78,   /* intermediate_identifier  */
  YYSYMBOL_direct_declarator = 79,         /* direct_declarator  */
  YYSYMBOL_pointer = 80,                   /* pointer  */
  YYSYMBOL_parameter_list = 81,            /* parameter_list  */
  YYSYMBOL_intermediate_declarator = 82,   /* intermediate_declarator  */
  YYSYMBOL_parameter_declaration = 83,     /* parameter_declaration  */
  YYSYMBOL_initializer = 84,               /* initializer  */
  YYSYMBOL_statement = 85,                 /* statement  */
  YYSYMBOL_loop_statement = 86,            /* loop_statement  */
  YYSYMBOL_change_block = 87,              /* change_block  */
  YYSYMBOL_compound_statement = 88,        /* compound_statement  */
  YYSYMBOL_block_item_list = 89,           /* block_item_list  */
  YYSYMBOL_block_item = 90,                /* block_item  */
  YYSYMBOL_expression_statement = 91,      /* expression_statement  */
  YYSYMBOL_selection_statement = 92,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 93,       /* iteration_statement  */
  YYSYMBOL_F = 94,                         /* F  */
  YYSYMBOL_NESTPARSER = 95,                /* NESTPARSER  */
  YYSYMBOL_replaceActiveSymbolTableParse = 96, /* replaceActiveSymbolTableParse  */
  YYSYMBOL_jump_statement = 97,            /* jump_statement  */
  YYSYMBOL_translation_unit = 98,          /* translation_unit  */
  YYSYMBOL_external_declaration = 99,      /* external_declaration  */
  YYSYMBOL_function_definition = 100,      /* function_definition  */
  YYSYMBOL_declaration_list = 101,         /* declaration_list  */
  YYSYMBOL_argument_expression_list_opt = 102, /* argument_expression_list_opt  */
  YYSYMBOL_block_item_list_opt = 103,      /* block_item_list_opt  */
  YYSYMBOL_declaration_list_opt = 104      /* declaration_list_opt  */
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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   281

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   127,   127,   133,   138,   144,   150,   158,   163,   172,
     186,   206,   212,   218,   223,   231,   235,   278,   282,   286,
     290,   294,   303,   319,   330,   341,   355,   359,   370,   384,
     388,   399,   414,   418,   432,   446,   460,   476,   480,   494,
     498,   512,   516,   530,   534,   550,   570,   574,   587,   591,
     604,   608,   628,   634,   643,   647,   665,   671,   678,   684,
     688,   698,   702,   706,   710,   718,   727,   732,   740,   745,
     764,   776,   791,   798,   800,   805,   814,   819,   821,   826,
     833,   837,   842,   846,   850,   857,   862,   866,   870,   877,
     888,   897,   901,   909,   913,   920,   924,   931,   940,   953,
     967,   974,   986,   999,  1004,  1012,  1014,  1019,  1021,  1026,
    1036,  1038,  1044,  1048,  1055,  1059,  1065,  1067
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
  "\"end of file\"", "error", "\"invalid token\"", "CHAR", "ELSE", "FOR",
  "IF", "INT", "RETURN", "VOID", "WHILE", "DO", "FLOAT", "BEG", "END",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "ARROW", "BITWISE_AND", "BITWISE_OR", "BITWISE_XOR",
  "MULTIPLICATION", "ADDITION", "SUBTRACTION", "NOT", "DIVISION", "MODULO",
  "LESS_THAN", "GREATER_THAN", "LESS_THAN_OR_EQUAL_TO",
  "GREATER_THAN_OR_EQUAL_TO", "EQUAL", "NOT_EQUAL", "LOGICAL_AND",
  "LOGICAL_OR", "QUESTION_MARK", "COLON", "SEMICOLON", "ASSIGN", "COMMA",
  "LSHIFT", "RSHIFT", "IFX", "IDENTIFIER", "INTEGER_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "FLOAT_CONST", "THEN", "$accept",
  "primary_expression", "constant", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "bitwise_AND_expression",
  "bitwise_XOR_expression", "bitwise_OR_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "A", "B", "assignment_expression",
  "assignment_operator", "expression", "declaration", "init_declarator",
  "type_specifier", "declarator", "intermediate_identifier",
  "direct_declarator", "pointer", "parameter_list",
  "intermediate_declarator", "parameter_declaration", "initializer",
  "statement", "loop_statement", "change_block", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "F", "NESTPARSER",
  "replaceActiveSymbolTableParse", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list",
  "argument_expression_list_opt", "block_item_list_opt",
  "declaration_list_opt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-160)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-118)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     103,  -160,  -160,  -160,  -160,  -160,   -18,    81,  -160,  -160,
    -160,    -1,   -33,    16,    -4,  -160,   -28,  -160,  -160,   -14,
    -160,   232,  -160,   -18,   103,  -160,  -160,  -160,    48,   232,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,    92,    32,   232,    91,     6,    25,    94,    55,
      65,    68,    63,    59,    98,  -160,  -160,  -160,    77,  -160,
     119,    62,  -160,  -160,    86,   232,   232,    95,  -160,   232,
    -160,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,  -160,  -160,   110,
     143,  -160,   -11,    42,  -160,  -160,   137,   116,  -160,   140,
    -160,  -160,  -160,  -160,  -160,  -160,    91,    91,     6,     6,
      25,    25,    25,    25,    63,    55,    65,    94,    94,   232,
     232,  -160,  -160,   142,   189,  -160,  -160,   122,  -160,  -160,
    -160,   148,  -160,  -160,  -160,  -160,  -160,   150,  -160,  -160,
     120,  -160,  -160,   103,  -160,   232,  -160,    68,    59,   232,
     153,   232,  -160,   132,  -160,  -160,   143,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,   143,  -160,   134,  -160,   155,
     160,  -160,   222,  -160,  -160,   232,  -160,    53,  -160,   222,
    -160,  -160,   171,   232,  -160,  -160,    53,   158,  -160,  -160,
     178,  -160,  -160,  -160,  -160,  -160
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    62,    63,    61,    64,   108,     0,     0,   105,   107,
      72,    68,     0,    59,     0,    66,     0,     1,   106,     0,
      58,     0,   110,     0,   116,   102,   102,    65,     0,     0,
      17,    18,    19,    20,    21,     2,     7,     8,     4,     6,
       9,     3,    15,    22,     0,    26,    29,    32,    43,    39,
      41,    46,    37,    48,    50,    54,    79,    60,    59,   111,
       0,     0,    69,    57,     0,     0,   113,     0,    56,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    52,     0,
     115,    71,    78,     0,    73,     5,     0,   112,    13,     0,
      12,    55,    23,    24,    25,    22,    27,    28,    30,    31,
      33,    34,    35,    36,    38,    40,    42,    44,    45,     0,
       0,    52,   100,     0,     0,    89,    96,     0,    93,    94,
      80,    52,    91,    81,    82,    83,    84,     0,    67,    76,
       0,    77,    70,     0,    10,     0,    11,    47,    49,     0,
       0,     0,   104,     0,   102,    95,     0,   109,    75,    74,
      14,    53,   101,    53,   103,   115,    92,     0,   102,     0,
       0,    52,     0,    52,    90,     0,    52,     0,    51,     0,
      53,    52,    97,     0,    52,    53,     0,     0,    98,    52,
       0,    99,    85,    86,    87,    88
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,  -160,  -160,  -160,   -34,  -160,    64,    60,    49,
      57,    96,    93,    61,    99,    58,  -160,    10,   -68,  -159,
     -12,  -160,   -29,    11,  -160,     1,   164,   -85,   177,   102,
    -160,  -160,    54,  -160,   -95,  -160,  -160,  -160,  -160,    40,
    -157,     9,    15,  -160,  -160,   -23,    17,  -160,   193,  -160,
    -160,  -160,    43,  -160
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    40,    41,    42,    97,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,   119,    89,
      63,    69,   127,   128,    12,    23,    13,    14,    15,    16,
      93,   141,    94,    57,   129,   191,   154,   130,   131,   132,
     133,   134,   135,   150,   168,    60,   136,     7,     8,     9,
      24,    99,   137,    25
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,     6,   167,    61,   169,    10,    20,   139,     6,    56,
      70,     5,    10,    26,    19,   176,   -67,    11,     5,     1,
     120,   182,   181,     2,    22,     3,   187,    11,     4,  -117,
      74,    75,    28,   192,   138,    59,    96,   102,   103,   104,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   149,    98,   158,    21,   101,   122,   123,
     142,   124,    92,   156,    62,     1,   125,    76,    77,     2,
      29,     3,    68,    30,     4,    82,    31,    32,    33,    34,
      91,    17,   180,   143,     1,   105,   105,    83,     2,    84,
       3,   188,   126,     4,    87,   153,    85,    86,    35,    36,
      37,    38,    39,   175,    95,   177,     1,    65,   179,    66,
       2,    67,     3,   183,    71,     4,   186,    21,    72,    73,
     161,   190,   163,    78,    79,    80,    81,   110,   111,   112,
     113,   165,    90,   160,    88,   -53,   108,   109,   106,   107,
     100,   105,   117,   118,    92,   172,     1,   121,   122,   123,
       2,   124,     3,   144,   185,     4,   125,   145,   146,   151,
      29,   155,  -114,    30,   157,   138,    31,    32,    33,    34,
     162,   164,   171,   173,   174,   184,   189,   116,   148,   115,
     147,   114,   126,   122,   123,   178,   124,    58,    35,    36,
      37,    38,    39,    27,   140,    29,   166,   159,    30,   193,
      18,    31,    32,    33,    34,   194,    29,   195,   170,    30,
       0,     0,    31,    32,    33,    34,     0,   126,     0,     0,
       0,     0,     0,    35,    36,    37,    38,    39,   152,     0,
       0,     0,     0,     0,    35,    36,    37,    38,    39,    29,
       0,     0,    30,     0,     0,    31,    32,    33,    34,    29,
       0,     0,    30,     0,     0,    31,    32,    33,    34,     0,
       0,   126,     0,     0,     0,     0,     0,    35,    36,    37,
      38,    39,     0,     0,     0,     0,     0,    35,    36,    37,
      38,    39
};

static const yytype_int16 yycheck[] =
{
      29,     0,   161,    26,   163,    23,    39,    92,     7,    21,
      44,     0,    23,    17,    15,   172,    17,    45,     7,     3,
      88,   180,   179,     7,    13,     9,   185,    45,    12,    13,
      24,    25,    46,   190,    45,    24,    65,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,   121,    66,   140,    40,    69,     5,     6,
      18,     8,    61,   131,    16,     3,    13,    42,    43,     7,
      17,     9,    40,    20,    12,    20,    23,    24,    25,    26,
      18,     0,   177,    41,     3,   119,   120,    22,     7,    21,
       9,   186,    39,    12,    35,   124,    33,    34,    45,    46,
      47,    48,    49,   171,    18,   173,     3,    15,   176,    17,
       7,    19,     9,   181,    23,    12,   184,    40,    27,    28,
     149,   189,   151,    29,    30,    31,    32,    78,    79,    80,
      81,   154,    13,   145,    36,    37,    76,    77,    74,    75,
      45,   175,    85,    86,   143,   168,     3,    37,     5,     6,
       7,     8,     9,    16,   183,    12,    13,    41,    18,    17,
      17,    39,    14,    20,    14,    45,    23,    24,    25,    26,
      17,    39,    38,    18,    14,     4,    18,    84,   120,    83,
     119,    82,    39,     5,     6,   175,     8,    23,    45,    46,
      47,    48,    49,    16,    92,    17,   156,   143,    20,   190,
       7,    23,    24,    25,    26,   190,    17,   190,   165,    20,
      -1,    -1,    23,    24,    25,    26,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    17,
      -1,    -1,    20,    -1,    -1,    23,    24,    25,    26,    17,
      -1,    -1,    20,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     9,    12,    74,    76,    98,    99,   100,
      23,    45,    75,    77,    78,    79,    80,     0,    99,    15,
      39,    40,    74,    76,   101,   104,    17,    79,    46,    17,
      20,    23,    24,    25,    26,    45,    46,    47,    48,    49,
      52,    53,    54,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    71,    84,    77,    74,
      96,    96,    16,    71,    73,    15,    17,    19,    40,    72,
      56,    23,    27,    28,    24,    25,    42,    43,    29,    30,
      31,    32,    20,    22,    21,    33,    34,    35,    36,    70,
      13,    18,    76,    81,    83,    18,    73,    55,    71,   102,
      45,    71,    56,    56,    56,    56,    58,    58,    59,    59,
      60,    60,    60,    60,    65,    62,    63,    61,    61,    69,
      69,    37,     5,     6,     8,    13,    39,    73,    74,    85,
      88,    89,    90,    91,    92,    93,    97,   103,    45,    78,
      80,    82,    18,    41,    16,    41,    18,    64,    66,    69,
      94,    17,    39,    73,    87,    39,    69,    14,    78,    83,
      71,    73,    17,    73,    39,    96,    90,    70,    95,    70,
     103,    38,    96,    18,    14,    69,    91,    69,    68,    69,
      85,    91,    70,    69,     4,    73,    69,    70,    85,    18,
      69,    86,    91,    92,    93,    97
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    52,    52,    52,    52,    53,    53,    54,
      54,    54,    54,    55,    55,    56,    56,    57,    57,    57,
      57,    57,    58,    58,    58,    58,    59,    59,    59,    60,
      60,    60,    61,    61,    61,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    65,    66,    66,    67,    67,
      68,    68,    69,    70,    71,    71,    72,    73,    74,    75,
      75,    76,    76,    76,    76,    77,    77,    78,    79,    79,
      79,    79,    80,    81,    81,    82,    82,    83,    83,    84,
      85,    85,    85,    85,    85,    86,    86,    86,    86,    87,
      88,    89,    89,    90,    90,    91,    91,    92,    92,    93,
      94,    95,    96,    97,    97,    98,    98,    99,    99,   100,
     101,   101,   102,   102,   103,   103,   104,   104
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     4,     3,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     4,     1,     4,
       1,     9,     0,     0,     1,     3,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     2,     1,     1,     1,     4,
       5,     4,     1,     1,     3,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     1,     3,     1,     1,     2,     1,     8,    11,    14,
       0,     0,     0,     3,     2,     1,     2,     1,     1,     7,
       1,     2,     1,     0,     1,     0,     1,     0
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
  case 2: /* primary_expression: IDENTIFIER  */
#line 128 "220101048.y"
    {
        (yyval.expr) = new Expression();
        (yyval.expr)->STaddress = (yyvsp[0].symptr);
        (yyval.expr)->type = "non_bool";
    }
#line 1352 "220101048.tab.c"
    break;

  case 3: /* primary_expression: constant  */
#line 134 "220101048.y"
    {
        (yyval.expr) = new Expression();
        (yyval.expr)->STaddress = (yyvsp[0].symptr);
    }
#line 1361 "220101048.tab.c"
    break;

  case 4: /* primary_expression: STRING_LITERAL  */
#line 139 "220101048.y"
    {
        (yyval.expr) = new Expression();
        (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData("ptr"), (yyvsp[0].string_value));
        (yyval.expr)->STaddress->symbolTableEntryType->arrElementType = new symbolTableData("char");
    }
#line 1371 "220101048.tab.c"
    break;

  case 5: /* primary_expression: LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  */
#line 145 "220101048.y"
    {
        (yyval.expr) = (yyvsp[-1].expr);
        if ((yyvsp[-1].expr)->type == "bool")
            tmpForBool = (yyvsp[-1].expr);
    }
#line 1381 "220101048.tab.c"
    break;

  case 6: /* primary_expression: FLOAT_CONST  */
#line 151 "220101048.y"
     {
        (yyval.expr) = new Expression();
        (yyval.expr)->STaddress = (yyvsp[0].floatVal);
    }
#line 1390 "220101048.tab.c"
    break;

  case 7: /* constant: INTEGER_CONSTANT  */
#line 159 "220101048.y"
    {
        (yyval.symptr) = currentSymbolTable->gentemp(new symbolTableData("int"), to_string((yyvsp[0].int_value)));
        emit("=", (yyval.symptr)->name, (yyvsp[0].int_value));
    }
#line 1399 "220101048.tab.c"
    break;

  case 8: /* constant: CHARACTER_CONSTANT  */
#line 164 "220101048.y"
    {
        (yyval.symptr) = currentSymbolTable->gentemp(new symbolTableData("char"), string((yyvsp[0].string_value)));
        emit("=", (yyval.symptr)->name, string((yyvsp[0].string_value)));
    }
#line 1408 "220101048.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 173 "220101048.y"
    {
        (yyval.arr) = new Array();
        if ((yyvsp[0].expr)->type != "bool")
        {
            (yyval.arr)->array = (yyvsp[0].expr)->STaddress;
            (yyval.arr)->type = (yyvsp[0].expr)->STaddress->symbolTableEntryType;
            (yyval.arr)->STaddress = (yyval.arr)->array;
        }
        else
        {
            (yyval.arr)->arrayType = "bool_temporary";
        }
    }
#line 1426 "220101048.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 187 "220101048.y"
    {
        (yyval.arr) = new Array();
        (yyval.arr)->type = (yyvsp[-3].arr)->type->arrElementType;
        (yyval.arr)->array = (yyvsp[-3].arr)->array;
        (yyval.arr)->STaddress = currentSymbolTable->gentemp(new symbolTableData("int"));
        (yyval.arr)->arrayType = "arr";
        if ((yyvsp[-3].arr)->arrayType == "arr")
        {
            symbolTableInit* sym = currentSymbolTable->gentemp(new symbolTableData("int"));
            int sz = getSize((yyval.arr)->type);
            emit("*", sym->name, (yyvsp[-1].expr)->STaddress->name, to_string(sz));
            emit("+", (yyval.arr)->STaddress->name, (yyvsp[-3].arr)->STaddress->name, sym->name);
        }
        else
        {
            int sz = getSize((yyval.arr)->type);
            emit("*", (yyval.arr)->STaddress->name, (yyvsp[-1].expr)->STaddress->name, to_string(sz));
        }
    }
#line 1450 "220101048.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression LEFT_PARENTHESIS argument_expression_list_opt RIGHT_PARENTHESIS  */
#line 207 "220101048.y"
    {
        (yyval.arr) = new Array();
        (yyval.arr)->array = currentSymbolTable->gentemp((yyvsp[-3].arr)->type);
        emit("call", (yyval.arr)->array->name, (yyvsp[-3].arr)->array->name, to_string((yyvsp[-1].numParams)));
    }
#line 1460 "220101048.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 213 "220101048.y"
    {}
#line 1466 "220101048.tab.c"
    break;

  case 13: /* argument_expression_list: assignment_expression  */
#line 219 "220101048.y"
    {
        (yyval.numParams) = 1;
        emit("param", (yyvsp[0].expr)->STaddress->name);
    }
#line 1475 "220101048.tab.c"
    break;

  case 14: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 224 "220101048.y"
    {
        (yyval.numParams) = (yyvsp[-2].numParams) + 1;
        emit("param", (yyvsp[0].expr)->STaddress->name);
    }
#line 1484 "220101048.tab.c"
    break;

  case 15: /* unary_expression: postfix_expression  */
#line 232 "220101048.y"
    {
        (yyval.arr) = (yyvsp[0].arr);
    }
#line 1492 "220101048.tab.c"
    break;

  case 16: /* unary_expression: unary_operator unary_expression  */
#line 236 "220101048.y"
    {
        (yyval.arr) = new Array();
        switch ((yyvsp[-1].unaryOp))
        {
        case '&':
            (yyval.arr)->array = currentSymbolTable->gentemp(new symbolTableData("ptr"));
            (yyval.arr)->array->symbolTableEntryType->arrElementType = (yyvsp[0].arr)->array->symbolTableEntryType;
            emit("= &", (yyval.arr)->array->name, (yyvsp[0].arr)->array->name);
            break;
        case '*':
            (yyval.arr)->arrayType = "ptr";
            (yyval.arr)->STaddress = currentSymbolTable->gentemp((yyvsp[0].arr)->array->symbolTableEntryType->arrElementType);
            (yyval.arr)->array = (yyvsp[0].arr)->array;
            emit("= *", (yyval.arr)->STaddress->name, (yyvsp[0].arr)->array->name);
            break;
        case '+':
            (yyval.arr) = (yyvsp[0].arr);
            break;
        case '-':
            (yyval.arr)->array = currentSymbolTable->gentemp(new symbolTableData((yyvsp[0].arr)->array->symbolTableEntryType->type));
            emit("= -", (yyval.arr)->array->name, (yyvsp[0].arr)->array->name);
            break;
        case '!':
            if ((yyvsp[0].arr)->arrayType == "bool_temporary")
            {
                list<int> l = tmpForBool->falselist;
                tmpForBool->falselist = tmpForBool->truelist;
                tmpForBool->truelist = l;
                (yyval.arr)->arrayType = "bool_temporary";
            }
            else
            {
                (yyval.arr)->array = currentSymbolTable->gentemp(new symbolTableData((yyvsp[0].arr)->array->symbolTableEntryType->type));
                emit("= !", (yyval.arr)->array->name, (yyvsp[0].arr)->array->name);
            }
            break;
        }
    }
#line 1535 "220101048.tab.c"
    break;

  case 17: /* unary_operator: BITWISE_AND  */
#line 279 "220101048.y"
    {
        (yyval.unaryOp) = '&';
    }
#line 1543 "220101048.tab.c"
    break;

  case 18: /* unary_operator: MULTIPLICATION  */
#line 283 "220101048.y"
    {
        (yyval.unaryOp) = '*';
    }
#line 1551 "220101048.tab.c"
    break;

  case 19: /* unary_operator: ADDITION  */
#line 287 "220101048.y"
    {
        (yyval.unaryOp) = '+';
    }
#line 1559 "220101048.tab.c"
    break;

  case 20: /* unary_operator: SUBTRACTION  */
#line 291 "220101048.y"
    {
        (yyval.unaryOp) = '-';
    }
#line 1567 "220101048.tab.c"
    break;

  case 21: /* unary_operator: NOT  */
#line 295 "220101048.y"
    {
        (yyval.unaryOp) = '!';
    }
#line 1575 "220101048.tab.c"
    break;

  case 22: /* multiplicative_expression: unary_expression  */
#line 304 "220101048.y"
        {
            (yyval.expr) = new Expression();
            if((yyvsp[0].arr)->arrayType == "arr") {
                (yyval.expr)->STaddress = currentSymbolTable->gentemp((yyvsp[0].arr)->STaddress->symbolTableEntryType);
                emit("=[]", (yyval.expr)->STaddress->name, (yyvsp[0].arr)->array->name, (yyvsp[0].arr)->STaddress->name);
            }
            else if((yyvsp[0].arr)->arrayType == "ptr") {
                (yyval.expr)->STaddress = (yyvsp[0].arr)->STaddress;
            }
            else if((yyvsp[0].arr)->arrayType == "bool_temporary") {
                (yyval.expr) = tmpForBool;
            } else {
                (yyval.expr)->STaddress = (yyvsp[0].arr)->array;
            }
        }
#line 1595 "220101048.tab.c"
    break;

  case 23: /* multiplicative_expression: multiplicative_expression MULTIPLICATION unary_expression  */
#line 320 "220101048.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].arr)->array)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
                emit("*", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].arr)->array->name);
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1610 "220101048.tab.c"
    break;

  case 24: /* multiplicative_expression: multiplicative_expression DIVISION unary_expression  */
#line 331 "220101048.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].arr)->array)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
                emit("/", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].arr)->array->name);
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1625 "220101048.tab.c"
    break;

  case 25: /* multiplicative_expression: multiplicative_expression MODULO unary_expression  */
#line 342 "220101048.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].arr)->array)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
                emit("%", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].arr)->array->name);
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1640 "220101048.tab.c"
    break;

  case 26: /* additive_expression: multiplicative_expression  */
#line 356 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1648 "220101048.tab.c"
    break;

  case 27: /* additive_expression: additive_expression ADDITION multiplicative_expression  */
#line 360 "220101048.y"
        {   
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
                emit("+", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1663 "220101048.tab.c"
    break;

  case 28: /* additive_expression: additive_expression SUBTRACTION multiplicative_expression  */
#line 371 "220101048.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
                emit("-", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1678 "220101048.tab.c"
    break;

  case 29: /* shift_expression: additive_expression  */
#line 385 "220101048.y"
    {
        (yyval.expr) = (yyvsp[0].expr);
    }
#line 1686 "220101048.tab.c"
    break;

  case 30: /* shift_expression: shift_expression LSHIFT additive_expression  */
#line 389 "220101048.y"
    {
        if(typeCheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
            (yyval.expr) = new Expression();
            (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
            emit("<<", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
        }
        else {
            yyerror("Type mismatch in shift expression");
        }
    }
#line 1701 "220101048.tab.c"
    break;

  case 31: /* shift_expression: shift_expression RSHIFT additive_expression  */
#line 400 "220101048.y"
    {
        if(typeCheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
            (yyval.expr) = new Expression();
            (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
            emit(">>", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
        }
        else {
            yyerror("Type mismatch in shift expression");
        }
    }
#line 1716 "220101048.tab.c"
    break;

  case 32: /* relational_expression: shift_expression  */
#line 415 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1724 "220101048.tab.c"
    break;

  case 33: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 419 "220101048.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit("<", "", (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1742 "220101048.tab.c"
    break;

  case 34: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 433 "220101048.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit(">", "", (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1760 "220101048.tab.c"
    break;

  case 35: /* relational_expression: relational_expression LESS_THAN_OR_EQUAL_TO shift_expression  */
#line 447 "220101048.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit("<=", "", (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1778 "220101048.tab.c"
    break;

  case 36: /* relational_expression: relational_expression GREATER_THAN_OR_EQUAL_TO shift_expression  */
#line 461 "220101048.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit(">=", "", (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1796 "220101048.tab.c"
    break;

  case 37: /* bitwise_AND_expression: equality_expression  */
#line 477 "220101048.y"
    {
        (yyval.expr) = (yyvsp[0].expr);
    }
#line 1804 "220101048.tab.c"
    break;

  case 38: /* bitwise_AND_expression: bitwise_AND_expression BITWISE_AND equality_expression  */
#line 481 "220101048.y"
    {
        if(typeCheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
            (yyval.expr) = new Expression();
            (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
            emit("&", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
        }
        else {
            yyerror("Type error in bit AND operation");
        }
    }
#line 1819 "220101048.tab.c"
    break;

  case 39: /* bitwise_XOR_expression: bitwise_AND_expression  */
#line 495 "220101048.y"
    {
        (yyval.expr) = (yyvsp[0].expr);
    }
#line 1827 "220101048.tab.c"
    break;

  case 40: /* bitwise_XOR_expression: bitwise_XOR_expression BITWISE_XOR bitwise_AND_expression  */
#line 499 "220101048.y"
    {
        if(typeCheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
            (yyval.expr) = new Expression();
           (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
            emit("^",(yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
        }
        else {
            yyerror("Type error in bit XOR operation");
        }
    }
#line 1842 "220101048.tab.c"
    break;

  case 41: /* bitwise_OR_expression: bitwise_XOR_expression  */
#line 513 "220101048.y"
    {
        (yyval.expr) = (yyvsp[0].expr);
    }
#line 1850 "220101048.tab.c"
    break;

  case 42: /* bitwise_OR_expression: bitwise_OR_expression BITWISE_OR bitwise_XOR_expression  */
#line 517 "220101048.y"
    {
        if(typeCheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
            (yyval.expr) = new Expression();
            (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
            emit("|",(yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
        }
        else {
            yyerror("Type error in bit OR operation");
        }
    }
#line 1865 "220101048.tab.c"
    break;

  case 43: /* equality_expression: relational_expression  */
#line 531 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1873 "220101048.tab.c"
    break;

  case 44: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 535 "220101048.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                boolToIntConversion((yyvsp[-2].expr));
                boolToIntConversion((yyvsp[0].expr));
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit("==", "", (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1893 "220101048.tab.c"
    break;

  case 45: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 551 "220101048.y"
        {
            if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
                boolToIntConversion((yyvsp[-2].expr));
                boolToIntConversion((yyvsp[0].expr));
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());
                (yyval.expr)->falselist = makelist(nextinstr() + 1);
                emit("!=", "", (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1913 "220101048.tab.c"
    break;

  case 46: /* logical_and_expression: bitwise_OR_expression  */
#line 571 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1921 "220101048.tab.c"
    break;

  case 47: /* logical_and_expression: logical_and_expression LOGICAL_AND A bitwise_OR_expression  */
#line 575 "220101048.y"
        {
            intToBoolConversion((yyvsp[-3].expr));
            intToBoolConversion((yyvsp[0].expr));
            (yyval.expr) = new Expression();
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr));
            (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;
            (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);
        }
#line 1935 "220101048.tab.c"
    break;

  case 48: /* logical_or_expression: logical_and_expression  */
#line 588 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1943 "220101048.tab.c"
    break;

  case 49: /* logical_or_expression: logical_or_expression LOGICAL_OR A logical_and_expression  */
#line 592 "220101048.y"
        {
            intToBoolConversion((yyvsp[-3].expr));
            intToBoolConversion((yyvsp[0].expr));
            (yyval.expr) = new Expression();
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr));
            (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;
            (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);
        }
#line 1957 "220101048.tab.c"
    break;

  case 50: /* conditional_expression: logical_or_expression  */
#line 605 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1965 "220101048.tab.c"
    break;

  case 51: /* conditional_expression: logical_or_expression B QUESTION_MARK A expression B COLON A conditional_expression  */
#line 609 "220101048.y"
        {   
            (yyval.expr)->STaddress = currentSymbolTable->gentemp((yyvsp[-4].expr)->STaddress->symbolTableEntryType);
            (yyval.expr)->STaddress->update_symbol((yyvsp[-4].expr)->STaddress->symbolTableEntryType);
            emit("=", (yyval.expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
            list<int> l1 = makelist(nextinstr());
            emit("goto", "");
            backpatch((yyvsp[-3].stmt)->nextlist, nextinstr());
            emit("=", (yyval.expr)->STaddress->name, (yyvsp[-4].expr)->STaddress->name);
            list<int> l2 = makelist(nextinstr());
            l1 = merge(l1, l2);
            emit("goto", "");
            backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());
            intToBoolConversion((yyvsp[-8].expr));
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));
            backpatch(l1, nextinstr());
        }
#line 1987 "220101048.tab.c"
    break;

  case 52: /* A: %empty  */
#line 629 "220101048.y"
        {   
            (yyval.instr) = nextinstr();
        }
#line 1995 "220101048.tab.c"
    break;

  case 53: /* B: %empty  */
#line 635 "220101048.y"
        {
            (yyval.stmt) = new Statement();
            (yyval.stmt)->nextlist = makelist(nextinstr());
            emit("goto", "");
        }
#line 2005 "220101048.tab.c"
    break;

  case 54: /* assignment_expression: conditional_expression  */
#line 644 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2013 "220101048.tab.c"
    break;

  case 55: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 648 "220101048.y"
        {
            if((yyvsp[-2].arr)->arrayType == "arr") {
                (yyvsp[0].expr)->STaddress = convertType((yyvsp[0].expr)->STaddress, (yyvsp[-2].arr)->type->type);
                emit("[]=", (yyvsp[-2].arr)->array->name, (yyvsp[-2].arr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
            }
            else if((yyvsp[-2].arr)->arrayType == "ptr") {
                emit("*=", (yyvsp[-2].arr)->array->name, (yyvsp[0].expr)->STaddress->name);
            }
            else {
                (yyvsp[0].expr)->STaddress = convertType((yyvsp[0].expr)->STaddress, (yyvsp[-2].arr)->array->symbolTableEntryType->type);
                emit("=", (yyvsp[-2].arr)->array->name, (yyvsp[0].expr)->STaddress->name);
            }
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2032 "220101048.tab.c"
    break;

  case 56: /* assignment_operator: ASSIGN  */
#line 666 "220101048.y"
        {}
#line 2038 "220101048.tab.c"
    break;

  case 57: /* expression: assignment_expression  */
#line 672 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2046 "220101048.tab.c"
    break;

  case 58: /* declaration: type_specifier init_declarator SEMICOLON  */
#line 679 "220101048.y"
        {}
#line 2052 "220101048.tab.c"
    break;

  case 59: /* init_declarator: declarator  */
#line 685 "220101048.y"
        {
            (yyval.symptr) = (yyvsp[0].symptr);
        }
#line 2060 "220101048.tab.c"
    break;

  case 60: /* init_declarator: declarator ASSIGN initializer  */
#line 689 "220101048.y"
        {   
            if((yyvsp[0].symptr)->val != "") {
                (yyvsp[-2].symptr)->val = (yyvsp[0].symptr)->val;
            }
            emit("=", (yyvsp[-2].symptr)->name, (yyvsp[0].symptr)->name);
        }
#line 2071 "220101048.tab.c"
    break;

  case 61: /* type_specifier: VOID  */
#line 699 "220101048.y"
        {
            prevType = "void";
        }
#line 2079 "220101048.tab.c"
    break;

  case 62: /* type_specifier: CHAR  */
#line 703 "220101048.y"
        {
            prevType = "char";
        }
#line 2087 "220101048.tab.c"
    break;

  case 63: /* type_specifier: INT  */
#line 707 "220101048.y"
        {
            prevType = "int";
        }
#line 2095 "220101048.tab.c"
    break;

  case 64: /* type_specifier: FLOAT  */
#line 711 "220101048.y"
        {
            prevType = "float";
        }
#line 2103 "220101048.tab.c"
    break;

  case 65: /* declarator: pointer direct_declarator  */
#line 719 "220101048.y"
        {
            symbolTableData* t = (yyvsp[-1].symType);
            while(t->arrElementType != NULL) {
                t = t->arrElementType;
            }
            t->arrElementType = (yyvsp[0].symptr)->symbolTableEntryType;
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol((yyvsp[-1].symType));
        }
#line 2116 "220101048.tab.c"
    break;

  case 66: /* declarator: direct_declarator  */
#line 728 "220101048.y"
        {}
#line 2122 "220101048.tab.c"
    break;

  case 67: /* intermediate_identifier: IDENTIFIER  */
#line 733 "220101048.y"
        {
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol(new symbolTableData(prevType));
            currentSymbol = (yyval.symptr);
        }
#line 2131 "220101048.tab.c"
    break;

  case 68: /* direct_declarator: IDENTIFIER  */
#line 741 "220101048.y"
        {
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol(new symbolTableData(prevType));
            currentSymbol = (yyval.symptr);
        }
#line 2140 "220101048.tab.c"
    break;

  case 69: /* direct_declarator: IDENTIFIER LEFT_SQUARE_BRACKET INTEGER_CONSTANT RIGHT_SQUARE_BRACKET  */
#line 746 "220101048.y"
        {
            symbolTableData* t = (yyvsp[-3].symptr)->symbolTableEntryType;
            symbolTableData* prev = NULL;
            while(t->type == "arr") {
                prev = t;
                t = t->arrElementType;
            }
            if(prev == NULL) {
                int temp = (yyvsp[-1].int_value);
                symbolTableData* tp = new symbolTableData("arr", (yyvsp[-3].symptr)->symbolTableEntryType, temp);
                (yyval.symptr) = (yyvsp[-3].symptr)->update_symbol(tp);
            }
            else {
                int temp = (yyvsp[-1].int_value);
                prev->arrElementType = new symbolTableData("arr", t, temp);
                (yyval.symptr) = (yyvsp[-3].symptr)->update_symbol((yyvsp[-3].symptr)->symbolTableEntryType);
            }
        }
#line 2163 "220101048.tab.c"
    break;

  case 70: /* direct_declarator: intermediate_identifier LEFT_PARENTHESIS replaceActiveSymbolTableParse parameter_list RIGHT_PARENTHESIS  */
#line 765 "220101048.y"
        {
            currentSymbolTable->name = (yyvsp[-4].symptr)->name;
            if((yyvsp[-4].symptr)->symbolTableEntryType->type != "void") {
                symbolTableInit* s = currentSymbolTable->lookup("return");
                s->update_symbol((yyvsp[-4].symptr)->symbolTableEntryType);
            }
            (yyvsp[-4].symptr)->nestedTable = currentSymbolTable;
            currentSymbolTable->parent = globalSymbolTable;
            replaceActiveSymbolTable(globalSymbolTable);
            currentSymbol = (yyval.symptr);
        }
#line 2179 "220101048.tab.c"
    break;

  case 71: /* direct_declarator: intermediate_identifier LEFT_PARENTHESIS replaceActiveSymbolTableParse RIGHT_PARENTHESIS  */
#line 777 "220101048.y"
        {
            currentSymbolTable->name = (yyvsp[-3].symptr)->name;
            if((yyvsp[-3].symptr)->symbolTableEntryType->type != "void") {
                symbolTableInit* s = currentSymbolTable->lookup("return");
                s->update_symbol((yyvsp[-3].symptr)->symbolTableEntryType);
            }
            (yyvsp[-3].symptr)->nestedTable = currentSymbolTable;
            currentSymbolTable->parent = globalSymbolTable;
            replaceActiveSymbolTable(globalSymbolTable);
            currentSymbol = (yyval.symptr);
        }
#line 2195 "220101048.tab.c"
    break;

  case 72: /* pointer: MULTIPLICATION  */
#line 792 "220101048.y"
        {
            (yyval.symType) = new symbolTableData("ptr");
        }
#line 2203 "220101048.tab.c"
    break;

  case 73: /* parameter_list: parameter_declaration  */
#line 799 "220101048.y"
        {}
#line 2209 "220101048.tab.c"
    break;

  case 74: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 801 "220101048.y"
        {}
#line 2215 "220101048.tab.c"
    break;

  case 75: /* intermediate_declarator: pointer intermediate_identifier  */
#line 806 "220101048.y"
        {
            symbolTableData* t = (yyvsp[-1].symType);
            while(t->arrElementType != NULL) {
                t = t->arrElementType;
            }
            t->arrElementType = (yyvsp[0].symptr)->symbolTableEntryType;
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol((yyvsp[-1].symType));
        }
#line 2228 "220101048.tab.c"
    break;

  case 76: /* intermediate_declarator: intermediate_identifier  */
#line 815 "220101048.y"
        {}
#line 2234 "220101048.tab.c"
    break;

  case 77: /* parameter_declaration: type_specifier intermediate_declarator  */
#line 820 "220101048.y"
        {}
#line 2240 "220101048.tab.c"
    break;

  case 78: /* parameter_declaration: type_specifier  */
#line 822 "220101048.y"
        {}
#line 2246 "220101048.tab.c"
    break;

  case 79: /* initializer: assignment_expression  */
#line 827 "220101048.y"
        {
            (yyval.symptr) = (yyvsp[0].expr)->STaddress;
        }
#line 2254 "220101048.tab.c"
    break;

  case 80: /* statement: compound_statement  */
#line 834 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2262 "220101048.tab.c"
    break;

  case 81: /* statement: expression_statement  */
#line 838 "220101048.y"
        {
            (yyval.stmt) = new Statement();
            (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;
        }
#line 2271 "220101048.tab.c"
    break;

  case 82: /* statement: selection_statement  */
#line 843 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2279 "220101048.tab.c"
    break;

  case 83: /* statement: iteration_statement  */
#line 847 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2287 "220101048.tab.c"
    break;

  case 84: /* statement: jump_statement  */
#line 851 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2295 "220101048.tab.c"
    break;

  case 85: /* loop_statement: expression_statement  */
#line 858 "220101048.y"
        {
            (yyval.stmt) = new Statement();
            (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;
        }
#line 2304 "220101048.tab.c"
    break;

  case 86: /* loop_statement: selection_statement  */
#line 863 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2312 "220101048.tab.c"
    break;

  case 87: /* loop_statement: iteration_statement  */
#line 867 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2320 "220101048.tab.c"
    break;

  case 88: /* loop_statement: jump_statement  */
#line 871 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2328 "220101048.tab.c"
    break;

  case 89: /* change_block: %empty  */
#line 877 "220101048.y"
        {
            string name = currentSymbolTable->identifier + "_" + toString(symbolTableCounter);
            tableCount++;
            symbolTableInit* s = currentSymbolTable->lookupSymbol(name); // create new entry in symbol table
            s->nestedTable = new SymbolTable(name,"block",currentSymbolTable);
            s->type = new symbolTableData("block");
            currentSymbol = s;
        }
#line 2341 "220101048.tab.c"
    break;

  case 90: /* compound_statement: BEG change_block replaceActiveSymbolTableParse block_item_list_opt END  */
#line 889 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[-1].stmt);
            replaceActiveSymbolTable(currentSymbolTable->parent);
        }
#line 2350 "220101048.tab.c"
    break;

  case 91: /* block_item_list: block_item  */
#line 898 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2358 "220101048.tab.c"
    break;

  case 92: /* block_item_list: block_item_list A block_item  */
#line 902 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
            backpatch((yyvsp[-2].stmt)->nextlist, (yyvsp[-1].instr));
        }
#line 2367 "220101048.tab.c"
    break;

  case 93: /* block_item: declaration  */
#line 910 "220101048.y"
        {
            (yyval.stmt) = new Statement();
        }
#line 2375 "220101048.tab.c"
    break;

  case 94: /* block_item: statement  */
#line 914 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2383 "220101048.tab.c"
    break;

  case 95: /* expression_statement: expression SEMICOLON  */
#line 921 "220101048.y"
        {
            (yyval.expr) = (yyvsp[-1].expr);
        }
#line 2391 "220101048.tab.c"
    break;

  case 96: /* expression_statement: SEMICOLON  */
#line 925 "220101048.y"
        {
            (yyval.expr) = new Expression();
        }
#line 2399 "220101048.tab.c"
    break;

  case 97: /* selection_statement: IF LEFT_PARENTHESIS expression B RIGHT_PARENTHESIS A statement B  */
#line 932 "220101048.y"
        {
            backpatch((yyvsp[-4].stmt)->nextlist, nextinstr());
            intToBoolConversion((yyvsp[-5].expr));
            (yyval.stmt) = new Statement();
            backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr));
            list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist, temp);
        }
#line 2412 "220101048.tab.c"
    break;

  case 98: /* selection_statement: IF LEFT_PARENTHESIS expression B RIGHT_PARENTHESIS A statement B ELSE A statement  */
#line 941 "220101048.y"
        {
            backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());
            intToBoolConversion((yyvsp[-8].expr));
            (yyval.stmt) = new Statement();
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));
            list<int> temp = merge((yyvsp[-4].stmt)->nextlist, (yyvsp[-3].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist, temp);
        }
#line 2426 "220101048.tab.c"
    break;

  case 99: /* iteration_statement: FOR F LEFT_PARENTHESIS NESTPARSER replaceActiveSymbolTableParse expression_statement A expression_statement A expression B RIGHT_PARENTHESIS A loop_statement  */
#line 954 "220101048.y"
        {
            (yyval.stmt) = new Statement();
            intToBoolConversion((yyvsp[-6].expr));
            backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr));
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-7].instr));
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr));
            emit("goto", to_string((yyvsp[-5].instr)));
            (yyval.stmt)->nextlist = (yyvsp[-6].expr)->falselist;
            currentBlock = "";
            replaceActiveSymbolTable(currentSymbolTable->parent);
        }
#line 2442 "220101048.tab.c"
    break;

  case 100: /* F: %empty  */
#line 968 "220101048.y"
        {   
            currentBlock = "FOR";
        }
#line 2450 "220101048.tab.c"
    break;

  case 101: /* NESTPARSER: %empty  */
#line 975 "220101048.y"
        {   
            string newST = currentSymbolTable->name + "." + currentBlock + "$" + to_string(symbolTableCounter++);
            symbolTableInit* sym = currentSymbolTable->lookup(newST);
            sym->nestedTable = new SymbolTable(newST);
            sym->name = newST;
            sym->nestedTable->parent = currentSymbolTable;
            sym->symbolTableEntryType = new symbolTableData("block");
            currentSymbol = sym;
        }
#line 2464 "220101048.tab.c"
    break;

  case 102: /* replaceActiveSymbolTableParse: %empty  */
#line 987 "220101048.y"
        {   
            if(currentSymbol->nestedTable != NULL) {
                replaceActiveSymbolTable(currentSymbol->nestedTable);
                emit("label", currentSymbolTable->name);
            }
            else {
                replaceActiveSymbolTable(new SymbolTable(""));
            }
        }
#line 2478 "220101048.tab.c"
    break;

  case 103: /* jump_statement: RETURN expression SEMICOLON  */
#line 1000 "220101048.y"
        {
            (yyval.stmt) = new Statement();
            emit("return", (yyvsp[-1].expr)->STaddress->name);
        }
#line 2487 "220101048.tab.c"
    break;

  case 104: /* jump_statement: RETURN SEMICOLON  */
#line 1005 "220101048.y"
        {
            (yyval.stmt) = new Statement();
            emit("return", "");
        }
#line 2496 "220101048.tab.c"
    break;

  case 105: /* translation_unit: external_declaration  */
#line 1013 "220101048.y"
        {}
#line 2502 "220101048.tab.c"
    break;

  case 106: /* translation_unit: translation_unit external_declaration  */
#line 1015 "220101048.y"
        {}
#line 2508 "220101048.tab.c"
    break;

  case 107: /* external_declaration: function_definition  */
#line 1020 "220101048.y"
        {}
#line 2514 "220101048.tab.c"
    break;

  case 108: /* external_declaration: declaration  */
#line 1022 "220101048.y"
        {}
#line 2520 "220101048.tab.c"
    break;

  case 109: /* function_definition: type_specifier declarator declaration_list_opt replaceActiveSymbolTableParse BEG block_item_list_opt END  */
#line 1027 "220101048.y"
        {   
            currentSymbolTable->parent = globalSymbolTable;
            symbolTableCounter = 0;
            replaceActiveSymbolTable(globalSymbolTable);
        }
#line 2530 "220101048.tab.c"
    break;

  case 110: /* declaration_list: declaration  */
#line 1037 "220101048.y"
        {}
#line 2536 "220101048.tab.c"
    break;

  case 111: /* declaration_list: declaration_list declaration  */
#line 1039 "220101048.y"
        {}
#line 2542 "220101048.tab.c"
    break;

  case 112: /* argument_expression_list_opt: argument_expression_list  */
#line 1045 "220101048.y"
    {
        (yyval.numParams) = (yyvsp[0].numParams);
    }
#line 2550 "220101048.tab.c"
    break;

  case 113: /* argument_expression_list_opt: %empty  */
#line 1049 "220101048.y"
    {
        (yyval.numParams) = 0;
    }
#line 2558 "220101048.tab.c"
    break;

  case 114: /* block_item_list_opt: block_item_list  */
#line 1056 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2566 "220101048.tab.c"
    break;

  case 115: /* block_item_list_opt: %empty  */
#line 1060 "220101048.y"
        {
            (yyval.stmt) = new Statement();
        }
#line 2574 "220101048.tab.c"
    break;

  case 116: /* declaration_list_opt: declaration_list  */
#line 1066 "220101048.y"
        {}
#line 2580 "220101048.tab.c"
    break;

  case 117: /* declaration_list_opt: %empty  */
#line 1068 "220101048.y"
        {}
#line 2586 "220101048.tab.c"
    break;


#line 2590 "220101048.tab.c"

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

#line 1072 "220101048.y"


void yyerror(string s) {
    cout << "ERROR -> " << s << endl;
    cout << "Line: " << yylineno << endl;
    cout << "Can't Parse -> " << yytext << " <--" << endl; 
}
