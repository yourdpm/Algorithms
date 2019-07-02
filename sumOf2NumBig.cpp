#include <iostream>
#include <string>

using namespace std;
class HU {
	public:
		void input() {
			string str;
			cin >> str;
			n = str.size();
			for (int i = 0; i < n; i++)	{
				data[i] = str.at(i) - '0';
			}
		}
		void output() {
			//if (mem != 0) cout << mem;
			for (int i = 0; i< n; i++ ) {
				cout << data[i];
			}
		}
		void cong(HU a, HU b) {
			if (a.n > b.n) {
				n = a.n;
				for (int i = n - 1; i >= n; i--) {
					b.data[i] = b.data[i-(n-b.n)];
				}
				for (int i = 0; i< n - b.n; i++) {
					b.data[i] = 0;
				}
			} else {
				n = b.n;
				for (int i = n - 1; i >= n ; i--) {
					a.data[i] = a.data[i-(n-a.n)];
				}
				for (int i = 0; i < n - a.n; i++) {
					a.data[i] = 0;
				}
			}
			mem = 0;
			for (int i = n-1; i >= 0; i-- ) {
				int temp = a.data[i] + b.data[i] + mem;
				mem = temp / 10;
				temp = temp % 10;
				data[i] = temp;
			}
			
			
			
		}
	protected:
		int n;
		int data[40];
		int mem;
};
int main() {
	HU a, b, result;
	a.input();
	b.input();
	result.cong(a, b);
	result.output();
}
