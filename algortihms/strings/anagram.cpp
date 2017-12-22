#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(string first,string second)
{
    int tab1[26]={};
    int tab2[26]={};
    for(int i=0;i<first.length();i++){tab1[first[i]-'a']++;tab2[second[i]-'a']++;}
    int count=0;
    for(int i=0;i<26;i++)
    {
        if(tab1[i]-tab2[i]>0)
        {
            count+=tab1[i]-tab2[i];
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
        if(s.length()%2==1)
        {
            cout << "-1" << endl;
            continue;
        }
        solve(s.substr(0,(s.length()/2)),s.substr((s.length()/2),s.length()));
    }
    return 0;
}

