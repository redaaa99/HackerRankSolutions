#include <bits/stdc++.h>
 
 
using namespace std;
 

int main()
{
    int n, fenceHeight;
    cin >> n >> fenceHeight;
    long sum = 0;
    for(int i=0 ; i<n; i++)
    {
        int height;
        cin >> height;
        sum += (height <= fenceHeight) ? 1 : 2;
    }
    cout << sum << endl;
}