#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct edge {
    int u;
    int v;
    int w;
};

struct {
    bool operator () (edge one, edge two) {
        if(one.w < two.w)
            return true;
        else {
            if(one.w > two.w)
                return false;
            else {
                if((one.w + one.u + one.v) < (two.w + two.u + two.v))
                    return true;
                else
                    return false;
            }
        }
    }
} compare;

int *parents;

void init(int size)
{
    parents=new int[size+1];
    for(int i=1;i<size+1;i++)
    {
        parents[i]=i;
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
    parents[parentA] = parents[parentB];
}



int main() {
    int n,m;
    cin >> n >> m;
    vector<pair<long,pair<long,long>>> input;
    init(n);
    vector<edge> arr;
    for(int i=0;i<m;i++)
    {
        edge cur;
        cin >> cur.u >> cur.v >> cur.w;
        arr.push_back(cur);
    }
    sort(arr.begin(),arr.end(),compare);

    long sum=0;
    for(int i=0;i<m;i++)
    {
        if(find(arr[i].u)!=find(arr[i].v))
        {
            sum+=arr[i].w;
            merge(arr[i].u,arr[i].v);
        }
    }
    cout << sum << endl;
    return 0;
}

