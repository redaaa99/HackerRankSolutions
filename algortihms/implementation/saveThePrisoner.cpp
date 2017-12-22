#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    int n,m,s;
    while(t--)
    {
        cin >> n >> m >> s;
        if((s+m-1)%n==0)
        {
            cout << n << endl;
        }else
            cout << ((s+m-1)%n) << endl;
    }
    return 0;
}

