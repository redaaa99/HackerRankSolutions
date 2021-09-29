#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int lines;
    cin >> lines;
    int result = 0;
    while(lines--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        result += (a+b+c)>=2  ? 1 : 0;  
    }

    cout << result << endl;
}