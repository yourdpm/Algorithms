#include <iostream>
#include <algorithm>
using namespace std;
 
int GCD(int a, int b) {
        int i = (b == 0) ? a : GCD(b, a % b);
        return i;
}
 
int main(){
    int a, b;
    cin >> a >> b;
    int lcm = a*b/GCD(a,b);
    
    cout << lcm ;
    return 0;
}
