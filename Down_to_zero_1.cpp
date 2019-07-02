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
    vector<int> nodes(n + 1, 0);
    
    queue<int> datas;
    datas.push(n);
    while(!datas.empty()){
        int data = datas.front();
        datas.pop();
        
        if(data == 0){
            return nodes[data];
        }
        
        for(int i = 2; i <= sqrt(data); i ++){
            if(data % i == 0){
                int newData = data / i;
                if(nodes[newData] == 0){
                    nodes[newData] = nodes[data] + 1;
                    datas.push(newData);
                }
            }
        }
        if(nodes[data - 1] == 0){
            nodes[data - 1] = nodes[data] + 1;
            datas.push(data - 1);
        }
    }
    
    return n;

}

int main()
{
    ofstream fout;
    fout.open("output.txt");

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = downToZero(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

