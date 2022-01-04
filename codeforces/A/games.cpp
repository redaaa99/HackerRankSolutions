#include <bits/stdc++.h>

using namespace std;

int main()
{
    array<int, 100> host = {};
    array<int, 100> guest = {};
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int h,g;
        cin >> h >> g;
        host[h-1]++;
        guest[g-1]++;
    }

    int result = 0;
    for(int i=0;i<100;i++)
    {
        result += host[i] * guest[i];
    }
    cout << result << "\n";

}