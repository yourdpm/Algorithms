#include <bits/stdc++.h>
#include <fstream>
#include <queue>
#include <stack>


using namespace std;

/*
 * Complete the downToZero function below.
 */
int downToZero(int n) {
    /*
     * Write your code here.
     */
    vector<int> a(n+1,0);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a[3] = 3;
    for (int i=4; i<=n; i++) {
        int x,y;
        int min1 = 1000001;
        for (int j=2; j<=sqrt(n); j++) {
            if (i%j == 0 && a[max(j,i/j)]+1 < min1) min1 = a[max(j,i/j)] + 1;
        }
        y=a[i-1]+1;
        if (y<min1) a[i] = y;
        else a[i] = min1;
        
    } 
    int r=a[n];
    return r;


}

int main()
{
    ofstream fout;
    fout.open("output1.txt");

    int q;
    cin >> q;

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;

        int result = downToZero(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

