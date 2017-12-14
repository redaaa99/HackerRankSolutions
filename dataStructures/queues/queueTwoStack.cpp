#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;


int main() {
    stack<int> s1;
    stack<int> s2;
    int Q;
    int ch1,ch2;
    cin >> Q;
    while(Q--)
    {
        cin >> ch1;
        switch (ch1)
        {
            case 1:
                cin >> ch2;
                s1.push(ch2);
                break;
            case 2:
                {
                    if(s2.empty())
                    {
                        while(!s1.empty())
                        {
                            s2.push(s1.top());
                            s1.pop();
                        }
                    }

                    s2.pop();  
                    break;

                }
            case 3:
                {

                    if(!s2.empty())
                    {
                        cout<<s2.top()<<endl;
                    }
                    else
                    {
                        while(!s1.empty())
                        {
                            s2.push(s1.top());
                            s1.pop();
                        }
                        cout<<s2.top()<<endl;
                    }
                    break;
                }
        }
    }
    return 0;
}

