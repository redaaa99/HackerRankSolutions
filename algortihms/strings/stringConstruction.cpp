#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(string s)
{
    int tab[26]={};
    for(int i=0;i<s.size();i++)
    {
        tab[s[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++)
    {
        if(tab[i]>0)
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

