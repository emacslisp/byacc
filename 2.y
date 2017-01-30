%{
#include <stdio.h>
#include <string.h>
extern FILE * yyin;

%}

%%
Estart:
Bexp
|Estart '+' Bexp
|Estart '*' Bexp

Bexp:
'0'|'1'
%%

int yywrap()
{

  return 1;
}

int main(void) {
  int yydebug = 1;
  yyin = fopen("test.txt","r"); 
  yyparse();
  fclose(yyin);
  return 0;
}
