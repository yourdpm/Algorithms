#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	char a[n][n];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> a[i][j];
		}
	}
	if (n < 3) cout << 0;
	else {
		int count = 0 ;
		for (int i=1; i<n; i++) {
			for (int j=1; j<n; j++) {
				if (a[i][j] == 'X' &&
					a[i-1][j-1] == 'X' &&
					a[i-1][j+1] == 'X' &&
					a[i+1][j-1] == 'X' &&
					a[i+1][j+1] == 'X')
					count += 1;
			}
		}
		cout << count;
	}
	return 0;
}
