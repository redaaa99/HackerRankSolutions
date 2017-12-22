#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    int tab[26]={};
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        tab[s[i]-'a']++;
    }
    
    int count=0;
    for(int i=0;i<26;i++)
    {
        if(tab[i]%2==1)
        {
            count++;
        }
    }
    if(s.length()%2==1 && count==1)
    {
        cout << "YES" << endl;
        return 0;
    }
    if(s.length()%2==0 && count==0)
    {
        cout << "YES" << endl;
        return 0;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

