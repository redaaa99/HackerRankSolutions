#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <bitset>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
#define foreach(x, v) for (typeof (v).begin() x=(v).begin(); x !=(v).end(); ++x)
#define For(i, a, b) for (int i=(a); i<(b); ++i)

using namespace std;

int main(){
    int n,k;
    int number=0;
    cin >> n >> k;
    vector<int> house;
    int var;
    For(i,0,n){cin >> var;house.push_back(var);}
    sort(house.begin(),house.end());
    for(int i=0;i<n;){
        int j=i+1;
        while(j<n && house[j]-house[i]<=k) j++;
        i=j-1;
        while(j<n && house[j]-house[i]<=k) j++;
        number++;
        i=j;
    }
    cout << number << endl;
    return 0;
}
