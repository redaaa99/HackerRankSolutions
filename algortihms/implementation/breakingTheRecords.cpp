#include <limits.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int count=0;
    cin >>n;
    vector<int> s(n);
    int maxi;
    int mini;
    int first=0;
    int second=0;
    cin >> maxi;
    mini = maxi;
    for(int i=1;i<n;i++)
    {
        cin >> s[i];
        if(maxi<s[i])
        {
            maxi = s[i];
            ++first;
        }
        if(mini>s[i])
        {
            mini= s[i];
            ++second;
        }

    }
    cout << first << " " << second << endl;

    return 0;
}

