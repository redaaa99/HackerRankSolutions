#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int n,d;
    cin >> n >> d;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    } 

    int count=0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(v[j]-v[i]>d)break;
            for(int k=j+1 ; k<n ; k++){
                if(v[k]-v[j]>d)break;
                if(v[j]-v[i]==d && v[k]-v[j]==d)
                    count++;
            }  
        } 
    }
    cout << count;
    return 0;
}

