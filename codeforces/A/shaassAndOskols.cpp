#include <bits/stdc++.h>

using namespace std;

int main()
{
    array<int, 100> birds;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> birds[i];
    }

    int q; cin >> q;
    int x,y;
    while(q--){
        cin >> x >> y;
        if(birds[x-1] > 0)
        {
            int numberOfBirdsOnTheRight = birds[x-1] - y;
            int numberOfBirdsOnTheLeft = y - 1;
            
            birds[x-1] = 0;

            if(x-1 > 0) birds[x-2] += numberOfBirdsOnTheLeft;
            if(x-1 < n - 1) birds[x] += numberOfBirdsOnTheRight;
        }
    }

    for(int i=0;i<n;i++) cout << birds[i] << "\n"; 
}