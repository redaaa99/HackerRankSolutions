#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int n=str.length()-1;
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if(abs(str[i+1]-str[i])!=abs(str[n-i-1]-str[n-i]))
            {
                flag=false;
            }
        }
        if(flag)
        {
            cout << "Funny" << endl; 
        }else{
            cout << "Not Funny"<< endl; 
        }
    }
    return 0;
}

