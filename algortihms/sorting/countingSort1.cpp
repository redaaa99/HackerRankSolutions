#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int tab[100]={};
    int tmp;
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        tab[tmp]++;
    }

    for(int i=0;i<100;i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
    return 0;
}

