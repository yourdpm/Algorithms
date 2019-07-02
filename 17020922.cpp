#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	int n,i,s1=1,s2=1,s;
	ifstream ifs;
	ofstream ofs;
	ifs.open ("input.txt", ios::in);
	ifs>>n;
	ifs.close();
	ofs.open ("output.txt",ios::out);
	if (n==1)
		ofs<< "1 ";
	if (n>=2)
		ofs<<"1 1 ";
	if (n>2)
		for (i=1;i<=n-2;i++)
			{ s=s1+s2;
				ofs<<s1<<" ";
				s2=s1;
				s1=s;
			}
return 0;
}
