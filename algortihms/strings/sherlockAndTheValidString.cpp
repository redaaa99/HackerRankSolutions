#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool isTabValid(int* tab,int size)
{
    int mini=tab[0];
    int maxi=tab[0];
    for(int i=0;i<size;i++)
    {
        if(tab[i]==0){continue;}
        maxi=max(maxi,tab[i]);
        mini=min(mini,tab[i]);
    }
    if(maxi!=mini)
    {
        return false;
    }else
    {
        return true;
    }
}


bool checkTab(int* tab,int size)
{
    if(isTabValid(tab,size))
    {
        return true;
    }
    for(int i=0;i<26;i++)
    {
        if(tab[i]==0){continue;}else{tab[i]--;}
        if(isTabValid(tab,26))
        {
           return true;
        }
        tab[i]++;
    }
    return false;
}

void solve(string s)
{
    int tab[26]={};
    for(int i=0;i<s.length();i++)
    {
        tab[s[i]-'a']++;
    }
    if(checkTab(tab,26))
    {
        cout << "YES"<<endl;
    }else
    {
        cout << "NO" << endl;
    }
}



int main() {
    string s;
    cin >> s;
    solve(s);
    return 0;
}

