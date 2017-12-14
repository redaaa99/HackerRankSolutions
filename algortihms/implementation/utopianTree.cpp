#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;






int main(){
    int t;
    cin >> t;
    int h = 1;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        
        for(int i = 0;i<n;i++)
            {
            if(i%2==0)
                {
                h=h*2;
            }
            else{
                h++;
            }
        
        }
        
         cout << h << '\n' ;
         h = 1;
        
        
        /*if(n%2==0)
            {
            h = h*pow(2,(n/2))+(n/2);
        }
        else{
            h =h*pow(2,((n+1)/2))+((n-1)/2);
        }*/
        
        
    }
    
    return 0;
}

