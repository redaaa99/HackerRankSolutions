#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void rotate(vector<int> &arr, int a){
    int temp = arr[a];
    arr[a] = arr[a+1];
    arr[a+1] = arr[a+2];
    arr[a+2] = temp;
}
void bubleSort(vector<int> &array, int n){
    for (int i=0; i<n-2; i++){
        for (int j=n-2-1; j>=i; j--){
            while (array[j]>array[j+1]||array[j]>array[j+2]) {
                rotate(array,j);
            }
        }
    }
}



int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        bubleSort(v,n);
        cout << (v[n-2]<v[n-1]?"YES":"NO") << endl;
    }
    return 0;
}


