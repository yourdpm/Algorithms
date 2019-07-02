#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int q[n-1];
	for (int i=0; i<n-1; i++) cin >> q[i];
	int a[n];
	for (int i=	1; i<=n ; i++) a[i-1] = i;
	
	int check = 0, count=0;
	
	while (check == 0 && count <n) {
		
		int no = 0;
		
		for (int i=0; i<n-1; i++) {
			if (q[i] != a[i+1] - a[i]) no = 1;	
		}
		
		if (no == 0) check = 1;
		else {
			count++;
			int b[n];
			for (int i=0; i<n; i++) {
				b[i] = a[(i+1)%n];
			}
			for (int i=0; i<n; i++) a[i] = b[i];
		}
	}
	if (check == 1) {
		for (int i=0; i<n-1; i++) cout << a[i] << " ";
		cout << a[n-1];
	}
	else cout << -1;
	return 0;
}
