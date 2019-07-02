#include <iostream>
#include <string>
#include <stack>
using namespace std;
string XoaLap(string s) {
    stack<char> A;
    stack<char> B;
    string st="";
    for (int i=0; i< s.length(); i++) {
        A.push(s[i]);
        //cout << s[i];
    }
    
//	B.push(A.top());
//	A.pop();
	
    while (!A.empty()) {
        if (B.empty() || A.top() != B.top())
        {
        	B.push(A.top());
        	A.pop();
        }
        else
        {
        	bool prime = true;
        	while (prime) {
        		A.pop();
        		if(A.empty() || B.empty() || A.top()!=B.top()) 
				{
					prime = false;
					B.pop();
				}
			}
		}
         	
        }
    
    while (!B.empty()) {
        st += B.top();
        B.pop();
    }

	return st;
}
int main() {
    string d;
    getline(cin,d);
    //cout << d;
    cout <<XoaLap(d);
    return 0;

}

