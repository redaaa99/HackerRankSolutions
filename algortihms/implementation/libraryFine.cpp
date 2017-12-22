#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int d1,m1,y1,d2,m2,y2,diff_y,diff_m,diff_d,fine = 0; 
    
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;
    diff_y = y1-y2;
    diff_m = m1-m2;
    diff_d = d1-d2;

    if(diff_y > 0)
    {
        fine = 10000;
    }
    else if(diff_y < 0)
    {
        fine = 0;
    }
    else if(diff_y == 0)
    {
        if(diff_m < 0)
            fine = 0;
        else if(diff_m > 0)
        {
            fine += 500*diff_m;
        }
        else if(diff_d <= 0)
            fine = 0;
        else if(diff_d > 0)
            fine += 15*diff_d;
    } 

    cout << fine << endl;
    return 0;
}

