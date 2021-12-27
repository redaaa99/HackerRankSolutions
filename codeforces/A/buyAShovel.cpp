#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int result = 0;
    int i = 1;
    while(true)
    {
        if( (k * i - r) % 10  == 0 || (k * i) % 10 == 0)
        {
            result = i;
            break;
        }
        i++;
    }


    cout << result << endl;
}