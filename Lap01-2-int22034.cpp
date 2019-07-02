#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    int n;
    ifstream infile;
    infile.open("dayso.dat");
    infile >> n;
    cout << n;
    int a[n];
    for (int i=0; i<n; i++) {
        infile >> a[i];
    }
    infile.close();
    for (int i=0; i<n; i++)
        cout << a[i] << " ";

    return 0;
}
