#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin >> n >> k;

    vector <int> impt;
    int impt_sum=0;
    int unimpt_sum=0;

    for (int i=0;i<n;i++) {
        int luck,type;
        cin >> luck >> type;

        if (type) {
            impt.push_back(luck);
            impt_sum+=luck;
        }    
        else 
            unimpt_sum+=luck;
    }

    sort(impt.begin(),impt.end());
    int isize=impt.size();

    if (k<=isize) for (int i=isize-k-1;i>=0;i--) impt_sum-=(2*impt[i]);

    cout << impt_sum+unimpt_sum;
    return 0;
}

