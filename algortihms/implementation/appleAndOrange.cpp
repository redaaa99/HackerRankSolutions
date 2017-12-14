#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s,t,a,b,n,m;
    cin >> s >> t >> a >> b >> m  >> n;
    int app=0;int oran = 0;
    int d;
    for(int i=0;i<m;i++)
    {
        cin >> d;
        if(s<=a+d && a+d<=t){app++;}
    }
    cout << app << endl;
    for(int i=0;i<n;i++)
    {
        cin >> d;
        if(s<=b+d && b+d<=t){oran++;}
    }
    cout << oran << endl;
    return 0;
}

