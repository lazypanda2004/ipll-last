%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "220101048_translator.h"
    #include "y.tab.h"

%}

%option yylineno
%option noyywrap

IDENTIFIER                      [a-zA-Z_][a-zA-Z0-9_]*


NONZERO_DIGIT                   [1-9]
DIGIT                           [0-9]
SIGN                            [+-]


CONSTANT                        {INTEGER_CONSTANT}|{CHARACTER_CONSTANT}
INTEGER_CONSTANT                {DIGIT}|{NONZERO_DIGIT}{DIGIT}*

ESCAPE_SEQUENCE                 [\\][']|[\\]["]|[\\][?]|[\\][\\]|[\\][a]|[\\][b]|[\\][f]|[\\][n]|[\\][r]|[\\][t]|[\\][v]

C_CHAR                          [^'\n\\]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE                 {C_CHAR}+
CHARACTER_CONSTANT              [']{C_CHAR_SEQ}[']

S_CHAR                          [^"\n\\]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE                 {S_CHAR}+

STRING_LITERAL                  ["]{S_CHAR_SEQ}["]|["]["]
FLOAT_CONST             {DIGIT}+"."{DIGIT}+([eE][+-]?{DIGIT}+)?


WS                              [ \t\n]

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

%%

"char"                          {return CHAR;}
"else"                          {return ELSE;}
"for"                           {return FOR;}
"if"                            {return IF;}
"integer"                           {return INT;}
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
{CHARACTER_CONSTANT}                 { yylval.string_value = yytext; return CHARACTER_CONSTANT; }
{STRING_LITERAL}                { yylval.string_value = yytext; return STRING_LITERAL; }


{WS}                            {}
"\n"                            {}



%%