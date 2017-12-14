#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int* tab;

void init(int Maxi)
{
    tab=new int[Maxi+1];
    for(int i =0; i <= Maxi; i++) tab[i] = -1;
    tab[0]=0;
    tab[1]=1;
    tab[2]=2;
    tab[3]=3;
    for(int i=0;i<=Maxi;i++)
    {
        if(tab[i]==-1 or tab[i]>tab[i-1]+1)
        {
            tab[i]=tab[i-1]+1;
        }
        for(int j=1 ;j<=i;j++)
        {
            if(i*j>Maxi) break;
            if((tab[i*j]==-1) or (tab[i*j]>tab[i]+1))
            {
                tab[i*j]=tab[i]+1;
            }               
        }
    }

}


int main() {
    int Q;
    int N;
    cin >> Q;
    int maxa =0;
    int input[Q];
    int i=0;
    int V=Q;
    while(V--)
    {
        cin >> input[i];
        maxa = max(input[i],maxa);
        i++;
    }
    init(maxa);
    for(int i=0;i<Q;i++)
    {
        cout << tab[input[i]]  <<endl;
    }
    return 0;
}

