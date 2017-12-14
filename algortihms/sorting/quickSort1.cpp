#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void solve(vector<int> ar,int n)
{
    int temp=0;
    int pivot=ar[0];
    int pIndex=n-1;
    for(int i=n-1;i>=1;i--){
        if(ar[i]>=pivot){
            temp=ar[i];
            ar[i]=ar[pIndex];
            ar[pIndex]=temp;
            pIndex-=1;
        }
    }
    temp=ar[pIndex];
    ar[pIndex]=ar[0];
    ar[0]=temp;
    for(int i=0;i<n;i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    vector<int> tab(N);
    for(int i=0;i<N;i++)
    {
        cin >> tab[i];
    }

    solve(tab,N);

    return 0;

}

