#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void solve(vector<int> &line,int n)
{
    int tmp;
    int cou=0;
    for(int i=0;i<n;i++)
    {
        if(line[i]-i>3)
        {
            cout << "Too chaotic" << endl;
            return;
        }
    }
    for(int j=n-1;j>0;j--)
    {
        if(line[j-1]>line[j])
        {
            cou++;
            tmp = line[j];
            line[j]=line[j-1];
            line[j-1]=tmp;
        }
    }
    for(int j=n-1;j>0;j--)
    {
        if(line[j-1]>line[j])
        {
            cou++;
            tmp = line[j];
            line[j]=line[j-1];
            line[j-1]=tmp;
        }
    }
    cout << cou << endl;
}


int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int tmp;
        vector<int> line;
        for(int i=0;i<n;i++)
        {
            cin >> tmp;
            line.push_back(tmp);
        }
        solve(line,n);
    }
    return 0;
}

