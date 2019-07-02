#include<iostream>


using namespace std;

int main()
{
	int n,m;
	cin >>n>>m;
	int a[n];
	int i,c;
	for (i=1;i<=n;i++)
		a[i]=i;
		int d=1;
	while (n>0)
	{
		c=m+d-1;
		while(c>n)
			c=c-n;
		cout <<a[c]<<" ";
		d=c;
		for (i=c;i<n;i++)
			a[i]=a[i+1];
		n--;
	}
	return 0;
}
