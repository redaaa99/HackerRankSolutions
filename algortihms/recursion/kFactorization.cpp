#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


vector<int> sol;
void solve(vector<int> &a,long n,int size)
{
    if(size<=0)
    {
        sol.push_back(-1);
        return;
    }
    if(n==a[size-1])
    {
        sol.push_back(a[size-1]);
        return;
    }
    else
    {
        if(n%a[size-1]==0)
        {
            sol.push_back(a[size-1]);
            solve(a,n/a[size-1],size-1);
        }
        else
        {
            solve(a,n,size-1);
        }
    }
}


int main() {
    long n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> input;
    int tmp;
    for(int i=0;i<k;i++)
    {
        cin >> tmp;
        input.push_back(tmp);
    }
    sort(input.begin(),input.end());
    solve(input,n,input.size());
    if(sol[sol.size()-1]==-1)
    {
        cout << "-1" << endl;
        return 0;
    }
    int j=1;
    sort(sol.begin(),sol.end());
    cout << j <<" ";
    for(int i=0;i<sol.size();i++)
    {
        j*=sol[i];
        cout << j << " ";
    }
    cout << endl;
    return 0;
}

