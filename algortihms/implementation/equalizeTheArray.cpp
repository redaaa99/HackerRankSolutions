#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,maxi;
    cin>>n;
    int arr[100]={};
    cin>>k;
    arr[k-1]++;
    maxi = k-1;
    for(int i=1;i<n;i++)
    {
        cin>>k;
        arr[k-1]++ ;
        if(arr[k-1]>arr[maxi])
            maxi = k-1;
    }
    cout<<n-arr[maxi] ;
    return 0;
}

