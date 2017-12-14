#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin >> n;
    cin >> k;
    vector<int> in(n);
    for(int i=0;i<n;i++){cin >> in[i];}
    int b;
    cin >> b;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i==k){continue;}
        sum+=in[i];
    }
    sum/=2;
    if(b-sum>0)
    {
        cout << b-sum << endl;
    }
    else cout << "Bon Appetit" << endl;
    return 0;
}

