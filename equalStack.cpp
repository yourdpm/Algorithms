#include <iostream>
#include <vector>

using namespace std;

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    /*
     * Write your code here.
     */
     
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int n1=h1.size(), n2=h2.size(), n3=h3.size();
    for (int i=0; i<h1.size(); i++)
        sum1 += h1[i];
    for (int i=0; i<h2.size(); i++)
        sum2 += h2[i];
    for (int i=0; i<h3.size(); i++)
        sum3 += h3[i];
    int d1 = 0, d2 = 0, d3 = 0;
    int h;
    
	while(1) {
        if(d1 == n1 || d2 == n2 || d3 == n3) {
            h = 0;
            break;
        }

        if(sum1 == sum2 && sum2 == sum3) {
            h = sum1;
            break;
        }

        // If height op pile one is highest
        if(sum1 >= sum2 && sum1 >= sum3) {
            sum1 -= h1[d1];
            d1++;
        }
        // If height op pile two is highest
        else if(sum2 >= sum1 && sum2>=sum3) {
           sum2 -= h2[d2];
           d2++;
        }
        // If height op pile three is highest
        else if(sum3 >= sum2 && sum3 >= sum1) {
            sum3 -= h3[d3];
            d3++;
        }
    }
    
    return h;
} 

int main() {
	//int n;
	int a[3];
	for (int i=0; i<3; i++) {
		cin >> a[i];
	}
	
	vector<int> h1(a[0]);
	for (int i=0; i<a[0]; i++)
		cin >> h1[i];
	vector<int> h2(a[1]);
	for (int i=0; i<a[1]; i++) 
		cin >> h2[i];
	vector<int> h3(a[2]);
	for (int i=0; i<a[2]; i++) {
		cin >> h3[i];
}			
	int result = equalStacks(h1, h2, h3);
	cout << result << endl;
	return 0;
}
