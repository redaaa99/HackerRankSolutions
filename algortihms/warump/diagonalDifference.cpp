#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int sumD = 0;
    int summD = 0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    for(int i = 0 ;i < n;i++)
        {
        sumD = sumD + a[i][i];
        summD = summD + a[i][n-1-i];
    }
    cout << fabs(sumD-summD);
   
    
    return 0;
}

