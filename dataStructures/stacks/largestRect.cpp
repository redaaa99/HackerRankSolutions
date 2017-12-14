#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;



void calculateAllareas(vector<int> v)
{
    long maxi = 0;
    long area = 0;
    long top=0;
    stack<int> s;
    int i=0;

    
    for(i=0;i<v.size();i++)
    {
        while(!s.empty() && v[i]<v[s.top()])
        {
            top = s.top();
            s.pop();
            if(s.empty())
            {
                area = v[top]*i;
            }
            else
            {
                area = v[top]*(i-s.top()-1);
            }
            maxi = max(maxi,area);
        }
       s.push(i);
    }
    while(!s.empty())
    {
        top = s.top();
        s.pop();
        if(s.empty())
        {
            area = v[top]*i;
        }
        else
        {
            area = v[top]*(i-s.top()-1);
        }
        maxi = max(maxi,area);
    }
    cout <<  maxi << endl;
}


int main() {
    vector<int> v;
    int N;
    int var;
    cin >> N;
    while(N--)
    {
        int var;
        cin >> var;
        v.push_back(var);
    }
    calculateAllareas(v);
    return 0;
}

