#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool check(char a, char b){
	if (a == b) return true; 
	else return false; 
}

int main()
{
	string s; 
	getline(cin, s); 
	
	stack<char> t; 
	
	for (int i = s.size() - 1; i >= 0; i--){
		if (t.empty() || !check(s[i], t.top())){
			t.push(s[i]); 
		}
		else if (check(s[i], t.top())){
			t.pop(); 
		}
	}
	while (t.empty() == false){
		cout << t.top(); 
		t.pop(); 
	}
	return 0;
}
