#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> p(n+1);
    vector<int> pp(51);
    for(int i=1;i<n+1;i++)
    {
        cin >> p[i];
        pp[p[i]] = i;
    }
    for (int x = 1; x <= n; x++) {
       cout << pp[pp[x]] << endl;
    }
    /*for(int i=0;i<50;i++)
      {
      if(p[i]!=0)
      {
      cout << p[i] << " ";
      }
      }*/
    return 0;
}

