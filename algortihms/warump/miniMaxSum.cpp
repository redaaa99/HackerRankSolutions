#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

int main() {
    vector<int> arr(5);
    long sum=0;
    int maxi=0;
    long mini=INT_MAX;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
        if(maxi<arr[arr_i])
        {
            maxi=arr[arr_i];
        }
        if(mini>arr[arr_i])
        {
            mini=arr[arr_i];
        }
        sum+=arr[arr_i];
    }
    
    cout << sum-maxi << " " << sum-mini <<endl;
    
    return 0;
}

