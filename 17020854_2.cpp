/*
Ho va ten: Le Thi Thuy Linh
Lop INT2203 6
*/
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	int n,m;
	ifstream ifs;
	ofstream ofs;
	ifs.open("INPUT.txt",ios::in);
	ifs >>n>>m;
	ifs.close();
	int a[n];
	int i;
	for (i=1;i<=n;i++)
		a[i]=i;
	int vt=1,c;
	ofs.open("OUTPUT.txt",ios::out);
	while (n>0)
	{
		c=vt+m-1;
		if (c%n==0)
			c=n;
		else 
			c=c%n;
		ofs <<a[c]<<" ";
		vt=c;
		for (i=c;i<n;i++)
			a[i]=a[i+1];
		n--;
	}
	return 0;
} 
