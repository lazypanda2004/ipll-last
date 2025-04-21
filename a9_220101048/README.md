Compiler Project: Symbol Table and Three-Address Code Generator
This project implements a translator that processes a source file and generates symbol tables and three-address code as intermediate representation. The translator is built using Flex (lexical analyzer) and Bison (parser generator).

Project Structure
The project consists of the following components:

Lexical Analyzer (220101048.l): Defines tokens and patterns for the language

Parser (220101048.y): Implements the grammar rules and semantic actions

Support Code (220101048.cc): Contains implementation of symbol table and code generation functions

Output Description
The output file contains two main sections:

Symbol Tables: A hierarchical representation of all identifiers and their properties
Global symbol table and nested symbol tables for functions and blocks
For each symbol, displays name, type, initial value, size, offset, and nested symbol table

Three-Address Code: The intermediate representation of the program
Each instruction has an operation, arguments, result, counter, and original code comment
Operations include arithmetic, logical, control flow, and function calls


Building and Running

Prerequisites
G++ compiler
Flex (Fast Lexical Analyzer)
Bison (Parser Generator)

Clean Build Files
To clean all generated files:

bash
make clean

Build Instructions
To build the translator:

bash
make build
To run the translator on a test file:

bash
make output
This will process testcase.nc and generate output.txt with symbol tables and three-address code.


Example Usage
Create a source file testcase.nc with your code

RUN :

make clean
make build 
make output


Examine output.txt to see the symbol tables and three-address code