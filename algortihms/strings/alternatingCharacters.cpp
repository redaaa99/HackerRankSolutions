#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(string s)
{
    int count=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        {
           count++;
        }
    }
    cout << count << endl;
}


int main() {
    int n;
    cin >> n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        solve(s);
    }
    return 0;
}

