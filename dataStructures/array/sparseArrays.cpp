#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cassert>

using namespace std;

char inp[1002][25];

int main()
{
    int n, q;
    cin>>n;
    for(int i = 0 ; i< n; i++)
    {
        cin>>inp[i];
    }
    char check[25];
    cin>>q;
    while(q--)
    {
        cin>>check;
        int ans = 0;
        for(int i = 0 ; i < n; i++)
        {
            if(strcmp(inp[i], check) == 0)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
