#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++) cin >> a[i];
	int max = 0;
	for (int i=0; i<n; i++) {
		int l=0;
			int j = i;
			while (a[j] == 1) {
				l++;
				j++;
			}
			if (a[j] == 0) l++;
		if (l > max) max = l;
	}
	//if (max == 1) cout << max + 1;
	cout << max;
	
	return 0;
}
