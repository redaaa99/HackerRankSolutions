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
    int N,Q;
    cin >> N >> Q;
    init(N);
    char ch1;
    int ch2;
    int ch3;
    while(Q--)
    {
        cin >> ch1;
        switch(ch1)
        {
            case 'Q':
                cin >> ch2;
                cout << sizes[find(ch2)] << endl;
                break;

            case 'M':
                cin >> ch2;
                cin >> ch3;
                merge(ch2,ch3);
                break;
        }
    }
    return 0;
}

