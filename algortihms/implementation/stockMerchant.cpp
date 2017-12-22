#include <cmath>
#include <set>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    set<int> se;
    int tmp;
    int pairs=0;
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        if(se.find(tmp)==se.end())
        {
            se.insert(tmp);
        }
        else
        {
            se.erase(tmp);
            pairs++;
        }
    }
    cout << pairs << endl;
    return 0;
}

