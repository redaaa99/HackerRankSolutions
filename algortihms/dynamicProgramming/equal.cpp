#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;


long solve(vector<int> &cookies,int size)
{

    long sum = LONG_MAX;
    for(int base = 0; base < 3; base++) {
        long current_sum = 0;
        for(int i = 0; i < size; i++) {
            int delta = cookies[i] - cookies[0] + base;
            current_sum += (int)delta / 5 + delta % 5 / 2 + delta % 5 % 2 / 1;
        }
        sum = min(current_sum,sum);
    }
    return sum;
}



int main() {
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        cout << solve(a,n) << endl;
    }
    return 0;
}

