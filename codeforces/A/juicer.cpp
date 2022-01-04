#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    long wasteSum = 0;
    long result = 0;
    for(int i=0;i < n; i++)
    {
        int tmp; cin >> tmp;
        if(tmp <= b) wasteSum+=tmp;
        if(wasteSum > d)
        {
            wasteSum = 0;
            result++;
        } 
    }

    cout << result << endl;
}