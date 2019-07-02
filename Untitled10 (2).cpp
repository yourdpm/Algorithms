#include <iostream>
using namespace std;

bool check_array(int *a,int x,int n)
{	//kiem tra x da co trong mang truoc do ko
	for(int i=0;i<n;i++)
	{
		if (x==a[i]) return 1;
	}
	return 0;
}
int main()
{
	int a[4],b[4];
	int r=0,w=0; // r = cung vi tri , w != vi tri
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	cin>>b[0]>>b[1]>>b[2]>>b[3];
	int i=0;
	int j=0;
	while(i<4)
		{
					if(a[i]==b[i])
						{
							r++;
							a[i]=0;
							b[i]=0;
						}
				i++;
		}
		i=0;
		j=0;
		while(i<4)
	{	if (check_array(a,a[i],i))
				i++;
		else
		{
		while(j<4)
		{	if (check_array(b,b[j],j))
					j++; //tranh TH : 1 2 3 4
			else								//			  1 1 1 1
			{	if (a[i]==b[j])
				{	if (i!=j)
					  w++;
				}
			}
			j++;	
		}
		}
		i++;	
	}
	
	cout<<"r: "<<r<<endl;
	cout<<"w: "<<w<<endl;
}


