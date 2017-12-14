#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void solve(int n)
{
    if(n%7==0 or n%7==1)
    {
        cout << "Second" << endl;
    }
    else cout << "First" << endl;
}



int main() {
    int T;
    cin >> T;
    int n;
    while(T--)
    {
        cin >> n;
        solve(n);
    }
    return 0;
}

