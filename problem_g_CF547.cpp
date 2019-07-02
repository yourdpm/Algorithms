#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
#define eb emplace_back
#define F first
#define S second
const int MAX = 2e5 + 5;
int n, k;
vector<pii> adj[MAX];
int ans[MAX];
int deg[MAX], A;
void dfs(int u, int v, int f) {
	int cc = 0;
	for(pii ii : adj[u]){
		if(ii.F == v)	continue;
		cc ++ ; if(cc == f)	cc ++;
		cc = min(cc, A);
		ans[ii.S] = cc;
		dfs(ii.F, u, cc);
	}
	return;
}
int main() {
    cin >> n >> k;
    for(int i = 1; i < n; i ++ ) {
    	int a, b;	cin >> a >> b;
    	adj[a].eb(b,i);
    	adj[b].eb(a,i);
    	deg[a] ++ ;
    	deg[b] ++ ;
    }
    sort(deg + 1, deg + n + 1);
    A = deg[n - k];
    cout << A << '\n';
    dfs(1,1, 0);
    for(int i = 1; i < n; i++)	cout << ans[i] << ' ';
}
