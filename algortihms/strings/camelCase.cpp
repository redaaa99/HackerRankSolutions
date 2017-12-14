#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string str;
    cin >> str;

    int c=1;
    for(int i=0;i<str.length();i++)
    {
        if(isupper(str[i]))
        {
            c++;
        }
    }
    cout << c << endl;
   
    return 0;
}

