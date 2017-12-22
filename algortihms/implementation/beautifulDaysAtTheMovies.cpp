#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int l;
    int k;
    cin >> l >> k;
    int t;
    cin >> t;
    int count=0;
    for(int i=l;i<=k;i++)
    {
        string s= to_string(i); 
        reverse(s.begin(),s.end());
        int reve = (int)(stoi(s));
        if(abs((i-(int)(reve))%t==0))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

