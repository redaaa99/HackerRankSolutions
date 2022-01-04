#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> events(n);
    for(int i=0;i<n; i++) cin >> events[i];

    int result = 0;
    int recruits = 0;
    for(int i=0;i<n;i++)
    {
        if(events[i] >= 1)
        {
            recruits += events[i];
        }
        else
        {
            if(recruits > 0) 
            {
                recruits--;
            }
            else
            {
                result++;
            }
        }

    }



    cout <<result << "\n";
}