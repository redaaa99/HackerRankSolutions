#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    string B;
    cin >> B;
    int count =0;
    for (int i=2;i<n;i++){
        if (B[i]=='0' && B[i-2]=='0' && B[i-1]=='1') {count++; i+=2;}
    }
    cout << count << endl;
    return 0;
}

