#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,m;
   cin >> n >> m;
   vector<int> st(m);
   for(int i=0;i<m;i++)
   {
       cin >> st[i];
   }
   sort(st.begin(),st.end());
   int maxi = st[0];
   for( int i = 1 ; i < m ; i++ ) 
       maxi = max( maxi, ( st[i] - st[i - 1] ) / 2 );

   maxi = max( maxi, ( n - 1 - st[m - 1] ) );

   cout << maxi << endl;
   return 0;
}

