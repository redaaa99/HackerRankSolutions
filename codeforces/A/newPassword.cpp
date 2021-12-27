#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    string s = "";

    while(s.length() != n)
    {
        for(int i=0;i<k;i++)
        {
            s+= (char)('a' + i);
            if(s.length() == n) break;
        }
    }
    cout << s << "\n";
    
}