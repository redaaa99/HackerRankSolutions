#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    long k;
    cin >> n >>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    int count=0;
    while(1)
    {
        if(k-v[v.size()-1]<0 || v.empty())
        {
            cout << count << endl;
            break;
        }else
        {
            k-=v[v.size()-1];
            v.pop_back();

            count++;
        }

    }
    return 0;
}


