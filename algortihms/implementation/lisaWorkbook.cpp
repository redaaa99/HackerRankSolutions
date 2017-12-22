#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin >> n >> k;
    int tmp;
    int cnt=0;
    int nbdePages=1;
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        int qtmp =0;
        int ptmp=0;
        while(tmp>0)
        {
            ptmp=qtmp;
            qtmp+=((k<=tmp)?k:tmp);
            tmp-=k;
            if(nbdePages>ptmp && nbdePages<=qtmp)
            {
                cnt++;  
            }
            nbdePages++;
        }
    }
    cout << cnt << endl;

    return 0;
}


