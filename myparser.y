%{
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


%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// parser name
%name myparser

// class definition
{
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
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// attribute type




// place any declarations here
%token PROGRAM 1
%token FUNCTION 2
%token PROCEDURE 3 
%token INTEGER 4
%token REAL 5
%token BOOLEAN 6
%token ARRAY 7
%token RECORD 8
%token VAR 9
%token BEGIN 10
%token END 11
%token OF 12
%token IF 13
%token THEN 14
%token ELSE 15
%token WHILE 16
%token DO 17
%token NOT 18
%token TRUE 19
%token FALSE 20
%token READ 21
%token WRITE 22
%token COMMA 37
%token SEMICOLON 38
%token DEFINE 39
%token LEFTCUBE 40
%token RIGHTCUBE 41
%token LEFTCIRCLE 42
%token RIGHTCIRCLE 43
%token PROGRAMEND 45
%token NUM 46
%token DIGITS 47
%token ID 48
%token RELOP 49
%token ADDOP 50
%token MULOP 51
%token ASSIGNOP 52
%token FOR 53
%token TO 54
%token CONST 55
%token TYPE 56
%token QUOTE 57
%token LETTER 58
%token CHAR 59
%token ELLIPSIS 60
%token POINT 61
%token CASE 62
%token REPEAT 63
%token UNTIL 64
%token DOWNTO 65
%token AND 66
%token DIV 67
%token MOD 68
%token OR 69


%left RELOP
%left ADDOP
%left MULOP




%%

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your YACC rules here (there must be at least one)

Program						:error program_body POINT
							{
									cout << "Error Detected!" << endl;
									cout <<$1.value +  $2.value << endl;
									outfile <<$1.value +  $2.value << endl;
									outfile.close();
									
								}
							|program_head program_body error
							{
									cout << "Error Detected!" << endl;
									cout <<$1.value + $2.value << endl;
									outfile <<$1.value +  $2.value << endl;
									outfile.close();
									
								}
							|program_head program_body POINT//½øÐÐ×îºóµÄ´íÎó»ã×Ü²¢¾ö¶¨ÊÇ·ñÊä³ö½á¹û
							{
								if(!hasError)
								{
									cout << "Compile Succeed!" << endl;
									cout <<$1.value +  $2.value << endl;
									outfile <<$1.value +  $2.value << endl;
									outfile.close();
								}
								else
								{
									cout << "Error Detected!" << endl;
									cout <<$1.value +  $2.value << endl;
									outfile <<$1.value +  $2.value << endl;
									outfile.close();
									
								}
							}
							;
									
program_head				: PROGRAM ID LEFTCIRCLE identifier_list1 RIGHTCIRCLE error 
                            {
								yyerrok(); 
								hasError = true;
							}
							|error ID LEFTCIRCLE identifier_list1 RIGHTCIRCLE SEMICOLON
							{
								yyerrok(); 
								hasError = true;
							}
							|PROGRAM error LEFTCIRCLE identifier_list1 RIGHTCIRCLE SEMICOLON 
							{
								yyerrok(); 
								hasError = true;
							}
							|PROGRAM ID error identifier_list1 RIGHTCIRCLE SEMICOLON  
							{
								yyerrok(); 
								hasError = true;
							}
							|PROGRAM ID LEFTCIRCLE error RIGHTCIRCLE SEMICOLON 
							{
								yyerrok(); 
								hasError = true;
							}
							|PROGRAM ID LEFTCIRCLE identifier_list1 error SEMICOLON 
							{
								yyerrok(); 
								hasError = true;
							}
							|PROGRAM ID LEFTCIRCLE identifier_list1 RIGHTCIRCLE SEMICOLON
							{
								$$.value = "#include<stdio.h>\n" ;
							}
							;
							
program_body				: const_declarations type_declarations var_declarations subprogram_declarations compound_statement //???¡ä???3???????¨°a????????¡ä?????????
							{
								$$.value =$1.value + "\n" +$2.value +"\n" +$3.value + "\n" + $4.value + "\n" + "int main()\n{\n" + $5.value + "return 0;\n}\n";
							    
							}
							| error type_declarations var_declarations subprogram_declarations compound_statement
							{
								yyerrok(); 
								hasError = true;
							}
							| const_declarations error var_declarations subprogram_declarations compound_statement
							{
								yyerrok(); 
								hasError = true;
							}
							| const_declarations type_declarations error subprogram_declarations compound_statement
							{
								yyerrok(); 
								hasError = true;
							}							
							| const_declarations type_declarations var_declarations error compound_statement
							{
								yyerrok(); 
								hasError = true;
							}
							| const_declarations type_declarations var_declarations subprogram_declarations error
							{
								yyerrok(); 
								hasError = true;
							}
							;
identifier_list1			:error COMMA ID
							{
								yyerrok(); 
								hasError = true;
							}
							|ID error ID
							{
								yyerrok(); 
								hasError = true;
							}
							|ID COMMA error
							{
								yyerrok(); 
								hasError = true;
							}
							|ID COMMA ID
							{
								$$.value = $1.value +", "+ $3.value;
							
							}	
							;	
identifier_list				: error ID identifier_list
							{
								yyerrok(); 
								hasError = true;
							}
							|COMMA error identifier_list
							{
								yyerrok(); 
								hasError = true;
							}
							| error type
							{
								yyerrok(); 
								hasError = true;
							}
							|COMMA ID identifier_list
							{
//							    $2.type = $3.type;
//								$$.value = ", " + declarationTrans($2.value,$2.type)+ $3.value ;
//								//$$.value = ", " + $2.value+ $3.value ;
//								$$.type = $3.type;
								//4.13gai
							    $$.type = $3.type;
							    $2.type = $3.type;
								$$.value = "," + $2.value+ $3.value ;
							}
							| DEFINE type
							{
//							//	$$.value = ": " + $2.value;
//								$$.type = $2.value;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
									//4.13gai
								$$.value="";
								$$.type = $2.value;
								
							}
							;	
//identifier_list				: COMMA ID identifier_list
//							{
//								$$.value = ", " + $2.value + $3.value;
//								$2.type = $3.type;
//								$$.type = $3.type;
//							}
//							| DEFINE type
//							{
//								$$.value = ": " + $2.value;
//								$$.type = $2.value;
//							}
//							;																						

													
const_declarations			:error const_declaration SEMICOLON
							{
								yyerrok(); 
								hasError = true;
							}
							|CONST const_declaration error
							{
								yyerrok(); 
								hasError = true;
							}
							|CONST const_declaration SEMICOLON 			
							{
								$$.value = $2.value + "\n";
							}
							| 
							{
								$$.value = "";
							}
							|
							;
			
const_declaration			:const_declaration error ID RELOP const_variable
							{
								yyerrok(); 
								hasError = true; 
							}
							|const_declaration SEMICOLON error RELOP const_variable
							{
								yyerrok(); 
								hasError = true; 
							}
							|const_declaration SEMICOLON ID error const_variable
							{
								yyerrok(); 
								hasError = true; 
							}
							|error RELOP const_variable
							{
								yyerrok(); 
								hasError = true; 
							}
							|ID error const_variable
							{
								yyerrok(); 
								hasError = true; 
							}
							|const_declaration SEMICOLON ID RELOP const_variable			
							{
								if ($4.value != "=")
								{
									yyerror("The format error of const declaration!");	
									hasError = true;
								}
								$3.type = $5.type;
								$$.value = $1.value + "const " + $3.type + " " + $3.value + " = " +$5.value;
								
								if(!checkSymbolTable_declare($3.value))
								{
									addtoSymboltable($3.value, $3.type);
									addtoConstTable($3.value,$3.type,$5.value);
								}	
								else
								{
									yyerror("This id already exists as a const!");	
									hasError = true;
								}   
							}
							
							|ID RELOP const_variable
							{
								if ($2.value != "=")
								{
									yyerror("The format error of const declaration!");
									hasError = true;	
								}
								$1.type = $3.type;

								$$.value = "const " + $1.type +" " + $1.value + " = " +$3.value + ";";
								
								if(!checkSymbolTable_declare($3.value))
								{
									addtoSymboltable($1.value, $1.type);
									addtoConstTable($1.value,$1.type,$3.value);
								}	
								else
								{
									yyerror("This id already exists as a const!");	
									hasError = true;
								}
							}
							;

const_variable              :ADDOP ID
							{
								string returnType = checkSymbolTable_quote($2.value);
								if(returnType != "false")
								{
									if ($1.value == "+")
									{
										$$.value = "+" +$2.value;
										$$.type = returnType;
									}	
									else if($1.value == "-")
									{
										$$.value = "-" +$2.value;
										$$.type = returnType;
									}	 
								}
								else
								{
									yyerror("This id doesn't exist as a const!");
									hasError = true;
								}
							
							}
							|ID	
							{
								string returnType = checkSymbolTable_quote($1.value);
								if(returnType != "false")
								{
									$$.value = $1.value;
									$$.type = returnType;	 
								}
								else
								{
									yyerror("This id doesn't exist as a const!");
									hasError = true;
								}
							}	
							|ADDOP NUM		
							{
								if ($1.value == "+")
								{
									$$.value = "+" +$2.value;
									$$.type = "float" ;
								}
									
								else if($1.value == "-")
								{
									$$.value = "-" +$2.value;
									$$.type = "float" ;
								}
								
							}
							| NUM	
							{
								$$.value=$1.value;
								$$.type = "float" ;
							}
							| ADDOP DIGITS	
							{
								if ($1.value == "+")
								{
									$$.value = "+" +$2.value;
									$$.type = "int" ;
								}
									
								else if($1.value == "-")
								{
									$$.value = "-" +$2.value;
									$$.type = "int" ;
								}
								
							}	
							| DIGITS	
							{
								$$.value=$1.value;
								$$.type = "int" ;
							}	
							| QUOTE LETTER QUOTE
							{
								$$.value =$2.value;
								$$.type = "char" ;
							}
							;
						
type_declarations			:error type_declaration SEMICOLON
							{
								yyerrok(); 
								hasError = true;
							} 
							|TYPE type_declaration error 
							{
								yyerrok(); 
								hasError = true;
							} 
							|TYPE type_declaration SEMICOLON 			
							{
								$$.value = $2.value + ";";
							}
							| 
							{
								$$.value = "";
							}
							;
type_declaration			:type_declaration error ID RELOP type
							{
								yyerrok(); 
								hasError = true; 
							}
							|type_declaration SEMICOLON error RELOP type
							{
								yyerrok(); 
								hasError = true; 
							}
							|type_declaration SEMICOLON ID error type
							{
								yyerrok(); 
								hasError = true; 
							}
							|error RELOP type
							{
								yyerrok(); 
								hasError = true; 
							}
							| ID error type
							{
								yyerrok(); 
								hasError = true; 
							}
							|type_declaration SEMICOLON ID RELOP type			
							{
								if ($4.value != "=")
								{
									yyerror("The format error of type declaration!");
									hasError = true;
								}
								$$.value = $1.value + ";" + "typedef " + $5.value + " " + $3.value;

								if(checkTypeTable($3.value)=="false")
								{
								
									addtoTypeTable($5.value,$3.value);
								}	
								else
								{
									yyerror("This id already exist!");	
									hasError = true;
								}
                                	
								    
							}
							
							| ID RELOP type
							{
								if ($2.value != "=")
								{
									yyerror("The format error of type declaration!");
									hasError = true;	
								}
								$$.value = "typedef " + $3.value + " " + $1.value;
								if(checkTypeTable($1.value)=="false")
								{
									addtoTypeTable($3.value,$1.value);
								}	
								else
								{
									yyerror("This id already exists!");	
									hasError = true;
								}
										
							}
							;	
							
type						: error record_body END
							{
								yyerrok(); 
								hasError = true; 
							}
							|RECORD record_body error
							{
								yyerrok(); 
								hasError = true; 
							}
							| error LEFTCUBE periods RIGHTCUBE OF type
							{
								yyerrok(); 
								hasError = true; 
							}
							| ARRAY error periods RIGHTCUBE OF type
							{
								yyerrok(); 
								hasError = true; 
							}
							| ARRAY LEFTCUBE periods error OF type
							{
								yyerrok(); 
								hasError = true; 
							}
							| ARRAY LEFTCUBE periods RIGHTCUBE error type
							{
								yyerrok(); 
								hasError = true; 
							}
							|standard_type 
							{	
								$$.value = $1.value;
											
							}
							| RECORD record_body END
							{					
								$$.value = "struct{\n" + $2.value + "\n}";	
																
							}
							| ARRAY LEFTCUBE periods RIGHTCUBE OF type
						    {
						    	
						    	$$.value = $6.value +" "+$3.value;
						    	
						    }
						    |ID
						    {
						    string s=checkTypeTable($1.value);
						    
						    if(s=="false"){
								yyerror("This is not a type!");
								hasError = true;
						    }
						    else $$.value=$1.value;
						    }
						    ;


standard_type				: INTEGER 
							{
								$$.value = "int";
								
							}
							| REAL
							{
								$$.value = "float";
							}
							| BOOLEAN
							{
								$$.value = "bool";
							}
							| CHAR
							{
								$$.value = "char";
							}
						    ;
						    
record_body					:body_declaration error
							{
								yyerrok(); 
								hasError = true; 
							}
							|body_declaration SEMICOLON
							{
								$$.value=$1.value;
									
							}
							|
							{
								$$.value="";
									
							}
    						;
//body_declaration			: body_declaration SEMICOLON  identifier_list DEFINE type			
//							{
//								$$.value = $1.value + structBodyTrans($1.value,$3.value);
//								while(!structTable.empty())
//								{
//									structTable.pop_back();
//								}
//								yyerror("body_declaration SEMICOLON  identifier_list DEFINE type");	
//							}
//							| identifier_list DEFINE type
//							{
//								$$.value =structBodyTrans($1.value,$3.value);
//								yyerror("identifier_list DEFINE type");	
//
//							}
//							;		   						
body_declaration			:body_declaration SEMICOLON error identifier_list
							{
								yyerrok(); 
								hasError = true; 
							}
							|body_declaration error ID identifier_list
							{
								yyerrok(); 
								hasError = true; 
							}
							|body_declaration SEMICOLON  ID identifier_list			
							{
							    $3.type = $4.type;
							    //$3.value=$3.value+$4.value;
								$$.value = $1.value + "\n" + structBodyTrans($3.value+$4.value,$3.type);
								while(!structTable.empty())
								{
									structTable.pop_back();
								}
								
							}
						/*	| body_declaration error SEMICOLON  ID identifier_list
							{
								yyerrok(); 
								hasError = true;
							}*/
							| ID identifier_list 
							{
							    $1.type=$2.type;
								$$.value =structBodyTrans($1.value+$2.value,$1.type);
								

							}
							;		
periods						:periods error period
							{
								yyerrok(); 
								hasError = true; 
							}
							|periods COMMA period
							{
								$$.value=$1.value + " " + $3.value;
								$$.type=$3.type;
							}					
							| period
							{
								$$.value=$1.value;
							}
							;
							
period						:const_variable error const_variable
							{
								yyerrok(); 
								hasError = true; 
							}
							|const_variable ELLIPSIS const_variable
							{
								if( $1.type != "int" || $3.type != "int" )	
								{
									yyerror(" Array limit isn't an integer! ");	
									hasError = true;
								}
								else
								{
									int num1,num2;
									num1=atoi(($1.value).c_str());
									num2=atoi(($3.value).c_str());
									
									$$.value=$1.value + "|" + $3.value;

									if( num1 >= num2 )
									{
										yyerror(" Array's left limit isn't smaller than right limit!");
										hasError = true;	
									}
									
								}

								
							}
							;
							
var_declarations			:VAR var_declaration error
							{
								yyerrok(); 
								hasError = true; 
							}
							|error var_declaration SEMICOLON 
							{
								yyerrok(); 
								hasError = true; 
							}
							|VAR var_declaration SEMICOLON 			
							{
							    
								$$.value = $2.value + ";\n";
								
							}
							| 
							{
								$$.value = "";
								
								
							}
							;
//var_declaration				: var_declaration SEMICOLON  identifier_list DEFINE type			
//							{
//								$$.value = $1.value + ";" + declarationTrans($3.value,$5.value);	
//							}
//							| identifier_list DEFINE type
//							{
//								$$.value = declarationTrans($1.value,$3.value);								
//							}
//							;	
var_declaration				:var_declaration SEMICOLON error identifier_list
							{
								yyerrok(); 
								hasError = true; 
							}
							|var_declaration error ID identifier_list
							{
								yyerrok(); 
								hasError = true; 
							}
							|var_declaration SEMICOLON ID identifier_list			
							{
							    $3.type = $4.type;
								//$$.value = $1.value + ";" +declarationTrans($3.value,$3.type)+$4.value;
							    //4.13gai
								$$.value = $1.value + ";\n" +declarationTrans($3.value+$4.value,$3.type);
							}
							| ID identifier_list
							{
								$1.type = $2.type;
								///$$.value = declarationTrans($1.value,$1.type) + $2.value;
						        //4.13gai
								$$.value = declarationTrans($1.value+ $2.value,$1.type) ;
							}
							
							;				

														
subprogram_declarations		: subprogram_declarations subprogram_declaration SEMICOLON 
							{
								$$.value = $1.value + $2.value;
							}
							|error subprogram_declaration SEMICOLON 
							{
								yyerrok(); 
								hasError = true; 
							}
							|subprogram_declarations error SEMICOLON 
							{
								yyerrok(); 
								hasError = true; 
							}
							|
							{
								$$.value = "";
		                    }
							;
							
subprogram_declaration		: subprogram_head subprogram_body 
							{
								if($1.type!="false")
								{
									preHead=preHead->preTable;					
                               		curHead=curHead->preTable; 
								}
								//$$.value = $1.value + "\n{\n" + $2.value + "}\n";							
                                $$.value = $1.value + $2.value;		
								//4.13gai

								
							}

							;
subprogram_head				: error FUNCTION ID formal_parameter DEFINE type SEMICOLON
							{
								yyerrok(); 
								hasError = true; 
							}
							|FUNCTION error formal_parameter DEFINE type SEMICOLON 
							{
								yyerrok(); 
								hasError = true; 
							}
							|FUNCTION ID formal_parameter error  type SEMICOLON
							{
								yyerrok(); 
								hasError = true; 
							}
							|FUNCTION ID formal_parameter DEFINE error SEMICOLON
							{
								yyerrok(); 
								hasError = true; 
							}
							|FUNCTION ID formal_parameter DEFINE type error 
							{
								yyerrok(); 
								hasError = true; 
							}
							| error ID formal_parameter SEMICOLON
							{
								yyerrok(); 
								hasError = true; 
							}
							| PROCEDURE error  formal_parameter SEMICOLON
							{
								yyerrok(); 
								hasError = true; 
							}
							| PROCEDURE ID error SEMICOLON	
							{
								yyerrok(); 
								hasError = true; 
							}
							| PROCEDURE ID formal_parameter error	
							{
								yyerrok(); 
								hasError = true; 
							}						
							|FUNCTION ID formal_parameter DEFINE type SEMICOLON
							{

								if(checkSymbolTable_func($2.value))//???
								{

									addtoSymboltable($2.value, "func", $3.value, $5.value);//?????¡À?
									$$.value = $5.value + " " + $2.value + "(" + $3.value + ")\n";

								}	
								//$$.value = $5.value + $2.value + "(" + $3.value + ")";
                                //4.13gai  jialege \n
                                else 
                                {
                                	$$.type="false";

                                	$$.value = $5.value + " " + $2.value + "(" + $3.value + ")\n";
                                	yyerror("This id has already been declared.");
                                	hasError = true;
                                }
                                
								
								
							}	 
							| PROCEDURE ID formal_parameter SEMICOLON
							{
								if(checkSymbolTable_func($2.value))//???
								{

									//addtoSymboltable($2.value, "func", $3.value, $5.value);//?????¡À?
                                    addtoSymboltable($2.value, "func", $3.value, "void");
                                    $$.value = "void " + $2.value + "(" + $3.value + ")\n";
								}	
								else 
                                {
                                	$$.type="false";
                                	$$.value = "void " + $2.value + "(" + $3.value + ")\n";
                                	yyerror("This id has already been declared.");
                                	hasError = true;
                                }
								

							} 
							;
							
subprogram_body				: const_declarations type_declarations var_declarations  compound_statement 
							{
							//	$$.value = "{\n"+$1.value +$2.value +$3.value + "\n" + $4.value + "\n" + "{\n" + $5.value + "\n}\n";
							    $$.value = "{\n" + $1.value +$2.value +$3.value + $4.value + "}\n";
							}
							;
							
formal_parameter			: error parameter_lists RIGHTCIRCLE 
							{
							    yyerrok();
								hasError = true;
						
							}
							|LEFTCIRCLE error RIGHTCIRCLE 
							{
							    yyerrok();
								hasError = true;
						
							}
                            |LEFTCIRCLE parameter_lists error 
                            {
							    yyerrok();
								hasError = true;
						
							}
							|LEFTCIRCLE parameter_lists RIGHTCIRCLE 
							{
								$$.value = $2.value;
								
							}
							| 
							{
								$$.value = "";
									
							}
							;
							
parameter_lists				:parameter_lists error parameter_list 
							{
							    yyerrok();
								hasError = true;
						
							}
							|parameter_lists SEMICOLON parameter_list 
							{
								$$.value = $1.value + "," + $3.value;
								
							
								 
							}
							| parameter_list 
							{
								$$.value = $1.value;
									
							
							}
							;
							
parameter_list				:var_parameter 
							{
								
								$$.value = $1.value;
								
							}

							|value_parameter 
							{
								
								$$.value = $1.value;
								
							}
							;
var_parameter				:error value_parameter
							{
							    yyerrok();
								hasError = true;
						
							}
							|VAR value_parameter 
							{
								$$.value = VarParameterTrans($2.value,$2.type);
								
							}
							;
//value_parameter				: identifier_list DEFINE standard_type
							//{
								//$$.value = ParameterTrans($1.value,$3.value);
								
							//}
							//;						

value_parameter				: ID identifier_list 

							{
//							$1.type = $2.type;
//							$1.value=$1.value+$2.value;
//							$$.value = ParameterTrans($1.value,$2.type);
//							$$.type=$1.type;
								$1.type = $2.type;
							    string s=$1.value+$2.value;
							
								$$.value = ParameterTrans(s,$2.type);
								$$.type=$1.type;
								
							
							}
							;	
compound_statement			: BEGIN statement_list END 
							{
								$$.value = $2.value;
						
							}
							|error statement_list END 
							{
							   yyerrok();
								hasError = true;
						
							}
							|BEGIN statement_list error
							{
							    yyerrok();
								hasError = true;
						
							}
						
							;
							
							
statement_list				: statement_list SEMICOLON statement 
							{
								$$.value = $1.value + $3.value;
								
							}
							| statement 
							{
								$$.value = $1.value;
							
							}
							|statement_list error statement
							{
							    yyerrok();
								hasError = true;
							}
						/*	|statement_list error SEMICOLON statement
							{
							    yyerrok();
								hasError = true;
							} */
							;
							
statement					: /*error SEMICOLON 
							{
								yyerrok();
								yyclearin(); 
								hasError = true;
							}
							| error END 
							{
								yyerrok();
								yyclearin(); 
								hasError = true;
							}
							| */ error ASSIGNOP expression
							{
								yyerrok(); 
								hasError = true;
							}
							| variable ASSIGNOP error  
							{
								yyerrok();
								yyclearin(); 
								hasError = true;
							}
							| variable error expression 
							{
								yyerrok(); 
								hasError = true;
							}
							|error expression THEN statement else_part
							{
								yyerrok(); 
								hasError = true;
							}
							| IF error THEN statement else_part
							{
								yyerrok();
								hasError = true;
							}
							| IF expression error statement else_part
							{
								yyerrok(); 
								hasError = true;
							}
							/*| IF expression THEN error else_part
							{
								yyerrok(); 
								hasError = true;
							}*/
							|error expression DO statement
							{
								yyerrok(); 
								hasError = true;
							}
							| WHILE error DO statement 
							{
								yyerrok(); 
								hasError = true;
							}
							| WHILE expression error statement 
							{
								yyerrok(); 
								hasError = true;
							}
							|error ID ASSIGNOP expression updown expression DO statement 
							{
								yyerrok(); 
								hasError = true;
							}
							|FOR ID error expression  updown expression DO statement
							{
								yyerrok(); 
								hasError = true;
							}
							|FOR ID ASSIGNOP error updown expression DO statement
							{
								yyerrok(); 
								hasError = true;
							}
							|FOR ID ASSIGNOP expression updown error DO statement
							{
								yyerrok(); 
								hasError = true;
							}
							| FOR ID ASSIGNOP expression updown expression error statement 
							{
								yyerrok(); 
								hasError = true;
							}
							| error expression OF case_body END
							{
								yyerrok(); 
								hasError = true;
							}
							| CASE error OF case_body END
							{
								yyerrok(); 
								hasError = true;
							}
							| CASE expression error case_body END
							{
								yyerrok(); 
								hasError = true;
							}
							|error statement_list UNTIL expression
							{
								yyerrok(); 
								hasError = true;
							}
							| REPEAT statement_list error expression
							{
								yyerrok(); 
								hasError = true;
							}
							| REPEAT statement_list UNTIL error 
							{
								yyerrok(); 
								hasError = true;
							}
							|  variable ASSIGNOP expression //?????¦Ì??????????????????????????¨¨¡¤?????
							{
//							    
//								 if($1.type != $3.type)
//								 {
//								
//								 	yyerror("Wrong assignment between different types??");
//								 }
//								 $$.value = $1.value + "=" + $3.value + ";\n";
								//4.13gai
								 if(checkReturn($1.value,$3.type))
								 {
								 	$$.value = "return " + $3.value + ";\n";
								 }
								 else
								 {
									 if($1.type != $3.type)
									 {
									
									 	yyerror("Wrong assignment between different types??");
									 	hasError = true;
									 }
									 $$.value = $1.value + "=" + $3.value + ";\n";
								 } 	
								
							}
							| call_procedure_statement 
							{
								$$.value = $1.value + ";\n";
							}
							| compound_statement 
							{
								$$.value = $1.value;
							}
							| IF expression THEN statement else_part 
							{
								$$.value = "if(" + $2.value + ")\n{\n" + $4.value + "}\n" +$5.value;
								if($2.type!="bool")
								{
									yyerror("error in if expression type");
									hasError = true;
								}
							} 
							| CASE expression OF case_body END
							{
								$$.value = "switch(" + $2.value + ")\n{\n" + $4.value + "}\n";
								if($2.type!=$4.type) 
								{
									yyerror("Different types in case !");
									hasError = true;
								}
							}
							| WHILE expression DO statement
							{
								$$.value = "while(" + $2.value + ")\n{\n" + $4.value + "}\n";
								if($2.type!="bool")
								{
									yyerror("error in while expression type");
									hasError = true;
								}
							}
							| REPEAT statement_list UNTIL expression
							{
								$$.value = "do\n{\n"+ $2.value + "}while(!(" + $4.value +"));\n";
								if($4.type!="bool")
								{
									yyerror("error in do while expression type");
									hasError = true;
								}
							}
							| FOR ID ASSIGNOP expression updown expression DO statement
							{
								
								string feedback=checkSymbolTable_quote($2.value);
								
								if(feedback=="false")
								{
									yyerror("variable is not declared!");
									hasError = true;
								}
								else if(feedback == $4.type && feedback == $6.type)
								{
									if($5.value == "to" )
									{
										if(feedback=="int")
										{
											if($4.value >= $6.value)
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
										
										$$.value = "for(" + $2.value + " = " + $4.value + "; " + $2.value + " <=" + $6.value + "; " + $2.value + "++)"+"\n{\n" + $8.value + "}\n";
									}
									else if($5.value == "downto" )
									{
										
										if(feedback=="int")
										{
											if($4.value <= $6.value)
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
										
										$$.value = "for(" + $2.value + " = " + $4.value + "; " + $2.value + " >=" + $6.value + "; " + $2.value + "--)"+"\n{\n" + $8.value + "}\n";
									}
								}	
							}
							| READ LEFTCIRCLE expression_list RIGHTCIRCLE	
							{
								//yyerror(($3.value).c_str());
							
								$$.value = readToScanf($3.value);					
							}
							| WRITE LEFTCIRCLE expression_list RIGHTCIRCLE   
							{
							//   yyerror(($3.value).c_str());
								$$.value = writeToPrintf($3.value);	
							}
							
							
/*							| READ LEFTCIRCLE identifier_list RIGHTCIRCLE	
							{
								$$.value = readToScanf($3.value);					
							}
							| WRITE LEFTCIRCLE identifier_list RIGHTCIRCLE   
							{
								$$.value = writeToPrintf($3.value);	
							}*/
							| 
							{
								$$.value="";
							}
							;
							
variable					: ID id_varparts
							{
								string feedback = checkParaQuote($1.value);
								if(feedback != "" && feedback[0] == 'v')
								{
									$$.value = "*" + $1.value + $2.value;
									$$.type = feedback.substr(1,feedback.length()-1);
								}
								else
								{
								    
									feedback=checkSymbolTable_quote($1.value); 
						
									if(feedback=="false")
									{
										if($1.value!=curHead->name) {
										    yyerror("This id hasn't been declared!");
										    hasError = true;
										}
										else
										{
											$$.type = "func";
											$$.value = $1.value + $2.value;
										}
									} 
									else
									{
										if($2.value.find("[",0)!=-1)
										{
											string s = checkarraylimit($1.value,$2.value);
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
												$$.type = feedback;
												$$.value = $1.value + s;
											}
											
										}
										else
										{
											$$.type = feedback;
											$$.value = $1.value + $2.value;
										}
										if($2.value != "" && strstr(feedback.c_str(), "struct"))
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
												if(s[i].substr(p+1,s[i].length()-p) == $2.value.substr(1, $2.value.length() - 1))
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
												$$.type = feedback;
												$$.value = $1.value + $2.value;
											}
											
										}
										
									}
									
										
										
								}
								
							

								
							}
							;
id_varparts					:id_varparts id_varpart
							{
								$$.value = $1.value+$2.value;
							}
							|
							{
								$$.value = "";
							}			
							;
id_varpart					: error expression_list RIGHTCUBE
							{
								yyerrok(); 
								hasError = true;
							}
							|LEFTCUBE expression_list error
							{
								yyerrok(); 
								hasError = true;
							}
							|LEFTCUBE expression_list RIGHTCUBE
							{
								string array[20];
								int length=commaSplit($2.value,array);
								string array1[20];
								int length1=commaSplit($2.type,array1);
								for(int j = 0; j <length1;j++)
								{
									if(array1[j]!="int") {
									    yyerror("wrong type");
									    hasError = true;
									}
								}
								$$.value="";
								for(int k = 0;k<length;k++)
								{
									$$.value += "["+ array[k] + "]";
								}								
								
							}			
							| POINT ID
							{
								$$.value = "." + $2.value;
							} 
							;

else_part					:error statement
							{
								yyerrok(); 
								hasError = true;
							}
							|ELSE statement
							{
								$$.value = "else\n{\n" + $2.value + "}\n";
 							}
							|
							{
								$$.value = "";
							}				
							;

case_body					:branch_list
							{
								$$.value = $1.value;
								$$.type=$1.type;
							}
							|
							{
								$$.value = "";
							}
							;	
						
branch_list					:branch_list error branch
							{
								yyerrok(); 
								hasError = true;
							}
							|branch_list SEMICOLON branch
							{
								$$.value = $1.value+$3.value;
								$$.type=$3.type;
								if($1.type!=$3.type)
								{
									yyerror("Expressions are not consistent!");
									hasError = true;
								}		
							}
							|branch
							{
								$$.value = $1.value;
								$$.type=$1.type;	
							}
							
							;
							
branch						:const_list error statement
							{
								yyerrok(); 
								hasError = true;
							}
							|const_list DEFINE statement
							{
								$$.value = "case " + $1.value +":\n"+ $3.value + "break;\n";
								$$.type=$1.type;
							}
								
							;
							
const_list					:const_list error const_variable
							{
								yyerrok(); 
								hasError = true;
							}
							|const_list COMMA const_variable	
							{
								$$.value = $1.value+","+$3.value;
								$$.type =$3.type;
								if($1.type==$3.type)
								{
									yyerror("Expressions are not consistent!");
									hasError = true;
								}
							}
							|const_variable
							{
								$$.value = $1.value;
								$$.type =$1.type;
							}
							
							;

updown  					:TO
							{
								$$.value = "to";
							}
							|DOWNTO
							{
								$$.value = "downto";
							}
							;

						
call_procedure_statement	: ID	
							{
								
								string feedback=checkFunction($1.value,"");
								$$.value = $1.value + "()";
								$$.type = feedback;
								
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
								

								
							}
							| ID LEFTCIRCLE expression_list RIGHTCIRCLE  
							{
								string feedback=checkFunction($1.value,$3.type);

								string para=paraCallTrans($1.value,$3.value);
								
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
								$$.value = $1.value + "(" + para + ")";
								$$.type = feedback;
							}
							| ID error expression_list RIGHTCIRCLE 
							{
								yyerrok(); 
								hasError = true;
							}
							| ID LEFTCIRCLE expression_list error 
							{
								yyerrok(); 
								hasError = true;
							}
						/*	| ID LEFTCIRCLE expression_list error SEMICOLON 
							{
								yyerrok(); 
								hasError = true;
							}
							| ID LEFTCIRCLE expression_list error END 
							{
								yyerrok(); 
								hasError = true;
							}*/
							;
							
expression_list				:  expression_list error expression
							{
								yyerrok(); 
								hasError = true;
							}
							| expression_list COMMA error 
							{
								yyerrok(); 
								hasError = true;
							}
							|expression_list COMMA expression  
							{
								$$.value = $1.value + "," + $3.value;
								$$.type = $3.type + "," + $1.type;
							}
							| expression  
							{
								$$.value = $1.value;
								$$.type = $1.type;
							}
							
							;
							
expression					: simple_expression RELOP error 
							{
								yyerrok(); 
								hasError = true;
							}
							| error RELOP simple_expression 
							{
								yyerrok(); 
								hasError = true;
							}
							|simple_expression error SEMICOLON
						    {
								yyerrok(); 
								hasError = true;
							}
							|simple_expression RELOP simple_expression 
							{	
								if($2.value == "=")
								{
									$$.value = $1.value + " == " + $3.value;
									$$.type="bool";
								}
								else if ($2.value == "<>")
								{
									$$.value = $1.value + " != " + $3.value;
									$$.type="bool";
								}
								else if ($2.value == "<")
								{
									$$.value = $1.value + " < " + $3.value;
									$$.type="bool";
								}
								else if ($2.value == "<=")
								{
									$$.value = $1.value + " <= " + $3.value;
									$$.type="bool";
								}
								else if ($2.value == ">")
								{
									$$.value = $1.value + " > " + $3.value;
									$$.type="bool";
								}
								else if ($2.value == ">=")
								{
									$$.value = $1.value + " >= " + $3.value;
									$$.type="bool";
								}	
							}
							| simple_expression  
							{
								$$.value = $1.value;
								$$.type=$1.type;
							}
							;
							
simple_expression			:simple_expression error term
							{
								yyerrok(); 
								hasError = true;
							}
							|simple_expression ADDOP error
							{
								yyerrok(); 
								hasError = true;
							}
							| simple_expression ADDOP term	
							{	
								if($2.value == "+")
								{
								
									$$.value = $1.value + " + " + $3.value;
									if($1.type=="int"&&$3.type=="int")
										$$.type="int";
									else
										$$.type="float";
								}
								else if ($2.value == "-")
								{
									$$.value = $1.value + " - " + $3.value;
									if($1.type=="int"&&$3.type=="int")
										$$.type="int";
									else
										$$.type="float";
								}
								else if ($2.value == "or")
								{
									$$.value = $1.value + " || " + $3.value;
									if($1.type=="bool"&&$3.type=="bool")
										$$.type="bool";
									else
									{
										yyerror("type error in or");
										hasError = true;
										$$.type="bool";
									}
								}
							}
							| term  
							{
								$$.value = $1.value;
								$$.type = $1.type;
							}
							|ADDOP term  
							{
								if($1.value == "+")
								{
									$$.value = "+" +$2.value;
									
								}
								else if($1.value == "-")
								{
								    $$.value = "-" +$2.value;
									
								} 
								if($2.type=="bool")
								{
									$$.value = $1.value +$2.value;
									yyerror("sign cannot be used for bool type");
									hasError = true;
								}       
								$$.type = $2.type;
							}
							;
							
term						:term error factor 
							{
								yyerrok(); 
								hasError = true;
							}
							|term MULOP factor 
							{							
								if($2.value == "*")
								{
									$$.value = $1.value + " * " + $3.value;
									if($1.type=="int"&&$3.type=="int")
									{
										$$.type="int";
									}
									else if($1.type=="float"||$3.type=="float")
									{
										$$.type="float";
									}
									else
									{
										$$.type="float";
										yyerror("Invalid operands to binary operator '*'!");
										hasError = true;
									}
										
								}
								else if ($2.value == "/")
								{
									if($1.type=="int"&&$3.type=="int")
									{
										$$.type="int";
										$$.value = $1.value + " / " + $3.value; 
										if(atoi(($3.value).c_str())==0)
										{
										    yyerror("zero error in div");
											hasError = true;
										}
									}
									else if($1.type=="float"||$3.type=="float")
									{
										$$.type="float";
										$$.value = "(float) " + $1.value + " / " + "(float) " + $3.value;
										if(atoi(($3.value).c_str())==0)
										{
										    yyerror("zero error in div");
									    }
									}
									else
									{
										$$.value = $1.value + " / " + $3.value;
										$$.type="float";
										yyerror("Invalid operands to binary operator '*'!");
										hasError = true;
									}
								
								}
								else if ($2.value == "div")
								{
									$$.value = $1.value + " / " + $3.value;
									if($1.type!="int"||$3.type!="int")
									{
										yyerror("type error in div");
										hasError = true;
									}
									
									$$.type="int";
								}
								else if ($2.value == "mod")
								{	
									$$.value = $1.value + " % " + $3.value;
									if($1.type=="int"&&$3.type=="int")
										$$.type="int";
									else
									{
										yyerror("type error in mod");
										hasError = true;
										$$.type="int";
									}
								}
								else if ($2.value == "and")
								{
									$$.value = $1.value + " & " + $3.value;
									if($1.type=="bool"&&$3.type=="bool")
										$$.type="bool";
									else
									{
										yyerror("type error in and");
										hasError = true;
										$$.type="bool";
									}
										
								}
							}
							| factor  
							{
								$$.value = $1.value;
								$$.type=$1.type;
							}
							;
							
factor						:error LEFTCIRCLE expression_list RIGHTCIRCLE
							{
								yyerrok(); 
								hasError = true;
							}
							|ID error expression_list RIGHTCIRCLE
							{
								yyerrok(); 
								hasError = true;
							}
							|ID LEFTCIRCLE expression_list error 
							{
								yyerrok(); 
								hasError = true;
							}
						/*	|ID LEFTCIRCLE expression_list error SEMICOLON
							{
								yyerrok(); 
								hasError = true;
							}*/
							|error expression_list RIGHTCIRCLE
							{
								yyerrok(); 
								hasError = true;
							}
							|LEFTCIRCLE expression_list error 
							{
								yyerrok(); 
								hasError = true;
							}
							|unsign_const_variable
							{
								$$.value = $1.value;
								$$.type = $1.type;	
							}
							|variable
							{
								$$.value = $1.value;
								$$.type = $1.type;	
							} 
							|ID LEFTCIRCLE expression_list RIGHTCIRCLE
							{
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
								string feedback = checkParaQuote($1.value);
								if(feedback != "" && feedback[0] == 'v')
								{
									$$.value = "*" + $1.value + "(" + $3.value + ")";
									$$.type = feedback.substr(1,feedback.length()-1);
								}
								else
								{
									feedback=checkSymbolTable_quote($1.value); 
									if(feedback=="false")
									{
										yyerror("This id hasn't been declared!");
										hasError = true;
									} 
									$$.type = feedback;
									$$.value = $1.value + "(" + $3.value + ")";
								}



								
								
							} 
							|LEFTCIRCLE expression RIGHTCIRCLE
							{
								$$.value = "(" + $2.value + ")";
								$$.type = $2.type;
							}
							|NOT factor
							{
								$$.value = "!" + $2.value;
								$$.type = $2.type;
							}
							| TRUE 
							{
								$$.value = "1";
								$$.type="bool";
							}
							| FALSE 
							{
								$$.value = "0";
								$$.type="bool";
							}
							;

							
unsign_const_variable		:ID
							{

								string feedback = checkParaQuote($1.value);
								if(feedback != "" && feedback[0] == 'v')
								{
									$$.value = "*" + $1.value;
									$$.type = feedback.substr(1,feedback.length()-1);
								}
								else
								{
									feedback=checkSymbolTable_quote($1.value); 
									if(feedback=="false")
									{
										yyerror("This name hasn't been declared!");
										hasError = true;
									} 
									
									$$.type = feedback;
									$$.value = $1.value;
								}
									
								
							}
							|
							NUM
							{
								$$.value = $1.value;
								$$.type = "float";
								
							
							}
							|DIGITS
							{
								$$.value = $1.value;
								$$.type = "int";
								
							
							}
							|LETTER
							{
								$$.value = "'" + IntToChar($1.value) + "'";
							} 
							;

%%

/////////////////////////////////////////////////////////////////////////////
