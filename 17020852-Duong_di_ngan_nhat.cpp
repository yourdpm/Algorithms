#include <iostream>
#include <fstream>
#define MAXINT 1000
using namespace std;
void Dijkstra(int a[][10], int n, int head, int tail)
{
	char mark[n];
	int label[n], pre[n], begin, min;
	for (int i=0; i<n; i++)
	{
		label[i] = MAXINT;
		mark[i] = 0;
		pre[i] = head;
	}
	label[head] = 0;
	mark[head] = 1;
	begin = head;
	while (begin != tail) {
		for (int j=0; j<n; j++)
		{
			if(a[begin][j] > 0 && label[j] > a[begin][j] + label[begin] && mark[j] == 0)
				{
					label[j] = a[begin][j] + label[begin];
					pre[j] = begin;
				}
				
		}
		min = MAXINT;
		for (int j=0; j<n; j++) 
		{
			if (min > label[j] && mark[j] == 0)
			{
				min = label[j];
				begin = j;
			}
		}
		mark[begin] = 1;
		
	} 
	cout << "The nearest way is: " << label[tail] << endl;
	cout << tail + 1 << "<-" << pre[tail] + 1;
	int i = pre[tail];
	while (i!= head) {
		i = pre[i];
		cout << "<-" << i+1;
	}
}
// Thuat toan tim moi duong di ngan nhat Floy 
void Floyd(int c[][10], int n, int u, int v)
{
	// Init
	int d[n][n];
	int r[n][n];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			d[i][j] = c[i][j];
			r[i][j] = 0;	
		}
	}
	bool mark = true;
	while (mark) {
		mark = false;
		for (int i=0; i<n; i++)
			for (int j=0; j<n; j++) {
				for (int k = 0; k< n; k++) {
					if (d[i][j] > d[i][k] + d[k][j] ) {
						r[i][j] = k;
						d[i][j] = d[i][k] + d[k][j];
						mark = true; 
					}
				}
			}
	}
	cout << "Duong di ngan nhat giua hai dinh " << u << "va " << v << "la:" << d[u][v];
	
}

using namespace std;
int main() {
	int a[10][10];
	int n, head, tail;
	cout << "Enter the number of top:";
	cin >> n;
	cout << "Enter the head top and the tail top:";
	cin >> head >> tail;
	for (int i=0; i<n; i++) {
		for (int j=0;j<n; j++) {
			cin >> a[i][j];
		}
	} 
//Debug
//	for (int i=0; i<n; i++) {
//		for (int j=0; j<n; j++)
//			cout <<a[i][j] << " ";
//		cout << endl;
//    }
	Dijkstra(a,n,head,tail);
	cout << endl;
	cout << "Theo thuat toan Floyd:" << endl;
	Floyd(a,n,0,5);
	return 0;
}
