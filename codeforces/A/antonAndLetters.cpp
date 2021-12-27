#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(std::cin, str);    
    set<char> s;
    
    for(auto c : str)
    {
        if(isalpha(c)) s.insert(c);
    }
    cout << s.size() << "\n";
}