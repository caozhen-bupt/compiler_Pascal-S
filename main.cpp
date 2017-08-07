#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
#include "mylexer.h"
#include "myparser.h"
#include "dataStruc.h"
extern int linecount;
extern bool hasError;
vector< struct constElement > constTable;
vector< struct structElement > structTable;
vector< struct typedefElement > typeTable;

struct tableHead *curHead = NULL;
struct tableHead *preHead = NULL;

struct symbol *preSymbol = NULL; //娑撳﹣绔存稉鐚粂mbol 

ofstream outfile;
ifstream infile;

void initSymboltable(void);
void createSymboltable(string funcName, string para);
//string checkSubParaQuote(int n);
bool checkStructBody(string name);
bool matchParaType(string paraTypeList, struct symbol* curE);
string checkStardardType(string x);
string checkArrayType(string x);
string checkDecimalType(string x);
List* checkSymbolType(string input);
void addtoStructtable(string type, string name);
string checkFuncType(string x);
int count_char(string s, char ch) 
{
	int count = 0;
	char a = ch;
	for (int i = 0; i < s.length();i++)
	{
		if (s[i] == ch)
			count++;
	}

	return count;
}
int main()
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	char buffer;
	curHead = new struct tableHead();
	curHead->preTable=NULL;
	initSymboltable();
	infile.open("test.txt", ios::in);
	outfile.open("out.c", ios::out);
	lexer.yyin = &infile;
	if (parser.yycreate(&lexer))
	{
		if (lexer.yycreate(&parser))
		{
			n = parser.yyparse();
		}
	}
	cin >> buffer;

	return n;
}
int commaSplit(string input, string(&array)[20])
{
	string s = input;
	//	deleteSpace(s);
	int begin = 0, i = 0, end = 0;
	end = s.find(",", begin);

	if (end == -1) {
		array[i] = input;
		int o = array[i].find("(", 0);
		if (o != -1)
		{
			array[i] = array[i].substr(0, o);
		}
		return 1;
	}
	while (end != -1 && i<20)
	{
		array[i] = s.substr(begin, end - begin);
		//		cout<<begin<<"-"<<end<<"-"<<array[i]<<endl;
		//		deleteSpace(array[i]);
		i++;
		begin = end + 1;
		end = s.find(",", begin);
	}
	end = s.length();
	array[i] = s.substr(begin, end - begin);
	//	deleteSpace(array[i]);
	int length = i + 1;
	for (int j = 0; j < length; j++)
	{
		int pos0 = array[j].find("(", 0);
		if (pos0 != -1)
		{
			array[j] = array[j].substr(0, pos0);
			j++;
			while (1)
			{
				pos0 = array[j].find(")", 0);
				if (pos0 == -1)
				{
					for (int k = j; k < length - 1; k++)
					{
						array[k] = array[k + 1];

					}
					length--;
				}
				else
				{
					for (int k = j; k < length - 1; k++)
					{
						array[k] = array[k + 1];

					}
					length--;
					break;
				}
			}
			j--;
		}
	}
    return length;
//	return i + 1;
}
void deleteSpace(string(&input))
{
	int begin = 0;
	begin = input.find(" ", begin);  //閺屻儲澹樼粚鐑樼壐閸︹暞tr娑擃厾顑囨稉鈧▎鈥冲毉閻滄壆娈戞担宥囩枂
	while (begin != -1)			//鐞涖劎銇氱€涙顑佹稉韫厬鐎涙ê婀粚鐑樼壐
	{
		input.replace(begin, 1, "");  // 閻劎鈹栨稉鍙夋禌閹诡暀tr娑擃厺绮燽egin瀵偓婵娈?娑擃亜鐡х粭?

		begin = input.find(" ", begin);  //閺屻儲澹樼粚鐑樼壐閸︺劍娴涢幑銏犳倵閻ㄥ墕tr娑擃厾顑囨稉鈧▎鈥冲毉閻滄壆娈戞担宥囩枂
	}
}
int myparser::commaSplit(string input, string(&array)[20])
{
	string s = input;
	//	deleteSpace(s);
	int begin = 0, i = 0, end = 0;
	end = s.find(",", begin);

	if (end == -1) {
		array[i] = input;

		return 1;
	}
	while (end != -1 && i<20)
	{
		array[i] = s.substr(begin, end - begin);
		//		cout<<begin<<"-"<<end<<"-"<<array[i]<<endl;
		//		deleteSpace(array[i]);
		i++;
		begin = end + 1;
		end = s.find(",", begin);
	}
	end = s.length();
	array[i] = s.substr(begin, end - begin);
	//	deleteSpace(array[i]);
	
	return i + 1;
}
int semiSplit(string input, string(&array)[20])
{
	string s = input;
	//	deleteSpace(s);
	int begin = 0, i = 0, end = 0;
	end = s.find(";", begin);

	if (end == -1) {
		array[i] = input;
		return 1;
	}
	while (end != -1 && i<20)
	{
		array[i] = s.substr(begin, end - begin);
		//		cout<<begin<<"-"<<end<<"-"<<array[i]<<endl;
		//		deleteSpace(array[i]);
		i++;
		begin = end + 1;
		end = s.find(";", begin);
	}
	end = s.length();
	array[i] = s.substr(begin, end - begin);
	//	deleteSpace(array[i]);
	return i + 1;
}
int myparser::semiSplit(string input, string(&array)[20])
{
	string s = input;
	//	deleteSpace(s);
	int begin = 0, i = 0, end = 0;
	end = s.find(";", begin);

	if (end == -1) {
		array[i] = input;
		return 1;
	}
	while (end != -1 && i<20)
	{
		array[i] = s.substr(begin, end - begin);
		//		cout<<begin<<"-"<<end<<"-"<<array[i]<<endl;
		//		deleteSpace(array[i]);
		i++;
		begin = end + 1;
		end = s.find(";", begin);
	}
	end = s.length();
	array[i] = s.substr(begin, end - begin);
	//	deleteSpace(array[i]);
	return i + 1;
}
string myparser::checkarraylimit(string name, string bound)
{
	struct symbol *curE;
	struct tableHead *curH;
	int found;
	int len, i = 1, j = 0;
	string value, ret;
	char re[10];
	curH = curHead;
	while (curH != NULL)
	{
		curE = curH->tableElement;
		while (curE != NULL)
		{
			if (curE->name == name)
			{
				found = (curE->type).find('*');
				if (found != std::string::npos)
				{
					len = bound.length();

					while (i <= len)
					{
						found = bound.find(']', i);
						value = bound.substr(i, found - i);
						if (value[0] >= '0'&&value[0] <= '9')
						{
							int num = atoi(value.c_str());
							if (j<curE->dimension&&num >= curE->lowbound[j] && num <= curE->upbound[j])
							{
								int result = num - curE ->lowbound[j];
								_itoa_s(result, re, 10);
								ret = ret + "[" + re + "]";
								j++;
								
							}
							else return "false";
						}
						else
						{
							ret = ret + "[" + value + "]";
							j++;
						}
						i = found + 2;
						
					}
					if (j != curE->dimension)
					{
						return "false";
					}
					else return ret;
				}
			}
			curE = curE->next;
		}
		curH = curH->preTable;
	}
	return "false";
}
string standardTypeTrans(string x)
{
//	if (x == "int" || x == "boolean")
//	{
//		return "\"%d\",";
//	}
//	else if (x == "char")
//	{
//		return "\"%c\",";
//	}
//	else if (x == "float")
//	{
//		return "\"%f\",";
//	}
	if (x == "int" || x == "boolean")
	{
		return "%d";
	}
	else if (x == "char")
	{
		return "%c";
	}
	else if (x == "float")
	{
		return "%f";
	}
	else if (x.find("*",0)!=-1)
	{
		int p = x.find("*", 0);
		if (p != -1){
			return standardTypeTrans(x.substr(0, p));
		}

	}
	else return "false";

}
void myparser::addtoConstTable(string cname, string ctype, string cvalue)
{
	bool findconst = false;
	for (vector< struct constElement >::iterator it = constTable.begin(); it != constTable.end();)
	{
		if ((*it).name == cname)
		{
			findconst = true;
			if ((*it).type != ctype || (*it).value != cvalue)//卤拢麓忙碌脷露镁麓脦露篓脪氓碌脛 拢卢卤篓warning 
			{
				(*it).type = ctype;
				(*it).value = cvalue;
				yywarning("Const \" + cname + \"is redefined!");
			}
			break;
		}
	}
	if (findconst == false)
	{
		struct constElement tmp;
		tmp.name = cname;
		tmp.type = ctype;
		tmp.value = cvalue;
		constTable.push_back(tmp);
	}
}
string myparser::readToScanf(string input)
{
	string array[20];
	//string output = "scanf(";
	string output = "scanf(\"";
	List* headList;
	headList = checkSymbolType(input);
	//cout<<headList->name<<" "<<headList->type<<endl;
	if (headList == NULL){
		yyerror("read error");
		return "";
	}
	else
	{
		for (List* curList = headList; curList != NULL; curList = curList->next)
		{
			//cout<<curList->type;
			string s = standardTypeTrans(curList->type);
			if (s == "false")
			{
				yyerror("This type can't be read");
				hasError = true;
				return "";
			}
			output.append(standardTypeTrans(curList->type));
			if (curList->next!=NULL) output.append(",");
		}
		output.append("\",");
		for (List* curList = headList; curList != NULL; curList = curList->next)
		{
			output.append("&");
			output.append(curList->name);
			if (curList->next != NULL)
			{
				output.append(",");
			}
		}
		//4.13gai
		output.append(");\n");

	
		return output;
	}
}
string myparser::writeToPrintf(string input)
{
	string array[20];
//	string output = "printf(";
	string output = "printf(\"";
	List* headList;
	headList = checkSymbolType(input);
	//cout<<headList->name<<" "<<headList->type<<endl;
	if (headList == NULL){
		yyerror("write error");
		return "";
	}
	else
	{
		for (List* curList = headList; curList != NULL; curList = curList->next)
		{
			//cout<<curList->type;
			if (count_char(curList->type, '*') != count_char(curList->name, '['))
			{
				yyerror("This type can't be written");
				hasError = true;
				return "";
			}
			
			string s = standardTypeTrans(curList->type);
			if (s == "false")
			{
				yyerror("This type can't be written");
				hasError = true;
				return "";
			}
			output.append(s);
			if (curList->next != NULL) output.append(",");
		}
//		for (List* curList = headList; curList != NULL; curList = curList->next)
//		{
//			output.append(curList->name);
//			if (curList->next != NULL)
//			{
//				output.append(",");
//			}
//		}
//		output.append(");");

		//cout << output << endl;
		output.append("\",");
		for (List* curList = headList; curList != NULL; curList = curList->next)
		{
			output.append(curList->name);
			if (curList->next != NULL)
			{
				output.append(",");
			}
		}
		//4.13gai
		output.append(");\n");
		return output;
	}
}
string myparser::VarParameterTrans(string input, string inputType)
{
//	deleteSpace(input);
//	deleteSpace(inputType);
//	int num;
//	string s[20], out;
//	num = commaSplit(input, s);
//	for (int i = 0; i < num - 1; i++)
//	{
//		out += inputType + " *" + s[i] + ", ";
//	}
//	out += inputType + " *" + s[num - 1];
//	return out;
	int num;
	string s[20], out;
	num = commaSplit(input, s);
	for (int i = 0; i < num - 1; i++)
	{
		int pos = inputType.length() + 1;
		s[i].insert(pos, "*");
		out +=s[i] + ",";
	}
	int pos = inputType.length() + 1;
	s[num-1].insert(pos, "*");
	out +=s[num - 1];
	return out;
}
string myparser::declarationTrans(string inputName, string inputType)
{
	//addType(inputName,inputType);
	string array[20];
	commaSplit(inputName, array);
	string output = "";
	int begin = 0, end = 0;
	int length = commaSplit(inputName, array);
	end = inputType.find("|", begin);//end绾綍|鐨勪綅缃?

	if (end == -1)		//int銆傘€傘€俿truct 
	{
		output.append(inputType);
		string x = checkTypeTable(inputType);
		if (x != "false"){

			inputType = x;
		}
		
		for (int i = 0; i<length; i++)
		{
			if (checkSymbolTable_declare(array[i]))			//鏌ラ噸锛岃繑鍥瀟rue琛ㄧず閲嶅瀹氫箟浜嗭紝鎶ラ敊 
				yyerror("This is already exist!");
			else												//杩斿洖false 
			{
				addtoSymboltable(array[i], inputType);		//鍔犲叆绗﹀彿琛紒 
				output.append(" ");
				output.append(array[i]);	
				//cout << array[i] << " ";

				if (i != length - 1)
					output.append(",");
			}
		}
	//	cout << output;
		return output;
	}
	else			//鏁扮粍 
	{
		begin = inputType.find(" ", begin);					//begin鏄? "浣嶇疆   //end绾綍|鐨勪綅缃?
		output = inputType.substr(0, begin);
		//string t=output;
		string t = output + "*";
		int low[20];
		int up[20];
		int dimension = 0;
		while (begin<inputType.length() && dimension<20)
		{
			string lowbound = inputType.substr(begin + 1, end - begin + 1);		//浠巄egin""涓嬩竴涓紑濮?鍙杄nd-(begin+1)涓瓧绗?
			begin = end;										//begin鏄瘄浣嶇疆 
			end = inputType.find(" ", begin);					//end 鏄笅涓€涓? "浣嶇疆 
			string upbound = inputType.substr(begin + 1, end - begin + 1);//

			low[dimension] = atoi(lowbound.c_str());
			up[dimension] = atoi(upbound.c_str());

			dimension++;
			begin = end;
			end = inputType.find("|", begin);
		}

		for (int i = 0; i<length; i++)
		{
			//cout << array[i] << endl;
			if (checkSymbolTable_declare(array[i]))		//鏌ラ噸锛岃繑鍥瀟rue琛ㄧず閲嶅瀹氫箟浜嗭紝鎶ラ敊 
				yyerror("This is already exist!");
			else												//杩斿洖false 
			{

				addtoSymboltable(array[i], t, dimension, low, up);		//鍔犲叆绗﹀彿琛紒 
				output.append(" ");
				output.append(array[i]);
				for (int j = 0; j<dimension; j++){
					int x = up[j] - low[j] + 1;
					stringstream xx;
					xx << x;
					string temp;
					xx >> temp;
					output.append("[" + temp + "]");
				}
				if (i != length - 1)
					output.append(",");
			}
		}
	//	cout << output << endl;
		return output;
	}
}
string myparser::ParameterTrans(string input, string inputType)
{
	deleteSpace(input);
	deleteSpace(inputType);
	int num;
	string s[20], out;
	num = commaSplit(input, s);
	for (int i = 0; i < num - 1; i++)
	{
		out += inputType + " " + s[i] + ",";
	}
	out += inputType + " " + s[num - 1];
	return out;
}
string myparser::structBodyTrans(string inputName, string type)//name 鏄痑,b,c   type灏辨槸int锛岃繑鍥瀒nt a,b,c;  鏌ラ噸 鍔犺〃 杈撳嚭 
{
	string array[20];
	int length = commaSplit(inputName, array);
	string output = type;

	for (int i = 0; i<length; i++)
	{
		if (checkStructBody(array[i]))			//杩斿洖false鎶ラ敊 去掉了！.....................
			yyerror("This is already exist in stuct!");
		else
		{
			struct structElement e;
			e.name = inputName;
			e.type = type;
			structTable.push_back(e);
			output.append(" ");
			output.append(array[i]);
			if (i != length - 1)
				output.append(",");
		}
	}
	output.append(";");
	return output;
}
void myparser::yyerror(const char *str)
{
	cout << "Error : " << str << " at line number = " << linecount + 1 << endl;
}
void myparser::yywarning(const char *str)
{
	cout << "Warining : " << str << " at line number = " << linecount + 1 << endl;
}
string checkStardardType(string x)
{
//	//cout<<"check-standard-type"<<curHead->tableElement->name<<endl;
//	struct symbol *cur = curHead->tableElement;
//	while (cur != NULL)
//	{
//		//cout<<cur->name<<" "<<cur->type<<endl;
//		if (x.compare(cur->name) == 0)
//		{													//cout<<"type"<<cur->type<<endl;
//			return cur->type;
//		}
//		cur = cur->next;
//	}
//	return "";co
	struct parameters* para = curHead->paraList;
	while (para != NULL)
	{
		if (para->name == x)
		{

			return para->type;
		}
		para = para->next;
	}
	struct symbol *curE;
	struct tableHead *curH = curHead;


	while (curH != NULL)
	{
		curE = curH->tableElement;
		while (curE != NULL)
		{

			if (curE->name == x)
			{
				if (curE->type == "func") return curE->returnType;
				return curE->type;
			}
			curE = curE->next;
		}
		curH = curH->preTable;
	}
	return "";
}
void initSymboltable()
{

	curHead->name = "main";
	curHead->tableElement = NULL;
	curHead->preTable = NULL;
	curHead->paraList = NULL;
}
struct parameters* paraToList(string para)//paraToList(string) int a,int b,int c, 判断是否有* 有*在type前加v 
{											//name type int *next 
	struct parameters* head=NULL;
	struct parameters* pre=NULL;
	string array[20];
	int length=commaSplit(para,array);
	
	for(int i=0;i<length;i++)
	{
		struct parameters* cur=new struct parameters();
		int vp=array[i].find("*",0);
		if(vp!=-1)
		{
			cur->type="v"+array[i].substr(0,vp-1);
			
			cur->name=array[i].substr(vp+1,array[i].length()-(vp+1));
			deleteSpace(cur->name);
			cur->next=NULL;
		}
		else
		{
			int p=array[i].find(" ",0);
			cur->type=array[i].substr(0,p);
			cur->name=array[i].substr(p+1,array[i].length()-(p+1));
			deleteSpace(cur->name);
			cur->next=NULL;
		}
		if(head==NULL)
		{
			head=cur;
			pre=cur;
		}
		else
		{
			pre->next=cur;
			pre=cur;
		}
	}
	return head;
}
void createSymboltable(string funcName, string para)
{
	struct tableHead *tmp = new struct tableHead();
	tmp->name = funcName;
	tmp->preTable = curHead;
	tmp->tableElement = NULL;

	tmp->paraList = paraToList(para);//xuyue

	
	preHead = curHead;
	curHead = tmp;
}
bool myparser::checkSymbolTable_declare(string name)
{
	struct symbol *curE;
	curE = curHead->tableElement;

	while (curE != NULL)
	{
		if (curE->name == name)
		{
			return true;
		}
		curE = curE->next;
	}

	return false;

}
string myparser::checkSymbolTable_quote(string name)
{
	struct symbol *curE;
	struct tableHead *curH;
	curH=curHead;
	while (curH != NULL)
	{
		curE = curH->tableElement;
		while (curE != NULL)
		{
			if (curE->name == name)
			{
				(curE->quoteLine).push_back(linecount);
				if( curE->type=="func")
				{
					return curE->returnType;
				}
				else{
					return curE->type;
				}

			}
			if( curE->type=="func" )
			{
//				cout<<"!!!"<<endl;
				parameters *tmp = curE->subTable->paraList;
				while (tmp!= NULL)
				{	
//					yyerror(tmp->name.c_str());
					if( tmp->name == name)
					{
						return tmp->type;
					
					}
					tmp=tmp->next;
				}
			}
			curE = curE->next;
		}
		curH=curH->preTable;
	}
	return "false";
}
bool myparser::checkSymbolTable_func(string name)
{
	struct symbol *curE;
	if (curHead -> name == name) return false;

	curE = curHead->tableElement;
	while (curE != NULL)
	{
		if (curE->name == name)
		{
			
			return false;

		}
		curE = curE->next;
	}
	return true;
}
struct symbol* simpleCheck(string x)
{
	struct symbol* cur = curHead->tableElement;
	while (cur != NULL)
	{
		if (x.compare(cur->name) == 0)
		{
			//cout<<cur->name<<" ";
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
string checkArrayType(string x)
{
	//cout<<"check-Array-Type"<<endl;
	int p0 = x.find("[", 0);
	int p1, count = 0;
	int value[20];
	string name;
	struct symbol* cur;

	if (p0 != -1)
	{
		name = x.substr(0, p0);								//cout<<name<<endl;
		cur = simpleCheck(name);								//cout<<cur->name<<" ";
		if (cur == NULL)
		{
			return "";
		}
		/* 		else
				{
				while (p0 != -1)
				{
				count++;
				p1 = x.find("]", p0);
				string ll = x.substr(p0 + 1, p1 - p0 - 1);
				value[count - 1] = atoi(ll.c_str());			//cout<<value[count-1]<<" "<<endl;

				if ((value[count - 1] >= cur->lowbound[count - 1] && value[count - 1] <= cur->upbound[count - 1]))	//妫€鏌ヤ笂涓嬬晫
				{
				p0 = x.find("[", p1);
				}
				else
				{
				return "";
				break;
				}
				}

				if (p0 == -1)
				{*/
		int q = (cur->type).find(" ", 0);
		return ((cur->type).substr(0, q));


	}

}

string checkDecimalType(string x)
{
	//cout<<"check-Decimal-Type"<<endl;
	int p0 = x.find(".", 0);
	int p1, p2, p3;
	string firstname = x.substr(0, p0);						//cout<<firstname<<" ";
	string lastname = x.substr(p0 + 1, x.length() - p0 - 1);			//cout<<lastname<<" ";
	struct symbol* cur = simpleCheck(firstname);				//cout<<cur->name<<" "<<cur->type<<" "<<endl;

	if (cur != NULL)
	{
		string type = cur->type;
		p1 = type.find("{", 0);
		p2 = type.find("}", p1);
		string body = type.substr(p1 + 1, p2 - p1 - 3);				//cout<<body<<" ";	//;;;;
		string array[20];
		int length = semiSplit(body, array);					//cout<<length<<" "<<endl;
		for (int i = 0; i<length; i++)
		{
			//cout<<array[i]<<" ";
			array[i] = array[i].substr(1, array[i].length() - 1);
			p3 = array[i].find(" ", 0);
			string pname = array[i].substr(p3 + 1, array[i].length() - p3 - 1);
			//cout<<pname<<" ";
			if (pname == lastname)
			{
				//cout<<array[i].substr(0,p3)<<" ";
				return array[i].substr(0, p3);
			}
		}
	}
	return "";
}

List* checkSymbolType(string input)
{
	string array[20];
	int length = commaSplit(input, array);
	int pos0 = 0;
	int pos1 = 0;
	List *head = NULL, *pre = NULL;
	List* cur = NULL;
	for (int i = 0; i<length; i++)
	{
		//cout<<length<<"-"<<array[i]<<endl;
		//cout<<array[i]<<endl;
		pos0 = array[i].find(".", 0);
		pos1 = array[i].find("[", 0);
		//cout<<".-"<<pos0<<"[-"<<pos1<<endl;	
		
		if (pos0 == -1 && pos1 == -1)//鏍囧噯绫诲瀷 
		{
			string ttype = checkStardardType(array[i]);
			if (ttype != "")
			{
//				cur = new List();
//				deleteSpace(array[i]);
//				cur->name = array[i];
//				cur->type = ttype;
//				cur->next = NULL;

				cur = new List();
				if (checkFuncType(array[i]) == "func")
				{
					int pos = input.find(array[i], 0);
					int ok = 0;
					int i;
					for (i = pos; i < input.length(); i++)
					{
						if (input[i] == '(')
						{
							ok++;
						}
						if (input[i] == ')')
						{
							ok--;
							if (ok == 0) break;
						}
					}
					cur->name = input.substr(pos, i - pos + 1);
					
				}
				else
				{
					cur->name = array[i];
				}


				deleteSpace(cur->name);
				cur->type = ttype;
				cur->next = NULL;
			}
			else
				return NULL;
		}
		else if (pos1 != -1 && pos0 == -1)//鏁扮粍绫诲瀷
		{
			string ttype = checkArrayType(array[i]);
			if (ttype != "")
			{
				cur = new List();
				deleteSpace(array[i]);
				cur->name = array[i];
				cur->type = ttype;
				cur->next = NULL;
			}
			else
				return NULL;
		}
		else if (pos0 != -1) //struct绫诲瀷 
		{
			string ttype = checkDecimalType(array[i]);				//cout<<ttype<<endl;
			if (ttype != "")
			{
				cur = new List();
				deleteSpace(array[i]);
				cur->name = array[i];
				cur->type = ttype;
				cur->next = NULL;
			}
			else
				return NULL;
		}

		if (head == NULL&&pre == NULL)
		{
			head = cur;
			pre = cur;
		}
		else
		{
			pre->next = cur;
			pre = cur;
		}

	}
	return head;
}
string myparser::checkFunction(string name, string paraTypeList)
{
	
	struct symbol *curE;
	struct tableHead *curH = curHead;


	while (curH != NULL)
	{
		curE = curH->tableElement;
		while (curE != NULL)
		{
			if (curE->name == name)
			{
				if (matchParaType(paraTypeList, curE))
				{
					curE->quoteLine.push_back(linecount);
					//return curE->type;
					return curE->returnType;
				}
				else
				{
					return "wrong parameter type";
				}
			}
//			else
//			{
//				return "not declared";
//			}
			curE = curE->next;
		}
		curH = curH->preTable;
	}
	return "not declared";
}

string myparser::checkParaQuote(string name)
{
	struct parameters* para = curHead->paraList;
	while (para != NULL)
	{
		if (para->name == name)
		{
			
			return para->type;
		}
		para = para->next;
	}
	return "";
}

//string checkSubParaQuote(int n)//wu
//{
//	struct parameters* para = curHead->paraList;
//	for (int i = 0; i< n; i++)
//	{
//		if (para == NULL) return "";
//		return para->type;
//	}
//	return "";
//}
bool checkStructBody(string name)//wu
{
	vector<struct structElement>::iterator iter;
	for (iter = structTable.begin(); iter != structTable.end(); iter++)
	{
		if (name == (*iter).name) return true;
	}
	return false;
}

string myparser::checkTypeTable(string name)
{
	vector<struct typedefElement>::iterator iter;
	for (iter = typeTable.begin(); iter != typeTable.end(); iter++)
	{
		if (name == (*iter).typeName) {
			
			return (*iter).realType;
		}
	}
	return "false";

}
bool matchParaType(string paraTypeList, struct symbol* curE)//wu
{
	int num;
	string a[20];
	if (paraTypeList == "" && curE->subTable->paraList==NULL) return true;
	num = commaSplit(paraTypeList, a);
	struct parameters* para = curE->subTable->paraList;


	for (int i = 0; i<num; i++)
	{
		
		if (para == NULL) return false;
//		if (para->type != checkSubParaQuote(i))
//		{
//			return false;
//		}
		if (para->type == a[i] || para->type.substr(1, para->type.length() - 1) == a[i])
		{
			para = para->next;
		}
		else return false;
		
	}
	return true;
}
void myparser::addtoSymboltable(string name, string type)
{
	struct symbol *curSymbol = new struct symbol();
	curSymbol->name = name;
	curSymbol->type = type;
	curSymbol->next = NULL;
	curSymbol->subTable = NULL;
	curSymbol->varLine = linecount;
	if (curHead->tableElement == NULL)
	{
		curHead->tableElement = curSymbol;
		preSymbol = curSymbol;

	}
	else
	{
		preSymbol->next = curSymbol;
		preSymbol = curSymbol;
	}

}
void myparser::addtoSymboltable(string name, string type, string para, string retType)
{
/*	struct symbol *s = curHead->tableElement;
	while (s != NULL)
	{
		if (s->name == name)
		{
			yyerror("This id has been declared!");
			return;
		}
		s = s->next;
	}*/

	struct symbol *curSymbol = new struct symbol();
	curSymbol->name = name;
	curSymbol->type = type;
	curSymbol->next = NULL;
	curSymbol->varLine = linecount;
	curSymbol->returnType = retType;

	createSymboltable(name, para);

	curSymbol->subTable = curHead;
//	if (curHead->tableElement == NULL)
//	{
//		curHead->tableElement = curSymbol;
//		preSymbol = curSymbol;
//
//	}
    if (preHead->tableElement == NULL)
	{
		preHead->tableElement = curSymbol;
		preSymbol = curSymbol;

	}
	else
	{
		preSymbol->next = curSymbol;
		preSymbol = curSymbol;
	}

}
void myparser::addtoSymboltable(string name, string type, int dimension, int low[], int up[])
{
	struct symbol *curSymbol = new struct symbol();
	curSymbol->name = name;
	curSymbol->type = type;
	curSymbol->varLine = linecount;
	curSymbol->dimension = dimension;
	for (int i = 0; i < dimension; i++)
	{
		curSymbol->lowbound[i] = low[i];
		curSymbol->upbound[i] = up[i];
	}
	curSymbol->next = NULL;
	curSymbol->subTable = NULL;
	if (curHead->tableElement == NULL)
	{
		curHead->tableElement = curSymbol;
		preSymbol = curSymbol;

	}
	else
	{
		preSymbol->next = curSymbol;
		preSymbol = curSymbol;
	}
}
void addtoStructtable(string type, string name) //wu
{
	struct structElement now;
	now.name = name;
	now.type = type;
	structTable.push_back(now);
}
void myparser::addtoTypeTable(string oldType, string newType)
{
	typedefElement t;
	t.realType = oldType;
	t.typeName = newType;


	(oldType, newType);
	typeTable.push_back(t);
}
string myparser::IntToChar(string num) //!!!!
{//陆芦脳脰路没麓庐脮没脨脥脳陋禄炉脦陋脳脰路没 

	int realnum = 0;
	string result;
	stringstream ss1;
	ss1 << num;
	ss1 >> realnum;

	result = realnum;
	return result;

}
/*
string structBodyTrans(string inputName, string type)//name 鏄痑,b,c   type灏辨槸int锛岃繑鍥瀒nt a,b,c;  鏌ラ噸 鍔犺〃 杈撳嚭
{
string array[20];
int length = commaSplit(inputName, array);
string output = type;

for (int i = 0; i<length; i++)
{
if (!checkStructBody(array[i]))	{}		//杩斿洖false鎶ラ敊
//yyerror("This is already exist!");
else
{
struct structElement e;
e.name = inputName;
e.type = type;
structTable.push_back(e);
output.append(" ");
output.append(array[i]);
if (i != length - 1)
output.append(",");
}
}
output.append(";");
return output;
}
void addtoConstTable(string cname, string ctype, string cvalue)
{
bool findconst = false;
for (vector< struct constElement >::iterator it = constTable.begin(); it != constTable.end();)
{
if ((*it).name == cname)
{
findconst = true;
if ((*it).type != ctype || (*it).value != cvalue)//卤拢麓忙碌脷露镁麓脦露篓脪氓碌脛 拢卢卤篓warning
{
(*it).type = ctype;
(*it).value = cvalue;
//	yywarning("Const \" + cname + \"is redefined!");
}
break;
}
}
if (findconst == false)
{
struct constElement tmp;
tmp.name = cname;
tmp.type = ctype;
tmp.value = cvalue;
constTable.push_back(tmp);
}
}
*/
string checkFuncType(string x)
{

	struct symbol *curE;
	struct tableHead *curH = curHead;


	while (curH != NULL)
	{
		curE = curH->tableElement;
		while (curE != NULL)
		{
			
			if (curE->name == x)
			{

				return curE->type;
			}
			curE = curE->next;
		}
		curH = curH->preTable;
	}
	return "";
}
bool myparser::checkReturn(string name, string type)
{

	if (curHead->name == name)
	{
		struct symbol *curE = preHead->tableElement;
		while (curE!=NULL)
		{
			if (curE->name == name)
			{
				if (curE->returnType == type) return true;
				return  false;
			}
			curE = curE->next;

		}
		
	}
	return false;
}
string myparser::paraCallTrans(string funcname, string para)
{
	struct symbol *curE;
	struct tableHead *curH = curHead;
	curE = curH->tableElement;
	while (curH != NULL)
	{
		curE = curH->tableElement;
		while (curE != NULL)
		{
			if (curE->name == funcname)
			{
				break;
			}
			curE = curE->next;
		}
		curH = curH->preTable;
	}

	struct parameters* pPtr = curE->subTable->paraList;
	int pos = 0;
	while (pPtr != NULL)
	{
		string rtype = pPtr->type;
		if (rtype[0] == 'v'){
			para.insert(pos, "&");
		}
		pPtr = pPtr->next;
		pos = para.find(",", pos);
		pos++;
	}
	return para;
}