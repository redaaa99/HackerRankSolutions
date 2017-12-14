#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void solve(int N)
{
    if(N<38){cout << N << endl; return;}
    if(N%5<3){cout << N << endl;return;}
    else{cout << (N+5-(N%5))<< endl;}
    return;
}


int main() {
    int N;
    cin >> N;
    int tmp;
    while(N--)
    {
        cin >> tmp;
        solve(tmp);
    }
    return 0;
}
