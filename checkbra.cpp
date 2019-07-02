#include <iostream>
#include <stack>
#include <string>
#include <time.h>
#include <cstdio>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    int index=0;
    stack<char> a;
    int kt =1;
    int i = s.length()-1;

    while (i>=0 && kt) {
        if ((s[i]=='(') || (s[i] =='[') || (s[i]=='{'))  // neu gap dau ngoac mo
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
                        kt=0;
                    }

                }

                if (s[i]==')')
                {
                    if (a.top()!='(')
                    {
                        index = i;
                        kt = 0;
                    }
                }
                if (s[i]=='}')
                {
                    if (a.top()!='{')
                        {
                            index = i;
                            kt = 0;
                        }
                }
                a.pop();
            }
            else // neu nhu stack rong
            {
                index = i;
                kt = 0;
            }

        }
        i--;


    }
    if (a.empty()==1) kt =1;


    if (kt==1) cout << "Success";
    else cout << index << endl;


    return 0;
}
