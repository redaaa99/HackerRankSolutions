#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, input, oddity = 0, count = 0;
    cin >> N;
    for(int j = 0; j < N; j++){
        cin >> input;
        if(input % 2 == 1) {
            count++;
            oddity = count % 2? oddity - j : oddity + j;
        }
    }
    if(count%2==0)
    {
        cout << oddity*2 << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

