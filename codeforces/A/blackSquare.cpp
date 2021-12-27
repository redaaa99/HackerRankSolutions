#include <bits/stdc++.h>

using namespace std;

int main()
{
    array<int, 4> calories;
    string s;
    cin >> calories[0] >>  calories[1] >>  calories[2] >>  calories[3];
    cin >> s;
    long sumCalories = 0;
    for(auto strip: s)
    {
        sumCalories += calories[(int)(strip - '0') - 1];
    }
    cout << sumCalories << "\n";
}