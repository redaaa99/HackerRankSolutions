#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    int n=s.length();
    int row = round(sqrt(n));
    int column;
    if (row >= sqrt(n)) column = row; else column = row + 1;
    for(int j=0;j<column;++j) {
        for(int i=j; i<n;i+=column)cout << s[i];
        cout << ' ';
    }
    return 0;
}

