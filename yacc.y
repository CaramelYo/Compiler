%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "struct.h"
	#define BSIZE 4096

	void yyerror(char *s);
	int yylex(void);
	FILE *yyin;

	char* gettemp(char* v);
	char* getsave(char* v);
	char* getcons(int v);
	void getid(const char* v, char* p);
	char idmain[20];
	char ins[BSIZE][300];
	void cal(const struct Arithmetic *ar);
	int label, insid, para;
	int usedtemp[8], usedstemp[2], usedsave[8];

	struct Storage temp[8], save[8];
	struct Constant cons[8];
	struct Arithmetic ar;

	FILE *f;
%}

%union { int num; char ch; char* chs; float f; double d; }

%start Program

%token <chs> ID CHARV
%token <num> NUMBER
%token <num>INT CHAR RETURN BREAK IF ELSE WHILE PRINT READ
%token LBRACKET RBRACKET LPARENTHESIS RPARENTHESIS LBRACE RBRACE
%token SEMICOLON COMMA
%token <ch> EQUAL NOTEQUAL LESSEQUAL GREATEQUAL DOUBLESLASH AND OR
%token <ch> '+' '-' '*' '/' '<' '>' '!' '(' ')' '{' '}' '[' ']'

%type <chs> Program DeclList DeclListA Decl VarDecl VarDeclA FunDecl
%type <chs> VarDeclList ParamDeclList ParamDeclListTail ParamDeclListTailA
%type <chs> ParamDecl ParamDeclA Block StmtList StmtListA Stmt
%type <chs> Expr ExprIdTail ExprArrayTail ExprA ExprList
%type <chs> ExprListTail ExprListTailA
%type <num> Type

%type <ch> UnaryOp BinOp

%%

Program		: DeclList 
			{
				printf("file write\n");
				
				int i;
				for(i = 0; i<insid; ++i)
				{
						printf("%s", ins[i]);
					if(ins[i][0] != ')' && ins[i][0] != 'E' && ins[i][0] != 'W' && ins[i][0] != 'F')
					{
						fprintf(f, "%s", ins[i]);
					}
				}

				printf("file close\n");
				fclose(f);
			}
		;

DeclList	: DeclListA DeclList
		| 
		;

DeclListA	: Type ID Decl
			{
				char id[20];
				int i, j, boolean;

				getid($2, id);

				for(i = 0; i<20; ++i)
				{
					//to compare
					//printf("id = %c main = %c\n", id[i], main[i]);
					if(id[i] != idmain[i])
						break;
				}

				if( i == 20 )
					boolean = 1;
				else
					boolean = 0;

				printf("del ID = %s Decl = %s boolean = %d\n", id, $3, boolean);
				//if( id != "idMain" && $3 == "F" )
				if( !boolean  && $3 == "F" )
				{
					//function
					printf("function\n");
					i = insid -1;

					while( ins[i][0] != 'F' )
					{
						for(j = 0; j < 300; ++j)
						{
							if(ins[i][j] == '$' && ins[i][j+1] == 's')
							{
								//found
								ins[i][j+1] = 't';

								//to free save
								usedsave[ (ins[i][j+2] - 48) ] = 0;
								save[ (ins[i][j+2] - 48) ].used = 0;
							}
							if(ins[i][j] == '\0')
							{
								break;
							}
						}
						--i;
					}

					switch(para)
					{
						case 0:
							sprintf(ins[i], "%s:\n", id);
							break;
						case 1:
							sprintf(ins[i], "%s:\n\tmove $t0, $a0\n", id);
							break;
						case 2:
							sprintf(ins[i], "%s:\n\tmove $t0, $a0\n\tmove $t1, $a1\n", id);
							break;
						case 3:
							sprintf(ins[i], "%s:\n\tmove $t0, $a0\n\tmove $t1, $a1\n\tmove $t2, $a2\n", id);
							break;
					}
					sprintf(ins[insid++], "F");
				}

				if(boolean)
				{
					//main function
					/*
					int i = insid -1, j;

					while( i >= 0)
					{
						for(j = 0; j<300; ++j)
						{
							if(ins[i][j] == '$' && ins[i][j+1] == 'r' && ins[i][j+2] == 'a')
							{
								sprintf(ins[i], "\tli $v0, 10\n\tsyscall\n");
								break;
							}
						}
					}
					*/

					i = insid - 1;
					while(ins[i][0] != 'F')
						--i;
					sprintf(ins[i], "main:\n");

					sprintf(ins[insid-1], "\tli $v0, 10\n\tsyscall\n");
				}
			}
		;

Decl		: VarDeclA {$$ = "V";}
		| FunDecl {$$ = "F";}
		;

VarDecl		: Type ID VarDeclA
			{
				//declaration
				printf("declaration\n");
			}
		;

VarDeclA	: ';' {}
		| '[' NUMBER ']' {}
		;

FunDecl		: '(' ParamDeclList ')' Block {}
		;

VarDeclList	: VarDecl VarDeclList
		| 
		;

ParamDeclList	: ParamDeclListTail
		| { para = 0; }
		;

ParamDeclListTail	: ParamDecl ParamDeclListTailA
				{
					if($2 == "")
					{
						//single
						para = 1;
					}
					else
					{
						++para;
					}

					char p[20];
					int i, j;

					for(i = 0; i<20; ++i)
						p[i] = '\0';

					for( i = 0; i< 20; ++i)
					{
						if($1[i] == 'i' && $1[i+1] == 'd')
						{
							//found
							for(j = 0; j<20; ++i, ++j)
							{
								if( ($1[i] >= 65 && $1[i] <=90) || ($1[i] >=97 && $1[i] <= 122) )
								{
									p[j] = $1[i];
								}
								else
								{
									i = 20;
									break;
								}
							}
						}
					}

					getsave(p);
					printf("$1 = %s, temp = %s p = %s\n", $1, getsave(p), p);
				}
			;

ParamDeclListTailA	: ',' ParamDeclListTail {}
			| {$$ = "";}
			;

ParamDecl	: Type ID ParamDeclA 
			{
				/*
				getsave($2);
				printf("$2 = %s, temp = %s\n", $2, getsave($2));
				*/
				printf("Pid = %s\n", $2);
				$$ = $2;
			}
		;

ParamDeclA	: '[' ']' {}
		| 
		;

Block		: '{' VarDeclList StmtList '}' 
			{ 
				$$ = $3;
			}
		;

Type		: INT
		| CHAR
		;

StmtList	: Stmt StmtListA
		;

StmtListA	: StmtList
		| 
		;

Stmt		: ';' {}
		| Expr ';' 
		| RETURN Expr ';' 
			{
				sprintf(ins[insid++], "\tmove $v0, %s\n\tjr $ra\n", getsave($2));
			}
		| BREAK ';' {}
		| IF '(' Expr ')' Stmt ELSE Stmt
			{
				//to find the scope
				int i, length1, length2;
				for(i = insid - 1; i>-1; --i)
				{
					if(ins[i][0] == 'E')
					{
						//else
						length2 = i;
					}
					if(ins[i][0] == ')')
					{
						//condi
						length1 = i;
						break;
					}
				}

				if($3 == "Atemp")
				{
					sprintf(ins[length1], "\tbeq %s, $0, else%d\n", getsave("Atemp"), label);
				}
				else
				{
					sprintf(ins[length1], "\tbeq %s, $0, else%d\n", ar.op2, label);
				}

				sprintf(ins[length2], "\tb endif%d\nelse%d:\n", label, label);
				sprintf(ins[insid++], "endif%d:\n", label++);
			}
		| WHILE '(' Expr ')' Stmt 
			{
				//to find the scope
				int i, length1, length2;
				for(i = insid - 1; i>-1; --i)
				{
					if(ins[i][0] == ')')
					{
						//condi
						length2 = i;
					}
					if(ins[i][0] == 'W')
					{
						//while
						length1 = i;
						break;
					}
				}

				sprintf(ins[length1], "while%d:\n", label);

				if($3 == "Atemp")
				{
					sprintf(ins[length2], "\tbeq %s, $0, endwhile%d\n", getsave("Atemp"), label);
				}
				else
				{
					sprintf(ins[length2], "\tbeq %s, $0, endwhile%d\n", ar.op2, label);
				}

				sprintf(ins[insid++], "\tb while%d\nendwhile%d:\n", label, label);
				++label;
			}
		| Block 
		| PRINT ID ';' 
			{
				printf("print ID %s\n", $2);
				sprintf(ins[insid++], "\tmove $a0, %s\n\tli $v0, 1\n\tsyscall\n", getsave($2));
			}
		| READ ID ';' 
			{
				printf("read ID %s\n", $2);

				sprintf(ins[insid++], "\tli $v0, 5\n\tsyscall\n\tmove %s, $v0\n", getsave($2));
			}
		;

Expr		: UnaryOp Expr
			{
				$$ = "Atemp";

				switch($1)
				{
					case '-':
						printf("minus\n");

						if($2 == "Atemp")
						{
							sprintf(ins[insid++], "\tneg %s, %s\n", getsave("Atemp"), getsave("Atemp"));
						}
						else
						{
							sprintf(ins[insid++], "\tneg %s, %s\n", getsave("Atemp"), ar.op2);
						}
						break;

					case '!':
						printf("!\n");

						if($2 == "Atemp")
						{
							sprintf(ins[insid++], "\tbeq, %s, $0, zero%d\n\tmove %s, $0\n\tb endzero%d\nzero%d:\n\tmove %s, 1\nendzero%d:\n", getsave("Atemp"), label, getsave("Atemp"), label, label, getsave("Atemp"), label);
						}
						else
						{
							sprintf(ins[insid++], "\tbeq, %s, $0, zero%d\n\tmove %s, $0\n\tb endzero%d\nzero%d:\n\tmove %s, 1\nendzero%d:\n", ar.op2, label, getsave("Atemp"), label, label, getsave("Atemp"), label);
						}

						++label;
						break;
					default:
						fprintf(stderr, "UnaryOp Error!\n");
						return;
				}
			}
		| NUMBER ExprA 
			{
				if($2 == "")
				{
					//last
					sprintf(ar.op2, "%s", getcons($1));
					$$ = getcons($1);
				}
				else
				{
					sprintf(ar.op1, "%s", getcons($1));
					$$ = "Atemp";
					cal(&ar);
				}
			}
		| '(' Expr ')' ExprA 
			{
				sprintf(ar.op1, "%s", getsave($2));
				$$ = "Atemp";

				if($4 != "")
				{
					cal(&ar);
				}
				
			}
		| ID ExprIdTail 
			{
				if($2[0] == 'F')
				{
					//function call
					char f[20];
					getid($1, f);

					sprintf(ins[insid++], "\tjal %s\n\tmove %s, $v0\n", f, getsave("Atemp"));
					$1 = "Atemp";
				}

				if($2 == "")
				{
					//single value
					sprintf(ar.op2, "%s", getsave($1));
				}
				else if($2 == "F0")
				{
					sprintf(ar.op2, "%s", getsave($1));
					printf("F0 : %s\n", $1);
					$$ = $1;
				}
				else if (ar.op == '=' && ($2[0] >= 48 && $2[0] <= 57))
				{
					sprintf(ins[insid++], "\tli %s, %s\n", getsave($1), $2);
				}
				else if(ar.op == '=' || $2 == "Atemp")
				{
					sprintf(ar.op1, "%s", getsave($1));
					sprintf(ar.op2, "%s", getsave($2));
					$$ = "Atemp";
					cal(&ar);
				}
				else if($2 == "FA")
				{
					sprintf(ar.op1, "%s", getsave($1));
					$$ = "Atemp";
					cal(&ar);
				}
				else
				{
					sprintf(ar.op1, "%s", getsave($1));
					$$ = "Atemp";
					cal(&ar);
				}
			}
		;

ExprIdTail	: ExprA
		| '(' ExprList ')' ExprA
			{
				//function call
				if($4 != "")
				{
					$$ = "FA";
				}
				else
				{
					$$ = "F0";
				}
			}
		| '[' Expr ']' ExprArrayTail {}
		| '=' Expr { ar.op = '='; $$ = $2;}
		;

ExprArrayTail	: ExprA
		| '=' Expr {}
		;

ExprA		: BinOp Expr
			{
				printf("%c!\n", $1);
				if($1 != '\0')
					ar.op = $1;
				$$ = $2;
			}
		| {$$ = "";} 
		;

ExprList	: ExprListTail
		| 
		;

ExprListTail	: Expr ExprListTailA
			{
				if($2 == "")
				{
					//single
					para = 0;
				}

				printf("list $1 = %s\n", $1);

				if($1[0] >= 48 && $1[1] <= 57)
				{
					//number only
					sprintf(ins[insid++], "\tli $a%d, %s\n", para++, $1);
				}
				else if($1 == "Atemp")
				{
					sprintf(ins[insid++], "\tmove $a%d, %s\n", para++, getsave("Atemp"));
				}
				else
				{
					sprintf(ins[insid++], "\tmove $a%d, %s\n", para++, getsave($1));
				}
			}
		;

ExprListTailA	: ',' ExprListTail { }
		| { $$ = ""; }
		;

UnaryOp		: '-'
		| '!'
		;

BinOp		: '+'
		| '-'
		| '*'
		| '/'
		| EQUAL {$$ = '\0';}
		| NOTEQUAL {$$ = '\0';}
		| '<'
		| LESSEQUAL {$$ = '\0';}
		| '>'
		| GREATEQUAL {$$ = '\0';}
		| AND {$$ = '\0';}
		| OR {$$ = '\0';}

%%

int main (int argc, char** argv)
{
	//to read test.c
	yyin = fopen(argv[1], "r");
	if(!yyin)
	{
		fprintf(stderr, "yyin GG\n");
		return 0;
	}

	//to open the .s file
	f = fopen("Compiler.s", "w");
	if(!f)
	{
		fprintf(stderr, "Compiler.s GG\n");
		return 0;
	}

	//to init
	int i;
	for(i =0; i<8; ++i)
	{
		temp[i].used = 0;
		save[i].used = 0;
		usedtemp[i] = 0;
		usedsave[i] = 0;
		cons[i].value = -1;
	}
	usedstemp[0] = 0;
	usedstemp[1] = 0;


	label = 0;
	insid = 0;
	sprintf(ins[insid++], "F");
	sprintf(idmain, "idMain");

	printf("main start!\n");
	fprintf(f, "\t.text\n\t.globl main\n\n");

	do
	{
		yyparse();
	}
	while(!feof(yyin));

	return 0;
}

char* getsave(char* v)
{
	int i, j, length;

	i = 0;

	//to ensure it is a idXxxxx
	while( (v[i] >= 65 && v[i] <= 90) || (v[i] >= 97 && v[i] <= 122))
		++i;

	length = i;

	for(i = 0; i< 8; ++i)
	{
		if(save[i].used)
		{
			for(j = 0; j<length; ++j)
			{
				if(save[i].name[j] != v[j])
					break;
			}

			if(j == length)
			{
				//found
				return save[i].rg;
			}
		}
	}

	//not found
	printf("new a register ");
	for(i = 0; i<length; ++i)
		printf("%c", v[i]);
	printf("\n");

	for(i = 0; i<8; ++i)
	{
		if(!usedsave[i])
		{
			
			for(j = 0; j<8; ++j)
			{
				if(!save[j].used)
				{
					//not used
					usedsave[i] = 1;
					save[j].used = 1;

					sprintf(save[j].rg, "$s%d", i);
			
					for(j = 0; j<length; ++j)
					{
						save[i].name[j] = v[j];
					}
					return save[i].rg;
				}
			}
		}
	}

	//no register
	yyerror("no register");

	return "GG";
}


char* gettemp(char* v)
{
	int i, j, length;

	i = 0;

	//to ensure it is a idXxxxx
	while( (v[i] >= 65 && v[i] <= 90) || (v[i] >= 97 && v[i] <= 122))
		++i;

	length = i;

	for(i = 0; i< 8; ++i)
	{
		if(temp[i].used)
		{
			for(j = 0; j<length; ++j)
			{
				if(temp[i].name[j] != v[j])
					break;
			}

			if(j == length)
			{
				//found
				return temp[i].rg;
			}
		}
	}

	//not found
	printf("new a register ");
	for(i = 0; i<length; ++i)
		printf("%c", v[i]);
	printf("\n");

	for(i = 0; i<8; ++i)
	{
		if(!usedtemp[i])
		{
			
			for(j = 0; j<8; ++j)
			{
				if(!temp[j].used)
				{
					//not used
					usedtemp[i] = 1;
					temp[j].used = 1;

					sprintf(temp[j].rg, "$t%d", i);
			
					for(j = 0; j<length; ++j)
					{
						temp[i].name[j] = v[j];
					}
					printf("new over\n");
					return temp[i].rg;
				}
			}
		}
	}

	//no register
	yyerror("no register");

	return "GG";
}

char* getcons(int v)
{
	int i;
	for(i = 0; i<8; ++i)
	{
		if(cons[i].value == v)
		{
			//found
			return cons[i].tostring;
		}
	}

	//not found
	for(i = 0; i<8; ++i)
	{
		if(cons[i].value == -1)
		{
			//not used
			cons[i].value = v;
			sprintf(cons[i].tostring, "%d", v);
			return cons[i].tostring;
		}
	}

	//cannot create
	yyerror("no Constants");
	return "GG";
}

void getid(const char* v, char* id)
{
	int i, j;

	for(i = 0; i<20; ++i)
	{
		if( (v[i] >= 65 && v[i] <=90) || (v[i] >= 97 && v[i] <= 122) )
		{
			id[i] = v[i];
		}
		else
		{
			for(; i< 20; ++i)
			{
				id[i] = '\0';
			}
		}
	}
}

void cal(const struct Arithmetic *ar)
{
	switch(ar->op)
	{
		case '+':
			sprintf(ins[insid++], "\tadd ");
			break;
		case '-':
			sprintf(ins[insid++], "\tsub ");
			break;
		case '*':
			sprintf(ins[insid++], "\tmul ");
			break;
		case '/':
			sprintf(ins[insid++], "\tdiv ");
			break;
		case '<':
			sprintf(ins[insid++], "\tslt ");
			break;
		case '>':
			sprintf(ins[insid++], "\tsgt ");
			break;
		case 'e':
			sprintf(ins[insid++], "\tseq ");
			break;
		case 'n':
			sprintf(ins[insid++], "\tsne ");
			break;
		case 'l':
			sprintf(ins[insid++], "\tsle ");
			break;
		case 'g':
			sprintf(ins[insid++], "\tsge ");
			break;
		case 'a':
			sprintf(ins[insid++], "\tand ");
			break;
		case 'o':
			sprintf(ins[insid++], "\tor ");
		case '=':
			sprintf(ins[insid++], "\tmove %s, %s\n", ar->op1, ar->op2);
			return;
		default:
			return;
	}

	sprintf(ins[insid++], "%s, %s, %s\n", getsave("Atemp"), ar->op1, ar->op2);
}

void yyerror (char* s)
{
	fprintf(stderr, "%s\n", s);
}


