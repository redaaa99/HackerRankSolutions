#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    int var;
    cin >> N;
    vector<int> vec;
    while(N--)
    {
        cin >> var;
        vec.push_back(var);
    }
    sort(vec.begin(),vec.end());
    int min = abs(vec[0]-vec[1]);
    for(int i=0;i<vec.size()-1;i++)
    {
        if(min>abs(vec[i]-vec[i+1]))
        {
            min = abs(vec[i]-vec[i+1]);
        }
    }
    cout << min << endl;
    return 0;
}


