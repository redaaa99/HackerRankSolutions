#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    long long miles=0;
    long long n;
    cin >> n;
    vector<long long> vec;
    long long tmp;
    for(long long i=0;i<n;i++)
    {
        cin >> tmp;
        vec.push_back(tmp);
    }

    sort(vec.begin(),vec.end(), greater<int>() );

    for(long long i=0;i<n;i++)
    {
//        cout << i << " " <<((long)1<<i) << endl;
        miles+=vec[i]*((long)1 << i);
    }
    cout << miles << endl;
    return 0;
}

