#include <cmath>
#include <cstdio>
#include <vector>
#include <functional>
#include <numeric>
#include <iostream>
#include <algorithm>
using namespace std;


void solve(vector<int> &in,int size,int m,int d)
{
   if(size==1)
   {
       if(in[0]==d && m==1)
       {
           cout << "1" << endl;
           return;
       }
       else
       {
           cout << "0" << endl;
           return;
       }
   }
   if(m>=size)
   {
       int sum = std::accumulate(in.begin(), in.end(), 0);
       if(sum==d)
       {
           cout << "1" << endl;
       }else{
            cout << "0" << endl;
       }
   }


   int count=0;
   int sum=0;
   for(int i=0;i<m;i++)
   {
       sum+=in[i];
   }
   if(sum==d)
   {
       count++;
   }
   for(int i=m;i<size;i++)
   {
       sum+=in[i];
       sum-=in[i-m];
       if(sum==d)
       {
           count++;
       }
   }
   cout << count << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> in(n);
    for(int i=0;i<n;i++)
    {
        cin >> in[i];
    }
    int m,d;
    cin >> d >> m;
    solve(in,n,m,d);
    return 0;
}

