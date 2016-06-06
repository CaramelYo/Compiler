%{
#include "define.h"
%}

%%

"int"			return INT;
"char"			return CHAR;
"return"		return RETURN;
"if"			return IF;
"else"			return ELSE;
"while"			return WHILE;
"break"			return BREAK;
"print"			return PRINT;
"read"			return READ;

"=="			return EQUAL;
"!="			return NOTEQUAL;
"<="			return LESSEQUAL;
">="			return GREATEQUAL;
"//"			return DOUBLESLASH;

"&&"			return AND;
"||"			return OR;

"="			return ASSIGN;
"!"			return EXCLAMATION;
"+"			return ADD;
"-"			return SUBTRACT;
"*"			return MULTIPLY;
"/"			return SLASH;
"<"			return LESS;
">"			return GREAT;
"["			return LBRACKET;
"]"			return RBRACKET;
"("			return LPARENTHESIS;
")"			return RPARENTHESIS;
"{"			return LBRACE;
"}"			return RBRACE;
";"			return SEMICOLON;
","			return COMMA;

id[A-Z][a-z]*		return IDENTIFIER;
[1-9][0-9]*		return NUMBER;
[0-9]			return NUMBER;
\"[a-zA-z0-9]+\"	return CHARV; 

[ \t\n]			;
.			printf("unexpected character\n");

%%
int yywrap(void)
{
	return 1;
}


