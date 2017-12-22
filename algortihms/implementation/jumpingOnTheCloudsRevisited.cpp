#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin >> n >> k;
    int tmp;
    int e=100;
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        if(i%k==0)
        {
            e=e-1-2*tmp;
        }
    }
    cout << e << endl;

    return 0;
}

