#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int v,n;
    int tmp;
    int ind=-1;
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        if(tmp==v)
        {
            ind==i;
        }
    }
    cout << ind << endl;
    return 0;
}

