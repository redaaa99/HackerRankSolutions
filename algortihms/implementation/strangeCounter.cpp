#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long t;
    cin >> t;
    long long lower=1;
    long long upper=3;
    while(t>lower+upper-1) 
        lower+=upper, upper*=2;
    cout<<upper-(t-lower); 
    return 0;
}

