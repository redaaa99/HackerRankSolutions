#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    int present  = 0 ;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
           if(a[a_i]<= 0)
               {
               present = present +1;
           }
        }
     if(present >= k)
            {
            cout << "NO\n";
            present =0;
        }
    else{
        cout<<"YES\n";
        present = 0;
    }
    
        
    }
   
    return 0;
}

