#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(int x,int n,int i)
{
    int value = x-pow(i,n); 
    if(value==0)
    {
        return 1;
    }
    if(value<0)
    {
        return 0;
    }else
    {
        return solve(value,n,i+1)+solve(x,n,i+1);
    }
}

int main() {
    int x,n;
    cin >> x  >> n;
    cout << solve(x,n,1) <<endl;
    return 0;
}

