#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    while(t--)
    {
        cin >> x >> y;
        int a=x%4;
        int b=y%4;
        if((a==1 or a==2) and (b==1 or b==2))
        {
            cout << "Second" << endl;
        }
        else cout << "First" << endl;
    }
    return 0;
}

