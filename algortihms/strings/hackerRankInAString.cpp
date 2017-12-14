#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    string ha="hackerrank";
    int j=0;
    cin >> t;
    while(t--)
    {
        string res="";
        string str;
        cin >> str;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==ha[j])
            {
                res+=str[i];
                j++;
            }
        }
        if(res==ha)
        {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        res="";
        j=0;
    }
    return 0;
}

