#include <iostream>
#include <string>
using namespace std;
class HU {
	public:
		void in();
		void inANumber(string str);
		void out();
		void add(HU a, HU b);
		int compareTo(HU x);
		string s1, s2;
	protected:
		int n;
		int data[10];
		char sign;
};
void HU::in() {
	cin >> s1;
	cin >> s2;
}
void HU::inANumber(string str) {
	this->n = str.length();
	if (str[0] == '-') {
		
		this->sign = str[0];
		
		for (int i=1 ; i< n; i++) {
			this->data[10-n+i] = str[i] - '0';
		}
		for (int i=0; i< 10-n+1; i++) {
			this->data[i] = 0;
		}
		this->n--;
	} else {
		
		this->sign = '+';
		
		for (int i=0; i<n; i++) {
			this->data[10-n+i] = str[i] - '0';
		}
		for (int i=0; i<10-n; i++) {
			this->data[i] = 0;
		}
	}
	
}
void HU::out() {
	if (n == 0) cout << 0;
	else if (sign == '-' ) cout << sign;
	for (int i=10-n; i<10; i++) {
		cout << data[i];
	}
	//cout << endl << n;
}
int HU::compareTo(HU x) {
	int check = 0;
	if (n > x.n ) check = 1;
	else if (n < x.n ) check = -1;
	else {
		for (int i=0; i<10; i++) {
			if (data[i] > x.data[i]) {
				return 1;
			}
			else if (data[i] < x.data[i]) {
				return -1;
			}
		}
	}
	return check;
	
}
void HU::add(HU a, HU b) {
	n = (a.n > b.n) ? a.n : b.n;
	if (a.sign == b.sign) {
		this->sign = a.sign;
		int carry = 0;
		int mem = 0;
		for (int i=9; i>=0; i--) {
			int temp = a.data[i] + b.data[i] + carry;
			//data[i] = temp % 10;
			carry = temp/10;
			temp = temp % 10;
			data[i] = temp;
			if (carry !=0 && a.data[i-1] == 0 && b.data[i-1] == 0)
				mem = carry;
		}
		if (mem !=0 ) {
			n++;
		}
		
	} else {
		//cout << a.n << " " << b.n << endl;
		//cout << a.compareTo(b);
		
		if (a.compareTo(b) > 0 ) {
			if (a.sign == '-') sign = '-';
			else sign = '+';
		} else {
			if (a.sign == '-') sign = '+';
			else sign = '-';
			HU temp;
			temp = a;
			a = b;
			b = temp;
		}
		int carry = 0;
		for (int i=9; i>=0; i--) {
			if (a.data[i] < b.data[i] + carry) {
				data[i] = a.data[i] + 10 - b.data[i] - carry;
				carry = 1;
			}
			else {
				data[i] = a.data[i] - b.data[i] - carry;
				carry = 0;
			}
		}
		int count = 0;
		for (int i=0; data[i] == 0; count++, i++)
		n = 10 - count - 1;
		if (n==0) n =1;
		
			
	}
	
}
int main() {
	
	HU t,a,b,c;
	t.in();
	a.inANumber(t.s1);
	b.inANumber(t.s2);
	c.add(a,b);
	c.out();
	return 0;
}
