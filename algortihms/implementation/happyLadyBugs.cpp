#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool alreadyHappy(string s) {
    for (int i=0;i<s.length()-1;i++) {
        if (i == 0 && s[i] != s[i+1]) {
            return false;
        }
        else if (s[i] != s[i+1] && s[i] != s[i-1]){
            return false;
        }
    }

    return true;
}

bool hasUnique(string s) {
    int ascii[26]={};

    for (int i=0;i<s.length();i++) {
        if (s[i] != '_') {
            ascii[(int)s[i]-65]++;
        }
    }

    for (int i=0;i<26;i++) {
        if (ascii[i] == 1) {
            return true;
        }
    }

    return false;
}


bool hasSpace(string s) {
    for (int i=0;i<s.length();i++) {
        if (s[i] == '_') {
            return true;
        }
    }
    return false;
}

void solve(string board)
{
    if (hasUnique(board)) {
        cout << "NO" <<endl;
    }  
    else if (alreadyHappy(board)) {
        cout << "YES" << endl;
    }
    else if (hasSpace(board)) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}

int main() {
    int g;
    cin >> g;
    while(g--)
    {
        int n;
        string board;
        cin >> n;
        cin >> board;
        solve(board);
    }
    return 0;
}

