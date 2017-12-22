#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin >> n>> k;
    int arr[k]={};
    int tmp;
    for(int i=0;i<n;i++){
        cin >> tmp;
        arr[tmp%k]++;
    }
    int result=0;
    if(k%2==0)result++;
    result=result+min(arr[0],1);
    for(int j=1;j<=k/2;j++) if(j!=k-j)result+=max(arr[j],arr[k-j]);
    cout << result << endl;
}

