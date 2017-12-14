#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(vector<int> &in,int size,int k)
{
    int comp=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if((in[i]+in[j])%k==0)
            {
                comp++;
            }
        }

    }
    cout << comp << endl;
}

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> in(n);
    for(int i=0;i<n;i++)
    {
        cin >> in[i];
    }
    solve(in,n,k);
    return 0;
}

