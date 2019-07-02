#include<iostream>

using namespace std;
int ucln(int x, int y)
{
    if (y==0) return x;
    else return ucln(y,x%y);
}
int main() {
    int a,b;
    cin >> a >> b;
    cout << "Uoc chung lon nhat la:" << ucln(a,b);
    return 0;

}
