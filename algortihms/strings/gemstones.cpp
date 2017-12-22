#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int tab[26]={};

string dups(string s)
{
    for (std::string::size_type i = 0; i < s.size(); i++ )
    {
        std::string::size_type j = i + 1;
        while ( j < s.size() )
        {
            if ( s[i] == s[j] )
            {
                s.erase( j, 1 );
            }
            else
            {
                ++j;
            }
        }
    }
    return s;
}

void solve(string str,int it)
{
    for(int i=0;i<str.length();i++)
    {
        tab[str[i]-'a']++;
    }
}

int main() {
    int n;
    cin >> n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        solve(dups(s),i);
    }
    int count=0;
    for(int i=0;i<26;i++)
    {
        if(tab[i]==n)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

