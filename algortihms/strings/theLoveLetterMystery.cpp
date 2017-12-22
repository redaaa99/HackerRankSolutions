#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void solve(string s)
{
    int sum=0;
    int n=s.length();
    for(int i=0;i<s.length()/2;i++)
    {
        if(s.length()%2==1 && i==(s.length()/2)){break;}
        sum+=(abs((s[i]-'a')-(s[n-i-1]-'a')));
    }
    cout << sum << endl;
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

