#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(string s1,string s2)
{
    int tab[26]={};
    for(int i=0;i<s1.length();i++)
    {
        tab[s1[i]-'a']++;
    }
    
    for(int i=0;i<s2.length();i++)
    {
        if(tab[s2[i]-'a']>=1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}

int main() {
    int n;
    cin >> n;
    string s1,s2;
    for(int i=0;i<n;i++)
    {
        cin >> s1 >> s2;
        solve(s1,s2);
    }
    return 0;
}

