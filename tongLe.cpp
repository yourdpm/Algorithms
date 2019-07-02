#include <iostream>
using namespace std;
int tongLe(int n);
int main() {
	cout << "Nhap n:";
	int n;
	cin >> n;
	cout << tongLe(n);
	return 0;
}
int tongLe(int n) {
	if (n==0 || n==-1) return 0;
	if (n==1) return 1;
	if (n%2==1) return n+tongLe(n-2);
	else return n-1 + tongLe(n-3);
}
