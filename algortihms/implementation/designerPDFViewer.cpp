#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tab[26];
    string s;
    for(int i=0;i<26;i++)
    {
        cin >> tab[i];
    }
    cin >> s;
    int maxi=0;
    for(int i=0;i<s.length();i++)
    {
        int t=int(s[i]-'a');
        maxi = max(maxi,tab[t]);
    }

    cout << maxi*s.length() << endl;
    return 0;
}

