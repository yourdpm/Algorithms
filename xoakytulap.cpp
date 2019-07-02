#include <iostream>
#include <string>
#include <stack>
using namespace std;
string XoaLap(string st) {
    stack<char> A;
	for (int i=0; i<; i--) {
		if (st[i] != A.top() || A.empty()) {
			A.push(st[i]);
			//cout << A.top();
		}
        else {
        	A.pop();
		}
    }
	string s="";
    while (!A.empty()) {
        s += A.top();
        A.pop();
    }
    return s;

}
int main() {
    string d = "missses";
    cout <<XoaLap(d);
    return 0;

}
