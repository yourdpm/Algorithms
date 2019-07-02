#include <iostream>
using namespace std;
void nhapsothuc(float &x) {
    cin >> x;
}
void nhapsonguyen(int &n) {
    cin >> n;
}
int tanggiatri(int &n) {
    n++;
    return n;
}
int giamgiatri(int &n) {
    n--;
    return n;
}
float btP(float &x, int &n) {
    float p=0;
    long power=x;
    long bamu=1;
    for (int i=2;i<=n; i++) {
        power*=x;
        bamu*=3;
        p += power/bamu;
    }
    p += 2018*power;
    return p;
}
int tonglh5(int &n) {
    int sum=0;
    for (int i=6; i<=n; i++) {
        if (i%2==0) sum += i;
    }
    return sum;
}
int main() {
    float x;
    nhapsothuc(x);
    int n ;
    nhapsonguyen(n);
    int m ;
    nhapsonguyen(m);
    cout << btP(x,n) << endl;
    if (n%2==0 && n>5) cout << tonglh5(m) - tonglh5(n) + n;
    else
        cout << tonglh5(m) - tonglh5(n) << endl;
    return 0;

}
