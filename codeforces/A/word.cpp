#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int nUpperCase = count_if(s.begin(), s.end(), [](char c){ return isupper(c); });
    bool shoudBeLower = nUpperCase <= s.length()-nUpperCase;

    std::transform(s.begin(), s.end(), s.begin(),
    [shoudBeLower](unsigned char c){ return shoudBeLower ? tolower(c) : toupper(c); });

    cout << s << endl;
}