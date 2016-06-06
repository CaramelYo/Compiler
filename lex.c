#include <stdio.h>
#include "define.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

int main(void)
{
	int ntoken, vtoken;
	
	while(ntoken = yylex())
	{
		printf("%d\n", ntoken);
		printf("YO");
	}
	return 0;
}
