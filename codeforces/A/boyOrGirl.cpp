#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    std::set<char> letters;
    string s;
    cin >> s;
    for(auto& c : s)
        letters.insert(c);

    cout << ((letters.size()%2 != 0) ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;

}