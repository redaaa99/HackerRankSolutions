#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int fre[n]={};
    int tmp;
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        fre[tmp-1]++;
    }
    int max=fre[0];
    int ind=0;
    for(int i=1;i<n;i++)
    {
        if(max<fre[i])
        {
           max=fre[i];
           ind=i;
        }
    }
    cout << ind+1 << endl;
    return 0;
}

