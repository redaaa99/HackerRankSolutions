#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    int tab[N];
    for(int i=0;i<N;i++)
    {
        cin >> tab[i];
    }
    int place = tab[N-1];
    int i=N-1;
    while(place<tab[i-1])
    {
        tab[i]=tab[i-1];
        for(int j=0;j<N;j++)
        {
            cout << tab[j] <<" ";
        }
        cout << endl;
        i--;
        if(i==0)
        {
            break;
        }
    }
    tab[i]=place;
    for(int j=0;j<N;j++)
        {
            cout << tab[j] <<" ";
        }
        cout << endl;
        return 0;
}

