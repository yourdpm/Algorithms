#include <iostream>
using namespace std;
int main() 
{
	int a,b,c,d;
	int a1,b1,c1,d1;
	
	cin >> a1 >> b1 >> c1 >> d1;
	cin >> a >> b >> c >> d;
	int r=0, w=0, count=0;
	if (a==a1) r++;
	else {
		if (a==b1 || a==c1 || a==d1) w++;
	}
	if (b==b1) r++;
	else {
		if (b==a1 || b==c1 || b==d1) w++;
	}
	if (c==c1) r++;
	else {
		if (c==a1 || c==b1 || c==d1) w++;
	}
	if (d==d1) r++;
	else {
		if (d==a1 || d==b1 || d==c1) w++;
	}
	cout << r << endl << w;
	return 0;
}
