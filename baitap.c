#include <iostream>
using namespace std;
float nhapsothuc() {
    float x;
    cin >> x;
    return x;
}
int nhapsonguyen() {
    int n;
    cin >> n;
    return n;
}
int tanggiatri(int n) {
    n++;
    return n;
}
int giamgiatri(int n) {
    n--;
    return n;
}
float btP(float x, int n) {
    float P;
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
int tonglh5(int n) {
    int sum=0;
    for (int i=6; i<=n; i++) {
        if (i%2==0) sum += i;
    }
    return i;
}
int main() {
    float x;
    x = nhapsothuc();
    n = nhapsonguyen();
    m = nhapsonguyen();
    cout << btP(x,n) << endl;
    cout << tonglh5(m) - tonglh5(n) << endl;
    return 0;

}
