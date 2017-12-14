#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int *parents;
int *sizes;

void init(int size)
{
    parents=new int[size+1];
    sizes=new int[size+1];
    for(int i=0;i<size;i++)
    {
        parents[i]=i;
        sizes[i]=1;
    }
}


int find( int x ) {
    int r = x;
    while(parents[r]!=r)
        r = parents[r];

    return r;
}

void merge(int a,int b)
{
    int parentA = find(a);
    int parentB = find(b);
    if(parentA!=parentB)
    {
        if(sizes[parentA]>=sizes[parentB])
        {
            sizes[parentA]+= sizes[parentB];
            sizes[parentB] = 0;
            parents[parentB] = parentA;
        }
        else
        {
            sizes[parentB]+= sizes[parentA];
            sizes[parentA] = 0;
            parents[parentA] = parentB;
        }
    } 
}


int main() {
    long long n,p;
    long long a,b;
    cin >> n >> p;
    if(n==1) {cout << "0" << endl; return 0;}
    init(n);
    for(int i=0;i<p;i++)
    {
        cin >> a >> b;
        merge(a,b);
    }
    long res=n*(n-1);
    long ct=0;
    for(long long i=0;i<n;i++)
    {
        if(sizes[i]>=2)
            ct+=(sizes[i]*(sizes[i]-1));
    }

    cout << (res-ct)/2 << endl;
    return 0;
}


