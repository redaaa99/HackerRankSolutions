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
        int x,y,z;
        cin >> x >> y >> z;
        int d1=abs(x-z);
        int d2=abs(y-z);
        if(d1>d2)
        {
            cout << "Cat B" << endl;
        }else if(d1<d2)
        {
            cout << "Cat A" << endl;
        }else
        {
            cout << "Mouse C" << endl;
        }
    }
    return 0;
}

