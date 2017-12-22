#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    string s;
    for(int i=0;i<t;i++)
    {
        cin >> s;
        bool val = next_permutation(s.begin(), s.end());
        if (val == false)
        {
            cout << "no answer" << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}

