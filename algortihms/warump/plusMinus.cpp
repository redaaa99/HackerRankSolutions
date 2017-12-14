#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float p=0,z=0,ne=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(arr[arr_i]>0){
           p++;
       }
       else if(arr[arr_i]<0){
            ne++;
       }
       else
       {
           z++;
       }
     
       
    }
    cout << p/n << endl;
    cout << ne/n << endl;
    cout << z /n << endl;
    return 0;
}

