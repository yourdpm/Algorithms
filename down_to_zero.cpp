#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) {
    if (a>b) return a;
    else return b;
}
int way2(int x) {
    for (int i=2; i<= sqrt(x); i++) {
    	if (x%i==0) return max(i,x/i);
}
}
bool checkPrime(int x) {
    
    for (int i=2; i<= sqrt(x); i++ ) 
        if (x%i == 0) return false;
    return true;
}

/*
 * Complete the downToZero function below.
 */
int downToZero(int n) {
    /*
     * Write your code here.
     */
    int count = 0;
    while (n)
    {
        if (checkPrime(n) == true) {
            n--;
        }
        else n=way2(n);
        count++;
    }
    return count;

}


int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = downToZero(n);

        cout << result << "\n";
    }

    //fout.close();

    return 0;
}

