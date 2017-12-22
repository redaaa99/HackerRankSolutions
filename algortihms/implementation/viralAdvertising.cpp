#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cin >> num;
    int sum = 0;
    int people = 5;
    for(int i = 0; i < num; i++){
        people = people/2;
        sum += people;
        people *= 3;
    }
    cout << sum << endl;
    return 0;
}

