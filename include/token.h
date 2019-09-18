#ifndef TOKEN_H
#define TOKEN_H

#include <string>

#include "tree_nodes.h"

#ifndef YYTOKENTYPE
#define YYTOKENTYPE
enum yytokentype
{
    ABS = 1,
    AND = 2,
    ATN = 3,
    BOOLEAN = 4,
    CHAR = 5,
    COMMA = 6,
    COMMENT = 7,
    COS = 8,
    DATA = 9,
    DEF = 10,
    DIFF = 11,
    DIM = 12,
    DIVIDE = 13,
    END = 14,
    ENDL = 15,
    EQUALS = 16,
    EXP = 17,
    EXPONENTIAL = 18,
    FLOAT = 19,
    FOR = 20,
    FUNCTION = 21,
    GOSUB = 22,
    GOTO = 23,
    GT = 24,
    GTE = 25,
    IF = 26,
    INPUT = 27,
    INT = 28,
    INTEGER = 29,
    LET = 30,
    LEXEOF = 31,
    LEXERROR = 32,
    LOG = 33,
    LPAREN = 34,
    LT = 35,
    LTE = 36,
    MINUS = 37,
    MOD = 38,
    NEXT = 39,
    NOT = 40,
    OR = 41,
    PLUS = 42,
    PRINT = 43,
    READ = 44,
    RETURN = 45,
    RND = 46,
    RPAREN = 47,
    SEMICOLON = 48,
    SIN = 49,
    SQR = 50,
    STEP = 51,
    STOP = 52,
    STRING = 53,
    TAN = 54,
    THEN = 55,
    TIMES = 56,
    TO = 57,
    VARIABLE = 58,
    WHITE = 59
};

#define ABS 1
#define AND 2
#define ATN 3
#define BOOLEAN 4
#define CHAR 5
#define COMMA 6
#define COMMENT 7
#define COS 8
#define DATA 9
#define DEF 10
#define DIFF 11
#define DIM 12
#define DIVIDE 13
#define END 14
#define ENDL 15
#define EQUALS 16
#define EXP 17
#define EXPONENTIAL 18
#define FLOAT 19
#define FOR 20
#define FUNCTION 21
#define GOSUB 22
#define GOTO 23
#define GT 24
#define GTE 25
#define IF 26
#define INPUT 27
#define INT 28
#define INTEGER 29
#define LET 30
#define LEXEOF 31
#define LEXERROR 32
#define LOG 33
#define LPAREN 34
#define LT 35
#define LTE 36
#define MINUS 37
#define MOD 38
#define NEXT 39
#define NOT 40
#define OR 41
#define PLUS 42
#define PRINT 43
#define READ 44
#define RETURN 45
#define RND 46
#define RPAREN 47
#define SEMICOLON 48
#define SIN 49
#define SQR 50
#define STEP 51
#define STOP 52
#define STRING 53
#define TAN 54
#define THEN 55
#define TIMES 56
#define TO 57
#define VARIABLE 58
#define WHITE 59

#endif

typedef union{
	ast::program* _program;
	ast::stmt* _stmt;
	ast::expr* _expr;
	ast::variable* _variable;
	std::string* _name;
	int _int;
} YYSTYPE;

extern YYSTYPE yylval;

int yyparse (void);

#endif
