#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int minDistance=100000;
    for(int i=0;i<n;i++){            

        for(int j=i+1;j<n && j<i+minDistance;j++){                
            if(a[i]==a[j]){
                minDistance = min(minDistance,j-i);          
                break;

            }

        }            
    }
    if(minDistance==100000)
    {
        cout << "-1" << endl;
        return 0;
    }
    cout << minDistance << endl;
    return 0;
}

