#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
        {
        for(int j = n-i;j>1;j--)
            {
            cout << ' ';
        }
        for(int m = -1;m<i;m++)
            {
            cout<< '#';
        }
        cout<<'\n';
    }
    return 0;
}

