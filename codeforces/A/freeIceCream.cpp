#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, pack;
    cin >> n >> pack;
    long long distressedKids = 0;
    string sign;
    long long number;
    while(n--)
    {
        cin >> sign >> number;
        if(sign == "+") pack += number;
        if(sign == "-")
        {
            if(pack >= number) pack -= number;
            else distressedKids++;
        }
    }

    cout << pack << " " << distressedKids << "\n";
}