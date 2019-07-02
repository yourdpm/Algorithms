#include<bits/stdc++.h>

using namespace std;

#define pb push_back
const int maxi = 1e6+10;
int a[maxi];
vector<int> v[maxi],ans;
string s;
int n,m;
int ob[maxi], col[maxi];

void dfs(int x)
{
    ob[x] = 1;
    int child = 0;
    for (int i:v[x])
        if (!ob[i])
    {
        dfs(i);
        if (!col[i]) child++;
    }

  if (child) {
        col[x] = 1;
        ans.pb(x);
  }
}

void solve()
{
    cin>>n>>m;

   ans.clear();
   for (int i=1;i<=n;i++)
    {
        v[i].clear();
        ob[i]=0;
        col[i]=0;
    }
    for (int i=1;i<=m;i++)
    {
        int x,y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }

    dfs(1);

    cout<<ans.size()<<endl;

    for (int i:ans)
        cout << i;
    cout << endl;
}

int main()
{
   int t;
    cin>>t;

    while(t--)
        solve();
}
