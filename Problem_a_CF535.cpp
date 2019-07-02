#include <iostream>
#include <cstdlib> 
#include <ctime> 
struct Pair {
	int l1,r1,l2,r2;
};
using namespace std;
int main() {
	int n;
	cin >> n;
	Pair p[n];
	for (int i=0; i<n; i++) {
		cin >> p[i].l1 >> p[i].r1 >> p[i].l2 >> p[i].r2;
	}
	
	for (int i=0; i<n; i++) {
		
			srand(time(0));
			int a = p[i].l1 + rand()%(p[i].r1-p[i].l1+1);
			int b = p[i].l2 + rand()%(p[i].r2-p[i].l2+1);
			
			while (a == b) b = p[i].l2 + rand()%(p[i].r2-p[i].l2+1);
			while (a == b) a = p[i].l1 + rand()%(p[i].r1-p[i].l1+1);
			
			cout << a << " " << b << endl;
	}
	return 0;
}
