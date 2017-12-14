#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool check(string s)
{
    if(s.length()<=1)
    {
        return false;
    }
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            return false;
        }
    }
    return true;
}


int main() {
    int l;
    string a ="abcdefghijklmnopqrstuvwxyz";
    cin >> l;
    string s;
    cin >> s;
    int maxi=0;
    for(int i=0;i<26;i++)
    {
        for(int j=i+1;j<26;j++)
        {
            char x=a[i];
            char y=a[j];
            string t="";
            for(int k=0;k<l;k++)
            {
                if(s[k]==x || s[k]==y)
                {
                    t+=s[k];
                }
            }
            if(check(t))
            {
                maxi = max(maxi,(int)(t.length()));
            }
        }
    }
    cout << maxi << endl;
    return 0;
}

