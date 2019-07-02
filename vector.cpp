#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> a(8);
	for (int i=0; i<8; i++) 
		cin >> a[i];
	for (int i:a) cout << a[i] << endl;
	return 0;
}
