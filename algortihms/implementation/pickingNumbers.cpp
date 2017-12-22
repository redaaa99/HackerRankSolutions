#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int tmp;
    int tab[100]={0};
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        tab[tmp]++;
    }
    int maxi=0; 
    for(int i=1;i<100;i++)
    {
      maxi= max(maxi,tab[i-1]+tab[i]);  
    }
    cout << maxi << endl;
    return 0;
}

