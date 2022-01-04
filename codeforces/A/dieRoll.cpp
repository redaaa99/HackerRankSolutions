#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y,w;
    cin >> y >> w;

    int numerator = 7 - max(y, w);
    int denominator = 6;
    int divisor = gcd(numerator, denominator);

    cout << numerator/divisor << "/" << denominator/divisor << "\n";
}