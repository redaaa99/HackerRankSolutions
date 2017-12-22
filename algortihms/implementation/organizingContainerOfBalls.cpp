#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        int x;
        vector<int> containers(n,0);
        vector<int> types(n,0);
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cin >> x;
                containers[i]+=x;
                types[j]+=x;
            }
        }
        sort(containers.begin(),containers.end());
        sort(types.begin(),types.end());
        if(types==containers)
        {
            cout << "Possible" << endl;
        }else{
            cout << "Impossible" << endl;
        }

    }   return 0;
}     
