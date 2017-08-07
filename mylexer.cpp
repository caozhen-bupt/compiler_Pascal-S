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
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 04/23/17
* Time: 23:39:55
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\mylexer.l"

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

#line 62 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 37 ".\\mylexer.l"

	// place any extra initialisation code here

#line 86 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 42 ".\\mylexer.l"

	// place any extra cleanup code here

#line 98 "mylexer.cpp"
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
#line 62 ".\\mylexer.l"

	// extract yylval.value for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;

#line 169 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 67 ".\\mylexer.l"
//	cout<<"AND"<<endl;
										yylval.value = yytext;
										return(MULOP);
									
#line 179 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 71 ".\\mylexer.l"
//	cout<<"ARRAY"<<endl;
										return(ARRAY);
									
#line 188 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 74 ".\\mylexer.l"
//	cout<<"BEGIN"<<endl;
										return(BEGIN);
									
#line 197 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 77 ".\\mylexer.l"
//	cout<<"BOOLEAN"<<endl;
										return(BOOLEAN);
									
#line 206 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 80 ".\\mylexer.l"
//	cout<<"CASE"<<endl;
										return(CASE);
									
#line 215 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 83 ".\\mylexer.l"
//	cout<<"CHAR"<<endl;
										return (CHAR);
									
#line 224 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 86 ".\\mylexer.l"
//	cout<<"CONST"<<endl;
										return(CONST);
									
#line 233 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 89 ".\\mylexer.l"
//	cout<<"DIV"<<endl;
										yylval.value = yytext;
										return(MULOP);
									
#line 243 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 93 ".\\mylexer.l"
//	cout<<"DO"<<endl;
										return(DO);
									
#line 252 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 96 ".\\mylexer.l"
//	cout<<"DOWNTO"<<endl;
										return(DOWNTO);
									
#line 261 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 99 ".\\mylexer.l"
//	cout<<"ELSE"<<endl;
										return(ELSE);
									
#line 270 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 102 ".\\mylexer.l"
//	cout<<"END"<<endl;
										return(END);
									
#line 279 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 105 ".\\mylexer.l"

										return(FALSE);
									
#line 288 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 108 ".\\mylexer.l"
//	cout<<"FOR"<<endl;
										return(FOR);
									
#line 297 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 111 ".\\mylexer.l"
//	cout<<"FUNCTION"<<endl;
										return(FUNCTION);
									
#line 306 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 114 ".\\mylexer.l"
//	cout<<"IF"<<endl;
										return(IF);
									
#line 315 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 117 ".\\mylexer.l"
//	cout<<"INTEGER"<<endl;
										return(INTEGER);
									
#line 324 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 120 ".\\mylexer.l"
//	cout<<"MOD"<<endl;
										yylval.value = yytext;
										return(MULOP);
									
#line 334 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 124 ".\\mylexer.l"
//	cout<<"NOT"<<endl;
										return(NOT);
									
#line 343 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 127 ".\\mylexer.l"
//	cout<<"OF"<<endl;
										return(OF);
									
#line 352 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 130 ".\\mylexer.l"
//	cout<<"OR"<<endl;
										yylval.value = yytext;
										return(ADDOP);
									
#line 362 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 134 ".\\mylexer.l"
//	cout<<"PROCEDURE"<<endl;
										return(PROCEDURE);
									
#line 371 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 137 ".\\mylexer.l"
	//cout<<"PROGRAM"<<endl;
										return(PROGRAM);
									
#line 380 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 140 ".\\mylexer.l"

										return(READ);
									
#line 389 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 143 ".\\mylexer.l"
//	cout<<"REAL"<<endl;
										return(REAL);
									
#line 398 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 146 ".\\mylexer.l"
//	cout<<"RECORD"<<endl;
										return(RECORD);
									
#line 407 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 149 ".\\mylexer.l"
//	cout<<"REPEAT"<<endl;
										return(REPEAT);
									
#line 416 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 152 ".\\mylexer.l"
//	cout<<"THEN"<<endl;
										return(THEN);
									
#line 425 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 155 ".\\mylexer.l"
//	cout<<"TO"<<endl;
										return(TO);
									
#line 434 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 158 ".\\mylexer.l"

										return(TRUE);
									
#line 443 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 161 ".\\mylexer.l"
//	cout<<"TYPE"<<endl;
										return(TYPE);
									
#line 452 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 164 ".\\mylexer.l"
//	cout<<"UNTIL"<<endl;
										return(UNTIL);
									
#line 461 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 167 ".\\mylexer.l"
//	cout<<"VAR"<<endl;
										return(VAR);
									
#line 470 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 170 ".\\mylexer.l"
//	cout<<"WHILE"<<endl;
										return(WHILE);
									
#line 479 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 173 ".\\mylexer.l"

										return(WRITE);
									
#line 488 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 177 ".\\mylexer.l"
yylval.value = yytext;return (RELOP);
#line 495 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 178 ".\\mylexer.l"
yylval.value = yytext;return (RELOP);
#line 502 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 179 ".\\mylexer.l"
yylval.value = yytext;return (RELOP);
#line 509 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 180 ".\\mylexer.l"
yylval.value = yytext;return (RELOP);
#line 516 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 181 ".\\mylexer.l"
yylval.value = yytext;return (RELOP);
#line 523 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 182 ".\\mylexer.l"
yylval.value = yytext;return (RELOP);
#line 530 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 184 ".\\mylexer.l"
yylval.value = yytext;return (ADDOP);
#line 537 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 185 ".\\mylexer.l"
yylval.value = yytext;return (ADDOP);
#line 544 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 187 ".\\mylexer.l"
yylval.value = yytext;return (MULOP);
#line 551 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 188 ".\\mylexer.l"
yylval.value = yytext;return (MULOP);
#line 558 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 190 ".\\mylexer.l"
yylval.value = yytext;return (ASSIGNOP);
#line 565 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 192 ".\\mylexer.l"
yylval.value = yytext;return (COMMA);
#line 572 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 193 ".\\mylexer.l"
yylval.value = yytext;return (SEMICOLON);
#line 579 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 194 ".\\mylexer.l"
yylval.value = yytext;return (DEFINE);
#line 586 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 195 ".\\mylexer.l"
yylval.value = yytext;return (POINT);
#line 593 "mylexer.cpp"
		}
		break;
	case 51:
		{
#line 196 ".\\mylexer.l"
yylval.value = yytext;return (ELLIPSIS);
#line 600 "mylexer.cpp"
		}
		break;
	case 52:
		{
#line 197 ".\\mylexer.l"
yylval.value = yytext;return (QUOTE);
#line 607 "mylexer.cpp"
		}
		break;
	case 53:
		{
#line 198 ".\\mylexer.l"
yylval.value = yytext;return (LEFTCUBE);
#line 614 "mylexer.cpp"
		}
		break;
	case 54:
		{
#line 199 ".\\mylexer.l"
yylval.value = yytext;return (RIGHTCUBE);
#line 621 "mylexer.cpp"
		}
		break;
	case 55:
		{
#line 200 ".\\mylexer.l"
yylval.value = yytext;return (LEFTCIRCLE);
#line 628 "mylexer.cpp"
		}
		break;
	case 56:
		{
#line 201 ".\\mylexer.l"
yylval.value = yytext;return (RIGHTCIRCLE);
#line 635 "mylexer.cpp"
		}
		break;
	case 57:
		{
#line 205 ".\\mylexer.l"

#line 642 "mylexer.cpp"
		}
		break;
	case 58:
		{
#line 206 ".\\mylexer.l"
yylval.value = yytext;return(ID);
#line 649 "mylexer.cpp"
		}
		break;
	case 59:
		{
#line 207 ".\\mylexer.l"
yylval.value = yytext;return(DIGITS);
#line 656 "mylexer.cpp"
		}
		break;
	case 60:
		{
#line 208 ".\\mylexer.l"
yylval.value = yytext;return(NUM);
#line 663 "mylexer.cpp"
		}
		break;
	case 61:
		{
#line 209 ".\\mylexer.l"
linecount++;
#line 670 "mylexer.cpp"
		}
		break;
	case 62:
		{
#line 210 ".\\mylexer.l"
yylval.value = yytext;return(LETTER);
#line 677 "mylexer.cpp"
		}
		break;
	case 63:
		{
#line 212 ".\\mylexer.l"

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
									
#line 695 "mylexer.cpp"
		}
		break;
	case 64:
		{
#line 225 ".\\mylexer.l"

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
									
#line 751 "mylexer.cpp"
		}
		break;
	case 65:
		{
#line 276 ".\\mylexer.l"

				cout<<"Lexical Error at line number = "<< linecount + 1 << endl;
				hasError = true;
			
#line 761 "mylexer.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 501;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 4, 1 },
		{ 5, 1 },
		{ 4, 4 },
		{ 84, 46 },
		{ 4, 1 },
		{ 84, 46 },
		{ 4, 4 },
		{ 83, 83 },
		{ 83, 83 },
		{ 83, 83 },
		{ 83, 83 },
		{ 83, 83 },
		{ 83, 83 },
		{ 83, 83 },
		{ 83, 83 },
		{ 83, 83 },
		{ 83, 83 },
		{ 48, 18 },
		{ 49, 18 },
		{ 82, 42 },
		{ 0, 45 },
		{ 43, 7 },
		{ 78, 36 },
		{ 4, 1 },
		{ 47, 16 },
		{ 4, 4 },
		{ 44, 13 },
		{ 50, 20 },
		{ 46, 83 },
		{ 81, 41 },
		{ 6, 1 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 14, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 16, 1 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 78, 36 },
		{ 0, 0 },
		{ 21, 1 },
		{ 22, 1 },
		{ 23, 1 },
		{ 24, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 28, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 29, 1 },
		{ 30, 1 },
		{ 31, 1 },
		{ 32, 1 },
		{ 27, 1 },
		{ 33, 1 },
		{ 27, 1 },
		{ 34, 1 },
		{ 35, 1 },
		{ 36, 1 },
		{ 37, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 38, 1 },
		{ 51, 21 },
		{ 39, 1 },
		{ 67, 29 },
		{ 0, 0 },
		{ 52, 21 },
		{ 21, 1 },
		{ 22, 1 },
		{ 23, 1 },
		{ 24, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 28, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 29, 1 },
		{ 30, 1 },
		{ 31, 1 },
		{ 32, 1 },
		{ 27, 1 },
		{ 33, 1 },
		{ 27, 1 },
		{ 34, 1 },
		{ 35, 1 },
		{ 36, 1 },
		{ 37, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 27, 1 },
		{ 40, 1 },
		{ 51, 21 },
		{ 60, 25 },
		{ 67, 29 },
		{ 61, 25 },
		{ 52, 21 },
		{ 45, 15 },
		{ 0, 0 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 0, 0 },
		{ 125, 103 },
		{ 60, 25 },
		{ 86, 51 },
		{ 61, 25 },
		{ 126, 103 },
		{ 41, 1 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 125, 103 },
		{ 0, 0 },
		{ 86, 51 },
		{ 0, 0 },
		{ 126, 103 },
		{ 0, 0 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 27, 167 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 42, 6 },
		{ 62, 26 },
		{ 73, 34 },
		{ 104, 72 },
		{ 69, 31 },
		{ 105, 72 },
		{ 55, 23 },
		{ 53, 22 },
		{ 87, 52 },
		{ 74, 34 },
		{ 88, 53 },
		{ 89, 54 },
		{ 75, 34 },
		{ 56, 23 },
		{ 79, 37 },
		{ 63, 26 },
		{ 70, 31 },
		{ 54, 22 },
		{ 106, 72 },
		{ 76, 34 },
		{ 57, 23 },
		{ 64, 26 },
		{ 127, 104 },
		{ 65, 28 },
		{ 80, 37 },
		{ 90, 55 },
		{ 58, 24 },
		{ 91, 56 },
		{ 92, 57 },
		{ 93, 58 },
		{ 128, 104 },
		{ 66, 28 },
		{ 59, 24 },
		{ 62, 26 },
		{ 73, 34 },
		{ 104, 72 },
		{ 69, 31 },
		{ 105, 72 },
		{ 55, 23 },
		{ 53, 22 },
		{ 87, 52 },
		{ 74, 34 },
		{ 88, 53 },
		{ 89, 54 },
		{ 75, 34 },
		{ 56, 23 },
		{ 79, 37 },
		{ 63, 26 },
		{ 70, 31 },
		{ 54, 22 },
		{ 106, 72 },
		{ 76, 34 },
		{ 57, 23 },
		{ 64, 26 },
		{ 127, 104 },
		{ 65, 28 },
		{ 80, 37 },
		{ 90, 55 },
		{ 58, 24 },
		{ 91, 56 },
		{ 92, 57 },
		{ 93, 58 },
		{ 128, 104 },
		{ 66, 28 },
		{ 59, 24 },
		{ 94, 59 },
		{ 95, 60 },
		{ 96, 61 },
		{ 97, 62 },
		{ 98, 63 },
		{ 99, 64 },
		{ 100, 66 },
		{ 101, 67 },
		{ 102, 68 },
		{ 103, 71 },
		{ 71, 32 },
		{ 107, 73 },
		{ 108, 75 },
		{ 109, 76 },
		{ 110, 77 },
		{ 111, 78 },
		{ 112, 79 },
		{ 113, 80 },
		{ 114, 87 },
		{ 115, 88 },
		{ 116, 89 },
		{ 117, 90 },
		{ 118, 91 },
		{ 119, 92 },
		{ 120, 94 },
		{ 121, 95 },
		{ 122, 97 },
		{ 123, 99 },
		{ 124, 100 },
		{ 72, 33 },
		{ 68, 30 },
		{ 129, 105 },
		{ 94, 59 },
		{ 95, 60 },
		{ 96, 61 },
		{ 97, 62 },
		{ 98, 63 },
		{ 99, 64 },
		{ 100, 66 },
		{ 101, 67 },
		{ 102, 68 },
		{ 103, 71 },
		{ 71, 32 },
		{ 107, 73 },
		{ 108, 75 },
		{ 109, 76 },
		{ 110, 77 },
		{ 111, 78 },
		{ 112, 79 },
		{ 113, 80 },
		{ 114, 87 },
		{ 115, 88 },
		{ 116, 89 },
		{ 117, 90 },
		{ 118, 91 },
		{ 119, 92 },
		{ 120, 94 },
		{ 121, 95 },
		{ 122, 97 },
		{ 123, 99 },
		{ 124, 100 },
		{ 72, 33 },
		{ 68, 30 },
		{ 129, 105 },
		{ 130, 106 },
		{ 131, 107 },
		{ 132, 108 },
		{ 133, 109 },
		{ 134, 110 },
		{ 135, 112 },
		{ 136, 113 },
		{ 137, 114 },
		{ 138, 115 },
		{ 139, 116 },
		{ 140, 119 },
		{ 141, 120 },
		{ 142, 122 },
		{ 143, 123 },
		{ 144, 124 },
		{ 145, 125 },
		{ 146, 126 },
		{ 147, 129 },
		{ 148, 130 },
		{ 149, 134 },
		{ 150, 135 },
		{ 151, 136 },
		{ 152, 139 },
		{ 153, 141 },
		{ 154, 143 },
		{ 155, 144 },
		{ 156, 145 },
		{ 157, 146 },
		{ 158, 147 },
		{ 159, 148 },
		{ 160, 152 },
		{ 161, 154 },
		{ 130, 106 },
		{ 131, 107 },
		{ 132, 108 },
		{ 133, 109 },
		{ 134, 110 },
		{ 135, 112 },
		{ 136, 113 },
		{ 137, 114 },
		{ 138, 115 },
		{ 139, 116 },
		{ 140, 119 },
		{ 141, 120 },
		{ 142, 122 },
		{ 143, 123 },
		{ 144, 124 },
		{ 145, 125 },
		{ 146, 126 },
		{ 147, 129 },
		{ 148, 130 },
		{ 149, 134 },
		{ 150, 135 },
		{ 151, 136 },
		{ 152, 139 },
		{ 153, 141 },
		{ 154, 143 },
		{ 155, 144 },
		{ 156, 145 },
		{ 157, 146 },
		{ 158, 147 },
		{ 159, 148 },
		{ 160, 152 },
		{ 161, 154 },
		{ 162, 155 },
		{ 163, 156 },
		{ 164, 157 },
		{ 165, 161 },
		{ 166, 163 },
		{ 167, 166 },
		{ 77, 35 },
		{ 85, 85 },
		{ 85, 85 },
		{ 85, 85 },
		{ 85, 85 },
		{ 85, 85 },
		{ 85, 85 },
		{ 85, 85 },
		{ 85, 85 },
		{ 85, 85 },
		{ 85, 85 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 162, 155 },
		{ 163, 156 },
		{ 164, 157 },
		{ 165, 161 },
		{ 166, 163 },
		{ 167, 166 },
		{ 77, 35 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ -3, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 0, 65 },
		{ 0, -6, 57 },
		{ 0, 0, 61 },
		{ 0, 147, 65 },
		{ 0, -20, 55 },
		{ 0, 0, 56 },
		{ 0, 0, 44 },
		{ 0, 0, 42 },
		{ 0, 0, 47 },
		{ 0, 0, 43 },
		{ 0, -19, 50 },
		{ 0, 0, 45 },
		{ 83, 75, 59 },
		{ 0, -36, 49 },
		{ 0, 0, 48 },
		{ 0, -43, 38 },
		{ 0, 0, 36 },
		{ 0, -33, 39 },
		{ 167, 6, 58 },
		{ 167, 207, 58 },
		{ 167, 210, 58 },
		{ 167, 222, 58 },
		{ 167, 41, 58 },
		{ 167, 205, 58 },
		{ 167, 0, 58 },
		{ 167, 222, 58 },
		{ 167, 7, 58 },
		{ 167, 285, 58 },
		{ 167, 203, 58 },
		{ 167, 262, 58 },
		{ 167, 294, 58 },
		{ 167, 199, 58 },
		{ 167, 390, 58 },
		{ 167, -42, 58 },
		{ 167, 211, 58 },
		{ 0, 0, 53 },
		{ 0, 0, 54 },
		{ 0, 0, 63 },
		{ 0, -144, 65 },
		{ 0, -19, 0 },
		{ 0, 0, 64 },
		{ 0, 0, 51 },
		{ 83, -48, 0 },
		{ 85, -39, 0 },
		{ 0, 0, 46 },
		{ 0, 0, 40 },
		{ 0, 0, 37 },
		{ 0, 0, 41 },
		{ 167, 82, 58 },
		{ 167, 195, 58 },
		{ 167, 208, 58 },
		{ 167, 201, 58 },
		{ 167, 211, 58 },
		{ 167, 231, 58 },
		{ 167, 219, 58 },
		{ 167, 212, 58 },
		{ 167, 247, 9 },
		{ 167, 252, 58 },
		{ 167, 268, 58 },
		{ 167, 261, 58 },
		{ 167, 256, 58 },
		{ 167, 261, 58 },
		{ 167, 0, 16 },
		{ 167, 256, 58 },
		{ 167, 273, 58 },
		{ 167, 258, 58 },
		{ 167, 0, 20 },
		{ 167, 0, 21 },
		{ 167, 264, 58 },
		{ 167, 207, 58 },
		{ 167, 276, 58 },
		{ 167, 0, 29 },
		{ 167, 261, 58 },
		{ 167, 267, 58 },
		{ 167, 264, 58 },
		{ 167, 267, 58 },
		{ 167, 277, 58 },
		{ 167, 278, 58 },
		{ 0, 0, 52 },
		{ 0, 0, 62 },
		{ 0, -40, 60 },
		{ 85, 0, 0 },
		{ 0, 421, 60 },
		{ 167, 0, 1 },
		{ 167, 287, 58 },
		{ 167, 280, 58 },
		{ 167, 278, 58 },
		{ 167, 286, 58 },
		{ 167, 274, 58 },
		{ 167, 274, 58 },
		{ 167, 0, 8 },
		{ 167, 280, 58 },
		{ 167, 290, 58 },
		{ 167, 0, 12 },
		{ 167, 277, 58 },
		{ 167, 0, 14 },
		{ 167, 294, 58 },
		{ 167, 293, 58 },
		{ 167, 0, 18 },
		{ 167, 0, 19 },
		{ 167, 81, 58 },
		{ 167, 223, 58 },
		{ 167, 286, 58 },
		{ 167, 329, 58 },
		{ 167, 321, 58 },
		{ 167, 331, 58 },
		{ 167, 332, 58 },
		{ 167, 329, 58 },
		{ 167, 0, 33 },
		{ 167, 327, 58 },
		{ 167, 320, 58 },
		{ 167, 316, 58 },
		{ 167, 328, 58 },
		{ 167, 338, 58 },
		{ 167, 0, 5 },
		{ 167, 0, 6 },
		{ 167, 324, 58 },
		{ 167, 325, 58 },
		{ 167, 0, 11 },
		{ 167, 341, 58 },
		{ 167, 327, 58 },
		{ 167, 341, 58 },
		{ 167, 344, 58 },
		{ 167, 332, 58 },
		{ 167, 0, 24 },
		{ 167, 0, 25 },
		{ 167, 333, 58 },
		{ 167, 351, 58 },
		{ 167, 0, 28 },
		{ 167, 0, 30 },
		{ 167, 0, 31 },
		{ 167, 341, 58 },
		{ 167, 349, 58 },
		{ 167, 350, 58 },
		{ 167, 0, 2 },
		{ 167, 0, 3 },
		{ 167, 355, 58 },
		{ 167, 0, 7 },
		{ 167, 342, 58 },
		{ 167, 0, 13 },
		{ 167, 349, 58 },
		{ 167, 354, 58 },
		{ 167, 356, 58 },
		{ 167, 360, 58 },
		{ 167, 358, 58 },
		{ 167, 343, 58 },
		{ 167, 0, 32 },
		{ 167, 0, 34 },
		{ 167, 0, 35 },
		{ 167, 350, 58 },
		{ 167, 0, 10 },
		{ 167, 350, 58 },
		{ 167, 380, 58 },
		{ 167, 378, 58 },
		{ 167, 387, 58 },
		{ 167, 0, 26 },
		{ 167, 0, 27 },
		{ 167, 0, 4 },
		{ 167, 387, 58 },
		{ 167, 0, 17 },
		{ 167, 384, 58 },
		{ 167, 0, 23 },
		{ 167, 0, 15 },
		{ 167, 398, 58 },
		{ 0, 89, 22 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 280 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////

