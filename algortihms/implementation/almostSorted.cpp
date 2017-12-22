#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    int count=0;
    int u=0,v=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i>0 && a[i-1]>a[i]){
            ++count;
            if(u==0)
            {
                u=i;
            }
            v=i;
        }  
    }
    if(count==1){
        if(n>2 && a[u-1]<a[v+1] && a[v]>a[u-2>=0?u-2:0]){cout << "yes\nswap "<<u<<" "<<(v+1)<<endl;}
        else if(n==2){cout <<"yes\nswap "<<u<<" "<<(v+1)<<endl;}
        else{cout <<"no"<<endl;;}  
    }
    else if(count==2){cout << "yes\nswap "<<u<<" "<<(v+1)<<endl;}
    else if(count>1){
        if(a[u-2]<a[v] && a[u-1]<a[v+1] && v-u==count-1){cout << "yes\nreverse "<<u<<" "<<(v+1)<<endl;}
        else{cout << "no" << endl;}
    }
    else if(count==0){cout << "yes" << endl;}    
    return 0;
}

