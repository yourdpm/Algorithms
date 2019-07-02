#include <iostream>
using namespace std;
int T,ans;
long long n; 
int main() {
	cin >> T;
	while (T--) {
		ans = 0;
		cin >> n;
		
		while (n % 2 == 0)  {
			n /= 2;
			++ans;
		}
		while (n % 3 == 0)  {
			ans += 2;
			n /= 3;
		}
		
		while (n % 5 == 0)  {
			ans += 3;
			n /= 5;
		}
		
		if (n != 1) cout << "-1" << endl;
		else cout << ans << endl;
	}
	
	return 0;
}
