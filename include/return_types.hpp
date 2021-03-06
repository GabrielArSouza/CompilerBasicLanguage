#ifndef RETURN_TYPES_H
#define RETURN_TYPES_H

#include <string>
#include <vector>

#include "tree_nodes.hpp"

typedef union{
	ast::program* _program;
	ast::stmt* _stmt;
	ast::expr* _expr;
	ast::variable* _variable;
	std::string* _name;
	std::vector<ast::expr*>* _num_list;
	std::vector<ast::variable*>* _var_list;
	std::vector<ast::print_expr>* _print_list;
	int _int;
	bool _bool;
} YYSTYPE;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);

#endif
