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
	
//	for(int i=0;i<4;i++)
//	{	if (check_array(a,a[i],i)) continue;
//		
//		for(int j=0;j<4;j++)
//		{	if (check_array(b,b[j],j)) continue; //tranh TH : 1 2 3 4
//			else								//			  1 1 1 1
//			{	if (a[i]==b[j])
//				{	if (i==j) r++;
//					else w++;
//				}
//			}	
//		}	
//	}
	for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
				{
					if(a[i]==b[j]&&i==j)
						{
							r++;
						}
				}
		}
		for(int i=0;i<4;i++)
	{	if (check_array(a,a[i],i)) continue;
		
		for(int j=0;j<4;j++)
		{	if (check_array(b,b[j],j)) continue; //tranh TH : 1 2 3 4
			else								//			  1 1 1 1
			{	if (a[i]==b[j])
				{	if (i!=j)
					 w++;
				}
			}	
		}	
	}
	
	cout<<"r: "<<r<<endl;
	cout<<"w: "<<w<<endl;
}


