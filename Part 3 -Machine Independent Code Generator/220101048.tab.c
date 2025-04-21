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
#include <map>
#include <iomanip>
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <bits/stdc++.h>
using namespace std;

#define _SIZE_VOID 0
#define _SIZE_CHAR 1
#define _SIZE_INT 4
#define _SIZE_POINTER 4
#define _SIZE_FUNCTION 0

class symbolTableInit;
class symbolTableData;
class SymbolTable;
class Quad;
class quadArray;

extern symbolTableInit *currentSymbol;
extern SymbolTable *globalSymbolTable;
extern SymbolTable *currentSymbolTable;
extern quadArray quadrupleArray;
extern int symbolTableCounter;
extern string currentBlock;

extern char *yytext;
extern int yyparse();

class symbolTableData
{
public:
    string type;
    int width;
    symbolTableData *arrElementType;
    symbolTableData(string type_, symbolTableData *arrElementType_ = NULL, int width_ = 1);
};

class symbolTableInit
{
public:
    string name;
    symbolTableData *symbolTableEntryType;
    string val;
    int size;
    int offset;
    SymbolTable *nestedTable;
    symbolTableInit(string name_, string sym_type_ = "int", symbolTableData *arrType_ = NULL, int width_ = 0);
    symbolTableInit *update_symbol(symbolTableData *type_new);
};

class SymbolTable
{
public:
    string name;
    int temporaryVariablesST;
    list<symbolTableInit> symTable;
    SymbolTable *parent;

    SymbolTable(string name_ = "NULL");

    symbolTableInit *findInCurrent(string name_);

    symbolTableInit *lookup(string name_);

    symbolTableInit *createNewSymbol(string name, symbolTableData *t);

    void initializeSymbol(symbolTableInit *sym, string initial_val);

    void addSymbolToTable(symbolTableInit *sym);

    symbolTableInit *gentemp(symbolTableData *t, string initial_val = "");

    void printHeader();
    void print();

    void update();
};

class Quad
{
public:
    string op;
    string arg1;
    string arg2;
    string result;
    Quad(string res, string arg1_, string operation = "=", string arg2_ = "");
    Quad(string res, int arg1_, string operation = "=", string arg2_ = "");
    int print_quad();
};

class quadArray
{
public:
    vector<Quad> quads;
    int print();
    void printQuadArray();
};

class Array
{
public:
    string arrayType;
    symbolTableInit *STaddress;
    symbolTableInit *array;
    symbolTableData *type;
};

class Statement
{
public:
    list<int> nextlist;
};

class Expression
{
public:
    string type;
    symbolTableInit *STaddress;
    list<int> truelist;
    list<int> falselist;
    list<int> nextlist;
};

list<int> makelist(int i);
list<int> merge(list<int> &list1, list<int> &list2);
void backpatch(list<int> l, int address);
void emit(string op, string result, string arg1 = "", string arg2 = "");
void emit(string op, string result, int arg1, string arg2 = "");
int typecheck(symbolTableInit *&s1, symbolTableInit *&s2);
int typecheck(symbolTableData *t1, symbolTableData *t2);
string getSymbolTableDataDescription(symbolTableData *t);
Expression *intToBoolConversion(Expression *expr);
Expression *boolToIntConversion(Expression *expr);
void replaceActiveSymbolTable(SymbolTable *new_table);
int nextinstr();
int getSize(symbolTableData *t);
symbolTableInit *convertType(symbolTableInit *s, string t);

using namespace std;

extern int yylex();
void yyerror(string s);
extern char* yytext;
extern int yylineno;
extern string prevType;
Expression* tmpForBool;

#line 224 "220101048.tab.c"

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
  YYSYMBOL_compound_statement = 86,        /* compound_statement  */
  YYSYMBOL_block_item_list = 87,           /* block_item_list  */
  YYSYMBOL_block_item = 88,                /* block_item  */
  YYSYMBOL_expression_statement = 89,      /* expression_statement  */
  YYSYMBOL_selection_statement = 90,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 91,       /* iteration_statement  */
  YYSYMBOL_F = 92,                         /* F  */
  YYSYMBOL_W = 93,                         /* W  */
  YYSYMBOL_D = 94,                         /* D  */
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
#define YYLAST   299

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  212

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
       0,   266,   266,   272,   277,   283,   289,   299,   304,   313,
     327,   347,   353,   359,   364,   372,   376,   419,   423,   427,
     431,   435,   444,   460,   471,   482,   496,   500,   511,   525,
     529,   540,   555,   559,   573,   587,   601,   617,   621,   635,
     639,   653,   657,   671,   675,   691,   711,   715,   728,   732,
     745,   749,   769,   775,   784,   788,   806,   812,   819,   825,
     829,   839,   843,   847,   851,   859,   868,   873,   881,   886,
     905,   917,   932,   939,   941,   946,   955,   960,   962,   967,
     974,   978,   983,   987,   991,   998,  1007,  1011,  1019,  1023,
    1030,  1034,  1041,  1050,  1063,  1075,  1085,  1096,  1102,  1108,
    1115,  1127,  1140,  1145,  1153,  1155,  1160,  1162,  1167,  1181,
    1183,  1189,  1193,  1200,  1204,  1210,  1212
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
  "statement", "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "F", "W", "D", "NESTPARSER", "replaceActiveSymbolTableParse",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list",
  "argument_expression_list_opt", "block_item_list_opt",
  "declaration_list_opt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-176)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-117)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      67,  -176,  -176,  -176,  -176,  -176,   -19,    12,  -176,  -176,
    -176,    66,   -11,    20,    42,  -176,    -8,  -176,  -176,    19,
    -176,   250,  -176,   -19,    67,  -176,  -176,  -176,    53,   250,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,    65,    62,   250,   -10,    10,    47,    75,    73,
      90,    93,    39,    86,    60,  -176,  -176,  -176,    85,  -176,
     113,    59,  -176,  -176,   110,   250,   250,    87,  -176,   250,
    -176,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,  -176,  -176,    94,
     151,  -176,   -15,   -16,  -176,  -176,   114,    95,  -176,   119,
    -176,  -176,  -176,  -176,  -176,  -176,   -10,   -10,    10,    10,
      47,    47,    47,    47,    39,    73,    90,    75,    75,   250,
     250,  -176,  -176,   121,   207,  -176,  -176,  -176,  -176,   100,
    -176,  -176,  -176,   126,  -176,  -176,  -176,  -176,  -176,   127,
    -176,  -176,    97,  -176,  -176,    67,  -176,   250,  -176,    93,
      86,   250,   128,   250,  -176,   105,   129,  -176,  -176,  -176,
     151,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
     196,   151,  -176,   112,  -176,   133,   250,   143,   141,  -176,
     240,  -176,  -176,   149,  -176,   250,  -176,   196,   154,  -176,
    -176,   240,  -176,  -176,   250,  -176,   163,   196,  -176,   250,
    -176,  -176,   155,  -176,   196,   130,   160,  -176,  -176,  -176,
     196,  -176
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    62,    63,    61,    64,   107,     0,     0,   104,   106,
      72,    68,     0,    59,     0,    66,     0,     1,   105,     0,
      58,     0,   109,     0,   115,   101,   101,    65,     0,     0,
      17,    18,    19,    20,    21,     2,     7,     8,     4,     6,
       9,     3,    15,    22,     0,    26,    29,    32,    43,    39,
      41,    46,    37,    48,    50,    54,    79,    60,    59,   110,
       0,     0,    69,    57,     0,     0,   112,     0,    56,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    52,     0,
     114,    71,    78,     0,    73,     5,     0,   111,    13,     0,
      12,    55,    23,    24,    25,    22,    27,    28,    30,    31,
      33,    34,    35,    36,    38,    40,    42,    44,    45,     0,
       0,    52,    97,     0,     0,    98,    99,   100,    91,     0,
      88,    89,    80,    52,    86,    81,    82,    83,    84,     0,
      67,    76,     0,    77,    70,     0,    10,     0,    11,    47,
      49,     0,     0,     0,   103,     0,     0,    52,   101,    90,
       0,   108,    75,    74,    14,    53,   100,    53,   102,    52,
       0,   114,    87,     0,   101,     0,     0,     0,     0,    52,
       0,    52,    53,     0,    85,     0,    52,     0,     0,    52,
      51,     0,    53,    52,     0,    52,    92,     0,    53,     0,
      52,    95,     0,    53,     0,     0,     0,    93,    96,    52,
       0,    94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,  -176,  -176,   -33,  -176,    26,    40,    30,
      33,    96,    98,    61,    99,    63,  -176,    -1,   -66,  -104,
     -12,  -176,   -29,     7,  -176,     3,   162,   -86,   170,   101,
    -176,  -176,    43,  -176,  -112,  -176,  -176,    27,  -175,  -176,
    -176,  -176,  -176,  -176,    23,   -25,  -176,  -176,   184,  -176,
    -176,  -176,    21,  -176
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    40,    41,    42,    97,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,   119,    89,
      63,    69,   129,   130,    12,    23,    13,    14,    15,    16,
      93,   143,    94,    57,   131,   132,   133,   134,   135,   136,
     137,   152,   156,   157,   158,    60,   138,     7,     8,     9,
      24,    99,   139,    25
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,    61,   144,     6,    10,   186,   141,     5,    10,    56,
       6,    70,    17,    71,     5,     1,   195,    72,    73,     2,
      22,     3,   120,     1,     4,   145,    11,     2,    20,     3,
     140,    59,     4,  -116,    74,    75,    96,    11,   102,   103,
     104,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,    98,   151,   162,   101,   177,    26,
      21,   173,     1,   175,    92,    28,     2,   160,     3,    62,
       1,     4,    85,    86,     2,   192,     3,    91,   188,     4,
      65,    19,    66,   -67,    67,   201,   105,   105,   196,    76,
      77,   170,   207,    82,   202,   155,    88,   -53,   211,   206,
     106,   107,    68,   176,    78,    79,    80,    81,   110,   111,
     112,   113,    83,   185,    84,   187,   108,   109,   117,   118,
     191,    87,   165,   194,   167,    21,    90,   197,    95,   199,
     146,   121,   100,   171,   204,   164,   147,   148,   153,   159,
    -113,   161,   140,   210,   168,   166,   169,   182,    92,   180,
     179,   181,   105,   183,     1,   184,   122,   123,     2,   124,
       3,   125,   126,     4,   127,   198,   189,   200,    29,   208,
     203,    30,   193,   205,    31,    32,    33,    34,   209,   115,
     149,   114,   116,   150,   190,    58,    27,   172,   163,   174,
     128,    18,   178,   142,     0,     0,    35,    36,    37,    38,
      39,   122,   123,     0,   124,     0,   125,   126,     0,   127,
       0,     0,     0,    29,     0,     0,    30,     0,     0,    31,
      32,    33,    34,     0,    29,     0,     0,    30,     0,     0,
      31,    32,    33,    34,     0,   128,     0,     0,     0,     0,
       0,    35,    36,    37,    38,    39,   154,     0,     0,     0,
       0,     0,    35,    36,    37,    38,    39,    29,     0,     0,
      30,     0,     0,    31,    32,    33,    34,    29,     0,     0,
      30,     0,     0,    31,    32,    33,    34,     0,     0,   128,
       0,     0,     0,     0,     0,    35,    36,    37,    38,    39,
       0,     0,     0,     0,     0,    35,    36,    37,    38,    39
};

static const yytype_int16 yycheck[] =
{
      29,    26,    18,     0,    23,   180,    92,     0,    23,    21,
       7,    44,     0,    23,     7,     3,   191,    27,    28,     7,
      13,     9,    88,     3,    12,    41,    45,     7,    39,     9,
      45,    24,    12,    13,    24,    25,    65,    45,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    66,   121,   142,    69,   170,    17,
      40,   165,     3,   167,    61,    46,     7,   133,     9,    16,
       3,    12,    33,    34,     7,   187,     9,    18,   182,    12,
      15,    15,    17,    17,    19,   197,   119,   120,   192,    42,
      43,   157,   204,    20,   198,   124,    36,    37,   210,   203,
      74,    75,    40,   169,    29,    30,    31,    32,    78,    79,
      80,    81,    22,   179,    21,   181,    76,    77,    85,    86,
     186,    35,   151,   189,   153,    40,    13,   193,    18,   195,
      16,    37,    45,   158,   200,   147,    41,    18,    17,    39,
      14,    14,    45,   209,    39,    17,    17,   176,   145,   174,
      38,    18,   185,    10,     3,    14,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   194,    17,     4,    17,    39,
     199,    20,    18,    18,    23,    24,    25,    26,    18,    83,
     119,    82,    84,   120,   185,    23,    16,   160,   145,   166,
      39,     7,   171,    92,    -1,    -1,    45,    46,    47,    48,
      49,     5,     6,    -1,     8,    -1,    10,    11,    -1,    13,
      -1,    -1,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,
      24,    25,    26,    -1,    17,    -1,    -1,    20,    -1,    -1,
      23,    24,    25,    26,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    17,    -1,    -1,
      20,    -1,    -1,    23,    24,    25,    26,    17,    -1,    -1,
      20,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49
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
      69,    37,     5,     6,     8,    10,    11,    13,    39,    73,
      74,    85,    86,    87,    88,    89,    90,    91,    97,   103,
      45,    78,    80,    82,    18,    41,    16,    41,    18,    64,
      66,    69,    92,    17,    39,    73,    93,    94,    95,    39,
      69,    14,    78,    83,    71,    73,    17,    73,    39,    17,
      69,    96,    88,    70,    95,    70,    69,    85,   103,    38,
      96,    18,    73,    10,    14,    69,    89,    69,    70,    17,
      68,    69,    85,    18,    69,    89,    70,    69,    73,    69,
       4,    85,    70,    73,    69,    18,    70,    85,    39,    18,
      69,    85
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
      85,    85,    85,    85,    85,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    91,    91,    91,    92,    93,    94,
      95,    96,    97,    97,    98,    98,    99,    99,   100,   101,
     101,   102,   102,   103,   103,   104,   104
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
       1,     1,     1,     1,     1,     5,     1,     3,     1,     1,
       2,     1,     8,    11,    14,     9,    11,     0,     0,     0,
       0,     0,     3,     2,     1,     2,     1,     1,     7,     1,
       2,     1,     0,     1,     0,     1,     0
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
#line 267 "220101048.y"
    {
        (yyval.expr) = new Expression();
        (yyval.expr)->STaddress = (yyvsp[0].symptr);
        (yyval.expr)->type = "non_bool";
    }
#line 1500 "220101048.tab.c"
    break;

  case 3: /* primary_expression: constant  */
#line 273 "220101048.y"
    {
        (yyval.expr) = new Expression();
        (yyval.expr)->STaddress = (yyvsp[0].symptr);
    }
#line 1509 "220101048.tab.c"
    break;

  case 4: /* primary_expression: STRING_LITERAL  */
#line 278 "220101048.y"
    {
        (yyval.expr) = new Expression();
        (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData("ptr"), (yyvsp[0].string_value));
        (yyval.expr)->STaddress->symbolTableEntryType->arrElementType = new symbolTableData("char");
    }
#line 1519 "220101048.tab.c"
    break;

  case 5: /* primary_expression: LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  */
#line 284 "220101048.y"
    {
        (yyval.expr) = (yyvsp[-1].expr);
        if ((yyvsp[-1].expr)->type == "bool")
            tmpForBool = (yyvsp[-1].expr);
    }
#line 1529 "220101048.tab.c"
    break;

  case 6: /* primary_expression: FLOAT_CONST  */
#line 290 "220101048.y"
     {
        (yyval.expr) = new Expression();
        string val = to_string((yyvsp[0].floatVal));
        (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData("float"), val);
        (yyval.expr)->STaddress->symbolTableEntryType->arrElementType = new symbolTableData("float");
    }
#line 1540 "220101048.tab.c"
    break;

  case 7: /* constant: INTEGER_CONSTANT  */
#line 300 "220101048.y"
    {
        (yyval.symptr) = currentSymbolTable->gentemp(new symbolTableData("int"), to_string((yyvsp[0].int_value)));
        emit("=", (yyval.symptr)->name, (yyvsp[0].int_value));
    }
#line 1549 "220101048.tab.c"
    break;

  case 8: /* constant: CHARACTER_CONSTANT  */
#line 305 "220101048.y"
    {
        (yyval.symptr) = currentSymbolTable->gentemp(new symbolTableData("char"), string((yyvsp[0].string_value)));
        emit("=", (yyval.symptr)->name, string((yyvsp[0].string_value)));
    }
#line 1558 "220101048.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 314 "220101048.y"
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
#line 1576 "220101048.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 328 "220101048.y"
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
#line 1600 "220101048.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression LEFT_PARENTHESIS argument_expression_list_opt RIGHT_PARENTHESIS  */
#line 348 "220101048.y"
    {
        (yyval.arr) = new Array();
        (yyval.arr)->array = currentSymbolTable->gentemp((yyvsp[-3].arr)->type);
        emit("call", (yyval.arr)->array->name, (yyvsp[-3].arr)->array->name, to_string((yyvsp[-1].numParams)));
    }
#line 1610 "220101048.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 354 "220101048.y"
    {}
#line 1616 "220101048.tab.c"
    break;

  case 13: /* argument_expression_list: assignment_expression  */
#line 360 "220101048.y"
    {
        (yyval.numParams) = 1;
        emit("param", (yyvsp[0].expr)->STaddress->name);
    }
#line 1625 "220101048.tab.c"
    break;

  case 14: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 365 "220101048.y"
    {
        (yyval.numParams) = (yyvsp[-2].numParams) + 1;
        emit("param", (yyvsp[0].expr)->STaddress->name);
    }
#line 1634 "220101048.tab.c"
    break;

  case 15: /* unary_expression: postfix_expression  */
#line 373 "220101048.y"
    {
        (yyval.arr) = (yyvsp[0].arr);
    }
#line 1642 "220101048.tab.c"
    break;

  case 16: /* unary_expression: unary_operator unary_expression  */
#line 377 "220101048.y"
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
#line 1685 "220101048.tab.c"
    break;

  case 17: /* unary_operator: BITWISE_AND  */
#line 420 "220101048.y"
    {
        (yyval.unaryOp) = '&';
    }
#line 1693 "220101048.tab.c"
    break;

  case 18: /* unary_operator: MULTIPLICATION  */
#line 424 "220101048.y"
    {
        (yyval.unaryOp) = '*';
    }
#line 1701 "220101048.tab.c"
    break;

  case 19: /* unary_operator: ADDITION  */
#line 428 "220101048.y"
    {
        (yyval.unaryOp) = '+';
    }
#line 1709 "220101048.tab.c"
    break;

  case 20: /* unary_operator: SUBTRACTION  */
#line 432 "220101048.y"
    {
        (yyval.unaryOp) = '-';
    }
#line 1717 "220101048.tab.c"
    break;

  case 21: /* unary_operator: NOT  */
#line 436 "220101048.y"
    {
        (yyval.unaryOp) = '!';
    }
#line 1725 "220101048.tab.c"
    break;

  case 22: /* multiplicative_expression: unary_expression  */
#line 445 "220101048.y"
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
#line 1745 "220101048.tab.c"
    break;

  case 23: /* multiplicative_expression: multiplicative_expression MULTIPLICATION unary_expression  */
#line 461 "220101048.y"
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
#line 1760 "220101048.tab.c"
    break;

  case 24: /* multiplicative_expression: multiplicative_expression DIVISION unary_expression  */
#line 472 "220101048.y"
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
#line 1775 "220101048.tab.c"
    break;

  case 25: /* multiplicative_expression: multiplicative_expression MODULO unary_expression  */
#line 483 "220101048.y"
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
#line 1790 "220101048.tab.c"
    break;

  case 26: /* additive_expression: multiplicative_expression  */
#line 497 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1798 "220101048.tab.c"
    break;

  case 27: /* additive_expression: additive_expression ADDITION multiplicative_expression  */
#line 501 "220101048.y"
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
#line 1813 "220101048.tab.c"
    break;

  case 28: /* additive_expression: additive_expression SUBTRACTION multiplicative_expression  */
#line 512 "220101048.y"
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
#line 1828 "220101048.tab.c"
    break;

  case 29: /* shift_expression: additive_expression  */
#line 526 "220101048.y"
    {
        (yyval.expr) = (yyvsp[0].expr);
    }
#line 1836 "220101048.tab.c"
    break;

  case 30: /* shift_expression: shift_expression LSHIFT additive_expression  */
#line 530 "220101048.y"
    {
        if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
            (yyval.expr) = new Expression();
            (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
            emit("<<", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
        }
        else {
            yyerror("Type mismatch in shift expression");
        }
    }
#line 1851 "220101048.tab.c"
    break;

  case 31: /* shift_expression: shift_expression RSHIFT additive_expression  */
#line 541 "220101048.y"
    {
        if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
            (yyval.expr) = new Expression();
            (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
            emit(">>", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
        }
        else {
            yyerror("Type mismatch in shift expression");
        }
    }
#line 1866 "220101048.tab.c"
    break;

  case 32: /* relational_expression: shift_expression  */
#line 556 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1874 "220101048.tab.c"
    break;

  case 33: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 560 "220101048.y"
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
#line 1892 "220101048.tab.c"
    break;

  case 34: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 574 "220101048.y"
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
#line 1910 "220101048.tab.c"
    break;

  case 35: /* relational_expression: relational_expression LESS_THAN_OR_EQUAL_TO shift_expression  */
#line 588 "220101048.y"
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
#line 1928 "220101048.tab.c"
    break;

  case 36: /* relational_expression: relational_expression GREATER_THAN_OR_EQUAL_TO shift_expression  */
#line 602 "220101048.y"
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
#line 1946 "220101048.tab.c"
    break;

  case 37: /* bitwise_AND_expression: equality_expression  */
#line 618 "220101048.y"
    {
        (yyval.expr) = (yyvsp[0].expr);
    }
#line 1954 "220101048.tab.c"
    break;

  case 38: /* bitwise_AND_expression: bitwise_AND_expression BITWISE_AND equality_expression  */
#line 622 "220101048.y"
    {
        if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
            (yyval.expr) = new Expression();
            (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
            emit("&", (yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
        }
        else {
            yyerror("Type error in bit AND operation");
        }
    }
#line 1969 "220101048.tab.c"
    break;

  case 39: /* bitwise_XOR_expression: bitwise_AND_expression  */
#line 636 "220101048.y"
    {
        (yyval.expr) = (yyvsp[0].expr);
    }
#line 1977 "220101048.tab.c"
    break;

  case 40: /* bitwise_XOR_expression: bitwise_XOR_expression BITWISE_XOR bitwise_AND_expression  */
#line 640 "220101048.y"
    {
        if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
            (yyval.expr) = new Expression();
           (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
            emit("^",(yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
        }
        else {
            yyerror("Type error in bit XOR operation");
        }
    }
#line 1992 "220101048.tab.c"
    break;

  case 41: /* bitwise_OR_expression: bitwise_XOR_expression  */
#line 654 "220101048.y"
    {
        (yyval.expr) = (yyvsp[0].expr);
    }
#line 2000 "220101048.tab.c"
    break;

  case 42: /* bitwise_OR_expression: bitwise_OR_expression BITWISE_OR bitwise_XOR_expression  */
#line 658 "220101048.y"
    {
        if(typecheck((yyvsp[-2].expr)->STaddress, (yyvsp[0].expr)->STaddress)) {
            (yyval.expr) = new Expression();
            (yyval.expr)->STaddress = currentSymbolTable->gentemp(new symbolTableData((yyvsp[-2].expr)->STaddress->symbolTableEntryType->type));
            emit("|",(yyval.expr)->STaddress->name, (yyvsp[-2].expr)->STaddress->name, (yyvsp[0].expr)->STaddress->name);
        }
        else {
            yyerror("Type error in bit OR operation");
        }
    }
#line 2015 "220101048.tab.c"
    break;

  case 43: /* equality_expression: relational_expression  */
#line 672 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2023 "220101048.tab.c"
    break;

  case 44: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 676 "220101048.y"
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
#line 2043 "220101048.tab.c"
    break;

  case 45: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 692 "220101048.y"
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
#line 2063 "220101048.tab.c"
    break;

  case 46: /* logical_and_expression: bitwise_OR_expression  */
#line 712 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2071 "220101048.tab.c"
    break;

  case 47: /* logical_and_expression: logical_and_expression LOGICAL_AND A bitwise_OR_expression  */
#line 716 "220101048.y"
        {
            intToBoolConversion((yyvsp[-3].expr));
            intToBoolConversion((yyvsp[0].expr));
            (yyval.expr) = new Expression();
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr));
            (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;
            (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);
        }
#line 2085 "220101048.tab.c"
    break;

  case 48: /* logical_or_expression: logical_and_expression  */
#line 729 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2093 "220101048.tab.c"
    break;

  case 49: /* logical_or_expression: logical_or_expression LOGICAL_OR A logical_and_expression  */
#line 733 "220101048.y"
        {
            intToBoolConversion((yyvsp[-3].expr));
            intToBoolConversion((yyvsp[0].expr));
            (yyval.expr) = new Expression();
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr));
            (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;
            (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);
        }
#line 2107 "220101048.tab.c"
    break;

  case 50: /* conditional_expression: logical_or_expression  */
#line 746 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2115 "220101048.tab.c"
    break;

  case 51: /* conditional_expression: logical_or_expression B QUESTION_MARK A expression B COLON A conditional_expression  */
#line 750 "220101048.y"
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
#line 2137 "220101048.tab.c"
    break;

  case 52: /* A: %empty  */
#line 770 "220101048.y"
        {   
            (yyval.instr) = nextinstr();
        }
#line 2145 "220101048.tab.c"
    break;

  case 53: /* B: %empty  */
#line 776 "220101048.y"
        {
            (yyval.stmt) = new Statement();
            (yyval.stmt)->nextlist = makelist(nextinstr());
            emit("goto", "");
        }
#line 2155 "220101048.tab.c"
    break;

  case 54: /* assignment_expression: conditional_expression  */
#line 785 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2163 "220101048.tab.c"
    break;

  case 55: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 789 "220101048.y"
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
#line 2182 "220101048.tab.c"
    break;

  case 56: /* assignment_operator: ASSIGN  */
#line 807 "220101048.y"
        {}
#line 2188 "220101048.tab.c"
    break;

  case 57: /* expression: assignment_expression  */
#line 813 "220101048.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2196 "220101048.tab.c"
    break;

  case 58: /* declaration: type_specifier init_declarator SEMICOLON  */
#line 820 "220101048.y"
        {}
#line 2202 "220101048.tab.c"
    break;

  case 59: /* init_declarator: declarator  */
#line 826 "220101048.y"
        {
            (yyval.symptr) = (yyvsp[0].symptr);
        }
#line 2210 "220101048.tab.c"
    break;

  case 60: /* init_declarator: declarator ASSIGN initializer  */
#line 830 "220101048.y"
        {   
            if((yyvsp[0].symptr)->val != "") {
                (yyvsp[-2].symptr)->val = (yyvsp[0].symptr)->val;
            }
            emit("=", (yyvsp[-2].symptr)->name, (yyvsp[0].symptr)->name);
        }
#line 2221 "220101048.tab.c"
    break;

  case 61: /* type_specifier: VOID  */
#line 840 "220101048.y"
        {
            prevType = "void";
        }
#line 2229 "220101048.tab.c"
    break;

  case 62: /* type_specifier: CHAR  */
#line 844 "220101048.y"
        {
            prevType = "char";
        }
#line 2237 "220101048.tab.c"
    break;

  case 63: /* type_specifier: INT  */
#line 848 "220101048.y"
        {
            prevType = "int";
        }
#line 2245 "220101048.tab.c"
    break;

  case 64: /* type_specifier: FLOAT  */
#line 852 "220101048.y"
        {
            prevType = "float";
        }
#line 2253 "220101048.tab.c"
    break;

  case 65: /* declarator: pointer direct_declarator  */
#line 860 "220101048.y"
        {
            symbolTableData* t = (yyvsp[-1].symType);
            while(t->arrElementType != NULL) {
                t = t->arrElementType;
            }
            t->arrElementType = (yyvsp[0].symptr)->symbolTableEntryType;
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol((yyvsp[-1].symType));
        }
#line 2266 "220101048.tab.c"
    break;

  case 66: /* declarator: direct_declarator  */
#line 869 "220101048.y"
        {}
#line 2272 "220101048.tab.c"
    break;

  case 67: /* intermediate_identifier: IDENTIFIER  */
#line 874 "220101048.y"
        {
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol(new symbolTableData(prevType));
            currentSymbol = (yyval.symptr);
        }
#line 2281 "220101048.tab.c"
    break;

  case 68: /* direct_declarator: IDENTIFIER  */
#line 882 "220101048.y"
        {
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol(new symbolTableData(prevType));
            currentSymbol = (yyval.symptr);
        }
#line 2290 "220101048.tab.c"
    break;

  case 69: /* direct_declarator: IDENTIFIER LEFT_SQUARE_BRACKET INTEGER_CONSTANT RIGHT_SQUARE_BRACKET  */
#line 887 "220101048.y"
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
#line 2313 "220101048.tab.c"
    break;

  case 70: /* direct_declarator: intermediate_identifier LEFT_PARENTHESIS replaceActiveSymbolTableParse parameter_list RIGHT_PARENTHESIS  */
#line 906 "220101048.y"
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
#line 2329 "220101048.tab.c"
    break;

  case 71: /* direct_declarator: intermediate_identifier LEFT_PARENTHESIS replaceActiveSymbolTableParse RIGHT_PARENTHESIS  */
#line 918 "220101048.y"
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
#line 2345 "220101048.tab.c"
    break;

  case 72: /* pointer: MULTIPLICATION  */
#line 933 "220101048.y"
        {
            (yyval.symType) = new symbolTableData("ptr");
        }
#line 2353 "220101048.tab.c"
    break;

  case 73: /* parameter_list: parameter_declaration  */
#line 940 "220101048.y"
        {}
#line 2359 "220101048.tab.c"
    break;

  case 74: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 942 "220101048.y"
        {}
#line 2365 "220101048.tab.c"
    break;

  case 75: /* intermediate_declarator: pointer intermediate_identifier  */
#line 947 "220101048.y"
        {
            symbolTableData* t = (yyvsp[-1].symType);
            while(t->arrElementType != NULL) {
                t = t->arrElementType;
            }
            t->arrElementType = (yyvsp[0].symptr)->symbolTableEntryType;
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol((yyvsp[-1].symType));
        }
#line 2378 "220101048.tab.c"
    break;

  case 76: /* intermediate_declarator: intermediate_identifier  */
#line 956 "220101048.y"
        {}
#line 2384 "220101048.tab.c"
    break;

  case 77: /* parameter_declaration: type_specifier intermediate_declarator  */
#line 961 "220101048.y"
        {}
#line 2390 "220101048.tab.c"
    break;

  case 78: /* parameter_declaration: type_specifier  */
#line 963 "220101048.y"
        {}
#line 2396 "220101048.tab.c"
    break;

  case 79: /* initializer: assignment_expression  */
#line 968 "220101048.y"
        {
            (yyval.symptr) = (yyvsp[0].expr)->STaddress;
        }
#line 2404 "220101048.tab.c"
    break;

  case 80: /* statement: compound_statement  */
#line 975 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2412 "220101048.tab.c"
    break;

  case 81: /* statement: expression_statement  */
#line 979 "220101048.y"
        {
            (yyval.stmt) = new Statement();
            (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;
        }
#line 2421 "220101048.tab.c"
    break;

  case 82: /* statement: selection_statement  */
#line 984 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2429 "220101048.tab.c"
    break;

  case 83: /* statement: iteration_statement  */
#line 988 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2437 "220101048.tab.c"
    break;

  case 84: /* statement: jump_statement  */
#line 992 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2445 "220101048.tab.c"
    break;

  case 85: /* compound_statement: BEG NESTPARSER replaceActiveSymbolTableParse block_item_list_opt END  */
#line 999 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[-1].stmt);
            replaceActiveSymbolTable(currentSymbolTable->parent);
        }
#line 2454 "220101048.tab.c"
    break;

  case 86: /* block_item_list: block_item  */
#line 1008 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2462 "220101048.tab.c"
    break;

  case 87: /* block_item_list: block_item_list A block_item  */
#line 1012 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
            backpatch((yyvsp[-2].stmt)->nextlist, (yyvsp[-1].instr));
        }
#line 2471 "220101048.tab.c"
    break;

  case 88: /* block_item: declaration  */
#line 1020 "220101048.y"
        {
            (yyval.stmt) = new Statement();
        }
#line 2479 "220101048.tab.c"
    break;

  case 89: /* block_item: statement  */
#line 1024 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2487 "220101048.tab.c"
    break;

  case 90: /* expression_statement: expression SEMICOLON  */
#line 1031 "220101048.y"
        {
            (yyval.expr) = (yyvsp[-1].expr);
        }
#line 2495 "220101048.tab.c"
    break;

  case 91: /* expression_statement: SEMICOLON  */
#line 1035 "220101048.y"
        {
            (yyval.expr) = new Expression();
        }
#line 2503 "220101048.tab.c"
    break;

  case 92: /* selection_statement: IF LEFT_PARENTHESIS expression B RIGHT_PARENTHESIS A statement B  */
#line 1042 "220101048.y"
        {
            backpatch((yyvsp[-4].stmt)->nextlist, nextinstr());
            intToBoolConversion((yyvsp[-5].expr));
            (yyval.stmt) = new Statement();
            backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr));
            list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist, temp);
        }
#line 2516 "220101048.tab.c"
    break;

  case 93: /* selection_statement: IF LEFT_PARENTHESIS expression B RIGHT_PARENTHESIS A statement B ELSE A statement  */
#line 1051 "220101048.y"
        {
            backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());
            intToBoolConversion((yyvsp[-8].expr));
            (yyval.stmt) = new Statement();
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));
            list<int> temp = merge((yyvsp[-4].stmt)->nextlist, (yyvsp[-3].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist, temp);
        }
#line 2530 "220101048.tab.c"
    break;

  case 94: /* iteration_statement: FOR F LEFT_PARENTHESIS NESTPARSER replaceActiveSymbolTableParse expression_statement A expression_statement A expression B RIGHT_PARENTHESIS A statement  */
#line 1064 "220101048.y"
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
#line 2546 "220101048.tab.c"
    break;

  case 95: /* iteration_statement: WHILE W LEFT_PARENTHESIS A expression B RIGHT_PARENTHESIS A statement  */
#line 1076 "220101048.y"
        {
            (yyval.stmt) = new Statement();
            intToBoolConversion((yyvsp[-4].expr));
            backpatch((yyvsp[-4].expr)->truelist, (yyvsp[-1].instr));
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr));
            emit("goto", to_string((yyvsp[-5].instr)));
            (yyval.stmt)->nextlist = (yyvsp[-4].expr)->falselist;
            currentBlock = "";
        }
#line 2560 "220101048.tab.c"
    break;

  case 96: /* iteration_statement: DO D A statement WHILE LEFT_PARENTHESIS A expression B RIGHT_PARENTHESIS SEMICOLON  */
#line 1086 "220101048.y"
        {
            (yyval.stmt) = new Statement();
            intToBoolConversion((yyvsp[-3].expr));
            backpatch((yyvsp[-7].stmt)->nextlist, (yyvsp[-4].instr));    // After loop body execution, evaluate condition
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-8].instr));    // If condition is true, go back to beginning of loop
            (yyval.stmt)->nextlist = (yyvsp[-3].expr)->falselist;   // If condition is false, exit loop
            currentBlock = "";
        }
#line 2573 "220101048.tab.c"
    break;

  case 97: /* F: %empty  */
#line 1097 "220101048.y"
        {   
            currentBlock = "FOR";
        }
#line 2581 "220101048.tab.c"
    break;

  case 98: /* W: %empty  */
#line 1103 "220101048.y"
        {   
            currentBlock = "WHILE";
        }
#line 2589 "220101048.tab.c"
    break;

  case 99: /* D: %empty  */
#line 1109 "220101048.y"
        {   
            currentBlock = "DO";
        }
#line 2597 "220101048.tab.c"
    break;

  case 100: /* NESTPARSER: %empty  */
#line 1116 "220101048.y"
        {   
            string newST = currentSymbolTable->name + "." + currentBlock + "$" + to_string(symbolTableCounter++);
            symbolTableInit* sym = currentSymbolTable->lookup(newST);
            sym->nestedTable = new SymbolTable(newST);
            sym->name = newST;
            sym->nestedTable->parent = currentSymbolTable;
            sym->symbolTableEntryType = new symbolTableData("block");
            currentSymbol = sym;
        }
#line 2611 "220101048.tab.c"
    break;

  case 101: /* replaceActiveSymbolTableParse: %empty  */
#line 1128 "220101048.y"
        {   
            if(currentSymbol->nestedTable != NULL) {
                replaceActiveSymbolTable(currentSymbol->nestedTable);
                emit("label", currentSymbolTable->name);
            }
            else {
                replaceActiveSymbolTable(new SymbolTable(""));
            }
        }
#line 2625 "220101048.tab.c"
    break;

  case 102: /* jump_statement: RETURN expression SEMICOLON  */
#line 1141 "220101048.y"
        {
            (yyval.stmt) = new Statement();
            emit("return", (yyvsp[-1].expr)->STaddress->name);
        }
#line 2634 "220101048.tab.c"
    break;

  case 103: /* jump_statement: RETURN SEMICOLON  */
#line 1146 "220101048.y"
        {
            (yyval.stmt) = new Statement();
            emit("return", "");
        }
#line 2643 "220101048.tab.c"
    break;

  case 104: /* translation_unit: external_declaration  */
#line 1154 "220101048.y"
        {}
#line 2649 "220101048.tab.c"
    break;

  case 105: /* translation_unit: translation_unit external_declaration  */
#line 1156 "220101048.y"
        {}
#line 2655 "220101048.tab.c"
    break;

  case 106: /* external_declaration: function_definition  */
#line 1161 "220101048.y"
        {}
#line 2661 "220101048.tab.c"
    break;

  case 107: /* external_declaration: declaration  */
#line 1163 "220101048.y"
        {}
#line 2667 "220101048.tab.c"
    break;

  case 108: /* function_definition: type_specifier declarator declaration_list_opt replaceActiveSymbolTableParse BEG block_item_list_opt END  */
#line 1168 "220101048.y"
        {   
            currentSymbolTable->parent = globalSymbolTable;
            symbolTableCounter = 0;
            if((yyvsp[-5].symptr)->symbolTableEntryType->type != "void") {
                symbolTableInit* s = currentSymbolTable->lookup("return");
                s->update_symbol((yyvsp[-5].symptr)->symbolTableEntryType);
            }
            replaceActiveSymbolTable(globalSymbolTable);
        }
#line 2681 "220101048.tab.c"
    break;

  case 109: /* declaration_list: declaration  */
#line 1182 "220101048.y"
        {}
#line 2687 "220101048.tab.c"
    break;

  case 110: /* declaration_list: declaration_list declaration  */
#line 1184 "220101048.y"
        {}
#line 2693 "220101048.tab.c"
    break;

  case 111: /* argument_expression_list_opt: argument_expression_list  */
#line 1190 "220101048.y"
    {
        (yyval.numParams) = (yyvsp[0].numParams);
    }
#line 2701 "220101048.tab.c"
    break;

  case 112: /* argument_expression_list_opt: %empty  */
#line 1194 "220101048.y"
    {
        (yyval.numParams) = 0;
    }
#line 2709 "220101048.tab.c"
    break;

  case 113: /* block_item_list_opt: block_item_list  */
#line 1201 "220101048.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 2717 "220101048.tab.c"
    break;

  case 114: /* block_item_list_opt: %empty  */
#line 1205 "220101048.y"
        {
            (yyval.stmt) = new Statement();
        }
#line 2725 "220101048.tab.c"
    break;

  case 115: /* declaration_list_opt: declaration_list  */
#line 1211 "220101048.y"
        {}
#line 2731 "220101048.tab.c"
    break;

  case 116: /* declaration_list_opt: %empty  */
#line 1213 "220101048.y"
        {}
#line 2737 "220101048.tab.c"
    break;


#line 2741 "220101048.tab.c"

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

#line 1217 "220101048.y"


void yyerror(string s) {
    cout << "ERROR -> " << s << endl;
    cout << "Can't Parse -> " << yytext << " <--" << endl; 
}
