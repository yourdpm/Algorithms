#include <iostream>
#include <string>
using namespace std;
void daoXau() {
		string s;
	//	cin.ignore();
		getline(cin, s);
		for (int j=s.length()-1; j>=0; j--) {
			cout << s[j];
		}
}
int main() {
	int n;
	cin >> n;
	cin.ignore();
	for (int i=0; i<n; i++) {
		daoXau();
		cout << endl;
	}
	return 0;
}
