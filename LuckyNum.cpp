#include <bits/stdc++.h>
using namespace std;
int main() {
	int n =  2700;
	int was[n];
	memset(was, 0, sizeof(was));
	
	for(int i = 2; i <= n; i++) {
		if (was[i] == 0) {
			for (int j = 2*i; j <= n; j += i) {
				was[j]++;
			}
		}
	}
	
	int count = 0;
	int j = 1;
	int arr[1001];
	memset(arr, 0, sizeof(arr));
	
	for (int i = 30; i < 2700 && j < 1001; ++i) {
		if (was[i] >= 3) {
			arr[j++] = i;
		}
	}
	
	int t;
	cin >> t;
	while(t--) {
		int target;
		cin >> target;
		cout << arr[target] << endl;
	}
	return 0;
}
