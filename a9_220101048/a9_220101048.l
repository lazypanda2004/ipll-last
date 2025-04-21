%{
    #include <stdio.h>
    #include <stdlib.h>
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

    #include "a9_220101048.tab.h"

%}

IDENTIFIER                      [a-zA-Z_][a-zA-Z0-9_]*


NONZERO_DIGIT                   [1-9]
DIGIT                           [0-9]
SIGN                            [+-]


CONSTANT                        {INTEGER_CONSTANT}|{CHARACTER_CONSTANT}
INTEGER_CONSTANT                {DIGIT}|{NONZERO_DIGIT}{DIGIT}*

ESCAPE_SEQUENCE                 [\\][']|[\\]["]|[\\][?]|[\\][\\]|[\\][a]|[\\][b]|[\\][f]|[\\][n]|[\\][r]|[\\][t]|[\\][v]

C_CHAR                          [^'\n\\]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE                 {C_CHAR}+
CHARACTER_CONSTANT              [']{C_CHAR_SEQUENCE}[']

S_CHAR                          [^"\n\\]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE                 {S_CHAR}+

STRING_LITERAL                  ["]{S_CHAR_SEQUENCE}["]|["]["]
FLOAT_CONST             {DIGIT}+"."{DIGIT}+([eE][+-]?{DIGIT}+)?


WS                              [ \t\n]



LEFT_SQUARE_BRACKET 			"["
RIGHT_SQUARE_BRACKET 			"]"
LEFT_PARENTHESIS 			    "("
RIGHT_PARENTHESIS 			    ")"

QUESTION_MARK 			        "?"
COLON 				            ":"
SEMICOLON 			            ";"
ASSIGN 				            "="
COMMA 				            ","

DOT 				            "."
ARROW 				            "->"

BITWISE_AND 				    "&"
BITWISE_OR			            "|"
BITWISE_XOR			            "^"


AND 				            "&&"
OR 					            "||"

ADDITION 			            "+"
SUBTRACTION 		            "-"
MULTIPLICATION 		            "*"
DIVISION 			            "/"
MODULO 				            "%"

NOT 		                    "!"
LESS_THAN 	 		            "<"
GREATER_THAN 		            ">"
LESS_THAN_OR_EQUAL_TO 	        "<="
GREATER_THAN_OR_EQUAL_TO 	    ">="
EQUAL 				            "=="
NOTEQUAL 			            "!="

LSHIFT 			                "<<"
RSHIFT                          ">>"

%x SINGLE_COMMENT MULTI_COMMENT

%%

"//"			            {BEGIN(SINGLE_COMMENT);}
<SINGLE_COMMENT>[^\n]	    {}
<SINGLE_COMMENT>"\n"		{BEGIN(INITIAL);}
<SINGLE_COMMENT><<EOF>>	    {BEGIN(INITIAL);}


"/*"			            {BEGIN(MULTI_COMMENT);}
<MULTI_COMMENT>"\n"         {}
<MULTI_COMMENT>[^*]	        {}
<MULTI_COMMENT>"*"[^/]	    {}
<MULTI_COMMENT>"*/"	        {BEGIN(INITIAL);}



"char"                          {return CHAR;}
"else"                          {return ELSE;}
"for"                           {return FOR;}
"if"                            {return IF;}
"integer"                       {return INT;}
"return"                        {return RETURN;}
"void"                          {return VOID;}
"float"                         {return FLOAT;}
"while"                         {return WHILE;}
"do"                            {return DO;}
"begin"                         {return BEG;}
"end"                           {return END;}

{LEFT_SQUARE_BRACKET}           {return LEFT_SQUARE_BRACKET;}
{RIGHT_SQUARE_BRACKET}          {return RIGHT_SQUARE_BRACKET;}
{LEFT_PARENTHESIS}              {return LEFT_PARENTHESIS;}
{RIGHT_PARENTHESIS}             {return RIGHT_PARENTHESIS;}

{ARROW}                         {return ARROW;}

{QUESTION_MARK}                 {return QUESTION_MARK;}
{COLON}                         {return COLON;}
{SEMICOLON}                     {return SEMICOLON;}
{ASSIGN}                        {return ASSIGN;}
{COMMA}                         {return COMMA;}

{BITWISE_AND}                   {return BITWISE_AND;}
{BITWISE_OR}                   {return BITWISE_OR;}
{BITWISE_XOR}                   {return BITWISE_XOR;}

{AND}                           {return LOGICAL_AND;}
{OR}                            {return LOGICAL_OR;}

{ADDITION}                      {return ADDITION;}
{SUBTRACTION}                   {return SUBTRACTION;}
{MULTIPLICATION}                {return MULTIPLICATION;}
{DIVISION}                      {return DIVISION;}
{MODULO}                        {return MODULO;}

{NOT}                           {return NOT;}
{LESS_THAN}                     {return LESS_THAN;}
{GREATER_THAN}                  {return GREATER_THAN;}
{LESS_THAN_OR_EQUAL_TO}         {return LESS_THAN_OR_EQUAL_TO;}
{GREATER_THAN_OR_EQUAL_TO}      {return GREATER_THAN_OR_EQUAL_TO;}
{EQUAL}                         {return EQUAL;}
{NOTEQUAL}                      {return NOT_EQUAL;}

{LSHIFT}                        {return LSHIFT;}
{RSHIFT}                        {return RSHIFT;}


{IDENTIFIER}                    {
                                    yylval.symptr = currentSymbolTable->lookup(yytext);
                                    return IDENTIFIER;
                                }

{INTEGER_CONSTANT}                  { yylval.int_value = atoi(yytext); return INTEGER_CONSTANT; }
{CHARACTER_CONSTANT}                 { yylval.charVal = strdup(yytext); return CHARACTER_CONSTANT; }
{STRING_LITERAL}                { yylval.string_value = strdup(yytext); return STRING_LITERAL; }
{FLOAT_CONST}                    {yylval.floatVal = atof(yytext); return FLOAT_CONST;}

{WS}                            {}



%%

int yywrap()
{
    return 1;
}