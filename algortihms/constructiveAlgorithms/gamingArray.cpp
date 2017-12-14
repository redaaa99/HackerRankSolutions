#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        int first;
        int tmp;
        int count=0;
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
           cin >> tmp;
           if(tmp>maxi)
           {
                count++;
                maxi = tmp;
           }
        }
        if(count%2==1)
        {
            cout << "BOB" << endl;
        }else{cout << "ANDY" << endl;}
    }
    return 0;
}

