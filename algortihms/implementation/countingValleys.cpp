#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int counter=0;
    int helper=0;
    bool out=true;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            helper++;
        }else
        {
            helper--;
        }

        if(out && helper<0)
        {
            counter++;
            out=false;
        }else if(helper>=0)
        {
            out=true;
        }
    }
    cout << counter << endl;

    return 0;
}

