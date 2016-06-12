struct Storage
{
	char name[20], rg[10];
	int used;
	//int type;
};

struct Constant
{
	char tostring[10];
	int value;
};

struct Arithmetic
{
	char op;
	char op1[10], op2[10];
};
