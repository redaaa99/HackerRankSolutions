#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    long long n;
    int counta=0;
    cin >> n;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            counta++;
        }
    }
    if(counta==0)
    {
        cout << "0" << endl;
        return 0;
    }
    if(s.length()==1)
    {
        cout << n << endl;
        return 0;
    }
    long long res = (n/s.length());
    long long indexesTo = n%s.length();
    int rest=0;
    for(int i=0;i<indexesTo;i++)
    {
        if(s[i]=='a')
        {
            rest++;
        }
    }
    cout << (counta*res)+rest << endl;
    
    return 0;
}

