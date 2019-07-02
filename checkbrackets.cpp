#include <iostream>
#include <stack>
#include <string>
#include <time.h>
#include <cstdio>

using namespace std;
bool kiemTraXauNgoac(string &s, stack<char> a, int &index);
int main() {
    clock_t start = clock();
    string s;
    getline(cin,s);
    //s="()(){}[]{{{}[]}}";
    int index=0;
    stack<char> a;
    if (kiemTraXauNgoac(s,a,index)== true) cout << "Success";
    else cout << index << endl;

    printf("Time: %.2fs\n", (double)(clock() - start)/CLOCKS_PER_SEC);
    return 0;
}
bool kiemTraXauNgoac(string s, stack<char> a, int &index) {
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '(' || s[i] =='[' || s[i]=='{')  // neu gap dau ngoac mo
                {
                    a.push(s[i]); // push het vao stack
                }
        if (s[i]==')' || s[i]==']' || s[i] =='}')
        {
            if(!a.empty()) // neu stack khac rong
            {
                if(s[i]==']')
                {
                    if (a.top()!='[')
                    {
                        index = i;
                        return false;
                    }

                }

                if (s[i]==')')
                {
                    if (a.top()!='(')
                    {
                        index = i;
                        return false;
                    }
                }
                if (s[i]=='}')
                {
                    if (a.top()!='{')
                        {
                            index = i;
                            return false;
                        }
                }
                a.pop();
            }
            else // neu nhu stack rong
            {
                index = i;
                return false;
            }

        }

    }
    return a.empty()==true;
}
