#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<=b; i++)
#define pre(i,a,b) for(int i=a; i>=b; i--)
#define pr(x) cout << x << " "
#define in(x) cin >> x
#define ll long long
#define db double
#define ii pair<int, int>
#define fi first
#define se second

int main() {
	int n,k,o;
	cin >> n;
	ii a[n];
	rep(i,0,n-1) {
//		a[i] = std::make_pair(x,y);
		in(a[i].fi);
		in(a[i].se);
	}
	cin >> k;
	
	rep(i,0,n-1) {
		if (k >= a[i].fi && k <= a[i].se )
		{
			o = i;
			break;
		}
	}
	pr(n-o);
	return 0;
}
