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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 04/23/17
* Time: 23:41:55
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\myparser.y"

/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2017年4月1日









****************************************************************************/

#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <fstream>
#include <vector>    
using namespace std; 
#include "dataStruc.h"

#include "myparser.h"


extern vector< struct constElement > constTable;
extern vector< struct structElement > structTable;
extern struct tableHead *curHead;
extern struct tableHead *preHead;

extern int linecount;
extern int top;
extern bool hasError;

extern struct symbol *curSymbol;
extern struct symbol *preSymbol; 
extern string functionPara;
extern string fuctionParaType;

extern ofstream outfile;
extern ifstream infile;

#define YYSTYPE Data



#line 88 "myparser.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\myparser.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 90 ".\\myparser.y"

	// place any extra initialisation code here

#line 112 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 95 ".\\myparser.y"

	// place any extra cleanup code here

#line 126 "myparser.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 176 ".\\myparser.y"

									cout << "Error Detected!" << endl;
									cout <<yyattribute(1 - 3).value +  yyattribute(2 - 3).value << endl;
									outfile <<yyattribute(1 - 3).value +  yyattribute(2 - 3).value << endl;
									outfile.close();
									
								
#line 242 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 184 ".\\myparser.y"

									cout << "Error Detected!" << endl;
									cout <<yyattribute(1 - 3).value + yyattribute(2 - 3).value << endl;
									outfile <<yyattribute(1 - 3).value +  yyattribute(2 - 3).value << endl;
									outfile.close();
									
								
#line 261 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 192 ".\\myparser.y"

								if(!hasError)
								{
									cout << "Compile Succeed!" << endl;
									cout <<yyattribute(1 - 3).value +  yyattribute(2 - 3).value << endl;
									outfile <<yyattribute(1 - 3).value +  yyattribute(2 - 3).value << endl;
									outfile.close();
								}
								else
								{
									cout << "Error Detected!" << endl;
									cout <<yyattribute(1 - 3).value +  yyattribute(2 - 3).value << endl;
									outfile <<yyattribute(1 - 3).value +  yyattribute(2 - 3).value << endl;
									outfile.close();
									
								}
							
#line 290 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 212 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 306 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 217 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 322 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 222 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 338 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 227 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 354 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 232 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 370 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 237 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 386 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 242 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "#include<stdio.h>\n" ;
							
#line 401 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 248 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value =yyattribute(1 - 5).value + "\n" +yyattribute(2 - 5).value +"\n" +yyattribute(3 - 5).value + "\n" + yyattribute(4 - 5).value + "\n" + "int main()\n{\n" + yyattribute(5 - 5).value + "return 0;\n}\n";
							    
							
#line 417 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 253 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 433 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 258 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 449 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 263 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 465 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 268 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 481 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 273 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 497 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 279 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 513 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 284 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 529 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 289 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 545 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 294 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value +", "+ yyattribute(3 - 3).value;
							
							
#line 561 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 300 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 577 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 305 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 593 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 310 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 609 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 315 ".\\myparser.y"

//							    $2.type = $3.type;
//								$$.value = ", " + declarationTrans($2.value,$2.type)+ $3.value ;
//								//$$.value = ", " + $2.value+ $3.value ;
//								$$.type = $3.type;
								//4.13gai
							    (*(YYSTYPE YYFAR*)yyvalptr).type = yyattribute(3 - 3).type;
							    yyattribute(2 - 3).type = yyattribute(3 - 3).type;
								(*(YYSTYPE YYFAR*)yyvalptr).value = "," + yyattribute(2 - 3).value+ yyattribute(3 - 3).value ;
							
#line 631 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 326 ".\\myparser.y"

//							//	$$.value = ": " + $2.value;
//								$$.type = $2.value;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
									//4.13gai
								(*(YYSTYPE YYFAR*)yyvalptr).value="";
								(*(YYSTYPE YYFAR*)yyvalptr).type = yyattribute(2 - 2).value;
								
							
#line 651 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 350 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 667 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 355 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 683 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 360 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(2 - 3).value + "\n";
							
#line 698 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#line 364 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "";
							
#line 708 "myparser.cpp"
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 371 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 723 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 376 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 739 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 381 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 755 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 386 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 771 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 391 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 787 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 396 ".\\myparser.y"

								if (yyattribute(4 - 5).value != "=")
								{
									yyerror("The format error of const declaration!");	
									hasError = true;
								}
								yyattribute(3 - 5).type = yyattribute(5 - 5).type;
								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 5).value + "const " + yyattribute(3 - 5).type + " " + yyattribute(3 - 5).value + " = " +yyattribute(5 - 5).value;
								
								if(!checkSymbolTable_declare(yyattribute(3 - 5).value))
								{
									addtoSymboltable(yyattribute(3 - 5).value, yyattribute(3 - 5).type);
									addtoConstTable(yyattribute(3 - 5).value,yyattribute(3 - 5).type,yyattribute(5 - 5).value);
								}	
								else
								{
									yyerror("This id already exists as a const!");	
									hasError = true;
								}   
							
#line 819 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 418 ".\\myparser.y"

								if (yyattribute(2 - 3).value != "=")
								{
									yyerror("The format error of const declaration!");
									hasError = true;	
								}
								yyattribute(1 - 3).type = yyattribute(3 - 3).type;

								(*(YYSTYPE YYFAR*)yyvalptr).value = "const " + yyattribute(1 - 3).type +" " + yyattribute(1 - 3).value + " = " +yyattribute(3 - 3).value + ";";
								
								if(!checkSymbolTable_declare(yyattribute(3 - 3).value))
								{
									addtoSymboltable(yyattribute(1 - 3).value, yyattribute(1 - 3).type);
									addtoConstTable(yyattribute(1 - 3).value,yyattribute(1 - 3).type,yyattribute(3 - 3).value);
								}	
								else
								{
									yyerror("This id already exists as a const!");	
									hasError = true;
								}
							
#line 852 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 442 ".\\myparser.y"

								string returnType = checkSymbolTable_quote(yyattribute(2 - 2).value);
								if(returnType != "false")
								{
									if (yyattribute(1 - 2).value == "+")
									{
										(*(YYSTYPE YYFAR*)yyvalptr).value = "+" +yyattribute(2 - 2).value;
										(*(YYSTYPE YYFAR*)yyvalptr).type = returnType;
									}	
									else if(yyattribute(1 - 2).value == "-")
									{
										(*(YYSTYPE YYFAR*)yyvalptr).value = "-" +yyattribute(2 - 2).value;
										(*(YYSTYPE YYFAR*)yyvalptr).type = returnType;
									}	 
								}
								else
								{
									yyerror("This id doesn't exist as a const!");
									hasError = true;
								}
							
							
#line 886 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 465 ".\\myparser.y"

								string returnType = checkSymbolTable_quote(yyattribute(1 - 1).value);
								if(returnType != "false")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type = returnType;	 
								}
								else
								{
									yyerror("This id doesn't exist as a const!");
									hasError = true;
								}
							
#line 911 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 479 ".\\myparser.y"

								if (yyattribute(1 - 2).value == "+")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = "+" +yyattribute(2 - 2).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type = "float" ;
								}
									
								else if(yyattribute(1 - 2).value == "-")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = "-" +yyattribute(2 - 2).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type = "float" ;
								}
								
							
#line 937 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 494 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value=yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type = "float" ;
							
#line 953 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 499 ".\\myparser.y"

								if (yyattribute(1 - 2).value == "+")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = "+" +yyattribute(2 - 2).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type = "int" ;
								}
									
								else if(yyattribute(1 - 2).value == "-")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = "-" +yyattribute(2 - 2).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type = "int" ;
								}
								
							
#line 979 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 514 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value=yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type = "int" ;
							
#line 995 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 519 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value =yyattribute(2 - 3).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type = "char" ;
							
#line 1011 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 526 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 1027 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 531 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 1043 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 536 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(2 - 3).value + ";";
							
#line 1058 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#line 540 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "";
							
#line 1068 "myparser.cpp"
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 545 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1083 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 550 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1099 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 555 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1115 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 560 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1131 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 565 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1147 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 570 ".\\myparser.y"

								if (yyattribute(4 - 5).value != "=")
								{
									yyerror("The format error of type declaration!");
									hasError = true;
								}
								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 5).value + ";" + "typedef " + yyattribute(5 - 5).value + " " + yyattribute(3 - 5).value;

								if(checkTypeTable(yyattribute(3 - 5).value)=="false")
								{
								
									addtoTypeTable(yyattribute(5 - 5).value,yyattribute(3 - 5).value);
								}	
								else
								{
									yyerror("This id already exist!");	
									hasError = true;
								}
                                	
								    
							
#line 1180 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 593 ".\\myparser.y"

								if (yyattribute(2 - 3).value != "=")
								{
									yyerror("The format error of type declaration!");
									hasError = true;	
								}
								(*(YYSTYPE YYFAR*)yyvalptr).value = "typedef " + yyattribute(3 - 3).value + " " + yyattribute(1 - 3).value;
								if(checkTypeTable(yyattribute(1 - 3).value)=="false")
								{
									addtoTypeTable(yyattribute(3 - 3).value,yyattribute(1 - 3).value);
								}	
								else
								{
									yyerror("This id already exists!");	
									hasError = true;
								}
										
							
#line 1210 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 614 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1226 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 619 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1242 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 624 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1258 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 629 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1274 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 634 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1290 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 639 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1306 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 644 ".\\myparser.y"
	
								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
											
							
#line 1322 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 649 ".\\myparser.y"
					
								(*(YYSTYPE YYFAR*)yyvalptr).value = "struct{\n" + yyattribute(2 - 3).value + "\n}";	
																
							
#line 1338 "myparser.cpp"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 654 ".\\myparser.y"

						    	
						    	(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(6 - 6).value +" "+yyattribute(3 - 6).value;
						    	
						    
#line 1355 "myparser.cpp"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 660 ".\\myparser.y"

						    string s=checkTypeTable(yyattribute(1 - 1).value);
						    
						    if(s=="false"){
								yyerror("This is not a type!");
								hasError = true;
						    }
						    else (*(YYSTYPE YYFAR*)yyvalptr).value=yyattribute(1 - 1).value;
						    
#line 1376 "myparser.cpp"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 673 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "int";
								
							
#line 1392 "myparser.cpp"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 678 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "float";
							
#line 1407 "myparser.cpp"
			}
		}
		break;
	case 66:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 682 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "bool";
							
#line 1422 "myparser.cpp"
			}
		}
		break;
	case 67:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 686 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "char";
							
#line 1437 "myparser.cpp"
			}
		}
		break;
	case 68:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 692 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1453 "myparser.cpp"
			}
		}
		break;
	case 69:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 697 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value=yyattribute(1 - 2).value;
									
							
#line 1469 "myparser.cpp"
			}
		}
		break;
	case 70:
		{
#line 702 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value="";
									
							
#line 1480 "myparser.cpp"
		}
		break;
	case 71:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 724 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1495 "myparser.cpp"
			}
		}
		break;
	case 72:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 729 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1511 "myparser.cpp"
			}
		}
		break;
	case 73:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 734 ".\\myparser.y"

							    yyattribute(3 - 4).type = yyattribute(4 - 4).type;
							    //$3.value=$3.value+$4.value;
								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 4).value + "\n" + structBodyTrans(yyattribute(3 - 4).value+yyattribute(4 - 4).value,yyattribute(3 - 4).type);
								while(!structTable.empty())
								{
									structTable.pop_back();
								}
								
							
#line 1533 "myparser.cpp"
			}
		}
		break;
	case 74:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 750 ".\\myparser.y"

							    yyattribute(1 - 2).type=yyattribute(2 - 2).type;
								(*(YYSTYPE YYFAR*)yyvalptr).value =structBodyTrans(yyattribute(1 - 2).value+yyattribute(2 - 2).value,yyattribute(1 - 2).type);
								

							
#line 1551 "myparser.cpp"
			}
		}
		break;
	case 75:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 758 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1567 "myparser.cpp"
			}
		}
		break;
	case 76:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 763 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value=yyattribute(1 - 3).value + " " + yyattribute(3 - 3).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(3 - 3).type;
							
#line 1583 "myparser.cpp"
			}
		}
		break;
	case 77:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 768 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value=yyattribute(1 - 1).value;
							
#line 1598 "myparser.cpp"
			}
		}
		break;
	case 78:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 774 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1614 "myparser.cpp"
			}
		}
		break;
	case 79:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 779 ".\\myparser.y"

								if( yyattribute(1 - 3).type != "int" || yyattribute(3 - 3).type != "int" )	
								{
									yyerror(" Array limit isn't an integer! ");	
									hasError = true;
								}
								else
								{
									int num1,num2;
									num1=atoi((yyattribute(1 - 3).value).c_str());
									num2=atoi((yyattribute(3 - 3).value).c_str());
									
									(*(YYSTYPE YYFAR*)yyvalptr).value=yyattribute(1 - 3).value + "|" + yyattribute(3 - 3).value;

									if( num1 >= num2 )
									{
										yyerror(" Array's left limit isn't smaller than right limit!");
										hasError = true;	
									}
									
								}

								
							
#line 1650 "myparser.cpp"
			}
		}
		break;
	case 80:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 806 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1666 "myparser.cpp"
			}
		}
		break;
	case 81:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 811 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1682 "myparser.cpp"
			}
		}
		break;
	case 82:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 816 ".\\myparser.y"

							    
								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(2 - 3).value + ";\n";
								
							
#line 1699 "myparser.cpp"
			}
		}
		break;
	case 83:
		{
#line 822 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "";
								
								
							
#line 1711 "myparser.cpp"
		}
		break;
	case 84:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 838 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1726 "myparser.cpp"
			}
		}
		break;
	case 85:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 843 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1742 "myparser.cpp"
			}
		}
		break;
	case 86:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 848 ".\\myparser.y"

							    yyattribute(3 - 4).type = yyattribute(4 - 4).type;
								//$$.value = $1.value + ";" +declarationTrans($3.value,$3.type)+$4.value;
							    //4.13gai
								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 4).value + ";\n" +declarationTrans(yyattribute(3 - 4).value+yyattribute(4 - 4).value,yyattribute(3 - 4).type);
							
#line 1760 "myparser.cpp"
			}
		}
		break;
	case 87:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 855 ".\\myparser.y"

								yyattribute(1 - 2).type = yyattribute(2 - 2).type;
								///$$.value = declarationTrans($1.value,$1.type) + $2.value;
						        //4.13gai
								(*(YYSTYPE YYFAR*)yyvalptr).value = declarationTrans(yyattribute(1 - 2).value+ yyattribute(2 - 2).value,yyattribute(1 - 2).type) ;
							
#line 1778 "myparser.cpp"
			}
		}
		break;
	case 88:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 866 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + yyattribute(2 - 3).value;
							
#line 1793 "myparser.cpp"
			}
		}
		break;
	case 89:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 870 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1809 "myparser.cpp"
			}
		}
		break;
	case 90:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 875 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1825 "myparser.cpp"
			}
		}
		break;
	case 91:
		{
#line 880 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "";
		                    
#line 1835 "myparser.cpp"
		}
		break;
	case 92:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 886 ".\\myparser.y"

								if(yyattribute(1 - 2).type!="false")
								{
									preHead=preHead->preTable;					
                               		curHead=curHead->preTable; 
								}
								//$$.value = $1.value + "\n{\n" + $2.value + "}\n";							
                                (*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 2).value + yyattribute(2 - 2).value;		
								//4.13gai

								
							
#line 1858 "myparser.cpp"
			}
		}
		break;
	case 93:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 901 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1874 "myparser.cpp"
			}
		}
		break;
	case 94:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 906 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1890 "myparser.cpp"
			}
		}
		break;
	case 95:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 911 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1906 "myparser.cpp"
			}
		}
		break;
	case 96:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 916 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1922 "myparser.cpp"
			}
		}
		break;
	case 97:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 921 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1938 "myparser.cpp"
			}
		}
		break;
	case 98:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 926 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1954 "myparser.cpp"
			}
		}
		break;
	case 99:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 931 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1970 "myparser.cpp"
			}
		}
		break;
	case 100:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 936 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 1986 "myparser.cpp"
			}
		}
		break;
	case 101:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 941 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 2002 "myparser.cpp"
			}
		}
		break;
	case 102:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 946 ".\\myparser.y"


								if(checkSymbolTable_func(yyattribute(2 - 6).value))//???
								{

									addtoSymboltable(yyattribute(2 - 6).value, "func", yyattribute(3 - 6).value, yyattribute(5 - 6).value);//?????¡À?
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(5 - 6).value + " " + yyattribute(2 - 6).value + "(" + yyattribute(3 - 6).value + ")\n";

								}	
								//$$.value = $5.value + $2.value + "(" + $3.value + ")";
                                //4.13gai  jialege \n
                                else 
                                {
                                	(*(YYSTYPE YYFAR*)yyvalptr).type="false";

                                	(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(5 - 6).value + " " + yyattribute(2 - 6).value + "(" + yyattribute(3 - 6).value + ")\n";
                                	yyerror("This id has already been declared.");
                                	hasError = true;
                                }
                                
								
								
							
#line 2037 "myparser.cpp"
			}
		}
		break;
	case 103:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 970 ".\\myparser.y"

								if(checkSymbolTable_func(yyattribute(2 - 4).value))//???
								{

									//addtoSymboltable($2.value, "func", $3.value, $5.value);//?????¡À?
                                    addtoSymboltable(yyattribute(2 - 4).value, "func", yyattribute(3 - 4).value, "void");
                                    (*(YYSTYPE YYFAR*)yyvalptr).value = "void " + yyattribute(2 - 4).value + "(" + yyattribute(3 - 4).value + ")\n";
								}	
								else 
                                {
                                	(*(YYSTYPE YYFAR*)yyvalptr).type="false";
                                	(*(YYSTYPE YYFAR*)yyvalptr).value = "void " + yyattribute(2 - 4).value + "(" + yyattribute(3 - 4).value + ")\n";
                                	yyerror("This id has already been declared.");
                                	hasError = true;
                                }
								

							
#line 2067 "myparser.cpp"
			}
		}
		break;
	case 104:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 991 ".\\myparser.y"

							//	$$.value = "{\n"+$1.value +$2.value +$3.value + "\n" + $4.value + "\n" + "{\n" + $5.value + "\n}\n";
							    (*(YYSTYPE YYFAR*)yyvalptr).value = "{\n" + yyattribute(1 - 4).value +yyattribute(2 - 4).value +yyattribute(3 - 4).value + yyattribute(4 - 4).value + "}\n";
							
#line 2083 "myparser.cpp"
			}
		}
		break;
	case 105:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 998 ".\\myparser.y"

							    yyerrok();
								hasError = true;
						
							
#line 2100 "myparser.cpp"
			}
		}
		break;
	case 106:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1004 ".\\myparser.y"

							    yyerrok();
								hasError = true;
						
							
#line 2117 "myparser.cpp"
			}
		}
		break;
	case 107:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1010 ".\\myparser.y"

							    yyerrok();
								hasError = true;
						
							
#line 2134 "myparser.cpp"
			}
		}
		break;
	case 108:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1016 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(2 - 3).value;
								
							
#line 2150 "myparser.cpp"
			}
		}
		break;
	case 109:
		{
#line 1021 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "";
									
							
#line 2161 "myparser.cpp"
		}
		break;
	case 110:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1028 ".\\myparser.y"

							    yyerrok();
								hasError = true;
						
							
#line 2177 "myparser.cpp"
			}
		}
		break;
	case 111:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1034 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + "," + yyattribute(3 - 3).value;
								
							
								 
							
#line 2195 "myparser.cpp"
			}
		}
		break;
	case 112:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1041 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
									
							
							
#line 2212 "myparser.cpp"
			}
		}
		break;
	case 113:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1049 ".\\myparser.y"

								
								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								
							
#line 2229 "myparser.cpp"
			}
		}
		break;
	case 114:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1056 ".\\myparser.y"

								
								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								
							
#line 2246 "myparser.cpp"
			}
		}
		break;
	case 115:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 1063 ".\\myparser.y"

							    yyerrok();
								hasError = true;
						
							
#line 2263 "myparser.cpp"
			}
		}
		break;
	case 116:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 1069 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = VarParameterTrans(yyattribute(2 - 2).value,yyattribute(2 - 2).type);
								
							
#line 2279 "myparser.cpp"
			}
		}
		break;
	case 117:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 1083 ".\\myparser.y"

//							$1.type = $2.type;
//							$1.value=$1.value+$2.value;
//							$$.value = ParameterTrans($1.value,$2.type);
//							$$.type=$1.type;
								yyattribute(1 - 2).type = yyattribute(2 - 2).type;
							    string s=yyattribute(1 - 2).value+yyattribute(2 - 2).value;
							
								(*(YYSTYPE YYFAR*)yyvalptr).value = ParameterTrans(s,yyattribute(2 - 2).type);
								(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(1 - 2).type;
								
							
							
#line 2304 "myparser.cpp"
			}
		}
		break;
	case 118:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1098 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(2 - 3).value;
						
							
#line 2320 "myparser.cpp"
			}
		}
		break;
	case 119:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1103 ".\\myparser.y"

							   yyerrok();
								hasError = true;
						
							
#line 2337 "myparser.cpp"
			}
		}
		break;
	case 120:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1109 ".\\myparser.y"

							    yyerrok();
								hasError = true;
						
							
#line 2354 "myparser.cpp"
			}
		}
		break;
	case 121:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1119 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + yyattribute(3 - 3).value;
								
							
#line 2370 "myparser.cpp"
			}
		}
		break;
	case 122:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1124 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
							
							
#line 2386 "myparser.cpp"
			}
		}
		break;
	case 123:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1129 ".\\myparser.y"

							    yyerrok();
								hasError = true;
							
#line 2402 "myparser.cpp"
			}
		}
		break;
	case 124:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1153 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2418 "myparser.cpp"
			}
		}
		break;
	case 125:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1158 ".\\myparser.y"

								yyerrok();
								yyclearin(); 
								hasError = true;
							
#line 2435 "myparser.cpp"
			}
		}
		break;
	case 126:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1164 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2451 "myparser.cpp"
			}
		}
		break;
	case 127:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 1169 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2467 "myparser.cpp"
			}
		}
		break;
	case 128:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 1174 ".\\myparser.y"

								yyerrok();
								hasError = true;
							
#line 2483 "myparser.cpp"
			}
		}
		break;
	case 129:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 1179 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2499 "myparser.cpp"
			}
		}
		break;
	case 130:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1189 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2515 "myparser.cpp"
			}
		}
		break;
	case 131:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1194 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2531 "myparser.cpp"
			}
		}
		break;
	case 132:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1199 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2547 "myparser.cpp"
			}
		}
		break;
	case 133:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 1204 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2563 "myparser.cpp"
			}
		}
		break;
	case 134:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 1209 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2579 "myparser.cpp"
			}
		}
		break;
	case 135:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 1214 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2595 "myparser.cpp"
			}
		}
		break;
	case 136:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 1219 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2611 "myparser.cpp"
			}
		}
		break;
	case 137:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 1224 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2627 "myparser.cpp"
			}
		}
		break;
	case 138:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 1229 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2643 "myparser.cpp"
			}
		}
		break;
	case 139:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 1234 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2659 "myparser.cpp"
			}
		}
		break;
	case 140:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 1239 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2675 "myparser.cpp"
			}
		}
		break;
	case 141:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1244 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2691 "myparser.cpp"
			}
		}
		break;
	case 142:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1249 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2707 "myparser.cpp"
			}
		}
		break;
	case 143:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1254 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 2723 "myparser.cpp"
			}
		}
		break;
	case 144:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1259 ".\\myparser.y"

//							    
//								 if($1.type != $3.type)
//								 {
//								
//								 	yyerror("Wrong assignment between different types??");
//								 }
//								 $$.value = $1.value + "=" + $3.value + ";\n";
								//4.13gai
								 if(checkReturn(yyattribute(1 - 3).value,yyattribute(3 - 3).type))
								 {
								 	(*(YYSTYPE YYFAR*)yyvalptr).value = "return " + yyattribute(3 - 3).value + ";\n";
								 }
								 else
								 {
									 if(yyattribute(1 - 3).type != yyattribute(3 - 3).type)
									 {
									
									 	yyerror("Wrong assignment between different types??");
									 	hasError = true;
									 }
									 (*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + "=" + yyattribute(3 - 3).value + ";\n";
								 } 	
								
							
#line 2760 "myparser.cpp"
			}
		}
		break;
	case 145:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1285 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value + ";\n";
							
#line 2775 "myparser.cpp"
			}
		}
		break;
	case 146:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1289 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
							
#line 2790 "myparser.cpp"
			}
		}
		break;
	case 147:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 1293 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "if(" + yyattribute(2 - 5).value + ")\n{\n" + yyattribute(4 - 5).value + "}\n" +yyattribute(5 - 5).value;
								if(yyattribute(2 - 5).type!="bool")
								{
									yyerror("error in if expression type");
									hasError = true;
								}
							
#line 2810 "myparser.cpp"
			}
		}
		break;
	case 148:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 1302 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "switch(" + yyattribute(2 - 5).value + ")\n{\n" + yyattribute(4 - 5).value + "}\n";
								if(yyattribute(2 - 5).type!=yyattribute(4 - 5).type) 
								{
									yyerror("Different types in case !");
									hasError = true;
								}
							
#line 2830 "myparser.cpp"
			}
		}
		break;
	case 149:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1311 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "while(" + yyattribute(2 - 4).value + ")\n{\n" + yyattribute(4 - 4).value + "}\n";
								if(yyattribute(2 - 4).type!="bool")
								{
									yyerror("error in while expression type");
									hasError = true;
								}
							
#line 2850 "myparser.cpp"
			}
		}
		break;
	case 150:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1320 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "do\n{\n"+ yyattribute(2 - 4).value + "}while(!(" + yyattribute(4 - 4).value +"));\n";
								if(yyattribute(4 - 4).type!="bool")
								{
									yyerror("error in do while expression type");
									hasError = true;
								}
							
#line 2870 "myparser.cpp"
			}
		}
		break;
	case 151:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 1329 ".\\myparser.y"

								
								string feedback=checkSymbolTable_quote(yyattribute(2 - 8).value);
								
								if(feedback=="false")
								{
									yyerror("variable is not declared!");
									hasError = true;
								}
								else if(feedback == yyattribute(4 - 8).type && feedback == yyattribute(6 - 8).type)
								{
									if(yyattribute(5 - 8).value == "to" )
									{
										if(feedback=="int")
										{
											if(yyattribute(4 - 8).value >= yyattribute(6 - 8).value)
											{
												yyerror("range is wrong in for");
												hasError = true;
											}
										}
										else
										{
											yyerror("Wrong type!");
											hasError = true;
										}
										
										(*(YYSTYPE YYFAR*)yyvalptr).value = "for(" + yyattribute(2 - 8).value + " = " + yyattribute(4 - 8).value + "; " + yyattribute(2 - 8).value + " <=" + yyattribute(6 - 8).value + "; " + yyattribute(2 - 8).value + "++)"+"\n{\n" + yyattribute(8 - 8).value + "}\n";
									}
									else if(yyattribute(5 - 8).value == "downto" )
									{
										
										if(feedback=="int")
										{
											if(yyattribute(4 - 8).value <= yyattribute(6 - 8).value)
											{
												yyerror("range is wrong in for");
												hasError = true;
											}
										}
										else
										{
											yyerror("Wrong type!");
											hasError = true;
										}
										
										(*(YYSTYPE YYFAR*)yyvalptr).value = "for(" + yyattribute(2 - 8).value + " = " + yyattribute(4 - 8).value + "; " + yyattribute(2 - 8).value + " >=" + yyattribute(6 - 8).value + "; " + yyattribute(2 - 8).value + "--)"+"\n{\n" + yyattribute(8 - 8).value + "}\n";
									}
								}	
							
#line 2932 "myparser.cpp"
			}
		}
		break;
	case 152:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1380 ".\\myparser.y"

								//yyerror(($3.value).c_str());
							
								(*(YYSTYPE YYFAR*)yyvalptr).value = readToScanf(yyattribute(3 - 4).value);					
							
#line 2949 "myparser.cpp"
			}
		}
		break;
	case 153:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1386 ".\\myparser.y"

							//   yyerror(($3.value).c_str());
								(*(YYSTYPE YYFAR*)yyvalptr).value = writeToPrintf(yyattribute(3 - 4).value);	
							
#line 2965 "myparser.cpp"
			}
		}
		break;
	case 154:
		{
#line 1401 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value="";
							
#line 2975 "myparser.cpp"
		}
		break;
	case 155:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 1407 ".\\myparser.y"

								string feedback = checkParaQuote(yyattribute(1 - 2).value);
								if(feedback != "" && feedback[0] == 'v')
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = "*" + yyattribute(1 - 2).value + yyattribute(2 - 2).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type = feedback.substr(1,feedback.length()-1);
								}
								else
								{
								    
									feedback=checkSymbolTable_quote(yyattribute(1 - 2).value); 
						
									if(feedback=="false")
									{
										if(yyattribute(1 - 2).value!=curHead->name) {
										    yyerror("This id hasn't been declared!");
										    hasError = true;
										}
										else
										{
											(*(YYSTYPE YYFAR*)yyvalptr).type = "func";
											(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 2).value + yyattribute(2 - 2).value;
										}
									} 
									else
									{
										if(yyattribute(2 - 2).value.find("[",0)!=-1)
										{
											string s = checkarraylimit(yyattribute(1 - 2).value,yyattribute(2 - 2).value);
											if(s == "false")
											{
												yyerror("Array limit error!");
												hasError = true;
											}
											else
											{
												while(feedback.find("*",0)!=-1)
												{
													feedback=feedback.substr(0,feedback.length()-1);
												}
												(*(YYSTYPE YYFAR*)yyvalptr).type = feedback;
												(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 2).value + s;
											}
											
										}
										else
										{
											(*(YYSTYPE YYFAR*)yyvalptr).type = feedback;
											(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 2).value + yyattribute(2 - 2).value;
										}
										if(yyattribute(2 - 2).value != "" && strstr(feedback.c_str(), "struct"))
										{
										    
											string s[20];
											string result;
											int num;
											string f=feedback.substr(7,feedback.length()-10);
											result=f;
											num = semiSplit(f, s);
											for(int i = 0; i< num; i++)
											{
												s[i] = s[i].substr(1, s[i].length() - 1);
												int p = s[i].find(" ",0);
												if(s[i].substr(p+1,s[i].length()-p) == yyattribute(2 - 2).value.substr(1, yyattribute(2 - 2).value.length() - 1))
												{
													result = s[i].substr(0,p);
													break;
												}
											}
											if (result == f){
											    yyerror("There is no such id.");
											    hasError = true;
											} 
											else
											{
												feedback=result;
												(*(YYSTYPE YYFAR*)yyvalptr).type = feedback;
												(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 2).value + yyattribute(2 - 2).value;
											}
											
										}
										
									}
									
										
										
								}
								
							

								
							
#line 3078 "myparser.cpp"
			}
		}
		break;
	case 156:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 1501 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 2).value+yyattribute(2 - 2).value;
							
#line 3093 "myparser.cpp"
			}
		}
		break;
	case 157:
		{
#line 1505 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "";
							
#line 3103 "myparser.cpp"
		}
		break;
	case 158:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1510 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3118 "myparser.cpp"
			}
		}
		break;
	case 159:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1515 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3134 "myparser.cpp"
			}
		}
		break;
	case 160:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1520 ".\\myparser.y"

								string array[20];
								int length=commaSplit(yyattribute(2 - 3).value,array);
								string array1[20];
								int length1=commaSplit(yyattribute(2 - 3).type,array1);
								for(int j = 0; j <length1;j++)
								{
									if(array1[j]!="int") {
									    yyerror("wrong type");
									    hasError = true;
									}
								}
								(*(YYSTYPE YYFAR*)yyvalptr).value="";
								for(int k = 0;k<length;k++)
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value += "["+ array[k] + "]";
								}								
								
							
#line 3165 "myparser.cpp"
			}
		}
		break;
	case 161:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 1540 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "." + yyattribute(2 - 2).value;
							
#line 3180 "myparser.cpp"
			}
		}
		break;
	case 162:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 1546 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3196 "myparser.cpp"
			}
		}
		break;
	case 163:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 1551 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "else\n{\n" + yyattribute(2 - 2).value + "}\n";
 							
#line 3211 "myparser.cpp"
			}
		}
		break;
	case 164:
		{
#line 1555 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "";
							
#line 3221 "myparser.cpp"
		}
		break;
	case 165:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1561 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(1 - 1).type;
							
#line 3236 "myparser.cpp"
			}
		}
		break;
	case 166:
		{
#line 1566 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "";
							
#line 3246 "myparser.cpp"
		}
		break;
	case 167:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1572 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3261 "myparser.cpp"
			}
		}
		break;
	case 168:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1577 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value+yyattribute(3 - 3).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(3 - 3).type;
								if(yyattribute(1 - 3).type!=yyattribute(3 - 3).type)
								{
									yyerror("Expressions are not consistent!");
									hasError = true;
								}		
							
#line 3282 "myparser.cpp"
			}
		}
		break;
	case 169:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1587 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(1 - 1).type;	
							
#line 3298 "myparser.cpp"
			}
		}
		break;
	case 170:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1595 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3314 "myparser.cpp"
			}
		}
		break;
	case 171:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1600 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "case " + yyattribute(1 - 3).value +":\n"+ yyattribute(3 - 3).value + "break;\n";
								(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(1 - 3).type;
							
#line 3330 "myparser.cpp"
			}
		}
		break;
	case 172:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1608 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3346 "myparser.cpp"
			}
		}
		break;
	case 173:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1613 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value+","+yyattribute(3 - 3).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type =yyattribute(3 - 3).type;
								if(yyattribute(1 - 3).type==yyattribute(3 - 3).type)
								{
									yyerror("Expressions are not consistent!");
									hasError = true;
								}
							
#line 3367 "myparser.cpp"
			}
		}
		break;
	case 174:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1623 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type =yyattribute(1 - 1).type;
							
#line 3383 "myparser.cpp"
			}
		}
		break;
	case 175:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1631 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "to";
							
#line 3398 "myparser.cpp"
			}
		}
		break;
	case 176:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1635 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "downto";
							
#line 3413 "myparser.cpp"
			}
		}
		break;
	case 177:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1642 ".\\myparser.y"

								
								string feedback=checkFunction(yyattribute(1 - 1).value,"");
								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value + "()";
								(*(YYSTYPE YYFAR*)yyvalptr).type = feedback;
								
								if(feedback == "not declared")
								{
									yyerror("id not declared");
									hasError = true;
								}
								else if(feedback == "wrong parameter type")
								{
									yyerror("wrong parameter type");
									hasError = true;
								}
								

								
							
#line 3445 "myparser.cpp"
			}
		}
		break;
	case 178:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1663 ".\\myparser.y"

								string feedback=checkFunction(yyattribute(1 - 4).value,yyattribute(3 - 4).type);

								string para=paraCallTrans(yyattribute(1 - 4).value,yyattribute(3 - 4).value);
								
								if(feedback == "not declared")
								{
									yyerror("id not declared");
									hasError = true;
								}
								else if(feedback == "wrong parameter type")
								{
									yyerror("wrong parameter type");
									hasError = true;
								}
								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 4).value + "(" + para + ")";
								(*(YYSTYPE YYFAR*)yyvalptr).type = feedback;
							
#line 3475 "myparser.cpp"
			}
		}
		break;
	case 179:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1682 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3491 "myparser.cpp"
			}
		}
		break;
	case 180:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1687 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3507 "myparser.cpp"
			}
		}
		break;
	case 181:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1704 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3523 "myparser.cpp"
			}
		}
		break;
	case 182:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1709 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3539 "myparser.cpp"
			}
		}
		break;
	case 183:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1714 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + "," + yyattribute(3 - 3).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type = yyattribute(3 - 3).type + "," + yyattribute(1 - 3).type;
							
#line 3555 "myparser.cpp"
			}
		}
		break;
	case 184:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1719 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type = yyattribute(1 - 1).type;
							
#line 3571 "myparser.cpp"
			}
		}
		break;
	case 185:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1727 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3587 "myparser.cpp"
			}
		}
		break;
	case 186:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1732 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3603 "myparser.cpp"
			}
		}
		break;
	case 187:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1737 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3619 "myparser.cpp"
			}
		}
		break;
	case 188:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1742 ".\\myparser.y"
	
								if(yyattribute(2 - 3).value == "=")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " == " + yyattribute(3 - 3).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
								}
								else if (yyattribute(2 - 3).value == "<>")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " != " + yyattribute(3 - 3).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
								}
								else if (yyattribute(2 - 3).value == "<")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " < " + yyattribute(3 - 3).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
								}
								else if (yyattribute(2 - 3).value == "<=")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " <= " + yyattribute(3 - 3).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
								}
								else if (yyattribute(2 - 3).value == ">")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " > " + yyattribute(3 - 3).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
								}
								else if (yyattribute(2 - 3).value == ">=")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " >= " + yyattribute(3 - 3).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
								}	
							
#line 3663 "myparser.cpp"
			}
		}
		break;
	case 189:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1775 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(1 - 1).type;
							
#line 3679 "myparser.cpp"
			}
		}
		break;
	case 190:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1782 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3695 "myparser.cpp"
			}
		}
		break;
	case 191:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1787 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3711 "myparser.cpp"
			}
		}
		break;
	case 192:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1792 ".\\myparser.y"
	
								if(yyattribute(2 - 3).value == "+")
								{
								
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " + " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type=="int"&&yyattribute(3 - 3).type=="int")
										(*(YYSTYPE YYFAR*)yyvalptr).type="int";
									else
										(*(YYSTYPE YYFAR*)yyvalptr).type="float";
								}
								else if (yyattribute(2 - 3).value == "-")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " - " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type=="int"&&yyattribute(3 - 3).type=="int")
										(*(YYSTYPE YYFAR*)yyvalptr).type="int";
									else
										(*(YYSTYPE YYFAR*)yyvalptr).type="float";
								}
								else if (yyattribute(2 - 3).value == "or")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " || " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type=="bool"&&yyattribute(3 - 3).type=="bool")
										(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
									else
									{
										yyerror("type error in or");
										hasError = true;
										(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
									}
								}
							
#line 3754 "myparser.cpp"
			}
		}
		break;
	case 193:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1824 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type = yyattribute(1 - 1).type;
							
#line 3770 "myparser.cpp"
			}
		}
		break;
	case 194:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 1829 ".\\myparser.y"

								if(yyattribute(1 - 2).value == "+")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = "+" +yyattribute(2 - 2).value;
									
								}
								else if(yyattribute(1 - 2).value == "-")
								{
								    (*(YYSTYPE YYFAR*)yyvalptr).value = "-" +yyattribute(2 - 2).value;
									
								} 
								if(yyattribute(2 - 2).type=="bool")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 2).value +yyattribute(2 - 2).value;
									yyerror("sign cannot be used for bool type");
									hasError = true;
								}       
								(*(YYSTYPE YYFAR*)yyvalptr).type = yyattribute(2 - 2).type;
							
#line 3801 "myparser.cpp"
			}
		}
		break;
	case 195:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1851 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3817 "myparser.cpp"
			}
		}
		break;
	case 196:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1856 ".\\myparser.y"
							
								if(yyattribute(2 - 3).value == "*")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " * " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type=="int"&&yyattribute(3 - 3).type=="int")
									{
										(*(YYSTYPE YYFAR*)yyvalptr).type="int";
									}
									else if(yyattribute(1 - 3).type=="float"||yyattribute(3 - 3).type=="float")
									{
										(*(YYSTYPE YYFAR*)yyvalptr).type="float";
									}
									else
									{
										(*(YYSTYPE YYFAR*)yyvalptr).type="float";
										yyerror("Invalid operands to binary operator '*'!");
										hasError = true;
									}
										
								}
								else if (yyattribute(2 - 3).value == "/")
								{
									if(yyattribute(1 - 3).type=="int"&&yyattribute(3 - 3).type=="int")
									{
										(*(YYSTYPE YYFAR*)yyvalptr).type="int";
										(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " / " + yyattribute(3 - 3).value; 
										if(atoi((yyattribute(3 - 3).value).c_str())==0)
										{
										    yyerror("zero error in div");
											hasError = true;
										}
									}
									else if(yyattribute(1 - 3).type=="float"||yyattribute(3 - 3).type=="float")
									{
										(*(YYSTYPE YYFAR*)yyvalptr).type="float";
										(*(YYSTYPE YYFAR*)yyvalptr).value = "(float) " + yyattribute(1 - 3).value + " / " + "(float) " + yyattribute(3 - 3).value;
										if(atoi((yyattribute(3 - 3).value).c_str())==0)
										{
										    yyerror("zero error in div");
									    }
									}
									else
									{
										(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " / " + yyattribute(3 - 3).value;
										(*(YYSTYPE YYFAR*)yyvalptr).type="float";
										yyerror("Invalid operands to binary operator '*'!");
										hasError = true;
									}
								
								}
								else if (yyattribute(2 - 3).value == "div")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " / " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type!="int"||yyattribute(3 - 3).type!="int")
									{
										yyerror("type error in div");
										hasError = true;
									}
									
									(*(YYSTYPE YYFAR*)yyvalptr).type="int";
								}
								else if (yyattribute(2 - 3).value == "mod")
								{	
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " % " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type=="int"&&yyattribute(3 - 3).type=="int")
										(*(YYSTYPE YYFAR*)yyvalptr).type="int";
									else
									{
										yyerror("type error in mod");
										hasError = true;
										(*(YYSTYPE YYFAR*)yyvalptr).type="int";
									}
								}
								else if (yyattribute(2 - 3).value == "and")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " & " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type=="bool"&&yyattribute(3 - 3).type=="bool")
										(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
									else
									{
										yyerror("type error in and");
										hasError = true;
										(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
									}
										
								}
							
#line 3916 "myparser.cpp"
			}
		}
		break;
	case 197:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1944 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(1 - 1).type;
							
#line 3932 "myparser.cpp"
			}
		}
		break;
	case 198:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1951 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3948 "myparser.cpp"
			}
		}
		break;
	case 199:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1956 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3964 "myparser.cpp"
			}
		}
		break;
	case 200:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1961 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3980 "myparser.cpp"
			}
		}
		break;
	case 201:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1971 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 3996 "myparser.cpp"
			}
		}
		break;
	case 202:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1976 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 4012 "myparser.cpp"
			}
		}
		break;
	case 203:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1981 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type = yyattribute(1 - 1).type;	
							
#line 4028 "myparser.cpp"
			}
		}
		break;
	case 204:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1986 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type = yyattribute(1 - 1).type;	
							
#line 4044 "myparser.cpp"
			}
		}
		break;
	case 205:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1991 ".\\myparser.y"

//								string feedback = checkParaQuote($1.value);
//								if(feedback != "" && feedback[0] == 'v')
//								{
//									$$.value = "*" + $1.value + " * " + "(" + $3.value + ")";
//									$$.type = feedback.substr(1,feedback.length()-1);
//								}
//								else
//								{
//									feedback=checkSymbolTable_quote($1.value); 
//									if(feedback=="false")
//									{
//										yyerror("This id hasn't been declared!");
//									} 
//									$$.type = feedback;
//									$$.value += $1.value + " * " + "(" + $3.value + ")";
//								}
								//4.13gai
								string feedback = checkParaQuote(yyattribute(1 - 4).value);
								if(feedback != "" && feedback[0] == 'v')
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = "*" + yyattribute(1 - 4).value + "(" + yyattribute(3 - 4).value + ")";
									(*(YYSTYPE YYFAR*)yyvalptr).type = feedback.substr(1,feedback.length()-1);
								}
								else
								{
									feedback=checkSymbolTable_quote(yyattribute(1 - 4).value); 
									if(feedback=="false")
									{
										yyerror("This id hasn't been declared!");
										hasError = true;
									} 
									(*(YYSTYPE YYFAR*)yyvalptr).type = feedback;
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 4).value + "(" + yyattribute(3 - 4).value + ")";
								}



								
								
							
#line 4097 "myparser.cpp"
			}
		}
		break;
	case 206:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 2033 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "(" + yyattribute(2 - 3).value + ")";
								(*(YYSTYPE YYFAR*)yyvalptr).type = yyattribute(2 - 3).type;
							
#line 4113 "myparser.cpp"
			}
		}
		break;
	case 207:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 2038 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "!" + yyattribute(2 - 2).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type = yyattribute(2 - 2).type;
							
#line 4129 "myparser.cpp"
			}
		}
		break;
	case 208:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 2043 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "1";
								(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
							
#line 4145 "myparser.cpp"
			}
		}
		break;
	case 209:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 2048 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "0";
								(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
							
#line 4161 "myparser.cpp"
			}
		}
		break;
	case 210:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 2056 ".\\myparser.y"


								string feedback = checkParaQuote(yyattribute(1 - 1).value);
								if(feedback != "" && feedback[0] == 'v')
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = "*" + yyattribute(1 - 1).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type = feedback.substr(1,feedback.length()-1);
								}
								else
								{
									feedback=checkSymbolTable_quote(yyattribute(1 - 1).value); 
									if(feedback=="false")
									{
										yyerror("This name hasn't been declared!");
										hasError = true;
									} 
									
									(*(YYSTYPE YYFAR*)yyvalptr).type = feedback;
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								}
									
								
							
#line 4196 "myparser.cpp"
			}
		}
		break;
	case 211:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 2081 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type = "float";
								
							
							
#line 4214 "myparser.cpp"
			}
		}
		break;
	case 212:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 2088 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type = "int";
								
							
							
#line 4232 "myparser.cpp"
			}
		}
		break;
	case 213:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 2095 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "'" + IntToChar(yyattribute(1 - 1).value) + "'";
							
#line 4247 "myparser.cpp"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "PROGRAM", 1 },
		{ "FUNCTION", 2 },
		{ "PROCEDURE", 3 },
		{ "INTEGER", 4 },
		{ "REAL", 5 },
		{ "BOOLEAN", 6 },
		{ "ARRAY", 7 },
		{ "RECORD", 8 },
		{ "VAR", 9 },
		{ "BEGIN", 10 },
		{ "END", 11 },
		{ "OF", 12 },
		{ "IF", 13 },
		{ "THEN", 14 },
		{ "ELSE", 15 },
		{ "WHILE", 16 },
		{ "DO", 17 },
		{ "NOT", 18 },
		{ "TRUE", 19 },
		{ "FALSE", 20 },
		{ "READ", 21 },
		{ "WRITE", 22 },
		{ "COMMA", 37 },
		{ "SEMICOLON", 38 },
		{ "DEFINE", 39 },
		{ "LEFTCUBE", 40 },
		{ "RIGHTCUBE", 41 },
		{ "LEFTCIRCLE", 42 },
		{ "RIGHTCIRCLE", 43 },
		{ "NUM", 46 },
		{ "DIGITS", 47 },
		{ "ID", 48 },
		{ "RELOP", 49 },
		{ "ADDOP", 50 },
		{ "MULOP", 51 },
		{ "ASSIGNOP", 52 },
		{ "FOR", 53 },
		{ "TO", 54 },
		{ "CONST", 55 },
		{ "TYPE", 56 },
		{ "QUOTE", 57 },
		{ "LETTER", 58 },
		{ "CHAR", 59 },
		{ "ELLIPSIS", 60 },
		{ "POINT", 61 },
		{ "CASE", 62 },
		{ "REPEAT", 63 },
		{ "UNTIL", 64 },
		{ "DOWNTO", 65 },
		{ "error", 256 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: Program",
		"Program: error program_body POINT",
		"Program: program_head program_body error",
		"Program: program_head program_body POINT",
		"program_head: PROGRAM ID LEFTCIRCLE identifier_list1 RIGHTCIRCLE error",
		"program_head: error ID LEFTCIRCLE identifier_list1 RIGHTCIRCLE SEMICOLON",
		"program_head: PROGRAM error LEFTCIRCLE identifier_list1 RIGHTCIRCLE SEMICOLON",
		"program_head: PROGRAM ID error identifier_list1 RIGHTCIRCLE SEMICOLON",
		"program_head: PROGRAM ID LEFTCIRCLE error RIGHTCIRCLE SEMICOLON",
		"program_head: PROGRAM ID LEFTCIRCLE identifier_list1 error SEMICOLON",
		"program_head: PROGRAM ID LEFTCIRCLE identifier_list1 RIGHTCIRCLE SEMICOLON",
		"program_body: const_declarations type_declarations var_declarations subprogram_declarations compound_statement",
		"program_body: error type_declarations var_declarations subprogram_declarations compound_statement",
		"program_body: const_declarations error var_declarations subprogram_declarations compound_statement",
		"program_body: const_declarations type_declarations error subprogram_declarations compound_statement",
		"program_body: const_declarations type_declarations var_declarations error compound_statement",
		"program_body: const_declarations type_declarations var_declarations subprogram_declarations error",
		"identifier_list1: error COMMA ID",
		"identifier_list1: ID error ID",
		"identifier_list1: ID COMMA error",
		"identifier_list1: ID COMMA ID",
		"identifier_list: error ID identifier_list",
		"identifier_list: COMMA error identifier_list",
		"identifier_list: error type",
		"identifier_list: COMMA ID identifier_list",
		"identifier_list: DEFINE type",
		"const_declarations: error const_declaration SEMICOLON",
		"const_declarations: CONST const_declaration error",
		"const_declarations: CONST const_declaration SEMICOLON",
		"const_declarations:",
		"const_declarations:",
		"const_declaration: const_declaration error ID RELOP const_variable",
		"const_declaration: const_declaration SEMICOLON error RELOP const_variable",
		"const_declaration: const_declaration SEMICOLON ID error const_variable",
		"const_declaration: error RELOP const_variable",
		"const_declaration: ID error const_variable",
		"const_declaration: const_declaration SEMICOLON ID RELOP const_variable",
		"const_declaration: ID RELOP const_variable",
		"const_variable: ADDOP ID",
		"const_variable: ID",
		"const_variable: ADDOP NUM",
		"const_variable: NUM",
		"const_variable: ADDOP DIGITS",
		"const_variable: DIGITS",
		"const_variable: QUOTE LETTER QUOTE",
		"type_declarations: error type_declaration SEMICOLON",
		"type_declarations: TYPE type_declaration error",
		"type_declarations: TYPE type_declaration SEMICOLON",
		"type_declarations:",
		"type_declaration: type_declaration error ID RELOP type",
		"type_declaration: type_declaration SEMICOLON error RELOP type",
		"type_declaration: type_declaration SEMICOLON ID error type",
		"type_declaration: error RELOP type",
		"type_declaration: ID error type",
		"type_declaration: type_declaration SEMICOLON ID RELOP type",
		"type_declaration: ID RELOP type",
		"type: error record_body END",
		"type: RECORD record_body error",
		"type: error LEFTCUBE periods RIGHTCUBE OF type",
		"type: ARRAY error periods RIGHTCUBE OF type",
		"type: ARRAY LEFTCUBE periods error OF type",
		"type: ARRAY LEFTCUBE periods RIGHTCUBE error type",
		"type: standard_type",
		"type: RECORD record_body END",
		"type: ARRAY LEFTCUBE periods RIGHTCUBE OF type",
		"type: ID",
		"standard_type: INTEGER",
		"standard_type: REAL",
		"standard_type: BOOLEAN",
		"standard_type: CHAR",
		"record_body: body_declaration error",
		"record_body: body_declaration SEMICOLON",
		"record_body:",
		"body_declaration: body_declaration SEMICOLON error identifier_list",
		"body_declaration: body_declaration error ID identifier_list",
		"body_declaration: body_declaration SEMICOLON ID identifier_list",
		"body_declaration: ID identifier_list",
		"periods: periods error period",
		"periods: periods COMMA period",
		"periods: period",
		"period: const_variable error const_variable",
		"period: const_variable ELLIPSIS const_variable",
		"var_declarations: VAR var_declaration error",
		"var_declarations: error var_declaration SEMICOLON",
		"var_declarations: VAR var_declaration SEMICOLON",
		"var_declarations:",
		"var_declaration: var_declaration SEMICOLON error identifier_list",
		"var_declaration: var_declaration error ID identifier_list",
		"var_declaration: var_declaration SEMICOLON ID identifier_list",
		"var_declaration: ID identifier_list",
		"subprogram_declarations: subprogram_declarations subprogram_declaration SEMICOLON",
		"subprogram_declarations: error subprogram_declaration SEMICOLON",
		"subprogram_declarations: subprogram_declarations error SEMICOLON",
		"subprogram_declarations:",
		"subprogram_declaration: subprogram_head subprogram_body",
		"subprogram_head: error FUNCTION ID formal_parameter DEFINE type SEMICOLON",
		"subprogram_head: FUNCTION error formal_parameter DEFINE type SEMICOLON",
		"subprogram_head: FUNCTION ID formal_parameter error type SEMICOLON",
		"subprogram_head: FUNCTION ID formal_parameter DEFINE error SEMICOLON",
		"subprogram_head: FUNCTION ID formal_parameter DEFINE type error",
		"subprogram_head: error ID formal_parameter SEMICOLON",
		"subprogram_head: PROCEDURE error formal_parameter SEMICOLON",
		"subprogram_head: PROCEDURE ID error SEMICOLON",
		"subprogram_head: PROCEDURE ID formal_parameter error",
		"subprogram_head: FUNCTION ID formal_parameter DEFINE type SEMICOLON",
		"subprogram_head: PROCEDURE ID formal_parameter SEMICOLON",
		"subprogram_body: const_declarations type_declarations var_declarations compound_statement",
		"formal_parameter: error parameter_lists RIGHTCIRCLE",
		"formal_parameter: LEFTCIRCLE error RIGHTCIRCLE",
		"formal_parameter: LEFTCIRCLE parameter_lists error",
		"formal_parameter: LEFTCIRCLE parameter_lists RIGHTCIRCLE",
		"formal_parameter:",
		"parameter_lists: parameter_lists error parameter_list",
		"parameter_lists: parameter_lists SEMICOLON parameter_list",
		"parameter_lists: parameter_list",
		"parameter_list: var_parameter",
		"parameter_list: value_parameter",
		"var_parameter: error value_parameter",
		"var_parameter: VAR value_parameter",
		"value_parameter: ID identifier_list",
		"compound_statement: BEGIN statement_list END",
		"compound_statement: error statement_list END",
		"compound_statement: BEGIN statement_list error",
		"statement_list: statement_list SEMICOLON statement",
		"statement_list: statement",
		"statement_list: statement_list error statement",
		"statement: error ASSIGNOP expression",
		"statement: variable ASSIGNOP error",
		"statement: variable error expression",
		"statement: error expression THEN statement else_part",
		"statement: IF error THEN statement else_part",
		"statement: IF expression error statement else_part",
		"statement: error expression DO statement",
		"statement: WHILE error DO statement",
		"statement: WHILE expression error statement",
		"statement: error ID ASSIGNOP expression updown expression DO statement",
		"statement: FOR ID error expression updown expression DO statement",
		"statement: FOR ID ASSIGNOP error updown expression DO statement",
		"statement: FOR ID ASSIGNOP expression updown error DO statement",
		"statement: FOR ID ASSIGNOP expression updown expression error statement",
		"statement: error expression OF case_body END",
		"statement: CASE error OF case_body END",
		"statement: CASE expression error case_body END",
		"statement: error statement_list UNTIL expression",
		"statement: REPEAT statement_list error expression",
		"statement: REPEAT statement_list UNTIL error",
		"statement: variable ASSIGNOP expression",
		"statement: call_procedure_statement",
		"statement: compound_statement",
		"statement: IF expression THEN statement else_part",
		"statement: CASE expression OF case_body END",
		"statement: WHILE expression DO statement",
		"statement: REPEAT statement_list UNTIL expression",
		"statement: FOR ID ASSIGNOP expression updown expression DO statement",
		"statement: READ LEFTCIRCLE expression_list RIGHTCIRCLE",
		"statement: WRITE LEFTCIRCLE expression_list RIGHTCIRCLE",
		"statement:",
		"variable: ID id_varparts",
		"id_varparts: id_varparts id_varpart",
		"id_varparts:",
		"id_varpart: error expression_list RIGHTCUBE",
		"id_varpart: LEFTCUBE expression_list error",
		"id_varpart: LEFTCUBE expression_list RIGHTCUBE",
		"id_varpart: POINT ID",
		"else_part: error statement",
		"else_part: ELSE statement",
		"else_part:",
		"case_body: branch_list",
		"case_body:",
		"branch_list: branch_list error branch",
		"branch_list: branch_list SEMICOLON branch",
		"branch_list: branch",
		"branch: const_list error statement",
		"branch: const_list DEFINE statement",
		"const_list: const_list error const_variable",
		"const_list: const_list COMMA const_variable",
		"const_list: const_variable",
		"updown: TO",
		"updown: DOWNTO",
		"call_procedure_statement: ID",
		"call_procedure_statement: ID LEFTCIRCLE expression_list RIGHTCIRCLE",
		"call_procedure_statement: ID error expression_list RIGHTCIRCLE",
		"call_procedure_statement: ID LEFTCIRCLE expression_list error",
		"expression_list: expression_list error expression",
		"expression_list: expression_list COMMA error",
		"expression_list: expression_list COMMA expression",
		"expression_list: expression",
		"expression: simple_expression RELOP error",
		"expression: error RELOP simple_expression",
		"expression: simple_expression error SEMICOLON",
		"expression: simple_expression RELOP simple_expression",
		"expression: simple_expression",
		"simple_expression: simple_expression error term",
		"simple_expression: simple_expression ADDOP error",
		"simple_expression: simple_expression ADDOP term",
		"simple_expression: term",
		"simple_expression: ADDOP term",
		"term: term error factor",
		"term: term MULOP factor",
		"term: factor",
		"factor: error LEFTCIRCLE expression_list RIGHTCIRCLE",
		"factor: ID error expression_list RIGHTCIRCLE",
		"factor: ID LEFTCIRCLE expression_list error",
		"factor: error expression_list RIGHTCIRCLE",
		"factor: LEFTCIRCLE expression_list error",
		"factor: unsign_const_variable",
		"factor: variable",
		"factor: ID LEFTCIRCLE expression_list RIGHTCIRCLE",
		"factor: LEFTCIRCLE expression RIGHTCIRCLE",
		"factor: NOT factor",
		"factor: TRUE",
		"factor: FALSE",
		"unsign_const_variable: ID",
		"unsign_const_variable: NUM",
		"unsign_const_variable: DIGITS",
		"unsign_const_variable: LETTER"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 3, 0 },
		{ 1, 3, 1 },
		{ 1, 3, 2 },
		{ 2, 6, 3 },
		{ 2, 6, 4 },
		{ 2, 6, 5 },
		{ 2, 6, 6 },
		{ 2, 6, 7 },
		{ 2, 6, 8 },
		{ 2, 6, 9 },
		{ 3, 5, 10 },
		{ 3, 5, 11 },
		{ 3, 5, 12 },
		{ 3, 5, 13 },
		{ 3, 5, 14 },
		{ 3, 5, 15 },
		{ 4, 3, 16 },
		{ 4, 3, 17 },
		{ 4, 3, 18 },
		{ 4, 3, 19 },
		{ 5, 3, 20 },
		{ 5, 3, 21 },
		{ 5, 2, 22 },
		{ 5, 3, 23 },
		{ 5, 2, 24 },
		{ 6, 3, 25 },
		{ 6, 3, 26 },
		{ 6, 3, 27 },
		{ 6, 0, 28 },
		{ 6, 0, -1 },
		{ 7, 5, 29 },
		{ 7, 5, 30 },
		{ 7, 5, 31 },
		{ 7, 3, 32 },
		{ 7, 3, 33 },
		{ 7, 5, 34 },
		{ 7, 3, 35 },
		{ 8, 2, 36 },
		{ 8, 1, 37 },
		{ 8, 2, 38 },
		{ 8, 1, 39 },
		{ 8, 2, 40 },
		{ 8, 1, 41 },
		{ 8, 3, 42 },
		{ 9, 3, 43 },
		{ 9, 3, 44 },
		{ 9, 3, 45 },
		{ 9, 0, 46 },
		{ 10, 5, 47 },
		{ 10, 5, 48 },
		{ 10, 5, 49 },
		{ 10, 3, 50 },
		{ 10, 3, 51 },
		{ 10, 5, 52 },
		{ 10, 3, 53 },
		{ 11, 3, 54 },
		{ 11, 3, 55 },
		{ 11, 6, 56 },
		{ 11, 6, 57 },
		{ 11, 6, 58 },
		{ 11, 6, 59 },
		{ 11, 1, 60 },
		{ 11, 3, 61 },
		{ 11, 6, 62 },
		{ 11, 1, 63 },
		{ 12, 1, 64 },
		{ 12, 1, 65 },
		{ 12, 1, 66 },
		{ 12, 1, 67 },
		{ 13, 2, 68 },
		{ 13, 2, 69 },
		{ 13, 0, 70 },
		{ 14, 4, 71 },
		{ 14, 4, 72 },
		{ 14, 4, 73 },
		{ 14, 2, 74 },
		{ 15, 3, 75 },
		{ 15, 3, 76 },
		{ 15, 1, 77 },
		{ 16, 3, 78 },
		{ 16, 3, 79 },
		{ 17, 3, 80 },
		{ 17, 3, 81 },
		{ 17, 3, 82 },
		{ 17, 0, 83 },
		{ 18, 4, 84 },
		{ 18, 4, 85 },
		{ 18, 4, 86 },
		{ 18, 2, 87 },
		{ 19, 3, 88 },
		{ 19, 3, 89 },
		{ 19, 3, 90 },
		{ 19, 0, 91 },
		{ 20, 2, 92 },
		{ 21, 7, 93 },
		{ 21, 6, 94 },
		{ 21, 6, 95 },
		{ 21, 6, 96 },
		{ 21, 6, 97 },
		{ 21, 4, 98 },
		{ 21, 4, 99 },
		{ 21, 4, 100 },
		{ 21, 4, 101 },
		{ 21, 6, 102 },
		{ 21, 4, 103 },
		{ 22, 4, 104 },
		{ 23, 3, 105 },
		{ 23, 3, 106 },
		{ 23, 3, 107 },
		{ 23, 3, 108 },
		{ 23, 0, 109 },
		{ 24, 3, 110 },
		{ 24, 3, 111 },
		{ 24, 1, 112 },
		{ 25, 1, 113 },
		{ 25, 1, 114 },
		{ 26, 2, 115 },
		{ 26, 2, 116 },
		{ 27, 2, 117 },
		{ 28, 3, 118 },
		{ 28, 3, 119 },
		{ 28, 3, 120 },
		{ 29, 3, 121 },
		{ 29, 1, 122 },
		{ 29, 3, 123 },
		{ 30, 3, 124 },
		{ 30, 3, 125 },
		{ 30, 3, 126 },
		{ 30, 5, 127 },
		{ 30, 5, 128 },
		{ 30, 5, 129 },
		{ 30, 4, 130 },
		{ 30, 4, 131 },
		{ 30, 4, 132 },
		{ 30, 8, 133 },
		{ 30, 8, 134 },
		{ 30, 8, 135 },
		{ 30, 8, 136 },
		{ 30, 8, 137 },
		{ 30, 5, 138 },
		{ 30, 5, 139 },
		{ 30, 5, 140 },
		{ 30, 4, 141 },
		{ 30, 4, 142 },
		{ 30, 4, 143 },
		{ 30, 3, 144 },
		{ 30, 1, 145 },
		{ 30, 1, 146 },
		{ 30, 5, 147 },
		{ 30, 5, 148 },
		{ 30, 4, 149 },
		{ 30, 4, 150 },
		{ 30, 8, 151 },
		{ 30, 4, 152 },
		{ 30, 4, 153 },
		{ 30, 0, 154 },
		{ 31, 2, 155 },
		{ 32, 2, 156 },
		{ 32, 0, 157 },
		{ 33, 3, 158 },
		{ 33, 3, 159 },
		{ 33, 3, 160 },
		{ 33, 2, 161 },
		{ 34, 2, 162 },
		{ 34, 2, 163 },
		{ 34, 0, 164 },
		{ 35, 1, 165 },
		{ 35, 0, 166 },
		{ 36, 3, 167 },
		{ 36, 3, 168 },
		{ 36, 1, 169 },
		{ 37, 3, 170 },
		{ 37, 3, 171 },
		{ 38, 3, 172 },
		{ 38, 3, 173 },
		{ 38, 1, 174 },
		{ 39, 1, 175 },
		{ 39, 1, 176 },
		{ 40, 1, 177 },
		{ 40, 4, 178 },
		{ 40, 4, 179 },
		{ 40, 4, 180 },
		{ 41, 3, 181 },
		{ 41, 3, 182 },
		{ 41, 3, 183 },
		{ 41, 1, 184 },
		{ 42, 3, 185 },
		{ 42, 3, 186 },
		{ 42, 3, 187 },
		{ 42, 3, 188 },
		{ 42, 1, 189 },
		{ 43, 3, 190 },
		{ 43, 3, 191 },
		{ 43, 3, 192 },
		{ 43, 1, 193 },
		{ 43, 2, 194 },
		{ 44, 3, 195 },
		{ 44, 3, 196 },
		{ 44, 1, 197 },
		{ 45, 4, 198 },
		{ 45, 4, 199 },
		{ 45, 4, 200 },
		{ 45, 3, 201 },
		{ 45, 3, 202 },
		{ 45, 1, 203 },
		{ 45, 1, 204 },
		{ 45, 4, 205 },
		{ 45, 3, 206 },
		{ 45, 2, 207 },
		{ 45, 1, 208 },
		{ 45, 1, 209 },
		{ 46, 1, 210 },
		{ 46, 1, 211 },
		{ 46, 1, 212 },
		{ 46, 1, 213 }
	};
	yyreduction = reduction;

	yytokenaction_size = 1054;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 260, YYAT_SHIFT, 137 },
		{ 89, YYAT_SHIFT, 132 },
		{ 89, YYAT_SHIFT, 133 },
		{ 260, YYAT_SHIFT, 181 },
		{ 302, YYAT_SHIFT, 137 },
		{ 494, YYAT_SHIFT, 507 },
		{ 260, YYAT_SHIFT, 182 },
		{ 84, YYAT_ERROR, 0 },
		{ 260, YYAT_SHIFT, 231 },
		{ 260, YYAT_SHIFT, 232 },
		{ 260, YYAT_SHIFT, 233 },
		{ 260, YYAT_SHIFT, 183 },
		{ 260, YYAT_SHIFT, 184 },
		{ 0, YYAT_SHIFT, 1 },
		{ 241, YYAT_SHIFT, 316 },
		{ 12, YYAT_SHIFT, 27 },
		{ 378, YYAT_SHIFT, 284 },
		{ 433, YYAT_SHIFT, 387 },
		{ 189, YYAT_SHIFT, 137 },
		{ 134, YYAT_SHIFT, 175 },
		{ 257, YYAT_SHIFT, 267 },
		{ 189, YYAT_SHIFT, 181 },
		{ 230, YYAT_SHIFT, 47 },
		{ 433, YYAT_SHIFT, 484 },
		{ 189, YYAT_SHIFT, 182 },
		{ 376, YYAT_SHIFT, 284 },
		{ 189, YYAT_SHIFT, 231 },
		{ 189, YYAT_SHIFT, 232 },
		{ 189, YYAT_SHIFT, 233 },
		{ 189, YYAT_SHIFT, 183 },
		{ 189, YYAT_SHIFT, 184 },
		{ 503, YYAT_SHIFT, 510 },
		{ 260, YYAT_SHIFT, 312 },
		{ 26, YYAT_SHIFT, 47 },
		{ 270, YYAT_SHIFT, 284 },
		{ 248, YYAT_SHIFT, 324 },
		{ 260, YYAT_SHIFT, 235 },
		{ 260, YYAT_SHIFT, 236 },
		{ 260, YYAT_SHIFT, 258 },
		{ 260, YYAT_SHIFT, 313 },
		{ 260, YYAT_SHIFT, 238 },
		{ 23, YYAT_SHIFT, 47 },
		{ 260, YYAT_SHIFT, 259 },
		{ 260, YYAT_SHIFT, 186 },
		{ 431, YYAT_SHIFT, 481 },
		{ 193, YYAT_SHIFT, 266 },
		{ 257, YYAT_SHIFT, 339 },
		{ 156, YYAT_SHIFT, 206 },
		{ 260, YYAT_SHIFT, 239 },
		{ 379, YYAT_SHIFT, 446 },
		{ 189, YYAT_SHIFT, 234 },
		{ 379, YYAT_SHIFT, 157 },
		{ 260, YYAT_SHIFT, 187 },
		{ 260, YYAT_SHIFT, 188 },
		{ 189, YYAT_SHIFT, 235 },
		{ 189, YYAT_SHIFT, 236 },
		{ 189, YYAT_SHIFT, 258 },
		{ 498, YYAT_REDUCE, 179 },
		{ 189, YYAT_SHIFT, 238 },
		{ 379, YYAT_SHIFT, 154 },
		{ 189, YYAT_SHIFT, 259 },
		{ 189, YYAT_SHIFT, 186 },
		{ 484, YYAT_REDUCE, 181 },
		{ 263, YYAT_SHIFT, 271 },
		{ 376, YYAT_SHIFT, 285 },
		{ 134, YYAT_SHIFT, 176 },
		{ 189, YYAT_SHIFT, 239 },
		{ 495, YYAT_SHIFT, 509 },
		{ 116, YYAT_SHIFT, 157 },
		{ 340, YYAT_SHIFT, 137 },
		{ 189, YYAT_SHIFT, 187 },
		{ 189, YYAT_SHIFT, 188 },
		{ 340, YYAT_SHIFT, 181 },
		{ 270, YYAT_SHIFT, 355 },
		{ 25, YYAT_SHIFT, 47 },
		{ 340, YYAT_SHIFT, 182 },
		{ 116, YYAT_SHIFT, 154 },
		{ 340, YYAT_SHIFT, 231 },
		{ 340, YYAT_SHIFT, 232 },
		{ 340, YYAT_SHIFT, 233 },
		{ 340, YYAT_SHIFT, 183 },
		{ 340, YYAT_SHIFT, 184 },
		{ 492, YYAT_SHIFT, 505 },
		{ 498, YYAT_REDUCE, 39 },
		{ 498, YYAT_REDUCE, 179 },
		{ 498, YYAT_REDUCE, 39 },
		{ 274, YYAT_SHIFT, 359 },
		{ 476, YYAT_SHIFT, 137 },
		{ 498, YYAT_SHIFT, 251 },
		{ 484, YYAT_REDUCE, 181 },
		{ 476, YYAT_SHIFT, 181 },
		{ 256, YYAT_SHIFT, 337 },
		{ 432, YYAT_SHIFT, 468 },
		{ 476, YYAT_SHIFT, 182 },
		{ 423, YYAT_SHIFT, 474 },
		{ 483, YYAT_SHIFT, 234 },
		{ 423, YYAT_SHIFT, 475 },
		{ 471, YYAT_SHIFT, 493 },
		{ 476, YYAT_SHIFT, 183 },
		{ 476, YYAT_SHIFT, 184 },
		{ 145, YYAT_SHIFT, 175 },
		{ 340, YYAT_SHIFT, 234 },
		{ 483, YYAT_ERROR, 0 },
		{ 432, YYAT_SHIFT, 469 },
		{ 481, YYAT_REDUCE, 180 },
		{ 340, YYAT_SHIFT, 235 },
		{ 340, YYAT_SHIFT, 236 },
		{ 340, YYAT_SHIFT, 429 },
		{ 145, YYAT_SHIFT, 137 },
		{ 340, YYAT_SHIFT, 238 },
		{ 222, YYAT_SHIFT, 293 },
		{ 145, YYAT_SHIFT, 181 },
		{ 340, YYAT_SHIFT, 186 },
		{ 25, YYAT_SHIFT, 41 },
		{ 145, YYAT_SHIFT, 182 },
		{ 484, YYAT_REDUCE, 181 },
		{ 263, YYAT_SHIFT, 349 },
		{ 340, YYAT_SHIFT, 239 },
		{ 138, YYAT_SHIFT, 175 },
		{ 145, YYAT_SHIFT, 183 },
		{ 145, YYAT_SHIFT, 184 },
		{ 340, YYAT_SHIFT, 187 },
		{ 340, YYAT_SHIFT, 188 },
		{ 476, YYAT_SHIFT, 63 },
		{ 476, YYAT_SHIFT, 64 },
		{ 476, YYAT_SHIFT, 498 },
		{ 138, YYAT_SHIFT, 137 },
		{ 476, YYAT_SHIFT, 66 },
		{ 29, YYAT_SHIFT, 54 },
		{ 138, YYAT_SHIFT, 181 },
		{ 476, YYAT_SHIFT, 186 },
		{ 481, YYAT_REDUCE, 180 },
		{ 138, YYAT_SHIFT, 182 },
		{ 435, YYAT_SHIFT, 458 },
		{ 476, YYAT_SHIFT, 67 },
		{ 482, YYAT_REDUCE, 182 },
		{ 145, YYAT_SHIFT, 195 },
		{ 138, YYAT_SHIFT, 183 },
		{ 138, YYAT_SHIFT, 184 },
		{ 476, YYAT_SHIFT, 187 },
		{ 476, YYAT_SHIFT, 188 },
		{ 397, YYAT_SHIFT, 458 },
		{ 482, YYAT_SHIFT, 231 },
		{ 482, YYAT_SHIFT, 232 },
		{ 482, YYAT_SHIFT, 233 },
		{ 208, YYAT_SHIFT, 273 },
		{ 145, YYAT_SHIFT, 196 },
		{ 396, YYAT_SHIFT, 458 },
		{ 292, YYAT_SHIFT, 374 },
		{ 208, YYAT_SHIFT, 283 },
		{ 391, YYAT_SHIFT, 458 },
		{ 145, YYAT_SHIFT, 186 },
		{ 392, YYAT_SHIFT, 461 },
		{ 292, YYAT_SHIFT, 377 },
		{ 138, YYAT_SHIFT, 195 },
		{ 253, YYAT_SHIFT, 330 },
		{ 462, YYAT_ERROR, 0 },
		{ 481, YYAT_REDUCE, 180 },
		{ 196, YYAT_REDUCE, 179 },
		{ 145, YYAT_REDUCE, 16 },
		{ 145, YYAT_SHIFT, 187 },
		{ 145, YYAT_SHIFT, 188 },
		{ 482, YYAT_REDUCE, 182 },
		{ 414, YYAT_SHIFT, 465 },
		{ 138, YYAT_SHIFT, 196 },
		{ 185, YYAT_REDUCE, 159 },
		{ 482, YYAT_SHIFT, 234 },
		{ 185, YYAT_SHIFT, 251 },
		{ 200, YYAT_SHIFT, 274 },
		{ 138, YYAT_SHIFT, 186 },
		{ 482, YYAT_SHIFT, 235 },
		{ 482, YYAT_SHIFT, 236 },
		{ 482, YYAT_SHIFT, 237 },
		{ 143, YYAT_SHIFT, 175 },
		{ 482, YYAT_SHIFT, 238 },
		{ 451, YYAT_SHIFT, 489 },
		{ 253, YYAT_SHIFT, 331 },
		{ 185, YYAT_REDUCE, 159 },
		{ 138, YYAT_SHIFT, 187 },
		{ 138, YYAT_SHIFT, 188 },
		{ 434, YYAT_SHIFT, 485 },
		{ 143, YYAT_SHIFT, 137 },
		{ 482, YYAT_SHIFT, 239 },
		{ 426, YYAT_SHIFT, 480 },
		{ 143, YYAT_SHIFT, 181 },
		{ 196, YYAT_REDUCE, 111 },
		{ 185, YYAT_REDUCE, 159 },
		{ 143, YYAT_SHIFT, 182 },
		{ 482, YYAT_REDUCE, 182 },
		{ 196, YYAT_SHIFT, 269 },
		{ 112, YYAT_SHIFT, 152 },
		{ 429, YYAT_SHIFT, 341 },
		{ 143, YYAT_SHIFT, 183 },
		{ 143, YYAT_SHIFT, 184 },
		{ 424, YYAT_SHIFT, 477 },
		{ 403, YYAT_SHIFT, 321 },
		{ 493, YYAT_SHIFT, 506 },
		{ 493, YYAT_SHIFT, 231 },
		{ 493, YYAT_SHIFT, 232 },
		{ 493, YYAT_SHIFT, 233 },
		{ 237, YYAT_SHIFT, 308 },
		{ 487, YYAT_SHIFT, 124 },
		{ 487, YYAT_REDUCE, 65 },
		{ 487, YYAT_SHIFT, 125 },
		{ 380, YYAT_SHIFT, 447 },
		{ 225, YYAT_SHIFT, 297 },
		{ 487, YYAT_SHIFT, 308 },
		{ 487, YYAT_REDUCE, 65 },
		{ 389, YYAT_SHIFT, 455 },
		{ 229, YYAT_SHIFT, 41 },
		{ 12, YYAT_SHIFT, 28 },
		{ 452, YYAT_SHIFT, 231 },
		{ 452, YYAT_SHIFT, 232 },
		{ 452, YYAT_SHIFT, 233 },
		{ 155, YYAT_SHIFT, 204 },
		{ 504, YYAT_SHIFT, 124 },
		{ 227, YYAT_SHIFT, 220 },
		{ 504, YYAT_SHIFT, 125 },
		{ 83, YYAT_SHIFT, 130 },
		{ 143, YYAT_SHIFT, 196 },
		{ 504, YYAT_SHIFT, 308 },
		{ 493, YYAT_SHIFT, 312 },
		{ 82, YYAT_SHIFT, 128 },
		{ 176, YYAT_SHIFT, 220 },
		{ 143, YYAT_SHIFT, 186 },
		{ 493, YYAT_SHIFT, 235 },
		{ 493, YYAT_SHIFT, 236 },
		{ 493, YYAT_SHIFT, 237 },
		{ 493, YYAT_SHIFT, 313 },
		{ 493, YYAT_SHIFT, 238 },
		{ 488, YYAT_SHIFT, 231 },
		{ 488, YYAT_SHIFT, 232 },
		{ 488, YYAT_SHIFT, 233 },
		{ 143, YYAT_SHIFT, 187 },
		{ 143, YYAT_SHIFT, 188 },
		{ 452, YYAT_SHIFT, 312 },
		{ 433, YYAT_SHIFT, 395 },
		{ 493, YYAT_SHIFT, 239 },
		{ 257, YYAT_SHIFT, 340 },
		{ 452, YYAT_SHIFT, 235 },
		{ 452, YYAT_SHIFT, 236 },
		{ 452, YYAT_SHIFT, 237 },
		{ 452, YYAT_SHIFT, 313 },
		{ 452, YYAT_SHIFT, 238 },
		{ 494, YYAT_SHIFT, 508 },
		{ 58, YYAT_SHIFT, 95 },
		{ 260, YYAT_SHIFT, 260 },
		{ 427, YYAT_SHIFT, 231 },
		{ 427, YYAT_SHIFT, 232 },
		{ 427, YYAT_SHIFT, 233 },
		{ 302, YYAT_SHIFT, 384 },
		{ 452, YYAT_SHIFT, 239 },
		{ 488, YYAT_SHIFT, 157 },
		{ 84, YYAT_SHIFT, 134 },
		{ 488, YYAT_SHIFT, 312 },
		{ 89, YYAT_SHIFT, 145 },
		{ 241, YYAT_SHIFT, 317 },
		{ 431, YYAT_SHIFT, 482 },
		{ 488, YYAT_SHIFT, 235 },
		{ 488, YYAT_SHIFT, 236 },
		{ 488, YYAT_SHIFT, 504 },
		{ 488, YYAT_SHIFT, 313 },
		{ 488, YYAT_SHIFT, 238 },
		{ 378, YYAT_SHIFT, 291 },
		{ 189, YYAT_SHIFT, 260 },
		{ 350, YYAT_SHIFT, 231 },
		{ 350, YYAT_SHIFT, 232 },
		{ 350, YYAT_SHIFT, 233 },
		{ 0, YYAT_SHIFT, 2 },
		{ 230, YYAT_SHIFT, 48 },
		{ 488, YYAT_SHIFT, 239 },
		{ 427, YYAT_SHIFT, 312 },
		{ 376, YYAT_SHIFT, 291 },
		{ 44, YYAT_SHIFT, 79 },
		{ 248, YYAT_SHIFT, 325 },
		{ 427, YYAT_SHIFT, 235 },
		{ 427, YYAT_SHIFT, 236 },
		{ 427, YYAT_SHIFT, 237 },
		{ 427, YYAT_SHIFT, 313 },
		{ 427, YYAT_SHIFT, 238 },
		{ 26, YYAT_SHIFT, 52 },
		{ 270, YYAT_SHIFT, 357 },
		{ 438, YYAT_SHIFT, 109 },
		{ 438, YYAT_SHIFT, 110 },
		{ 438, YYAT_SHIFT, 111 },
		{ 438, YYAT_SHIFT, 112 },
		{ 438, YYAT_SHIFT, 113 },
		{ 427, YYAT_SHIFT, 239 },
		{ 23, YYAT_SHIFT, 48 },
		{ 350, YYAT_SHIFT, 312 },
		{ 193, YYAT_SHIFT, 268 },
		{ 258, YYAT_REDUCE, 179 },
		{ 156, YYAT_SHIFT, 207 },
		{ 350, YYAT_SHIFT, 235 },
		{ 350, YYAT_SHIFT, 236 },
		{ 350, YYAT_SHIFT, 237 },
		{ 350, YYAT_SHIFT, 313 },
		{ 350, YYAT_SHIFT, 238 },
		{ 510, YYAT_SHIFT, 137 },
		{ 43, YYAT_SHIFT, 77 },
		{ 509, YYAT_SHIFT, 137 },
		{ 510, YYAT_SHIFT, 181 },
		{ 498, YYAT_SHIFT, 252 },
		{ 509, YYAT_SHIFT, 181 },
		{ 510, YYAT_SHIFT, 182 },
		{ 350, YYAT_SHIFT, 239 },
		{ 509, YYAT_SHIFT, 182 },
		{ 484, YYAT_REDUCE, 181 },
		{ 263, YYAT_SHIFT, 272 },
		{ 510, YYAT_SHIFT, 183 },
		{ 510, YYAT_SHIFT, 184 },
		{ 509, YYAT_SHIFT, 183 },
		{ 509, YYAT_SHIFT, 184 },
		{ 423, YYAT_SHIFT, 476 },
		{ 355, YYAT_SHIFT, 124 },
		{ 340, YYAT_SHIFT, 260 },
		{ 355, YYAT_SHIFT, 125 },
		{ 508, YYAT_SHIFT, 137 },
		{ 258, YYAT_REDUCE, 179 },
		{ 355, YYAT_SHIFT, 308 },
		{ 508, YYAT_SHIFT, 181 },
		{ 25, YYAT_SHIFT, 50 },
		{ 258, YYAT_SHIFT, 341 },
		{ 508, YYAT_SHIFT, 182 },
		{ 425, YYAT_SHIFT, 479 },
		{ 22, YYAT_SHIFT, 45 },
		{ 438, YYAT_SHIFT, 487 },
		{ 222, YYAT_SHIFT, 294 },
		{ 508, YYAT_SHIFT, 183 },
		{ 508, YYAT_SHIFT, 184 },
		{ 274, YYAT_SHIFT, 360 },
		{ 19, YYAT_SHIFT, 39 },
		{ 258, YYAT_SHIFT, 342 },
		{ 476, YYAT_SHIFT, 189 },
		{ 328, YYAT_SHIFT, 411 },
		{ 256, YYAT_SHIFT, 338 },
		{ 510, YYAT_SHIFT, 185 },
		{ 438, YYAT_SHIFT, 115 },
		{ 509, YYAT_SHIFT, 185 },
		{ 174, YYAT_SHIFT, 220 },
		{ 173, YYAT_SHIFT, 220 },
		{ 510, YYAT_SHIFT, 186 },
		{ 172, YYAT_SHIFT, 220 },
		{ 509, YYAT_SHIFT, 186 },
		{ 258, YYAT_REDUCE, 179 },
		{ 121, YYAT_SHIFT, 159 },
		{ 285, YYAT_SHIFT, 124 },
		{ 29, YYAT_SHIFT, 55 },
		{ 285, YYAT_SHIFT, 125 },
		{ 481, YYAT_REDUCE, 180 },
		{ 510, YYAT_SHIFT, 187 },
		{ 510, YYAT_SHIFT, 188 },
		{ 509, YYAT_SHIFT, 187 },
		{ 509, YYAT_SHIFT, 188 },
		{ 145, YYAT_SHIFT, 189 },
		{ 508, YYAT_SHIFT, 185 },
		{ 507, YYAT_SHIFT, 137 },
		{ 290, YYAT_SHIFT, 375 },
		{ 421, YYAT_SHIFT, 473 },
		{ 507, YYAT_SHIFT, 181 },
		{ 508, YYAT_SHIFT, 186 },
		{ 166, YYAT_SHIFT, 124 },
		{ 507, YYAT_SHIFT, 182 },
		{ 166, YYAT_SHIFT, 125 },
		{ 208, YYAT_SHIFT, 279 },
		{ 392, YYAT_SHIFT, 388 },
		{ 292, YYAT_SHIFT, 378 },
		{ 507, YYAT_SHIFT, 183 },
		{ 507, YYAT_SHIFT, 184 },
		{ 508, YYAT_SHIFT, 187 },
		{ 508, YYAT_SHIFT, 188 },
		{ 253, YYAT_SHIFT, 332 },
		{ 138, YYAT_SHIFT, 189 },
		{ 506, YYAT_SHIFT, 137 },
		{ 435, YYAT_SHIFT, 459 },
		{ 171, YYAT_SHIFT, 220 },
		{ 506, YYAT_SHIFT, 181 },
		{ 31, YYAT_SHIFT, 58 },
		{ 414, YYAT_SHIFT, 466 },
		{ 506, YYAT_SHIFT, 182 },
		{ 482, YYAT_SHIFT, 305 },
		{ 185, YYAT_SHIFT, 252 },
		{ 397, YYAT_SHIFT, 459 },
		{ 200, YYAT_SHIFT, 275 },
		{ 506, YYAT_SHIFT, 183 },
		{ 506, YYAT_SHIFT, 184 },
		{ 505, YYAT_SHIFT, 137 },
		{ 5, YYAT_SHIFT, 13 },
		{ 396, YYAT_SHIFT, 459 },
		{ 505, YYAT_SHIFT, 181 },
		{ 475, YYAT_SHIFT, 137 },
		{ 391, YYAT_SHIFT, 459 },
		{ 505, YYAT_SHIFT, 182 },
		{ 475, YYAT_SHIFT, 181 },
		{ 507, YYAT_SHIFT, 185 },
		{ 401, YYAT_SHIFT, 321 },
		{ 475, YYAT_SHIFT, 182 },
		{ 505, YYAT_SHIFT, 183 },
		{ 505, YYAT_SHIFT, 184 },
		{ 507, YYAT_SHIFT, 186 },
		{ 403, YYAT_SHIFT, 322 },
		{ 475, YYAT_SHIFT, 183 },
		{ 475, YYAT_SHIFT, 184 },
		{ 196, YYAT_SHIFT, 270 },
		{ 204, YYAT_SHIFT, 280 },
		{ 429, YYAT_SHIFT, 343 },
		{ 112, YYAT_SHIFT, 153 },
		{ 459, YYAT_SHIFT, 137 },
		{ 507, YYAT_SHIFT, 187 },
		{ 507, YYAT_SHIFT, 188 },
		{ 459, YYAT_SHIFT, 181 },
		{ 506, YYAT_SHIFT, 185 },
		{ 424, YYAT_SHIFT, 478 },
		{ 459, YYAT_SHIFT, 182 },
		{ 237, YYAT_SHIFT, 309 },
		{ 178, YYAT_SHIFT, 17 },
		{ 506, YYAT_SHIFT, 186 },
		{ 229, YYAT_SHIFT, 42 },
		{ 459, YYAT_SHIFT, 183 },
		{ 459, YYAT_SHIFT, 184 },
		{ 487, YYAT_SHIFT, 438 },
		{ 389, YYAT_SHIFT, 456 },
		{ 380, YYAT_SHIFT, 448 },
		{ 225, YYAT_SHIFT, 298 },
		{ 505, YYAT_SHIFT, 185 },
		{ 506, YYAT_SHIFT, 187 },
		{ 506, YYAT_SHIFT, 188 },
		{ 143, YYAT_SHIFT, 189 },
		{ 475, YYAT_SHIFT, 185 },
		{ 505, YYAT_SHIFT, 186 },
		{ 227, YYAT_SHIFT, 221 },
		{ 71, YYAT_SHIFT, 105 },
		{ 155, YYAT_SHIFT, 205 },
		{ 475, YYAT_SHIFT, 186 },
		{ 504, YYAT_SHIFT, 438 },
		{ 493, YYAT_SHIFT, 305 },
		{ 83, YYAT_SHIFT, 131 },
		{ 176, YYAT_SHIFT, 221 },
		{ 505, YYAT_SHIFT, 187 },
		{ 505, YYAT_SHIFT, 188 },
		{ 82, YYAT_SHIFT, 129 },
		{ 458, YYAT_SHIFT, 137 },
		{ 475, YYAT_SHIFT, 187 },
		{ 475, YYAT_SHIFT, 188 },
		{ 458, YYAT_SHIFT, 181 },
		{ 459, YYAT_SHIFT, 185 },
		{ 9, YYAT_SHIFT, 17 },
		{ 458, YYAT_SHIFT, 182 },
		{ 262, YYAT_SHIFT, 264 },
		{ 452, YYAT_SHIFT, 305 },
		{ 459, YYAT_SHIFT, 186 },
		{ 133, YYAT_SHIFT, 173 },
		{ 458, YYAT_SHIFT, 183 },
		{ 458, YYAT_SHIFT, 184 },
		{ 9, YYAT_SHIFT, 20 },
		{ 2, YYAT_SHIFT, 7 },
		{ 399, YYAT_SHIFT, 319 },
		{ 179, YYAT_SHIFT, 20 },
		{ 384, YYAT_SHIFT, 137 },
		{ 459, YYAT_SHIFT, 187 },
		{ 459, YYAT_SHIFT, 188 },
		{ 384, YYAT_SHIFT, 181 },
		{ 2, YYAT_SHIFT, 8 },
		{ 58, YYAT_SHIFT, 96 },
		{ 384, YYAT_SHIFT, 182 },
		{ 243, YYAT_SHIFT, 318 },
		{ 243, YYAT_SHIFT, 319 },
		{ 393, YYAT_SHIFT, 319 },
		{ 488, YYAT_SHIFT, 305 },
		{ 384, YYAT_SHIFT, 183 },
		{ 384, YYAT_SHIFT, 184 },
		{ 348, YYAT_SHIFT, 137 },
		{ 132, YYAT_SHIFT, 171 },
		{ 130, YYAT_SHIFT, 168 },
		{ 348, YYAT_SHIFT, 181 },
		{ 347, YYAT_SHIFT, 137 },
		{ 128, YYAT_SHIFT, 168 },
		{ 348, YYAT_SHIFT, 182 },
		{ 347, YYAT_SHIFT, 181 },
		{ 458, YYAT_SHIFT, 185 },
		{ 124, YYAT_SHIFT, 163 },
		{ 347, YYAT_SHIFT, 182 },
		{ 348, YYAT_SHIFT, 183 },
		{ 348, YYAT_SHIFT, 184 },
		{ 458, YYAT_SHIFT, 186 },
		{ 427, YYAT_SHIFT, 305 },
		{ 347, YYAT_SHIFT, 183 },
		{ 347, YYAT_SHIFT, 184 },
		{ 41, YYAT_SHIFT, 74 },
		{ 254, YYAT_SHIFT, 334 },
		{ 79, YYAT_SHIFT, 121 },
		{ 44, YYAT_SHIFT, 80 },
		{ 17, YYAT_SHIFT, 36 },
		{ 458, YYAT_SHIFT, 187 },
		{ 458, YYAT_SHIFT, 188 },
		{ 77, YYAT_SHIFT, 121 },
		{ 384, YYAT_SHIFT, 185 },
		{ 310, YYAT_SHIFT, 321 },
		{ 390, YYAT_SHIFT, 457 },
		{ 54, YYAT_SHIFT, 90 },
		{ 52, YYAT_SHIFT, 81 },
		{ 384, YYAT_SHIFT, 186 },
		{ 387, YYAT_SHIFT, 452 },
		{ 350, YYAT_SHIFT, 305 },
		{ 383, YYAT_SHIFT, 109 },
		{ 383, YYAT_SHIFT, 110 },
		{ 383, YYAT_SHIFT, 111 },
		{ 383, YYAT_SHIFT, 112 },
		{ 383, YYAT_SHIFT, 113 },
		{ 348, YYAT_SHIFT, 185 },
		{ 384, YYAT_SHIFT, 187 },
		{ 384, YYAT_SHIFT, 188 },
		{ 45, YYAT_SHIFT, 71 },
		{ 347, YYAT_SHIFT, 185 },
		{ 348, YYAT_SHIFT, 186 },
		{ 11, YYAT_SHIFT, 20 },
		{ 39, YYAT_SHIFT, 71 },
		{ 43, YYAT_SHIFT, 78 },
		{ 347, YYAT_SHIFT, 186 },
		{ 325, YYAT_SHIFT, 137 },
		{ 245, YYAT_SHIFT, 321 },
		{ 382, YYAT_SHIFT, 450 },
		{ 325, YYAT_SHIFT, 181 },
		{ 348, YYAT_SHIFT, 187 },
		{ 348, YYAT_SHIFT, 188 },
		{ 325, YYAT_SHIFT, 182 },
		{ 324, YYAT_SHIFT, 137 },
		{ 347, YYAT_SHIFT, 187 },
		{ 347, YYAT_SHIFT, 188 },
		{ 324, YYAT_SHIFT, 181 },
		{ 325, YYAT_SHIFT, 183 },
		{ 325, YYAT_SHIFT, 184 },
		{ 324, YYAT_SHIFT, 182 },
		{ 355, YYAT_SHIFT, 438 },
		{ 438, YYAT_SHIFT, 488 },
		{ 16, YYAT_SHIFT, 29 },
		{ 258, YYAT_SHIFT, 343 },
		{ 324, YYAT_SHIFT, 183 },
		{ 324, YYAT_SHIFT, 184 },
		{ 323, YYAT_SHIFT, 137 },
		{ 1, YYAT_SHIFT, 5 },
		{ 192, YYAT_SHIFT, 264 },
		{ 323, YYAT_SHIFT, 181 },
		{ 22, YYAT_SHIFT, 46 },
		{ 510, YYAT_SHIFT, 189 },
		{ 323, YYAT_SHIFT, 182 },
		{ 509, YYAT_SHIFT, 189 },
		{ 328, YYAT_SHIFT, 412 },
		{ 383, YYAT_SHIFT, 114 },
		{ 19, YYAT_SHIFT, 40 },
		{ 323, YYAT_SHIFT, 183 },
		{ 323, YYAT_SHIFT, 184 },
		{ 121, YYAT_SHIFT, 160 },
		{ 174, YYAT_SHIFT, 221 },
		{ 173, YYAT_SHIFT, 224 },
		{ 317, YYAT_SHIFT, 137 },
		{ 172, YYAT_SHIFT, 221 },
		{ 325, YYAT_SHIFT, 185 },
		{ 317, YYAT_SHIFT, 181 },
		{ 383, YYAT_SHIFT, 115 },
		{ 381, YYAT_SHIFT, 449 },
		{ 317, YYAT_SHIFT, 182 },
		{ 325, YYAT_SHIFT, 186 },
		{ 508, YYAT_SHIFT, 189 },
		{ 324, YYAT_SHIFT, 185 },
		{ 285, YYAT_SHIFT, 126 },
		{ 317, YYAT_SHIFT, 183 },
		{ 317, YYAT_SHIFT, 184 },
		{ 357, YYAT_SHIFT, 355 },
		{ 324, YYAT_SHIFT, 186 },
		{ 290, YYAT_SHIFT, 376 },
		{ 325, YYAT_SHIFT, 187 },
		{ 325, YYAT_SHIFT, 188 },
		{ 136, YYAT_SHIFT, 8 },
		{ 201, YYAT_SHIFT, 276 },
		{ 356, YYAT_SHIFT, 372 },
		{ 339, YYAT_SHIFT, 427 },
		{ 323, YYAT_SHIFT, 185 },
		{ 324, YYAT_SHIFT, 187 },
		{ 324, YYAT_SHIFT, 188 },
		{ 166, YYAT_SHIFT, 126 },
		{ 334, YYAT_SHIFT, 417 },
		{ 323, YYAT_SHIFT, 186 },
		{ 478, YYAT_SHIFT, 63 },
		{ 478, YYAT_SHIFT, 64 },
		{ 478, YYAT_SHIFT, 65 },
		{ 4, YYAT_SHIFT, 8 },
		{ 478, YYAT_SHIFT, 66 },
		{ 417, YYAT_SHIFT, 468 },
		{ 171, YYAT_SHIFT, 221 },
		{ 31, YYAT_SHIFT, 59 },
		{ 323, YYAT_SHIFT, 187 },
		{ 323, YYAT_SHIFT, 188 },
		{ 317, YYAT_SHIFT, 185 },
		{ 478, YYAT_SHIFT, 67 },
		{ 66, YYAT_SHIFT, 101 },
		{ 66, YYAT_SHIFT, 102 },
		{ 66, YYAT_SHIFT, 103 },
		{ 317, YYAT_SHIFT, 186 },
		{ 417, YYAT_SHIFT, 469 },
		{ 401, YYAT_SHIFT, 322 },
		{ 5, YYAT_SHIFT, 14 },
		{ 507, YYAT_SHIFT, 189 },
		{ 316, YYAT_SHIFT, 137 },
		{ 331, YYAT_SHIFT, 415 },
		{ 329, YYAT_SHIFT, 413 },
		{ 316, YYAT_SHIFT, 181 },
		{ 317, YYAT_SHIFT, 187 },
		{ 317, YYAT_SHIFT, 188 },
		{ 316, YYAT_SHIFT, 182 },
		{ 327, YYAT_SHIFT, 410 },
		{ 416, YYAT_SHIFT, 467 },
		{ 204, YYAT_SHIFT, 281 },
		{ 416, YYAT_ERROR, 0 },
		{ 316, YYAT_SHIFT, 183 },
		{ 316, YYAT_SHIFT, 184 },
		{ 346, YYAT_SHIFT, 63 },
		{ 346, YYAT_SHIFT, 64 },
		{ 346, YYAT_SHIFT, 65 },
		{ 506, YYAT_SHIFT, 189 },
		{ 346, YYAT_SHIFT, 66 },
		{ 326, YYAT_SHIFT, 409 },
		{ 311, YYAT_SHIFT, 137 },
		{ 178, YYAT_SHIFT, 18 },
		{ 345, YYAT_SHIFT, 346 },
		{ 311, YYAT_SHIFT, 181 },
		{ 345, YYAT_SHIFT, 347 },
		{ 346, YYAT_SHIFT, 67 },
		{ 311, YYAT_SHIFT, 182 },
		{ 345, YYAT_SHIFT, 348 },
		{ 320, YYAT_SHIFT, 402 },
		{ 319, YYAT_SHIFT, 400 },
		{ 505, YYAT_SHIFT, 189 },
		{ 311, YYAT_SHIFT, 183 },
		{ 311, YYAT_SHIFT, 184 },
		{ 261, YYAT_SHIFT, 346 },
		{ 475, YYAT_SHIFT, 189 },
		{ 261, YYAT_SHIFT, 347 },
		{ 71, YYAT_SHIFT, 106 },
		{ 272, YYAT_SHIFT, 137 },
		{ 261, YYAT_SHIFT, 348 },
		{ 316, YYAT_SHIFT, 185 },
		{ 272, YYAT_SHIFT, 181 },
		{ 318, YYAT_SHIFT, 398 },
		{ 315, YYAT_SHIFT, 394 },
		{ 272, YYAT_SHIFT, 182 },
		{ 316, YYAT_SHIFT, 186 },
		{ 313, YYAT_SHIFT, 303 },
		{ 307, YYAT_ERROR, 0 },
		{ 306, YYAT_SHIFT, 386 },
		{ 272, YYAT_SHIFT, 183 },
		{ 272, YYAT_SHIFT, 184 },
		{ 262, YYAT_SHIFT, 265 },
		{ 459, YYAT_SHIFT, 189 },
		{ 9, YYAT_SHIFT, 21 },
		{ 316, YYAT_SHIFT, 187 },
		{ 316, YYAT_SHIFT, 188 },
		{ 179, YYAT_SHIFT, 229 },
		{ 268, YYAT_SHIFT, 137 },
		{ 133, YYAT_SHIFT, 174 },
		{ 311, YYAT_SHIFT, 185 },
		{ 268, YYAT_SHIFT, 181 },
		{ 399, YYAT_SHIFT, 462 },
		{ 2, YYAT_SHIFT, 9 },
		{ 268, YYAT_SHIFT, 182 },
		{ 311, YYAT_SHIFT, 186 },
		{ 305, YYAT_ERROR, 0 },
		{ 303, YYAT_SHIFT, 312 },
		{ 300, YYAT_SHIFT, 383 },
		{ 268, YYAT_SHIFT, 183 },
		{ 268, YYAT_SHIFT, 184 },
		{ 293, YYAT_SHIFT, 379 },
		{ 243, YYAT_SHIFT, 320 },
		{ 393, YYAT_SHIFT, 462 },
		{ 311, YYAT_SHIFT, 187 },
		{ 311, YYAT_SHIFT, 188 },
		{ 291, YYAT_SHIFT, 285 },
		{ 272, YYAT_SHIFT, 185 },
		{ 286, YYAT_SHIFT, 372 },
		{ 283, YYAT_SHIFT, 369 },
		{ 132, YYAT_SHIFT, 172 },
		{ 130, YYAT_SHIFT, 169 },
		{ 272, YYAT_SHIFT, 186 },
		{ 278, YYAT_SHIFT, 365 },
		{ 128, YYAT_SHIFT, 169 },
		{ 275, YYAT_SHIFT, 361 },
		{ 269, YYAT_SHIFT, 356 },
		{ 458, YYAT_SHIFT, 189 },
		{ 124, YYAT_SHIFT, 164 },
		{ 264, YYAT_SHIFT, 350 },
		{ 255, YYAT_SHIFT, 336 },
		{ 272, YYAT_SHIFT, 187 },
		{ 272, YYAT_SHIFT, 188 },
		{ 254, YYAT_SHIFT, 335 },
		{ 267, YYAT_SHIFT, 137 },
		{ 41, YYAT_SHIFT, 75 },
		{ 268, YYAT_SHIFT, 185 },
		{ 267, YYAT_SHIFT, 181 },
		{ 79, YYAT_SHIFT, 122 },
		{ 17, YYAT_SHIFT, 37 },
		{ 267, YYAT_SHIFT, 182 },
		{ 268, YYAT_SHIFT, 186 },
		{ 310, YYAT_SHIFT, 322 },
		{ 77, YYAT_SHIFT, 122 },
		{ 384, YYAT_SHIFT, 189 },
		{ 267, YYAT_SHIFT, 183 },
		{ 267, YYAT_SHIFT, 184 },
		{ 54, YYAT_SHIFT, 91 },
		{ 52, YYAT_SHIFT, 84 },
		{ 247, YYAT_SHIFT, 323 },
		{ 268, YYAT_SHIFT, 187 },
		{ 268, YYAT_SHIFT, 188 },
		{ 466, YYAT_SHIFT, 231 },
		{ 466, YYAT_SHIFT, 232 },
		{ 466, YYAT_SHIFT, 233 },
		{ 11, YYAT_SHIFT, 25 },
		{ 188, YYAT_SHIFT, 137 },
		{ 348, YYAT_SHIFT, 189 },
		{ 240, YYAT_SHIFT, 311 },
		{ 188, YYAT_SHIFT, 181 },
		{ 45, YYAT_SHIFT, 72 },
		{ 347, YYAT_SHIFT, 189 },
		{ 188, YYAT_SHIFT, 182 },
		{ 137, YYAT_SHIFT, 137 },
		{ 39, YYAT_SHIFT, 72 },
		{ 245, YYAT_SHIFT, 322 },
		{ 137, YYAT_SHIFT, 181 },
		{ 188, YYAT_SHIFT, 183 },
		{ 188, YYAT_SHIFT, 184 },
		{ 137, YYAT_SHIFT, 182 },
		{ 228, YYAT_SHIFT, 301 },
		{ 226, YYAT_SHIFT, 299 },
		{ 267, YYAT_SHIFT, 185 },
		{ 224, YYAT_SHIFT, 296 },
		{ 137, YYAT_SHIFT, 183 },
		{ 137, YYAT_SHIFT, 184 },
		{ 466, YYAT_SHIFT, 234 },
		{ 267, YYAT_SHIFT, 186 },
		{ 223, YYAT_SHIFT, 295 },
		{ 220, YYAT_SHIFT, 286 },
		{ 466, YYAT_SHIFT, 235 },
		{ 466, YYAT_SHIFT, 236 },
		{ 466, YYAT_SHIFT, 237 },
		{ 16, YYAT_SHIFT, 32 },
		{ 466, YYAT_SHIFT, 238 },
		{ 192, YYAT_SHIFT, 265 },
		{ 267, YYAT_SHIFT, 187 },
		{ 267, YYAT_SHIFT, 188 },
		{ 1, YYAT_SHIFT, 6 },
		{ 456, YYAT_SHIFT, 231 },
		{ 456, YYAT_SHIFT, 232 },
		{ 456, YYAT_SHIFT, 233 },
		{ 466, YYAT_SHIFT, 239 },
		{ 205, YYAT_SHIFT, 282 },
		{ 188, YYAT_SHIFT, 185 },
		{ 202, YYAT_SHIFT, 278 },
		{ 383, YYAT_SHIFT, 116 },
		{ 197, YYAT_ERROR, 0 },
		{ 187, YYAT_SHIFT, 255 },
		{ 188, YYAT_SHIFT, 186 },
		{ 186, YYAT_SHIFT, 254 },
		{ 137, YYAT_SHIFT, 185 },
		{ 412, YYAT_SHIFT, 231 },
		{ 412, YYAT_SHIFT, 232 },
		{ 412, YYAT_SHIFT, 233 },
		{ 325, YYAT_SHIFT, 189 },
		{ 137, YYAT_SHIFT, 186 },
		{ 184, YYAT_SHIFT, 250 },
		{ 188, YYAT_SHIFT, 187 },
		{ 188, YYAT_SHIFT, 188 },
		{ 201, YYAT_SHIFT, 277 },
		{ 183, YYAT_SHIFT, 249 },
		{ 324, YYAT_SHIFT, 189 },
		{ 456, YYAT_SHIFT, 234 },
		{ 136, YYAT_SHIFT, 178 },
		{ 137, YYAT_SHIFT, 187 },
		{ 137, YYAT_SHIFT, 188 },
		{ 456, YYAT_SHIFT, 235 },
		{ 456, YYAT_SHIFT, 236 },
		{ 456, YYAT_SHIFT, 237 },
		{ 182, YYAT_SHIFT, 247 },
		{ 456, YYAT_SHIFT, 238 },
		{ 400, YYAT_SHIFT, 231 },
		{ 400, YYAT_SHIFT, 232 },
		{ 400, YYAT_SHIFT, 233 },
		{ 323, YYAT_SHIFT, 189 },
		{ 412, YYAT_SHIFT, 234 },
		{ 4, YYAT_SHIFT, 9 },
		{ 181, YYAT_SHIFT, 240 },
		{ 456, YYAT_SHIFT, 239 },
		{ 412, YYAT_SHIFT, 235 },
		{ 412, YYAT_SHIFT, 236 },
		{ 412, YYAT_SHIFT, 237 },
		{ 175, YYAT_SHIFT, 227 },
		{ 412, YYAT_SHIFT, 238 },
		{ 398, YYAT_SHIFT, 231 },
		{ 398, YYAT_SHIFT, 232 },
		{ 398, YYAT_SHIFT, 233 },
		{ 158, YYAT_SHIFT, 209 },
		{ 140, YYAT_SHIFT, 198 },
		{ 135, YYAT_SHIFT, 177 },
		{ 317, YYAT_SHIFT, 189 },
		{ 412, YYAT_SHIFT, 239 },
		{ 131, YYAT_SHIFT, 170 },
		{ 129, YYAT_SHIFT, 170 },
		{ 126, YYAT_SHIFT, 166 },
		{ 400, YYAT_SHIFT, 312 },
		{ 123, YYAT_SHIFT, 162 },
		{ 122, YYAT_SHIFT, 161 },
		{ 113, YYAT_SHIFT, 154 },
		{ 400, YYAT_SHIFT, 235 },
		{ 400, YYAT_SHIFT, 236 },
		{ 400, YYAT_SHIFT, 237 },
		{ 104, YYAT_SHIFT, 147 },
		{ 400, YYAT_SHIFT, 238 },
		{ 388, YYAT_SHIFT, 231 },
		{ 388, YYAT_SHIFT, 232 },
		{ 388, YYAT_SHIFT, 233 },
		{ 88, YYAT_SHIFT, 143 },
		{ 398, YYAT_SHIFT, 312 },
		{ 87, YYAT_SHIFT, 138 },
		{ 80, YYAT_SHIFT, 123 },
		{ 400, YYAT_SHIFT, 239 },
		{ 398, YYAT_SHIFT, 235 },
		{ 398, YYAT_SHIFT, 236 },
		{ 398, YYAT_SHIFT, 237 },
		{ 78, YYAT_SHIFT, 123 },
		{ 398, YYAT_SHIFT, 238 },
		{ 73, YYAT_SHIFT, 108 },
		{ 338, YYAT_SHIFT, 63 },
		{ 338, YYAT_SHIFT, 64 },
		{ 338, YYAT_SHIFT, 65 },
		{ 72, YYAT_SHIFT, 107 },
		{ 338, YYAT_SHIFT, 66 },
		{ 67, YYAT_SHIFT, 104 },
		{ 398, YYAT_SHIFT, 239 },
		{ 62, YYAT_SHIFT, 100 },
		{ 61, YYAT_SHIFT, 99 },
		{ 60, YYAT_SHIFT, 98 },
		{ 388, YYAT_SHIFT, 234 },
		{ 338, YYAT_SHIFT, 67 },
		{ 59, YYAT_SHIFT, 97 },
		{ 57, YYAT_SHIFT, 94 },
		{ 388, YYAT_SHIFT, 235 },
		{ 388, YYAT_SHIFT, 236 },
		{ 388, YYAT_SHIFT, 237 },
		{ 56, YYAT_SHIFT, 93 },
		{ 388, YYAT_SHIFT, 238 },
		{ 55, YYAT_SHIFT, 92 },
		{ 316, YYAT_SHIFT, 189 },
		{ 337, YYAT_SHIFT, 63 },
		{ 337, YYAT_SHIFT, 64 },
		{ 337, YYAT_SHIFT, 65 },
		{ 53, YYAT_SHIFT, 88 },
		{ 337, YYAT_SHIFT, 66 },
		{ 388, YYAT_SHIFT, 239 },
		{ 336, YYAT_SHIFT, 63 },
		{ 336, YYAT_SHIFT, 64 },
		{ 336, YYAT_SHIFT, 65 },
		{ 51, YYAT_SHIFT, 84 },
		{ 336, YYAT_SHIFT, 66 },
		{ 337, YYAT_SHIFT, 67 },
		{ 50, YYAT_SHIFT, 76 },
		{ 49, YYAT_SHIFT, 84 },
		{ 48, YYAT_SHIFT, 81 },
		{ 46, YYAT_SHIFT, 73 },
		{ 42, YYAT_SHIFT, 76 },
		{ 336, YYAT_SHIFT, 67 },
		{ 311, YYAT_SHIFT, 189 },
		{ 40, YYAT_SHIFT, 73 },
		{ 35, YYAT_SHIFT, 62 },
		{ 34, YYAT_SHIFT, 61 },
		{ 33, YYAT_SHIFT, 60 },
		{ 32, YYAT_SHIFT, 56 },
		{ 30, YYAT_SHIFT, 57 },
		{ 21, YYAT_SHIFT, 38 },
		{ 18, YYAT_SHIFT, 38 },
		{ 13, YYAT_SHIFT, 30 },
		{ 10, YYAT_SHIFT, 24 },
		{ 7, YYAT_SHIFT, 16 },
		{ 6, YYAT_SHIFT, 15 },
		{ 3, YYAT_ACCEPT, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 272, YYAT_SHIFT, 189 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 268, YYAT_SHIFT, 189 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 267, YYAT_SHIFT, 189 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 466, YYAT_SHIFT, 305 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 188, YYAT_SHIFT, 189 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 137, YYAT_SHIFT, 189 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 456, YYAT_SHIFT, 305 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 412, YYAT_SHIFT, 305 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 400, YYAT_SHIFT, 305 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 398, YYAT_SHIFT, 305 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 388, YYAT_SHIFT, 305 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 12, 1, YYAT_ERROR, 0 },
		{ 492, 1, YYAT_ERROR, 0 },
		{ 407, 1, YYAT_REDUCE, 29 },
		{ 881, 1, YYAT_ERROR, 0 },
		{ 531, 1, YYAT_REDUCE, 29 },
		{ 345, 1, YYAT_ERROR, 0 },
		{ 838, 1, YYAT_ERROR, 0 },
		{ 837, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 178 },
		{ 398, 1, YYAT_REDUCE, 48 },
		{ 817, 1, YYAT_ERROR, 0 },
		{ 459, 1, YYAT_REDUCE, 48 },
		{ -46, 1, YYAT_ERROR, 0 },
		{ 621, 1, YYAT_DEFAULT, 16 },
		{ 0, 0, YYAT_DEFAULT, 16 },
		{ 0, 0, YYAT_DEFAULT, 16 },
		{ 487, 1, YYAT_ERROR, 0 },
		{ 443, 1, YYAT_ERROR, 0 },
		{ 827, 1, YYAT_ERROR, 0 },
		{ 293, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 229 },
		{ 826, 1, YYAT_DEFAULT, 229 },
		{ 287, 1, YYAT_ERROR, 0 },
		{ 32, 1, YYAT_REDUCE, 85 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 65, 1, YYAT_REDUCE, 85 },
		{ 24, 1, YYAT_REDUCE, 85 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 91, 1, YYAT_ERROR, 0 },
		{ 831, 1, YYAT_DEFAULT, 32 },
		{ 334, 1, YYAT_ERROR, 0 },
		{ 836, 1, YYAT_ERROR, 0 },
		{ 829, 1, YYAT_ERROR, 0 },
		{ 828, 1, YYAT_ERROR, 0 },
		{ 827, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 468, 1, YYAT_REDUCE, 28 },
		{ 821, 1, YYAT_REDUCE, 27 },
		{ 439, 1, YYAT_ERROR, 0 },
		{ 817, 1, YYAT_ERROR, 0 },
		{ 261, 1, YYAT_ERROR, 0 },
		{ 235, 1, YYAT_ERROR, 0 },
		{ 464, 1, YYAT_REDUCE, 26 },
		{ 817, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 48 },
		{ 816, 1, YYAT_ERROR, 0 },
		{ 607, 1, YYAT_REDUCE, 93 },
		{ 813, 1, YYAT_DEFAULT, 48 },
		{ 603, 1, YYAT_REDUCE, 93 },
		{ 452, 1, YYAT_REDUCE, 93 },
		{ 597, 1, YYAT_REDUCE, 93 },
		{ 451, 1, YYAT_ERROR, 0 },
		{ 800, 1, YYAT_ERROR, 0 },
		{ 798, 1, YYAT_ERROR, 0 },
		{ 804, 1, YYAT_ERROR, 0 },
		{ 207, 1, YYAT_ERROR, 0 },
		{ 803, 1, YYAT_ERROR, 0 },
		{ 800, 1, YYAT_ERROR, 0 },
		{ 799, 1, YYAT_ERROR, 0 },
		{ 798, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 549, 1, YYAT_ERROR, 0 },
		{ 776, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ 382, 1, YYAT_ERROR, 0 },
		{ 783, 1, YYAT_ERROR, 0 },
		{ 779, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 447, 1, YYAT_REDUCE, 47 },
		{ 778, 1, YYAT_REDUCE, 46 },
		{ 442, 1, YYAT_REDUCE, 45 },
		{ 773, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 184, 1, YYAT_ERROR, 0 },
		{ 180, 1, YYAT_ERROR, 0 },
		{ -3, 1, YYAT_DEFAULT, 89 },
		{ 0, 0, YYAT_DEFAULT, 87 },
		{ 0, 0, YYAT_DEFAULT, 87 },
		{ 564, 1, YYAT_DEFAULT, 89 },
		{ 562, 1, YYAT_DEFAULT, 89 },
		{ -1, 1, YYAT_DEFAULT, 302 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 756, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 0, 0, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_REDUCE, 67 },
		{ 0, 0, YYAT_REDUCE, 68 },
		{ 150, 1, YYAT_ERROR, 0 },
		{ 761, 1, YYAT_REDUCE, 72 },
		{ 0, 0, YYAT_REDUCE, 65 },
		{ 0, 0, YYAT_REDUCE, 69 },
		{ 28, 1, YYAT_REDUCE, 72 },
		{ 0, 0, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_REDUCE, 62 },
		{ 0, 0, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ 296, 1, YYAT_ERROR, 0 },
		{ 759, 1, YYAT_ERROR, 0 },
		{ 758, 1, YYAT_ERROR, 0 },
		{ 432, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 757, 1, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_REDUCE, 89 },
		{ 428, 1, YYAT_REDUCE, 84 },
		{ 756, 1, YYAT_REDUCE, 82 },
		{ 425, 1, YYAT_REDUCE, 83 },
		{ 755, 1, YYAT_ERROR, 0 },
		{ 424, 1, YYAT_ERROR, 0 },
		{ 403, 1, YYAT_ERROR, 0 },
		{ 17, 1, YYAT_ERROR, 0 },
		{ 762, 1, YYAT_ERROR, 0 },
		{ 518, 1, YYAT_REDUCE, 29 },
		{ 713, 1, YYAT_REDUCE, 156 },
		{ 116, 1, YYAT_REDUCE, 156 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 761, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 171, 1, YYAT_REDUCE, 156 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 98, 1, YYAT_REDUCE, 156 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 176, 1, YYAT_ERROR, 0 },
		{ 36, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 787, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 324, 1, YYAT_REDUCE, 65 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 333, 1, YYAT_REDUCE, 111 },
		{ 300, 1, YYAT_REDUCE, 111 },
		{ 298, 1, YYAT_REDUCE, 111 },
		{ 297, 1, YYAT_REDUCE, 111 },
		{ 745, 1, YYAT_ERROR, 0 },
		{ 181, 1, YYAT_REDUCE, 111 },
		{ 0, 0, YYAT_REDUCE, 91 },
		{ 367, 1, YYAT_ERROR, 0 },
		{ 401, 1, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 94 },
		{ 532, 1, YYAT_DEFAULT, 483 },
		{ 524, 1, YYAT_DEFAULT, 483 },
		{ 729, 1, YYAT_ERROR, 0 },
		{ 725, 1, YYAT_ERROR, 0 },
		{ 125, 1, YYAT_REDUCE, 179 },
		{ 712, 1, YYAT_ERROR, 0 },
		{ 502, 1, YYAT_DEFAULT, 483 },
		{ 706, 1, YYAT_REDUCE, 156 },
		{ 8, 1, YYAT_REDUCE, 156 },
		{ 0, 0, YYAT_REDUCE, 148 },
		{ 0, 0, YYAT_REDUCE, 124 },
		{ 489, 1, YYAT_ERROR, 0 },
		{ 34, 1, YYAT_DEFAULT, 197 },
		{ 0, 0, YYAT_REDUCE, 147 },
		{ 0, 0, YYAT_REDUCE, 92 },
		{ 147, 1, YYAT_REDUCE, 159 },
		{ 693, 1, YYAT_DEFAULT, 263 },
		{ 0, 0, YYAT_REDUCE, 90 },
		{ 0, 0, YYAT_REDUCE, 79 },
		{ 127, 1, YYAT_DEFAULT, 208 },
		{ 514, 1, YYAT_ERROR, 0 },
		{ 714, 1, YYAT_DEFAULT, 208 },
		{ 0, 0, YYAT_REDUCE, 76 },
		{ 356, 1, YYAT_REDUCE, 71 },
		{ 705, 1, YYAT_REDUCE, 70 },
		{ 0, 0, YYAT_REDUCE, 63 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 108, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 88 },
		{ 0, 0, YYAT_REDUCE, 86 },
		{ 0, 0, YYAT_REDUCE, 87 },
		{ 483, 1, YYAT_DEFAULT, 378 },
		{ 0, 0, YYAT_DEFAULT, 378 },
		{ 71, 1, YYAT_ERROR, 0 },
		{ 699, 1, YYAT_ERROR, 0 },
		{ 695, 1, YYAT_DEFAULT, 378 },
		{ 167, 1, YYAT_ERROR, 0 },
		{ 693, 1, YYAT_ERROR, 0 },
		{ 174, 1, YYAT_REDUCE, 111 },
		{ 692, 1, YYAT_ERROR, 0 },
		{ 161, 1, YYAT_ERROR, 0 },
		{ 13, 1, YYAT_REDUCE, 85 },
		{ 0, 0, YYAT_DEFAULT, 462 },
		{ 0, 0, YYAT_REDUCE, 210 },
		{ 0, 0, YYAT_REDUCE, 211 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_REDUCE, 213 },
		{ 0, 0, YYAT_REDUCE, 214 },
		{ 158, 1, YYAT_REDUCE, 159 },
		{ 0, 0, YYAT_DEFAULT, 462 },
		{ 0, 0, YYAT_REDUCE, 215 },
		{ 704, 1, YYAT_DEFAULT, 305 },
		{ 0, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 206 },
		{ 416, 1, YYAT_REDUCE, 191 },
		{ 0, 0, YYAT_REDUCE, 199 },
		{ 469, 1, YYAT_REDUCE, 195 },
		{ 0, 0, YYAT_REDUCE, 205 },
		{ 692, 1, YYAT_DEFAULT, 493 },
		{ 18, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 115, 1, YYAT_REDUCE, 157 },
		{ 437, 1, YYAT_ERROR, 0 },
		{ 678, 1, YYAT_DEFAULT, 305 },
		{ 79, 1, YYAT_ERROR, 0 },
		{ -18, 1, YYAT_ERROR, 0 },
		{ 280, 1, YYAT_REDUCE, 159 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ -10, 1, YYAT_REDUCE, 156 },
		{ 623, 1, YYAT_ERROR, 0 },
		{ 396, 1, YYAT_REDUCE, 206 },
		{ 52, 1, YYAT_DEFAULT, 257 },
		{ 433, 1, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_REDUCE, 120 },
		{ 684, 1, YYAT_REDUCE, 156 },
		{ 648, 1, YYAT_REDUCE, 122 },
		{ 430, 1, YYAT_DEFAULT, 270 },
		{ 25, 1, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_REDUCE, 121 },
		{ 629, 1, YYAT_REDUCE, 156 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 74, 1, YYAT_ERROR, 0 },
		{ 673, 1, YYAT_DEFAULT, 478 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 671, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 667, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 291 },
		{ 309, 1, YYAT_ERROR, 0 },
		{ 635, 1, YYAT_DEFAULT, 291 },
		{ 0, 0, YYAT_REDUCE, 115 },
		{ 0, 0, YYAT_REDUCE, 114 },
		{ 0, 0, YYAT_REDUCE, 116 },
		{ 314, 1, YYAT_DEFAULT, 292 },
		{ 628, 1, YYAT_ERROR, 0 },
		{ 110, 1, YYAT_ERROR, 0 },
		{ 415, 1, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_REDUCE, 102 },
		{ 0, 0, YYAT_REDUCE, 105 },
		{ 0, 0, YYAT_REDUCE, 103 },
		{ 0, 0, YYAT_REDUCE, 101 },
		{ 629, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 100 },
		{ -6, 1, YYAT_ERROR, 0 },
		{ 625, 1, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_REDUCE, 209 },
		{ 649, 1, YYAT_DEFAULT, 493 },
		{ 606, 1, YYAT_REDUCE, 186 },
		{ 605, 1, YYAT_DEFAULT, 392 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 446, 1, YYAT_REDUCE, 196 },
		{ 612, 1, YYAT_REDUCE, 156 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 391, 1, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_REDUCE, 186 },
		{ 601, 1, YYAT_DEFAULT, 433 },
		{ 593, 1, YYAT_REDUCE, 156 },
		{ 545, 1, YYAT_REDUCE, 156 },
		{ 387, 1, YYAT_DEFAULT, 483 },
		{ 375, 1, YYAT_DEFAULT, 462 },
		{ 592, 1, YYAT_DEFAULT, 462 },
		{ 0, 0, YYAT_DEFAULT, 462 },
		{ 0, 0, YYAT_DEFAULT, 462 },
		{ 529, 1, YYAT_REDUCE, 156 },
		{ 516, 1, YYAT_REDUCE, 156 },
		{ 509, 1, YYAT_REDUCE, 156 },
		{ 578, 1, YYAT_DEFAULT, 433 },
		{ 567, 1, YYAT_DEFAULT, 433 },
		{ 291, 1, YYAT_DEFAULT, 433 },
		{ 562, 1, YYAT_DEFAULT, 433 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 556, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_REDUCE, 158 },
		{ 325, 1, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 810, 1, YYAT_REDUCE, 168 },
		{ 804, 1, YYAT_REDUCE, 168 },
		{ 783, 1, YYAT_REDUCE, 168 },
		{ 320, 1, YYAT_DEFAULT, 483 },
		{ 59, 1, YYAT_REDUCE, 156 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_REDUCE, 126 },
		{ 612, 1, YYAT_REDUCE, 186 },
		{ 570, 1, YYAT_REDUCE, 168 },
		{ 465, 1, YYAT_REDUCE, 156 },
		{ 461, 1, YYAT_REDUCE, 156 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 247, 1, YYAT_REDUCE, 127 },
		{ 0, 0, YYAT_REDUCE, 146 },
		{ 0, 0, YYAT_REDUCE, 128 },
		{ 0, 0, YYAT_REDUCE, 123 },
		{ 0, 0, YYAT_REDUCE, 125 },
		{ 277, 1, YYAT_REDUCE, 159 },
		{ 532, 1, YYAT_DEFAULT, 357 },
		{ 520, 1, YYAT_DEFAULT, 305 },
		{ 0, 0, YYAT_REDUCE, 78 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_REDUCE, 77 },
		{ 0, 0, YYAT_REDUCE, 81 },
		{ 0, 0, YYAT_REDUCE, 80 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_REDUCE, 75 },
		{ 0, 0, YYAT_REDUCE, 73 },
		{ 0, 0, YYAT_REDUCE, 74 },
		{ 0, 0, YYAT_DEFAULT, 383 },
		{ 0, 0, YYAT_REDUCE, 118 },
		{ 0, 0, YYAT_REDUCE, 119 },
		{ 0, 0, YYAT_REDUCE, 108 },
		{ 0, 0, YYAT_REDUCE, 117 },
		{ 0, 0, YYAT_DEFAULT, 378 },
		{ 0, 0, YYAT_REDUCE, 110 },
		{ 16, 1, YYAT_REDUCE, 109 },
		{ 0, 0, YYAT_REDUCE, 107 },
		{ 7, 1, YYAT_DEFAULT, 291 },
		{ 11, 1, YYAT_REDUCE, 72 },
		{ 166, 1, YYAT_ERROR, 0 },
		{ 522, 1, YYAT_ERROR, 0 },
		{ 483, 1, YYAT_ERROR, 0 },
		{ 500, 1, YYAT_ERROR, 0 },
		{ 448, 1, YYAT_REDUCE, 156 },
		{ 0, 0, YYAT_REDUCE, 106 },
		{ 0, 0, YYAT_REDUCE, 208 },
		{ 246, 1, YYAT_DEFAULT, 483 },
		{ 797, 1, YYAT_REDUCE, 204 },
		{ 165, 1, YYAT_DEFAULT, 433 },
		{ 455, 1, YYAT_DEFAULT, 433 },
		{ 135, 1, YYAT_REDUCE, 166 },
		{ 109, 1, YYAT_DEFAULT, 433 },
		{ 417, 1, YYAT_REDUCE, 188 },
		{ 0, 0, YYAT_REDUCE, 203 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 132, 1, YYAT_REDUCE, 166 },
		{ 126, 1, YYAT_REDUCE, 166 },
		{ 777, 1, YYAT_REDUCE, 187 },
		{ 406, 1, YYAT_REDUCE, 190 },
		{ 764, 1, YYAT_REDUCE, 193 },
		{ 344, 1, YYAT_REDUCE, 194 },
		{ 0, 0, YYAT_REDUCE, 189 },
		{ 144, 1, YYAT_REDUCE, 192 },
		{ 0, 0, YYAT_REDUCE, 198 },
		{ 0, 0, YYAT_REDUCE, 197 },
		{ 0, 0, YYAT_REDUCE, 133 },
		{ 0, 0, YYAT_REDUCE, 151 },
		{ 0, 0, YYAT_REDUCE, 134 },
		{ 0, 0, YYAT_REDUCE, 154 },
		{ 0, 0, YYAT_REDUCE, 155 },
		{ 0, 0, YYAT_REDUCE, 180 },
		{ 744, 1, YYAT_REDUCE, 182 },
		{ 0, 0, YYAT_REDUCE, 181 },
		{ 122, 1, YYAT_DEFAULT, 416 },
		{ 0, 0, YYAT_REDUCE, 163 },
		{ 570, 1, YYAT_DEFAULT, 433 },
		{ 534, 1, YYAT_DEFAULT, 305 },
		{ 0, 0, YYAT_DEFAULT, 432 },
		{ 0, 0, YYAT_DEFAULT, 432 },
		{ 0, 0, YYAT_REDUCE, 176 },
		{ 347, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 171 },
		{ 57, 1, YYAT_ERROR, 0 },
		{ 156, 1, YYAT_REDUCE, 167 },
		{ 313, 1, YYAT_ERROR, 0 },
		{ 172, 1, YYAT_ERROR, 0 },
		{ 229, 1, YYAT_REDUCE, 145 },
		{ 0, 0, YYAT_REDUCE, 152 },
		{ 149, 1, YYAT_REDUCE, 159 },
		{ 0, 0, YYAT_REDUCE, 144 },
		{ 1, 1, YYAT_DEFAULT, 433 },
		{ 38, 1, YYAT_ERROR, 0 },
		{ -20, 1, YYAT_ERROR, 0 },
		{ 169, 1, YYAT_ERROR, 0 },
		{ 118, 1, YYAT_REDUCE, 166 },
		{ 0, 0, YYAT_REDUCE, 132 },
		{ 0, 0, YYAT_REDUCE, 143 },
		{ 278, 1, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_REDUCE, 64 },
		{ 0, 0, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 60 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 113 },
		{ 0, 0, YYAT_REDUCE, 112 },
		{ 0, 0, YYAT_REDUCE, 98 },
		{ 0, 0, YYAT_REDUCE, 104 },
		{ 0, 0, YYAT_REDUCE, 99 },
		{ 0, 0, YYAT_REDUCE, 97 },
		{ 0, 0, YYAT_REDUCE, 96 },
		{ 137, 1, YYAT_ERROR, 0 },
		{ 193, 1, YYAT_REDUCE, 184 },
		{ 0, 0, YYAT_REDUCE, 185 },
		{ 0, 0, YYAT_REDUCE, 183 },
		{ 0, 0, YYAT_REDUCE, 207 },
		{ 731, 1, YYAT_REDUCE, 202 },
		{ 0, 0, YYAT_REDUCE, 201 },
		{ 431, 1, YYAT_REDUCE, 156 },
		{ 397, 1, YYAT_REDUCE, 156 },
		{ 0, 0, YYAT_REDUCE, 130 },
		{ 0, 0, YYAT_REDUCE, 200 },
		{ 106, 1, YYAT_DEFAULT, 313 },
		{ 0, 0, YYAT_REDUCE, 149 },
		{ 0, 0, YYAT_REDUCE, 131 },
		{ 0, 0, YYAT_REDUCE, 162 },
		{ 694, 1, YYAT_REDUCE, 161 },
		{ 0, 0, YYAT_REDUCE, 160 },
		{ 0, 0, YYAT_REDUCE, 177 },
		{ 0, 0, YYAT_REDUCE, 178 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ -159, 1, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_DEFAULT, 483 },
		{ 0, 0, YYAT_REDUCE, 141 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 380, 1, YYAT_REDUCE, 156 },
		{ 77, 1, YYAT_REDUCE, 156 },
		{ 0, 0, YYAT_DEFAULT, 478 },
		{ 537, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 150 },
		{ 0, 0, YYAT_REDUCE, 142 },
		{ 93, 1, YYAT_REDUCE, 207 },
		{ 124, 1, YYAT_REDUCE, 202 },
		{ 53, 1, YYAT_DEFAULT, 305 },
		{ 51, 1, YYAT_REDUCE, 201 },
		{ 0, 0, YYAT_REDUCE, 140 },
		{ 0, 0, YYAT_REDUCE, 129 },
		{ 164, 1, YYAT_REDUCE, 159 },
		{ 212, 1, YYAT_REDUCE, 72 },
		{ 0, 0, YYAT_REDUCE, 95 },
		{ 0, 0, YYAT_REDUCE, 165 },
		{ 0, 0, YYAT_REDUCE, 164 },
		{ 65, 1, YYAT_ERROR, 0 },
		{ 179, 1, YYAT_ERROR, 0 },
		{ -12, 1, YYAT_ERROR, 0 },
		{ 50, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 175 },
		{ 0, 0, YYAT_REDUCE, 173 },
		{ 46, 1, YYAT_REDUCE, 159 },
		{ 0, 0, YYAT_REDUCE, 174 },
		{ 0, 0, YYAT_REDUCE, 172 },
		{ 0, 0, YYAT_REDUCE, 170 },
		{ 0, 0, YYAT_REDUCE, 169 },
		{ 14, 1, YYAT_ERROR, 0 },
		{ 178, 1, YYAT_REDUCE, 159 },
		{ 376, 1, YYAT_REDUCE, 156 },
		{ 363, 1, YYAT_REDUCE, 156 },
		{ 346, 1, YYAT_REDUCE, 156 },
		{ 307, 1, YYAT_REDUCE, 156 },
		{ 290, 1, YYAT_REDUCE, 156 },
		{ 288, 1, YYAT_REDUCE, 156 },
		{ 0, 0, YYAT_REDUCE, 137 },
		{ 0, 0, YYAT_REDUCE, 138 },
		{ 0, 0, YYAT_REDUCE, 153 },
		{ 0, 0, YYAT_REDUCE, 139 },
		{ 0, 0, YYAT_REDUCE, 136 },
		{ 0, 0, YYAT_REDUCE, 135 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 227;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 493, 242 },
		{ 478, 420 },
		{ 476, 499 },
		{ 136, 179 },
		{ 340, 190 },
		{ 269, 290 },
		{ 340, 354 },
		{ 340, 262 },
		{ 260, 263 },
		{ 260, 191 },
		{ 493, 315 },
		{ 493, 314 },
		{ 493, 243 },
		{ 493, 245 },
		{ 493, 244 },
		{ 493, 246 },
		{ 340, 194 },
		{ 509, 515 },
		{ 340, 430 },
		{ 136, 180 },
		{ 260, 315 },
		{ 260, 345 },
		{ 269, 328 },
		{ 510, 190 },
		{ 476, 500 },
		{ 510, 516 },
		{ 510, 192 },
		{ 508, 514 },
		{ 89, 140 },
		{ 89, 136 },
		{ 478, 502 },
		{ 478, 423 },
		{ 507, 513 },
		{ 279, 201 },
		{ 88, 135 },
		{ 510, 194 },
		{ 89, 146 },
		{ 270, 292 },
		{ 270, 288 },
		{ 270, 287 },
		{ 270, 289 },
		{ 279, 362 },
		{ 88, 144 },
		{ 378, 445 },
		{ 378, 287 },
		{ 378, 289 },
		{ 346, 434 },
		{ 346, 424 },
		{ 346, 422 },
		{ 4, 12 },
		{ 488, 158 },
		{ 488, 155 },
		{ 4, 11 },
		{ 483, -1 },
		{ 483, 503 },
		{ 462, -1 },
		{ 462, 403 },
		{ 438, 167 },
		{ 438, 118 },
		{ 384, 197 },
		{ 384, 191 },
		{ 383, 451 },
		{ 383, 118 },
		{ 379, 158 },
		{ 379, 155 },
		{ 322, -1 },
		{ 322, 405 },
		{ 318, -1 },
		{ 318, 399 },
		{ 312, 392 },
		{ 312, 306 },
		{ 224, 292 },
		{ 224, 288 },
		{ 189, -1 },
		{ 189, 261 },
		{ 157, 208 },
		{ 157, 199 },
		{ 0, 3 },
		{ 0, 4 },
		{ 506, 512 },
		{ 505, 511 },
		{ 504, 203 },
		{ 498, 253 },
		{ 487, 216 },
		{ 482, 454 },
		{ 477, 501 },
		{ 475, 497 },
		{ 474, 496 },
		{ 472, 495 },
		{ 471, 494 },
		{ 470, 492 },
		{ 459, 491 },
		{ 458, 490 },
		{ 435, 486 },
		{ 432, 483 },
		{ 419, 472 },
		{ 418, 471 },
		{ 417, 470 },
		{ 397, 464 },
		{ 396, 463 },
		{ 391, 460 },
		{ 387, 453 },
		{ 374, 444 },
		{ 369, 443 },
		{ 365, 442 },
		{ 361, 441 },
		{ 360, 440 },
		{ 359, 439 },
		{ 357, 373 },
		{ 355, 371 },
		{ 349, 437 },
		{ 348, 436 },
		{ 347, 435 },
		{ 343, 433 },
		{ 342, 432 },
		{ 341, 431 },
		{ 339, 428 },
		{ 338, 426 },
		{ 337, 425 },
		{ 336, 421 },
		{ 335, 419 },
		{ 334, 418 },
		{ 332, 416 },
		{ 330, 414 },
		{ 325, 408 },
		{ 324, 407 },
		{ 323, 406 },
		{ 321, 404 },
		{ 319, 401 },
		{ 317, 397 },
		{ 316, 396 },
		{ 313, 393 },
		{ 311, 391 },
		{ 309, 390 },
		{ 308, 389 },
		{ 302, 385 },
		{ 295, 382 },
		{ 294, 381 },
		{ 293, 380 },
		{ 291, 373 },
		{ 285, 371 },
		{ 284, 370 },
		{ 282, 368 },
		{ 281, 367 },
		{ 280, 366 },
		{ 277, 364 },
		{ 276, 363 },
		{ 273, 358 },
		{ 272, 354 },
		{ 267, 353 },
		{ 265, 352 },
		{ 264, 351 },
		{ 259, 344 },
		{ 253, 333 },
		{ 252, 329 },
		{ 251, 328 },
		{ 250, 327 },
		{ 249, 326 },
		{ 238, 310 },
		{ 234, 307 },
		{ 231, 304 },
		{ 230, 302 },
		{ 229, 44 },
		{ 227, 300 },
		{ 220, 290 },
		{ 196, 228 },
		{ 188, 257 },
		{ 187, 256 },
		{ 182, 248 },
		{ 181, 241 },
		{ 179, 230 },
		{ 178, 22 },
		{ 176, 228 },
		{ 174, 226 },
		{ 173, 225 },
		{ 172, 223 },
		{ 171, 222 },
		{ 170, 219 },
		{ 169, 218 },
		{ 168, 217 },
		{ 166, 216 },
		{ 164, 215 },
		{ 163, 214 },
		{ 162, 213 },
		{ 161, 212 },
		{ 160, 211 },
		{ 159, 210 },
		{ 154, 203 },
		{ 153, 202 },
		{ 152, 200 },
		{ 137, 193 },
		{ 126, 167 },
		{ 125, 165 },
		{ 113, 156 },
		{ 108, 151 },
		{ 107, 150 },
		{ 106, 149 },
		{ 105, 148 },
		{ 87, 142 },
		{ 86, 141 },
		{ 85, 139 },
		{ 84, -1 },
		{ 81, 127 },
		{ 76, 120 },
		{ 75, 119 },
		{ 74, 117 },
		{ 53, 89 },
		{ 52, 87 },
		{ 51, 86 },
		{ 50, 83 },
		{ 49, 85 },
		{ 47, 82 },
		{ 38, 70 },
		{ 37, 69 },
		{ 36, 68 },
		{ 26, 53 },
		{ 25, 51 },
		{ 23, 49 },
		{ 20, 43 },
		{ 16, 35 },
		{ 15, 34 },
		{ 14, 33 },
		{ 13, 31 },
		{ 11, 26 },
		{ 9, 23 },
		{ 8, 19 },
		{ 2, 10 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 76, -1 },
		{ 0, -1 },
		{ 223, 4 },
		{ 0, -1 },
		{ 46, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 218, -1 },
		{ 215, 178 },
		{ 0, -1 },
		{ 214, -1 },
		{ 0, -1 },
		{ 218, -1 },
		{ 217, -1 },
		{ 216, -1 },
		{ 215, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 208, -1 },
		{ 0, 229 },
		{ 0, -1 },
		{ 200, -1 },
		{ 0, -1 },
		{ 199, 229 },
		{ 198, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 206, -1 },
		{ 205, -1 },
		{ 204, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 193, -1 },
		{ 0, 50 },
		{ 191, -1 },
		{ 191, -1 },
		{ 189, -1 },
		{ 188, 50 },
		{ 187, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 194, 383 },
		{ 193, 383 },
		{ 192, 383 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 197, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 173, 88 },
		{ 172, 89 },
		{ 171, 89 },
		{ 170, 89 },
		{ 14, 89 },
		{ 8, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 189, -1 },
		{ 188, -1 },
		{ 187, -1 },
		{ 186, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 180, 379 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 379 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 181, 383 },
		{ 180, 383 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -3, -1 },
		{ 161, 384 },
		{ 0, 384 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 384 },
		{ 0, -1 },
		{ 0, 384 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 174, 157 },
		{ 173, 157 },
		{ 182, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 60, 279 },
		{ 0, -1 },
		{ 175, 383 },
		{ 174, 383 },
		{ 173, 383 },
		{ 172, 383 },
		{ 177, -1 },
		{ 176, -1 },
		{ 0, -1 },
		{ 175, -1 },
		{ 0, -1 },
		{ 174, -1 },
		{ 173, -1 },
		{ 172, -1 },
		{ 153, -1 },
		{ 152, -1 },
		{ 151, -1 },
		{ 150, -1 },
		{ 0, -1 },
		{ 149, -1 },
		{ 0, -1 },
		{ 164, -1 },
		{ 161, -1 },
		{ 0, -1 },
		{ 127, 483 },
		{ 126, 483 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 498 },
		{ 0, -1 },
		{ 125, 483 },
		{ 137, 384 },
		{ 32, 260 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 142, 498 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 140, 224 },
		{ 0, 224 },
		{ 0, -1 },
		{ 0, -1 },
		{ 47, 378 },
		{ 0, -1 },
		{ 0, -1 },
		{ 140, -1 },
		{ 0, -1 },
		{ 152, -1 },
		{ 144, -1 },
		{ 115, 322 },
		{ 0, -1 },
		{ 0, -1 },
		{ 118, 312 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 498 },
		{ 114, 462 },
		{ 0, -1 },
		{ 0, 493 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 493 },
		{ 0, -1 },
		{ 116, 493 },
		{ 115, 493 },
		{ 114, 493 },
		{ 113, 493 },
		{ 120, -1 },
		{ 0, -1 },
		{ 0, 493 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 498 },
		{ 110, 483 },
		{ -21, 340 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 109, 483 },
		{ 108, 483 },
		{ 0, -1 },
		{ 119, 510 },
		{ 0, 272 },
		{ -19, 270 },
		{ 13, 252 },
		{ 0, -1 },
		{ 118, 510 },
		{ 131, 279 },
		{ 0, -1 },
		{ 0, 279 },
		{ 138, -1 },
		{ 137, -1 },
		{ 0, -1 },
		{ 25, -1 },
		{ 139, -1 },
		{ 138, -1 },
		{ 137, -1 },
		{ 0, -1 },
		{ 114, -1 },
		{ 135, -1 },
		{ 0, 291 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 112, -1 },
		{ 0, -1 },
		{ 127, 383 },
		{ 126, 383 },
		{ 125, 383 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 107, -1 },
		{ 0, 493 },
		{ 0, -1 },
		{ 0, 493 },
		{ 0, -1 },
		{ 0, -1 },
		{ 93, 493 },
		{ 92, 493 },
		{ 0, -1 },
		{ 102, 510 },
		{ 28, 493 },
		{ 88, 318 },
		{ 0, -1 },
		{ 0, -1 },
		{ 100, 510 },
		{ 99, 510 },
		{ 25, 483 },
		{ 84, 462 },
		{ 0, 462 },
		{ 82, 322 },
		{ 21, 462 },
		{ 96, 510 },
		{ 95, 510 },
		{ 94, 510 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 82, 493 },
		{ 0, -1 },
		{ 81, 493 },
		{ 0, -1 },
		{ 79, 483 },
		{ 78, 483 },
		{ 84, 346 },
		{ 83, 346 },
		{ 82, 346 },
		{ 74, 483 },
		{ -24, 483 },
		{ 74, 493 },
		{ 72, 483 },
		{ 72, 493 },
		{ 0, -1 },
		{ 0, -1 },
		{ 11, 478 },
		{ 82, 510 },
		{ 81, 510 },
		{ 68, 483 },
		{ 0, 493 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 104, 504 },
		{ 0, 357 },
		{ 81, 493 },
		{ 0, -1 },
		{ 96, 383 },
		{ 95, 383 },
		{ 94, 383 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 93, 383 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 92, 383 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 77, 378 },
		{ 0, -1 },
		{ 0, 378 },
		{ 0, -1 },
		{ 18, -1 },
		{ 50, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 50, -1 },
		{ 30, 510 },
		{ 0, -1 },
		{ 0, -1 },
		{ 59, 483 },
		{ 0, 482 },
		{ 0, -1 },
		{ 0, -1 },
		{ 66, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 482 },
		{ 65, -1 },
		{ 64, -1 },
		{ 0, 493 },
		{ 0, -1 },
		{ 0, 493 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 482 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 58, 493 },
		{ 57, -1 },
		{ 56, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 493 },
		{ 0, -1 },
		{ 0, 498 },
		{ 0, -1 },
		{ 0, -1 },
		{ 55, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 59, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 46, 309 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 493 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 482 },
		{ 0, -1 },
		{ 62, 510 },
		{ 61, 510 },
		{ 0, -1 },
		{ 0, -1 },
		{ 12, 318 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 482 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 48, 483 },
		{ 47, 483 },
		{ 46, 483 },
		{ 0, -1 },
		{ 79, -1 },
		{ 56, 510 },
		{ -6, 510 },
		{ 48, 478 },
		{ -7, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 42, 483 },
		{ 12, 493 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 78, 504 },
		{ 37, 493 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -31, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 50, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 76, 498 },
		{ 50, 510 },
		{ 49, 510 },
		{ 2, 510 },
		{ -3, 510 },
		{ -13, 510 },
		{ -5, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 2100 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////

