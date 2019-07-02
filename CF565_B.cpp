#include <iostream>
using namespace std;
int main() {
	int T;
	long long n;
	cin >> T;
	while (T--) {
		cin >> n;
		int cnt[3] = {0, 0, 0};
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			x %= 3;
			cnt[x]++;
		}
		
		cnt[0] += min(cnt[1], cnt[2]);
		int x = min(cnt[1], cnt[2]);
		cnt[1] -= x;
		cnt[2] -= x;
		cnt[0] += cnt[1] / 3;
		cnt[0] += cnt[2] / 3;
		cout << cnt[0] << endl;
	}
}
