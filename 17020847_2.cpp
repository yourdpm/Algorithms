/* Ho Va Ten: Nguyen Thi Le
   Lop : INT2203 6
   MaSV:17020847
*/
#include <iostream> 
#include<fstream>
using namespace std;
int main()
{
	int n,m;

	ifstream ifs;
    ofstream ofs;
    ifs.open("input.txt");
     ifs>>n>>m;
     ifs.close();
     ofs.open("output.txt");
     int a[n];
	for(int i=1;i<=n;i++)
	
	   a[i]=i;
	
	int x=1,y;
	while(n>0)
	{
		y=m+x-1;
		while(y>n)
		y=y-n;
		ofs<<a[y]<<" ";
		x=y;
		for(int i=y;i<n;i++)
		a[i]=a[i+1];
		n--;
		
	}
	return 0;
	}
