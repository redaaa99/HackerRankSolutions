#include <bits/stdc++.h>

using namespace std;

int main() 
{
    array<int, 26> shifts = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    string s;
    cin >> s;
    int sum = 0;
    char previous = 'a';
    for(auto c: s)
    {
        //cout << "abs("<< c << " - " << " previous) = " << abs(c-previous) << "  shift: " << shifts[abs(c-previous)] << "\n";
        sum += shifts[abs(c - previous)];
        previous = c;
    }
    cout << sum << "\n";
    return 0;
}

