#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    int tmp;
    cin >> n >> k;
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        if(tmp>max)
        {
            max=tmp;
        }
    }
    if(k>=max)
    {
        cout << "0" << endl;
    }
    else{
        cout << max-k << endl;
    }
    return 0;
}

