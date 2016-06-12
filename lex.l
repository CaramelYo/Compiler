%{
	//#include "define.h"
	#include "y.tab.h"
	#include "struct.h"
	#define BSIZE 4096
	extern char ins[BSIZE][300];
	extern int insid;
	extern struct Arithmetic ar;
	int flow = 0;
%}

%%

"int"			return INT;
"char"			return CHAR;
"return"		return RETURN;
"if"			{++flow; return IF;}
"else"			{sprintf(ins[insid++], "E"); return ELSE;}
"while"			{++flow; sprintf(ins[insid++], "W"); return WHILE;}
"break"			return BREAK;
"print"			return PRINT;
"read"			return READ;

"=="			{ar.op = 'e'; return EQUAL;}
"!="			{ar.op = 'n'; return NOTEQUAL;}
"<="			{ar.op = 'l'; return LESSEQUAL;}
">="			{ar.op = 'g'; return GREATEQUAL;}
"//"			return DOUBLESLASH;

"&&"			{ar.op = 'a'; return AND;}
"||"			{ar.op = 'o'; return OR;}


[-=!+*/<>{}(),;]	{yylval.ch = yytext[0]; return yytext[0];}

"["			return yytext[0];
"]"			return yytext[0];

id[A-Z][a-z]*		{yylval.chs = yytext; return ID;}
[1-9][0-9]*		{yylval.num = atoi(yytext); return NUMBER;}
[0-9]			{yylval.num = atoi(yytext); return NUMBER;}

[ \t]			;
[\n]			{if(flow) {sprintf(ins[insid++], ")"); --flow;}}
.			printf("unexpected character %c\n", yytext[0]);

%%
int yywrap(void)
{
	return 1;
}


