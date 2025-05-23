%{
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
%}

%union {
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
}

%token CHAR
%token ELSE
%token FOR
%token IF
%token INT
%token RETURN
%token VOID
%token WHILE
%token DO
%token FLOAT
%token BEG
%token END

%token LEFT_SQUARE_BRACKET
%token RIGHT_SQUARE_BRACKET
%token LEFT_PARENTHESIS
%token RIGHT_PARENTHESIS
%token ARROW

%token BITWISE_AND
%token BITWISE_OR
%token BITWISE_XOR

%token MULTIPLICATION
%token ADDITION
%token SUBTRACTION
%token NOT
%token DIVISION
%token MODULO 

%token LESS_THAN
%token GREATER_THAN
%token LESS_THAN_OR_EQUAL_TO
%token GREATER_THAN_OR_EQUAL_TO
%token EQUAL
%token NOT_EQUAL

%token LOGICAL_AND
%token LOGICAL_OR
%token QUESTION_MARK
%token COLON
%token SEMICOLON
%token ASSIGN
%token COMMA
%token LSHIFT
%token RSHIFT
%token IFX

%token <symptr> IDENTIFIER
%token <int_value> INTEGER_CONSTANT
%token <string_value> CHARACTER_CONSTANT
%token <string_value> STRING_LITERAL
%token<floatVal> FLOAT_CONST

%nonassoc IFX
%start translation_unit
%right THEN ELSE
%type <unaryOp> unary_operator
%type <numParams> argument_expression_list argument_expression_list_opt
%type <expr> 
    expression
    primary_expression 
    multiplicative_expression
    additive_expression
    relational_expression
    equality_expression
    logical_and_expression
    logical_or_expression
    conditional_expression
    assignment_expression
    expression_statement
    shift_expression
    bitwise_AND_expression
    bitwise_OR_expression
    bitwise_XOR_expression

%type <stmt>
    statement
    compound_statement
    selection_statement
    iteration_statement
    jump_statement
    block_item
    block_item_list
    block_item_list_opt

%type <symType> pointer
%type <symptr> constant initializer
%type <symptr> intermediate_identifier direct_declarator init_declarator intermediate_declarator declarator
%type <arr> postfix_expression unary_expression
%type <instr> A
%type <stmt> B

%%

primary_expression: 
    IDENTIFIER
    {
        $$ = new Expression();
        $$->STaddress = $1;
        $$->type = "non_bool";
    }
    | constant
    {
        $$ = new Expression();
        $$->STaddress = $1;
    }
    | STRING_LITERAL
    {
        $$ = new Expression();
        $$->STaddress = currentSymbolTable->gentemp(new symbolTableData("ptr"), $1);
        $$->STaddress->symbolTableEntryType->arrElementType = new symbolTableData("char");
    }
    | LEFT_PARENTHESIS expression RIGHT_PARENTHESIS
    {
        $$ = $2;
        if ($2->type == "bool")
            tmpForBool = $2;
    }
    | FLOAT_CONST
     {
        $$ = new Expression();
        string val = to_string($1);
        $$->STaddress = currentSymbolTable->gentemp(new symbolTableData("float"), val);
        $$->STaddress->symbolTableEntryType->arrElementType = new symbolTableData("float");
    }
    ;

constant: 
    INTEGER_CONSTANT
    {
        $$ = currentSymbolTable->gentemp(new symbolTableData("int"), to_string($1));
        emit("=", $$->name, $1);
    }
    | CHARACTER_CONSTANT
    {
        $$ = currentSymbolTable->gentemp(new symbolTableData("char"), string($1));
        emit("=", $$->name, string($1));
    }
    ;


postfix_expression: 
    primary_expression
    {
        $$ = new Array();
        if ($1->type != "bool")
        {
            $$->array = $1->STaddress;
            $$->type = $1->STaddress->symbolTableEntryType;
            $$->STaddress = $$->array;
        }
        else
        {
            $$->arrayType = "bool_temporary";
        }
    }
    | postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET
    {
        $$ = new Array();
        $$->type = $1->type->arrElementType;
        $$->array = $1->array;
        $$->STaddress = currentSymbolTable->gentemp(new symbolTableData("int"));
        $$->arrayType = "arr";
        if ($1->arrayType == "arr")
        {
            symbolTableInit* sym = currentSymbolTable->gentemp(new symbolTableData("int"));
            int sz = getSize($$->type);
            emit("*", sym->name, $3->STaddress->name, to_string(sz));
            emit("+", $$->STaddress->name, $1->STaddress->name, sym->name);
        }
        else
        {
            int sz = getSize($$->type);
            emit("*", $$->STaddress->name, $3->STaddress->name, to_string(sz));
        }
    }
    | postfix_expression LEFT_PARENTHESIS argument_expression_list_opt RIGHT_PARENTHESIS
    {
        $$ = new Array();
        $$->array = currentSymbolTable->gentemp($1->type);
        emit("call", $$->array->name, $1->array->name, to_string($3));
    }
    | postfix_expression ARROW IDENTIFIER
    {}
    ;


argument_expression_list: 
    assignment_expression
    {
        $$ = 1;
        emit("param", $1->STaddress->name);
    }
    | argument_expression_list COMMA assignment_expression
    {
        $$ = $1 + 1;
        emit("param", $3->STaddress->name);
    }
    ;

unary_expression: 
    postfix_expression
    {
        $$ = $1;
    }
    | unary_operator unary_expression
    {
        $$ = new Array();
        switch ($1)
        {
        case '&':
            $$->array = currentSymbolTable->gentemp(new symbolTableData("ptr"));
            $$->array->symbolTableEntryType->arrElementType = $2->array->symbolTableEntryType;
            emit("= &", $$->array->name, $2->array->name);
            break;
        case '*':
            $$->arrayType = "ptr";
            $$->STaddress = currentSymbolTable->gentemp($2->array->symbolTableEntryType->arrElementType);
            $$->array = $2->array;
            emit("= *", $$->STaddress->name, $2->array->name);
            break;
        case '+':
            $$ = $2;
            break;
        case '-':
            $$->array = currentSymbolTable->gentemp(new symbolTableData($2->array->symbolTableEntryType->type));
            emit("= -", $$->array->name, $2->array->name);
            break;
        case '!':
            if ($2->arrayType == "bool_temporary")
            {
                list<int> l = tmpForBool->falselist;
                tmpForBool->falselist = tmpForBool->truelist;
                tmpForBool->truelist = l;
                $$->arrayType = "bool_temporary";
            }
            else
            {
                $$->array = currentSymbolTable->gentemp(new symbolTableData($2->array->symbolTableEntryType->type));
                emit("= !", $$->array->name, $2->array->name);
            }
            break;
        }
    }

    ;

unary_operator:
    BITWISE_AND
    {
        $$ = '&';
    }
    | MULTIPLICATION
    {
        $$ = '*';
    }
    | ADDITION
    {
        $$ = '+';
    }
    | SUBTRACTION
    {
        $$ = '-';
    }
    | NOT
    {
        $$ = '!';
    }
    ;



multiplicative_expression: 
        unary_expression
        {
            $$ = new Expression();
            if($1->arrayType == "arr") {
                $$->STaddress = currentSymbolTable->gentemp($1->STaddress->symbolTableEntryType);
                emit("=[]", $$->STaddress->name, $1->array->name, $1->STaddress->name);
            }
            else if($1->arrayType == "ptr") {
                $$->STaddress = $1->STaddress;
            }
            else if($1->arrayType == "bool_temporary") {
                $$ = tmpForBool;
            } else {
                $$->STaddress = $1->array;
            }
        }
        | multiplicative_expression MULTIPLICATION unary_expression
        {
            if(typecheck($1->STaddress, $3->array)) {
                $$ = new Expression();
                $$->STaddress = currentSymbolTable->gentemp(new symbolTableData($1->STaddress->symbolTableEntryType->type));
                emit("*", $$->STaddress->name, $1->STaddress->name, $3->array->name);
            }
            else {
                yyerror("Type Error");
            }
        }
        | multiplicative_expression DIVISION unary_expression
        {
            if(typecheck($1->STaddress, $3->array)) {
                $$ = new Expression();
                $$->STaddress = currentSymbolTable->gentemp(new symbolTableData($1->STaddress->symbolTableEntryType->type));
                emit("/", $$->STaddress->name, $1->STaddress->name, $3->array->name);
            }
            else {
                yyerror("Type Error");
            }
        }
        | multiplicative_expression MODULO unary_expression
        {
            if(typecheck($1->STaddress, $3->array)) {
                $$ = new Expression();
                $$->STaddress = currentSymbolTable->gentemp(new symbolTableData($1->STaddress->symbolTableEntryType->type));
                emit("%", $$->STaddress->name, $1->STaddress->name, $3->array->name);
            }
            else {
                yyerror("Type Error");
            }
        }
        ;

additive_expression: 
        multiplicative_expression
        {
            $$ = $1;
        }
        | additive_expression ADDITION multiplicative_expression
        {   
            if(typecheck($1->STaddress, $3->STaddress)) {
                $$ = new Expression();
                $$->STaddress = currentSymbolTable->gentemp(new symbolTableData($1->STaddress->symbolTableEntryType->type));
                emit("+", $$->STaddress->name, $1->STaddress->name, $3->STaddress->name);
            }
            else {
                yyerror("Type Error");
            }
        }
        | additive_expression SUBTRACTION multiplicative_expression
        {
            if(typecheck($1->STaddress, $3->STaddress)) {
                $$ = new Expression();
                $$->STaddress = currentSymbolTable->gentemp(new symbolTableData($1->STaddress->symbolTableEntryType->type));
                emit("-", $$->STaddress->name, $1->STaddress->name, $3->STaddress->name);
            }
            else {
                yyerror("Type Error");
            }
        }
        ;

shift_expression
    : additive_expression
    {
        $$ = $1;
    }
    | shift_expression LSHIFT additive_expression
    {
        if(typecheck($1->STaddress, $3->STaddress)) {
            $$ = new Expression();
            $$->STaddress = currentSymbolTable->gentemp(new symbolTableData($1->STaddress->symbolTableEntryType->type));
            emit("<<", $$->STaddress->name, $1->STaddress->name, $3->STaddress->name);
        }
        else {
            yyerror("Type mismatch in shift expression");
        }
    }
    | shift_expression RSHIFT additive_expression
    {
        if(typecheck($1->STaddress, $3->STaddress)) {
            $$ = new Expression();
            $$->STaddress = currentSymbolTable->gentemp(new symbolTableData($1->STaddress->symbolTableEntryType->type));
            emit(">>", $$->STaddress->name, $1->STaddress->name, $3->STaddress->name);
        }
        else {
            yyerror("Type mismatch in shift expression");
        }
    }
    ;


relational_expression: 
        shift_expression
        {
            $$ = $1;
        }
        | relational_expression LESS_THAN shift_expression
        {
            if(typecheck($1->STaddress, $3->STaddress)) {
                $$ = new Expression();
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());
                $$->falselist = makelist(nextinstr() + 1);
                emit("<", "", $1->STaddress->name, $3->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
        | relational_expression GREATER_THAN shift_expression
        {
            if(typecheck($1->STaddress, $3->STaddress)) {
                $$ = new Expression();
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());
                $$->falselist = makelist(nextinstr() + 1);
                emit(">", "", $1->STaddress->name, $3->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
        | relational_expression LESS_THAN_OR_EQUAL_TO shift_expression
        {
            if(typecheck($1->STaddress, $3->STaddress)) {
                $$ = new Expression();
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());
                $$->falselist = makelist(nextinstr() + 1);
                emit("<=", "", $1->STaddress->name, $3->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
        | relational_expression GREATER_THAN_OR_EQUAL_TO shift_expression
        {
            if(typecheck($1->STaddress, $3->STaddress)) {
                $$ = new Expression();
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());
                $$->falselist = makelist(nextinstr() + 1);
                emit(">=", "", $1->STaddress->name, $3->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
        ;
bitwise_AND_expression
    : equality_expression
    {
        $$ = $1;
    }
    | bitwise_AND_expression BITWISE_AND equality_expression
    {
        if(typecheck($1->STaddress, $3->STaddress)) {
            $$ = new Expression();
            $$->STaddress = currentSymbolTable->gentemp(new symbolTableData($1->STaddress->symbolTableEntryType->type));
            emit("&", $$->STaddress->name, $1->STaddress->name, $3->STaddress->name);
        }
        else {
            yyerror("Type error in bit AND operation");
        }
    }
    ;

bitwise_XOR_expression
    : bitwise_AND_expression
    {
        $$ = $1;
    }
    | bitwise_XOR_expression BITWISE_XOR bitwise_AND_expression
    {
        if(typecheck($1->STaddress, $3->STaddress)) {
            $$ = new Expression();
           $$->STaddress = currentSymbolTable->gentemp(new symbolTableData($1->STaddress->symbolTableEntryType->type));
            emit("^",$$->STaddress->name, $1->STaddress->name, $3->STaddress->name);
        }
        else {
            yyerror("Type error in bit XOR operation");
        }
    }
    ;

bitwise_OR_expression
    : bitwise_XOR_expression
    {
        $$ = $1;
    }
    | bitwise_OR_expression BITWISE_OR bitwise_XOR_expression
    {
        if(typecheck($1->STaddress, $3->STaddress)) {
            $$ = new Expression();
            $$->STaddress = currentSymbolTable->gentemp(new symbolTableData($1->STaddress->symbolTableEntryType->type));
            emit("|",$$->STaddress->name, $1->STaddress->name, $3->STaddress->name);
        }
        else {
            yyerror("Type error in bit OR operation");
        }
    }
    ;

equality_expression: 
        relational_expression
        {
            $$ = $1;
        }
        | equality_expression EQUAL relational_expression
        {
            if(typecheck($1->STaddress, $3->STaddress)) {
                boolToIntConversion($1);
                boolToIntConversion($3);
                $$ = new Expression();
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());
                $$->falselist = makelist(nextinstr() + 1);
                emit("==", "", $1->STaddress->name, $3->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
        | equality_expression NOT_EQUAL relational_expression
        {
            if(typecheck($1->STaddress, $3->STaddress)) {
                boolToIntConversion($1);
                boolToIntConversion($3);
                $$ = new Expression();
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());
                $$->falselist = makelist(nextinstr() + 1);
                emit("!=", "", $1->STaddress->name, $3->STaddress->name);
                emit("goto", "");
            }
            else {
                yyerror("Type Error");
            }
        }
        ;


logical_and_expression: 
        bitwise_OR_expression
        {
            $$ = $1;
        }
        | logical_and_expression LOGICAL_AND A bitwise_OR_expression
        {
            intToBoolConversion($1);
            intToBoolConversion($4);
            $$ = new Expression();
            $$->type = "bool";
            backpatch($1->truelist, $3);
            $$->truelist = $4->truelist;
            $$->falselist = merge($1->falselist, $4->falselist);
        }
        ;

logical_or_expression: 
        logical_and_expression
        {
            $$ = $1;
        }
        | logical_or_expression LOGICAL_OR A logical_and_expression
        {
            intToBoolConversion($1);
            intToBoolConversion($4);
            $$ = new Expression();
            $$->type = "bool";
            backpatch($1->falselist, $3);
            $$->falselist = $4->falselist;
            $$->truelist = merge($1->truelist, $4->truelist);
        }
        ;

conditional_expression: 
        logical_or_expression
        {
            $$ = $1;
        }
        | logical_or_expression B QUESTION_MARK A expression B COLON A conditional_expression
        {   
            $$->STaddress = currentSymbolTable->gentemp($5->STaddress->symbolTableEntryType);
            $$->STaddress->update_symbol($5->STaddress->symbolTableEntryType);
            emit("=", $$->STaddress->name, $9->STaddress->name);
            list<int> l1 = makelist(nextinstr());
            emit("goto", "");
            backpatch($6->nextlist, nextinstr());
            emit("=", $$->STaddress->name, $5->STaddress->name);
            list<int> l2 = makelist(nextinstr());
            l1 = merge(l1, l2);
            emit("goto", "");
            backpatch($2->nextlist, nextinstr());
            intToBoolConversion($1);
            backpatch($1->truelist, $4);
            backpatch($1->falselist, $8);
            backpatch(l1, nextinstr());
        }
        ;

A: %empty
        {   
            $$ = nextinstr();
        }
        ;

B: %empty
        {
            $$ = new Statement();
            $$->nextlist = makelist(nextinstr());
            emit("goto", "");
        }
        ;

assignment_expression: 
        conditional_expression
        {
            $$ = $1;
        }
        | unary_expression assignment_operator assignment_expression
        {
            if($1->arrayType == "arr") {
                $3->STaddress = convertType($3->STaddress, $1->type->type);
                emit("[]=", $1->array->name, $1->STaddress->name, $3->STaddress->name);
            }
            else if($1->arrayType == "ptr") {
                emit("*=", $1->array->name, $3->STaddress->name);
            }
            else {
                $3->STaddress = convertType($3->STaddress, $1->array->symbolTableEntryType->type);
                emit("=", $1->array->name, $3->STaddress->name);
            }
            $$ = $3;
        }
        ;

assignment_operator: 
        ASSIGN
        {}
        
        ;

expression: 
        assignment_expression
        {
            $$ = $1;
        }
        ;

declaration: 
        type_specifier init_declarator SEMICOLON
        {}
        ;
        

init_declarator: 
        declarator
        {
            $$ = $1;
        }
        | declarator ASSIGN initializer
        {   
            if($3->val != "") {
                $1->val = $3->val;
            }
            emit("=", $1->name, $3->name);
        }
        ;

type_specifier: 
        VOID
        {
            prevType = "void";
        }
        | CHAR
        {
            prevType = "char";
        }
        | INT
        {
            prevType = "int";
        }
        |FLOAT
        {
            prevType = "float";
        }
        ;


declarator: 
        pointer direct_declarator
        {
            symbolTableData* t = $1;
            while(t->arrElementType != NULL) {
                t = t->arrElementType;
            }
            t->arrElementType = $2->symbolTableEntryType;
            $$ = $2->update_symbol($1);
        }
        | direct_declarator
        {}
        ;

intermediate_identifier:
        IDENTIFIER
        {
            $$ = $1->update_symbol(new symbolTableData(prevType));
            currentSymbol = $$;
        }
        ;

direct_declarator: 
        IDENTIFIER
        {
            $$ = $1->update_symbol(new symbolTableData(prevType));
            currentSymbol = $$;
        }
        | IDENTIFIER LEFT_SQUARE_BRACKET INTEGER_CONSTANT RIGHT_SQUARE_BRACKET
        {
            symbolTableData* t = $1->symbolTableEntryType;
            symbolTableData* prev = NULL;
            while(t->type == "arr") {
                prev = t;
                t = t->arrElementType;
            }
            if(prev == NULL) {
                int temp = $3;
                symbolTableData* tp = new symbolTableData("arr", $1->symbolTableEntryType, temp);
                $$ = $1->update_symbol(tp);
            }
            else {
                int temp = $3;
                prev->arrElementType = new symbolTableData("arr", t, temp);
                $$ = $1->update_symbol($1->symbolTableEntryType);
            }
        }
        | intermediate_identifier LEFT_PARENTHESIS replaceActiveSymbolTableParse parameter_list RIGHT_PARENTHESIS
        {
            currentSymbolTable->name = $1->name;
            if($1->symbolTableEntryType->type != "void") {
                symbolTableInit* s = currentSymbolTable->lookup("return");
                s->update_symbol($1->symbolTableEntryType);
            }
            $1->nestedTable = currentSymbolTable;
            currentSymbolTable->parent = globalSymbolTable;
            replaceActiveSymbolTable(globalSymbolTable);
            currentSymbol = $$;
        }
        | intermediate_identifier LEFT_PARENTHESIS replaceActiveSymbolTableParse RIGHT_PARENTHESIS
        {
            currentSymbolTable->name = $1->name;
            if($1->symbolTableEntryType->type != "void") {
                symbolTableInit* s = currentSymbolTable->lookup("return");
                s->update_symbol($1->symbolTableEntryType);
            }
            $1->nestedTable = currentSymbolTable;
            currentSymbolTable->parent = globalSymbolTable;
            replaceActiveSymbolTable(globalSymbolTable);
            currentSymbol = $$;
        }
        ;

pointer: 
        MULTIPLICATION 
        {
            $$ = new symbolTableData("ptr");
        }
        ;

parameter_list: 
        parameter_declaration
        {}
        | parameter_list COMMA parameter_declaration
        {}
        ;

intermediate_declarator: 
        pointer intermediate_identifier
        {
            symbolTableData* t = $1;
            while(t->arrElementType != NULL) {
                t = t->arrElementType;
            }
            t->arrElementType = $2->symbolTableEntryType;
            $$ = $2->update_symbol($1);
        }
        | intermediate_identifier
        {}
        ;

parameter_declaration: 
        type_specifier intermediate_declarator
        {}
        | type_specifier
        {}
        ;

initializer: 
        assignment_expression
        {
            $$ = $1->STaddress;
        }
        ;

statement: 
        compound_statement
        {
            $$ = $1;
        }
        | expression_statement
        {
            $$ = new Statement();
            $$->nextlist = $1->nextlist;
        }
        | selection_statement
        {
            $$ = $1;
        }
        | iteration_statement
        {
            $$ = $1;
        }
        | jump_statement
        {
            $$ = $1;
        }
        ;

compound_statement: 
        BEG NESTPARSER replaceActiveSymbolTableParse block_item_list_opt END
        {
            $$ = $4;
            replaceActiveSymbolTable(currentSymbolTable->parent);
        }
        ;


block_item_list: 
        block_item
        {
            $$ = $1;
        }
        | block_item_list A block_item
        {
            $$ = $3;
            backpatch($1->nextlist, $2);
        }
        ;

block_item: 
        declaration
        {
            $$ = new Statement();
        }
        | statement
        {
            $$ = $1;
        }
        ;

expression_statement: 
        expression SEMICOLON
        {
            $$ = $1;
        }
        | SEMICOLON
        {
            $$ = new Expression();
        }
        ;

selection_statement: 
        IF LEFT_PARENTHESIS expression B RIGHT_PARENTHESIS A statement B %prec THEN
        {
            backpatch($4->nextlist, nextinstr());
            intToBoolConversion($3);
            $$ = new Statement();
            backpatch($3->truelist, $6);
            list<int> temp = merge($3->falselist, $7->nextlist);
            $$->nextlist = merge($8->nextlist, temp);
        }
        | IF LEFT_PARENTHESIS expression B RIGHT_PARENTHESIS A statement B ELSE A statement
        {
            backpatch($4->nextlist, nextinstr());
            intToBoolConversion($3);
            $$ = new Statement();
            backpatch($3->truelist, $6);
            backpatch($3->falselist, $10);
            list<int> temp = merge($7->nextlist, $8->nextlist);
            $$->nextlist = merge($11->nextlist, temp);
        }
        ;

iteration_statement: 
        FOR F LEFT_PARENTHESIS NESTPARSER replaceActiveSymbolTableParse expression_statement A expression_statement A expression B RIGHT_PARENTHESIS A statement
        {
            $$ = new Statement();
            intToBoolConversion($8);
            backpatch($8->truelist, $13);
            backpatch($11->nextlist, $7);
            backpatch($14->nextlist, $9);
            emit("goto", to_string($9));
            $$->nextlist = $8->falselist;
            currentBlock = "";
            replaceActiveSymbolTable(currentSymbolTable->parent);
        }
        | WHILE W LEFT_PARENTHESIS A expression B RIGHT_PARENTHESIS A statement
        {
            $$ = new Statement();
            intToBoolConversion($5);
            backpatch($5->truelist, $8);
            backpatch($9->nextlist, $4);
            emit("goto", to_string($4));
            $$->nextlist = $5->falselist;
            currentBlock = "";
        }
        | DO D A statement WHILE LEFT_PARENTHESIS A expression B RIGHT_PARENTHESIS SEMICOLON
        {
            $$ = new Statement();
            intToBoolConversion($8);
            backpatch($4->nextlist, $7);    // After loop body execution, evaluate condition
            backpatch($8->truelist, $3);    // If condition is true, go back to beginning of loop
            $$->nextlist = $8->falselist;   // If condition is false, exit loop
            currentBlock = "";
        }
        ;

F: %empty
        {   
            currentBlock = "FOR";
        }
        ;

W: %empty
        {   
            currentBlock = "WHILE";
        }
        ;

D: %empty
        {   
            currentBlock = "DO";
        }
        ;


NESTPARSER: %empty
        {   
            string newST = currentSymbolTable->name + "." + currentBlock + "$" + to_string(symbolTableCounter++);
            symbolTableInit* sym = currentSymbolTable->lookup(newST);
            sym->nestedTable = new SymbolTable(newST);
            sym->name = newST;
            sym->nestedTable->parent = currentSymbolTable;
            sym->symbolTableEntryType = new symbolTableData("block");
            currentSymbol = sym;
        }
        ;

replaceActiveSymbolTableParse: %empty
        {   
            if(currentSymbol->nestedTable != NULL) {
                replaceActiveSymbolTable(currentSymbol->nestedTable);
                emit("label", currentSymbolTable->name);
            }
            else {
                replaceActiveSymbolTable(new SymbolTable(""));
            }
        }
        ;

jump_statement: 
        RETURN expression SEMICOLON
        {
            $$ = new Statement();
            emit("return", $2->STaddress->name);
        }
        | RETURN SEMICOLON
        {
            $$ = new Statement();
            emit("return", "");
        }
        ;

translation_unit: 
        external_declaration
        {}
        | translation_unit external_declaration
        {}
        ;

external_declaration: 
        function_definition
        {}
        | declaration
        {}
        ;

function_definition: 
        type_specifier declarator declaration_list_opt replaceActiveSymbolTableParse BEG block_item_list_opt END
        {   

            currentSymbolTable->parent = globalSymbolTable;
            symbolTableCounter = 0;
            replaceActiveSymbolTable(globalSymbolTable);
        }
        ;


declaration_list: 
        declaration
        {}
        | declaration_list declaration
        {}
        ;


argument_expression_list_opt: 
    argument_expression_list
    {
        $$ = $1;
    }
    | %empty
    {
        $$ = 0;
    }
    ;

block_item_list_opt: 
        block_item_list
        {
            $$ = $1;
        }
        | %empty
        {
            $$ = new Statement();
        }
        ;
declaration_list_opt: 
        declaration_list
        {}
        | %empty
        {}
        ;


%%

void yyerror(string s) {
    cout << "ERROR -> " << s << endl;
    cout << "Can't Parse -> " << yytext << " <--" << endl; 
}
