#include <iostream>

#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int x;
	//int check = 0;
	sort(a, a + n);
	
	
	for (int i=n-2; i>=1; i--) {
		int check = 0;
		for (int j=i-1; j>=0; j--) {
			if (a[i] % a[j] !=0 && a[n-1] % a[j] !=0 ) check = 1;
		}
		if (check == 0) {
			x = a[i];
			break;
		}
	}
	
	cout << a[n-1] << " " << x;
	
	
	return 0;
}
