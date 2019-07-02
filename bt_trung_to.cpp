#include <iostream>
#include <stack>
#include <cmath>
#include <cstdlib>
#include <vector>
using namespace std;
//Ham kiem tra do uu tien cua toan tu
int ut(string x) {
		if (x == "*" || x == "/" || x == "%"||x=="^" || x== "sqrt")
		{
			return 2;
		}
		else if (x == "+" || x == "-")
		{
			return 1;
		}
		else if (x == "(")
		{
			return 0;
		}
	}
			
// kiem tra xem co phai la toan tu hay khong
bool toantu(string s) {
	if (s == "*" || s == "/" || s == "%" || s == "^" || s=="+" || s=="-")
		return true;
	else return false;
}

// Ham tinh toan tu hai toan hang va mot toan tu
string tinhgt(string a, string b, string c) {
	char s[100];
	int result;
		if (c =="*")
			result = atoi(a.c_str()) * atoi(b.c_str());
		if (c=="/")
			result = atoi(a.c_str()) / atoi(b.c_str());
		if (c=="+")	
			result = atoi(a.c_str()) + atoi(b.c_str());
		if (c=="-")
		 	result = atoi(a.c_str()) - atoi(b.c_str());
		if (c=="^")
			result = atoi(a.c_str()) ^ atoi(b.c_str());
		if (c=="%")
			result = atoi(a.c_str()) % atoi(b.c_str());
	itoa(result,s,10);
	return s;
	
}

//Ham xu li input dau vao thanh mot vector string
void ParseInput(string Input, vector<string> &M) 
{
	int length=Input.length();
	int count = 0;

	for (int i = 0; i < length;i++)
	{
		if (Input[i] >= '0' && Input[i] <= '9')
		{
			if(i<length-1)
			{
				for(int j=i+1; j< length; j++)
					if(Input[j]==')' || Input[j] == '*' || Input[j] == '/' ||
					Input[j] == '+' || Input[j] <= '-' || Input[j] == '%' || Input[j]=='^')
					{
						M.push_back(Input.substr(i, j-i));
						i=j-1;
						break;
					}
			}

			else

			{
				M.push_back(Input.substr(i, length-1));
				break;
			}
		}
		else if (Input[i] == '(' || Input[i] == ')' ||
				Input[i] == '*' || Input[i] == '/' ||
				Input[i] == '+' || Input[i] == '-' ||
				Input[i] == '%' || Input[i]=='^')
				{
					string temp(1, Input[i]);
					M.push_back(temp);
				}
	}
}
// Ham tinh gia tri cua bieu thuc
float giatribt(vector<string> M)
{
	float fResult = 0;
 
	stack <string> Sh; 
	stack <string> St;
 
	int iLength=M.size(); 
 
	for (int i = 0; i < iLength; i++)
	{
		if (!toantu(M[i]) && M[i] != "(" && M[i] != ")") 
		{
			Sh.push(M[i]); 
		}
 
		if (M[i] == "(") 
		{
			St.push(M[i]); 
		}
 
		if (toantu(M[i])) 
		{
			while (!St.empty() && ut(M[i]) <= ut(St.top())) 
			{
				string a = "";
				a = Sh.top();
				Sh.pop();       
				string x = "";
				x = St.top();
				St.pop();       
				string b = "";
				Sh.top();
				Sh.pop();     
				Sh.push(tinhgt(b, x, a));   
			}
			St.push(M[i]); 
		}
 
		if (M[i] == ")") 
		{
			
			while (St.top()!= "(") 
			{
 
				string a = "";
				a = Sh.top();
				Sh.pop();       
				string x = "";
				x = St.top();
				St.pop();       
				string b = "";
				Sh.top();
				Sh.pop();     
				Sh.push(tinhgt(b, x, a));   
			}
			string c = "";
			c = St.top();   
			St.pop();
		}
	}
 
	while (!St.empty())
	{	
		string a = "";
				a = Sh.top();
				Sh.pop();       
				string x = "";
				x = St.top();
				St.pop();       
				string b = "";
				Sh.top();
				Sh.pop();     
				Sh.push(tinhgt(b, x, a));     
	}
 
	string strResult = "";
	strResult = Sh.top(); 
	Sh.pop();
	fResult = atof(strResult.c_str());
	return fResult;
}
int main() {
	string Input;
	cout<<"\nEnter:  ";
	getline(cin, Input);
	
	vector<string> M;
	ParseInput(Input, M);
	for (int i=0; i<M.size(); i++) {
		cout << M[i] << endl;
	}
	cout << giatribt(M);
	return 0;
}

