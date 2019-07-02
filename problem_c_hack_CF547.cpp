#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
ll n,i,a[202020],hz,mi,b[202020],d[202020],x;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin>>n;
	for(i=1;i<n;i++)
	{
		cin>>a[i];
		hz+=a[i];
		mi=min(hz,mi);
	}
	x=1-mi;
	b[1]=x;
	d[x]=1;
	if(x<=0||x>n)
	{
		cout<<-1<<"\n";
		return 0;
	}
	for(i=1;i<n;i++)
	{
		x+=a[i];
		b[i+1]=x;
		if(d[x]==1||x<=0||x>n)
		{
			cout<<-1<<"\n";
			return 0;
		}
		d[x]=1;
	}
	for(i=1;i<=n;i++)
		if(i<n)
			cout<<b[i]<<" ";
		else
			cout<<b[i]<<"\n";
}
