#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> results;
    while(n--)
    {
        string s;
        cin >> s;
        if(s.length() > 10)
        {
            results.push_back({ s[0] + to_string(s.length()-2) + s[s.length() - 1] });

        }
        else
        {
            results.push_back(s);
        }
    }

    for(auto str: results)
    {
        cout << str << "\n";
    }
}