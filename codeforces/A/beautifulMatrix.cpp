#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            int number = 0;
            cin >> number;
            
            if(number == 1)
            {
                cout << (abs(3-i)+abs(3-j)) << endl;
                return 0;
            }
        }
    }
}