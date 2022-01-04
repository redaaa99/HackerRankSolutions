#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int numberOfBaked = 0;

    int oneOvenFinishTime = 0;
    int twoOvenFinishTime = 0;
    //cout << "One Oven start: " << "\n";
    for(int i=1; ;i+=1)
    {
        if(i%t==0) numberOfBaked += k;
        //cout << "T=" << i << " baked: " << numberOfBaked << "\n";
        if(numberOfBaked >= n){
            oneOvenFinishTime = i;
            break;
        }
    }
    //cout << "One Oven finish. " << "\n";
    
    numberOfBaked = 0;
    //cout << "Two Ovens start: " << "\n";
    for(int i=1; ;i+=1)
    {
        if(i%t==0) numberOfBaked += k;
        if(i>d && (i-d)%t==0) numberOfBaked += k;
        //cout << "T=" << i << " baked: " << numberOfBaked << "\n";
        if(numberOfBaked >= n){
            twoOvenFinishTime = i;
            break;
        }
    }
    //cout << "Two Oven finish. " << "\n";

    if(oneOvenFinishTime <= twoOvenFinishTime)
    {
        cout << "NO" << "\n";
    }
    else    
    {
        cout << "YES" << "\n";
    }   
}

