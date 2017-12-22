#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,t;
    cin >> n >> t;
    vector<int> width(n);
    for(int i=0;i<n;i++)
    {
        cin >> width[i];
    }

    for(int k=0;k<t;k++)
    {
        int i,j;
        cin >> i >> j;
        vector<int>::iterator res=min_element(begin(width)+i,begin(width)+j+1);
        cout << *res << endl;
    }
    return 0;
}

