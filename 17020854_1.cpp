/*
Ho va ten: Le Thi Thuy Linh
Lop INT2203 6
*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs;
	ofstream ofs;
	int i,j,n;
	ifs.open("INPUT.txt",ios::in);
	ifs>>n;
	int a[n];
	for (i=1;i<=n;i++)
		ifs>>a[i];
	ifs.close();
	ofs.open("OUTPUT.txt",ios::out);	
	int tg;
	for (i=1;i<n;i++)
		for (j=1;j<n;j++)
			if(a[j]<a[j+1])
				{
					tg=a[j];
					a[j]=a[j+1];
					a[j+1]=tg;
				}
	for (i=1;i<=n;i++)
		ofs << a[i]<<" ";	
	
	return 0;
}
