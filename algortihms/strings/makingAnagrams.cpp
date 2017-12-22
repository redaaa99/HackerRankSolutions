#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s1,s2;
    cin >> s1 >> s2;
    int tab1[26]={};
    int tab2[26]={};
    for(int i=0;i<s1.length();i++)
    {
        tab1[s1[i]-'a']++;
    }
    
    for(int i=0;i<s2.length();i++)
    {
        tab2[s2[i]-'a']++;
    }
    int sum=0;
    for(int i=0;i<26;i++)
    {
        sum+=abs(tab1[i]-tab2[i]);
    }
    cout << sum << endl;
    return 0;
}

