#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    for(int a = 0; a < t; a++){
        long b,w,x,y,z;
        cin >> b >> w >> x >> y >> z;
        x = x>y? ((x-y>z)? y+z : x) : x;
        y = y>x? ((y-x>z)? x+z : y) : y;
        cout << b*x+w*y << endl;
    }  
    return 0;
}

