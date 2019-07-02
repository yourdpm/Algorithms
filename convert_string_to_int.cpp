#include<iostream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;
int main() {
	string a = "123";
	int x;
	x = atoi(a.c_str());
	cout << x << endl;
	int b = 1234;
	char c[100];
	string s ;
	itoa(b,c,10);
	s = c;
	cout << s << endl;
	int number = 123;       
    string result;          
    ostringstream convert;   
    convert << number;      
    result = convert.str(); 
    cout << result;
	return 0;
}
