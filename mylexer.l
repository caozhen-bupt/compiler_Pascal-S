%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2017Äê3ÔÂ25ÈÕ
****************************************************************************/

#include <iostream>
#include <stdio.h>
#include <string>

#include "dataStruc.h"

#include "myparser.h"
using namespace std;

int linecount = 0;
bool hasError = false;
#ifndef YYSTYPE
#define YYSTYPE Data
#endif
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name mylexer

// class definition
{
	// place any extra class members here
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// place any declarations here

delim	[ \t\r]
ws		{delim}+
letter	[A-Za-z]
digit	[0-9]
digits	{digit}+
id		{letter}({letter}|{digit})*
num		{digits}(\.{digits})?(E[+\-]?{digits})?
chrlttr	[\']{letter}[\']
newline	[\n]

%%

/////////////////////////////////////////////////////////////////////////////
// rules section
%{
	// extract yylval.value for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
%}
// place your Lex rules here
[aA][nN][dD]						{//	cout<<"AND"<<endl;
										yylval.value = yytext;
										return(MULOP);
									}
[aA][rR][rR][aA][yY]				{//	cout<<"ARRAY"<<endl;
										return(ARRAY);
									}
[bB][eE][gG][iI][nN]				{//	cout<<"BEGIN"<<endl;
										return(BEGIN);
									}
[bB][oO][oO][lL][eE][aA][nN]		{//	cout<<"BOOLEAN"<<endl;
										return(BOOLEAN);
									}
[cC][aA][sS][eE]					{//	cout<<"CASE"<<endl;
										return(CASE);
									}
[cC][hH][aA][rR]					{//	cout<<"CHAR"<<endl;
										return (CHAR);
									}
[cC][oO][nN][sS][tT]				{//	cout<<"CONST"<<endl;
										return(CONST);
									}
[dD][iI][vV]						{//	cout<<"DIV"<<endl;
										yylval.value = yytext;
										return(MULOP);
									}
[dD][oO]							{//	cout<<"DO"<<endl;
										return(DO);
									}
[dD][oO][wW][nN][tT][oO]			{//	cout<<"DOWNTO"<<endl;
										return(DOWNTO);
									}
[eE][lL][sS][eE]					{//	cout<<"ELSE"<<endl;
										return(ELSE);
									}
[eE][nN][dD]						{//	cout<<"END"<<endl;
										return(END);
									}
[fF][aA][lL][sS][eE]				{
										return(FALSE);
									}
[fF][oO][rR]						{//	cout<<"FOR"<<endl;
										return(FOR);
									}
[fF][uU][nN][cC][tT][iI][oO][nN]	{//	cout<<"FUNCTION"<<endl;
										return(FUNCTION);
									}
[iI][fF]							{//	cout<<"IF"<<endl;
										return(IF);
									}
[iI][nN][tT][eE][gG][eE][rR]		{//	cout<<"INTEGER"<<endl;
										return(INTEGER);
									}
[mM][oO][dD]						{//	cout<<"MOD"<<endl;
										yylval.value = yytext;
										return(MULOP);
									}
[nN][oO][tT]						{//	cout<<"NOT"<<endl;
										return(NOT);
									}
[oO][fF]							{//	cout<<"OF"<<endl;
										return(OF);
									}
[oO][rR]							{//	cout<<"OR"<<endl;
										yylval.value = yytext;
										return(ADDOP);
									}
[pP][rR][oO][cC][eE][dD][uU][rR][eE] {//	cout<<"PROCEDURE"<<endl;
										return(PROCEDURE);
									}
[pP][rR][oO][gG][rR][aA][mM]		{	//cout<<"PROGRAM"<<endl;
										return(PROGRAM);
									}
[rR][eE][aA][dD]					{
										return(READ);
									}
[rR][eE][aA][lL]					{//	cout<<"REAL"<<endl;
										return(REAL);
									}
[rR][eE][cC][oO][rR][dD]			{//	cout<<"RECORD"<<endl;
										return(RECORD);
									}
[rR][eE][pP][eE][aA][tT]			{//	cout<<"REPEAT"<<endl;
										return(REPEAT);
									}
[tT][hH][eE][nN]					{//	cout<<"THEN"<<endl;
										return(THEN);
									}
[tT][oO]							{//	cout<<"TO"<<endl;
										return(TO);
									}
[tT][rR][uU][eE]					{
										return(TRUE);
									}
[tT][yY][pP][eE]					{//	cout<<"TYPE"<<endl;
										return(TYPE);
									}
[uU][nN][tT][iI][lL]				{//	cout<<"UNTIL"<<endl;
										return(UNTIL);
									}
[vV][aA][rR]						{//	cout<<"VAR"<<endl;
										return(VAR);
									}
[wW][hH][iI][lL][eE]				{//	cout<<"WHILE"<<endl;
										return(WHILE);
									}
[wW][rR][iI][tT][eE]				{
										return(WRITE);
									}

"="									{yylval.value = yytext;return (RELOP);}
"<>"								{yylval.value = yytext;return (RELOP);}
"<"									{yylval.value = yytext;return (RELOP);}
">"									{yylval.value = yytext;return (RELOP);}
"<="								{yylval.value = yytext;return (RELOP);}
">="								{yylval.value = yytext;return (RELOP);}

"+"									{yylval.value = yytext;return (ADDOP);}
"-"									{yylval.value = yytext;return (ADDOP);}

"*"									{yylval.value = yytext;return (MULOP);}
"/"									{yylval.value = yytext;return (MULOP);}

":="								{yylval.value = yytext;return (ASSIGNOP);}								

","									{yylval.value = yytext;return (COMMA);}
";"									{yylval.value = yytext;return (SEMICOLON);}
":"									{yylval.value = yytext;return (DEFINE);}
"."									{yylval.value = yytext;return (POINT);}
".."								{yylval.value = yytext;return (ELLIPSIS);}
\¡®									 {yylval.value = yytext;return (QUOTE);}
"["									{yylval.value = yytext;return (LEFTCUBE);}
"]"									{yylval.value = yytext;return (RIGHTCUBE);}
"("									{yylval.value = yytext;return (LEFTCIRCLE);}
")"									{yylval.value = yytext;return (RIGHTCIRCLE);}



{ws}								{}
{id}								{yylval.value = yytext;return(ID);}
{digits}							{yylval.value = yytext;return(DIGITS);}
{num}								{yylval.value = yytext;return(NUM);}	
{newline}							{linecount++;}	
{chrlttr}							{yylval.value = yytext;return(LETTER);}

"{"									{
										char c = input();
										int linetemp = linecount;
										while(c != '}' && c != EOF)
										{
											if(c == '\n') linecount++;
											c = input();
										}
										if(c == EOF){
											cout<<"Lexical Error at line number = "<< linetemp + 1 << ":expected statement at end of input!"<<endl;
										}
									}

"(*"								{
										//cout<<"(*"<<endl;
										char c = input();
										int state = 2;
										int linetemp = linecount;
										while(state != 4 && c!= EOF)
										{
											switch(state)
											{
											case 2:
												if(c == '*')
												{
													state = 3;
												}
												else if(c == '\n')
												{
													linecount++;
												}
												else
												{
													state = 2;
												}
												break;
											case 3:
												if(c == '*')
												{
													state = 3;
												}
												else if(c == ')')
												{
													state = 4;
												}
												else if(c == '\n')
												{
													linecount++;
												}
												else
												{
													state = 2;
												}
												break;
											default:
												break;
											}
											c = input();
										}
										if(c == EOF){
											cout<<"Lexical Error at line number = "<< linetemp + 1 << ":expected statement at end of input!"<<endl;
										}
									}

.			{
				cout<<"Lexical Error at line number = "<< linecount + 1 << endl;
				hasError = true;
			}
%%

/////////////////////////////////////////////////////////////////////////////
