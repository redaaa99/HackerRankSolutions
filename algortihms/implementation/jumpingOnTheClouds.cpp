#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    if(n<=2)
    {
        cout << "1" << endl;
        return 0;
    }
    int jumps=0;
    int i=0;
    while(i<n)
    {
        if(v[i+2]==0)
        {
            jumps++;
            i+=2;
        }
        else
        {
            jumps++;
            i++;
        }
    }

    cout << jumps-1 << endl;
    return 0;
}

