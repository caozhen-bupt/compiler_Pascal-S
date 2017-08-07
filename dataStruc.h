#include <vector>  
#include <iostream>  
#include <string>
#include <sstream>
#include <stdlib.h>


using namespace std; 

//结构体 
struct symbol
{
	string name;
	string type;
	int dimension;//init=1
	int lowbound[3];
	int upbound[3];
	
	int varLine;//声明行
	vector<int> quoteLine;//引用行

	struct symbol *next;//竖向
	struct tableHead *subTable;//每一个表项指向的子符号表头
	// struct parameters *paraList;//函数的参数链表
	string returnType;//函数的返回值类型
};
struct tableHead
{
	string name;	//函数名
	struct symbol *tableElement;//指向符号表表项的指针
	struct tableHead *preTable;//指向上一级符号表表头
	struct parameters *paraList;//函数的参数链表
};

struct parameters
{
	string name;
	string type;
	struct parameters *next;
};

struct constElement{
	string name;
	string type;
	string value;
};
struct structElement{
	string type;
	string name;//以加号分割 
};

struct typedefElement{
	string realType;
	string typeName; 
};

struct list
{
	string name;
	string type;
	struct list* next;
};
typedef struct list List;
class Data {

public:
	string value;
	string type;
	Data()
	{
		value = "";
		type = "";
	}
};

//全局变量



#define PROGRAM 1
#define FUNCTION 2
#define PROCEDURE 3
#define INTEGER 4
#define REAL 5
#define BOOLEAN 6
#define ARRAY 7
#define RECORD 8
#define VAR 9
#define BEGIN 10
#define END 11
#define OF 12
#define IF 13
#define THEN 14
#define ELSE 15
#define WHILE 16
#define DO 17
#define NOT 18
#define TRUE 19
#define FALSE 20
#define READ 21
#define WRITE 22
#define COMMA 37
#define SEMICOLON 38
#define DEFINE 39
#define LEFTCUBE 40
#define RIGHTCUBE 41
#define LEFTCIRCLE 42
#define RIGHTCIRCLE 43
#define PROGRAMEND 45
#define NUM 46
#define DIGITS 47
#define ID 48
#define RELOP 49
#define ADDOP 50
#define MULOP 51
#define ASSIGNOP 52
#define FOR 53
#define TO 54
#define CONST 55
#define TYPE 56
#define QUOTE 57
#define LETTER 58
#define CHAR 59
#define ELLIPSIS 60
#define POINT 61
#define CASE 62
#define REPEAT 63
#define UNTIL 64
#define DOWNTO 65
#define AND 66
#define DIV 67
#define MOD 68
#define OR 69

