/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 30 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* myparser.h
* C++ header file generated from myparser.y.
* 
* Date: 04/23/17
* Time: 23:41:55
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yycpars.h>

/////////////////////////////////////////////////////////////////////////////
// myparser

#ifndef YYEXPPARSER
#define YYEXPPARSER
#endif

class YYEXPPARSER YYFAR myparser : public _YL yyfparser {
public:
	myparser();
	virtual ~myparser();

protected:
	void yytables();
	virtual void yyaction(int action);
#ifdef YYDEBUG
	void YYFAR* yyattribute1(int index) const;
	void yyinitdebug(void YYFAR** p, int count) const;
#endif

	// attribute functions
	virtual void yystacktoval(int index);
	virtual void yyvaltostack(int index);
	virtual void yylvaltoval();
	virtual void yyvaltolval();
	virtual void yylvaltostack(int index);

	virtual void YYFAR* yynewattribute(int count);
	virtual void yydeleteattribute(void YYFAR* attribute);
	virtual void yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count);

public:
#line 58 ".\\myparser.y"

	string VarParameterTrans(string input, string inputType);
	string ParameterTrans(string input, string inputType);	
	string readToScanf(string input);
	string writeToPrintf(string input);
	string declarationTrans(string inputName,string inputType);	
	string structBodyTrans(string inputName, string type);
	string checkParaQuote(string name);
	string checkFunction(string name, string paraTypeList);
	string checkSymbolTable_quote(string name);
	string IntToChar(string num);
	
	void addtoConstTable(string cname, string ctype, string cvalue);	
	void addtoSymboltable(string name, string type);
	void addtoSymboltable(string name, string type, string para, string retType);
	void addtoSymboltable(string name, string type, int dimension, int low[], int up[]);
	void addtoTypeTable(string oldType, string newType);
	void yyerror(const char *str);
	void yywarning(const char *str);
	
	bool checkSymbolTable_declare(string name);	
	bool checkSymbolTable_func(string name);
	string checkTypeTable(string name);	
	//4.13gai
	bool checkReturn(string name,string type);
	int commaSplit(string input, string(&array)[20]);//commaSplit(feedback, s);	
	int semiSplit(string input, string(&array)[20]);
	string checkarraylimit(string name,string bound);
	string paraCallTrans(string funcname, string para);

#line 96 "myparser.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME myparser
#endif

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
#endif
