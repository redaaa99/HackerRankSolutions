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
        int money,cost,m;
        cin >> money >> cost >> m;
        int chocs=(money/cost);
        int wrapper=chocs;
        while(wrapper>=m)
        {
            wrapper-=m;
            wrapper++;
            chocs++;
            
        }
        cout << chocs << endl;
    }
    return 0;
}

