#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#define foreach(x, v) for (typeof (v).begin() x=(v).begin(); x !=(v).end(); ++x)
#define For(i, a, b) for (int i=(a); i<(b); ++i)
#define D(x) cerr << #x " is " << (x) << endl


using namespace std;

bool myfunction (string i,string j) 
{ 
    int n=i.length();
    int m=j.length();
    if(n==m)
        return (i<j);

    return n<m;   
}

int main() {
        int N;
        cin >> N;
        string var;
        vector<string> v;
        For(i,0,N){cin >> var;v.push_back(var);}
        sort(v.begin(),v.end(),myfunction);
        For(i,0,N){cout << v[i] << endl;}
        return 0;
}


