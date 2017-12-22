#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s, t;
    int k, i;
    cin >> s >> t >> k;
    for(i = 0; s[i] == t[i]; i++);
    cout << (s.length()+t.length() <= k + i*2 && ((s.length()+t.length())%2) == k%2 || s.length()+t.length() < k ? "Yes" : "No");
    return 0;    
}

