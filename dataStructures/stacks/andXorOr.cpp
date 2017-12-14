#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <limits.h>
using namespace std;



int main() {
    int N;
    int var;
    cin >> N;
    vector<int> v;
    stack<int> s;
    while(N--)
    {
        cin >> var;
        v.push_back(var);
    }
    int maxXor=0;
    int cXor=0;
    for(int i=0;i<v.size();i++)
    {
        while(!s.empty())
        {
           cXor=v[i]^s.top();
           maxXor=max(cXor,maxXor);
           if(v[i]<s.top()){s.pop();}
           else break;
        }
        s.push(v[i]);
    }
    cout << maxXor << endl;
    return 0;
}

