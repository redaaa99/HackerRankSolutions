#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;


int main() {
    int Q;
    int choice1;
    string str;
    string tmp;
    int choice2;
    cin >> Q;
    stack<string> s;
    s.push("");
    while(Q--)
    {
        cin >> choice1;

        switch(choice1)
        {
           case 1:
               cin >> tmp;
               str = s.top();
               str.append(tmp);
               s.push(str);
               break;
   
           case 2:
               cin >> choice2;
               str = s.top();
               str = str.substr(0,str.length()-choice2);
               s.push(str);
               break;
          
           case 3:
               cin >> choice2;
               str = s.top();
               cout << str[choice2-1]<<endl;
               break;

           case 4:
               s.pop();
               break;
        }
    }
    return 0;
}

