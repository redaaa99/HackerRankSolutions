#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sumOfWins = 0;
    for(auto& c : s)
    {
        sumOfWins += ((c - 'A') == 0) ? 1 : -1;
    }

    if(sumOfWins == 0)
    {
       cout << "Friendship" << endl;
    }
    else if(sumOfWins > 0)
    {
       cout << "Anton" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }
}