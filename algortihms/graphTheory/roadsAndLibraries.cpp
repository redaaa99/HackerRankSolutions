#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int *parents;
int *sizes;


void init(int size)
{
    parents=new int[size+1];
    sizes=new int[size+1];
    for(int i=1;i<=size;i++)
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
    int Q;
    int b,g;
    cin >> Q;
    while(Q--)
    {
        int n,m,clib,croad;
        vector<pair<int,int>> input;
        long cost=0;
        cin >> n >> m >> clib >> croad;
        init(n);
        if(m==0) cout << n*clib << endl;
        else
        {
            for(int i =0;i<m;i++)
            {
                cin >> b >> g;
                merge(b,g);
            }
            for(int i=1;i<n+1;i++)
            {
                if(sizes[i]==1){cost+=clib;}
                if(sizes[i]>1){
                    long cost1=sizes[i]*clib;
                    long cost2=(sizes[i]-1)*croad+clib;
                    cost = cost+min(cost1,cost2);
                }
            }

            cout << cost << endl;
        }
    }
    return 0;
}

