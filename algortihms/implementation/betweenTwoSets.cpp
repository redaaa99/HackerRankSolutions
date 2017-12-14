#include <set>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b > 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a * (b / gcd(a, b));
}

int lcm(vector<int> &a,int size) {
    int result = a[0];
    for (int i = 1; i < size; i++) {
        result = lcm(result, a[i]);
    }
    return result;
}

int gcd(vector<int> &b,int size) {
    int result = b[0];
    for (int i = 1; i < size; i++) {
        result = gcd(result, b[i]);
    }
    return result;
}

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin >> b[i];
    }
    int f = lcm(a,n);
    int l = gcd(b,m);
    int count = 0;
    for(int i = f, j =2; i<=l; i=f*j,j++){
        if(l%i==0){ count++;}
    }
    cout << count << endl;
    return 0;
}

