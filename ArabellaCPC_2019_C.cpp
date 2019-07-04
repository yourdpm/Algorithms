#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k;
	string s, st, t;
	cin >> n ;
	s ="";
	cin >> s; n--;
	while (n--) {
		string t;
		cin >> t;
		s += " " + t;
	}
	cin >> k;
	bool isCapsLock = false;
	stack<char> text;
	while (k--) {
		cin >> st;
		if (st == "CapsLock") isCapsLock = !isCapsLock;
		else if (st == "Backspace") text.pop();
		else if (st == "Space") text.push(' ');
		else {
			if (isCapsLock) {
				transform(st.begin(), st.end(), st.begin(), ::toupper);
			}
			text.push(st[0]);
		}
	}
	
	string str = "";
	while (!text.empty()) {
		str = text.top() + str;
		text.pop();
	}
	
	
	if (str == s) cout << "Correct";
	else cout << "Incorrect";
	return 0;
	
}
