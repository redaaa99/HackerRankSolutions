#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x = l ^ r;
    int max = 0;
    while(x > 0)
    {
        max <<= 1;
        max |= 1;
        x >>= 1;
    }
    cout << max << endl;
    return 0;
}

