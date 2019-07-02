#include <bits/stdc++.h>
using namespace std;

const int my[6] = {4, 8, 15, 16, 23, 42};

int n;
int a[6];
int cnt[7];

int main()
{
    cin >> n;
    cnt[0] = n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        int p = 0;
        while (my[p] != a) p++;
        if (cnt[p] > 0) {
            cnt[p]--;
            cnt[p + 1]++;
        }
    }
    cout << n - 6 * cnt[6] << endl;
    return 0;
}
