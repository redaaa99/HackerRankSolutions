#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str;
    getline(cin,str);
    int tab[26]={};
    int size=str.length();
    //cout << size;
    for(int i=0;i<str.length();i++)
    {
        str[i]=tolower(str[i]);
        if(str[i]<='z' && str[i]>='a')
        {
            tab[(str[i]-97)]++;
        }
    }


    for(int i=0;i<26;i++)
    {
        if(tab[i]==0)
        {
            cout << "not pangram" << endl;
            return 0;
        }
    }
    cout << "pangram" << endl;

    return 0;
}

