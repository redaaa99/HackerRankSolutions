#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> game(n);
    for(int i=0;i<n;i++) cin >> game[i];


    int players[2] = { 0, 0 };
    
    int a = 0;
    int b = n - 1;
    bool turn = 0;
    for(int i = 0; i < n ; i++)
    {
        if(a == b) { players[turn]+= game[a]; break;}
        if(game[a] < game[b])
        {
            players[turn]+= game[b];
            b--;
        }
        else
        {
            players[turn]+= game[a];
            a++;
        }
        turn = !turn;        
    }
    cout << players[0] << " " << players[1] << "\n";
}