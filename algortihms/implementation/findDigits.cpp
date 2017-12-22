#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void solve(int n)
{
    int count=0;
    int k=n;
    while(k!=0)
    {    
        int tmp = k%10;
        if(tmp!=0 && n%tmp==0)
        {
            count++;
        }
        k=k/10;
    }
    cout << count << endl;
    /*for(int i=0;i<n.length();i++)
    {
        tmp=ctoi(n[i]);
        if(n%tmp==0)
        {
            count++;
        }

    }*/
}

int main() {
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}

