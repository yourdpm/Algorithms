#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int count = 0;
	if (m%n != 0) cout << -1;
	else if ( m == n) cout << 0;
	else {
		int t = m / n;
		while (t%3 == 0) {
			t /= 3;
			count++;
		}
		while (t%2 == 0) {
			t /= 2;
			count++;
		}
		if (t == 1)
			cout << count;
		else cout << -1;
	}
	return 0;
}
