#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long> b;
        long tmp;
        for(int i=0;i<n;i++)
        {
            cin >> tmp;
            b.push_back(tmp);
        }
        //solve(b,n);
        long lolo,lohi,hilo,hihi;
        long lowsum=0;
        long highsum=0;
        long tst,tst2,tst3;
        for(int i=1;i<n;i++)
        {
            lolo=abs(1-1);
            lohi=abs(1-b[i]);
            hilo=abs(b[i-1]-1);
            hihi=abs(b[i-1]-b[i]);
            tst=highsum+hilo;
            tst2=highsum+hihi;
            tst3=lowsum+lohi;  
            lowsum=max(lowsum, tst);
            highsum=max(tst3,tst2);
        }
        cout << max(lowsum,highsum) << endl;
    }
    return 0;
}

