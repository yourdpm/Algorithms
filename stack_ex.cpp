#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack <int> a;
	a.push(1);
	a.push(2);
	int b;
	a.pop(b);
	cout << b;
	
	return 0;
}
