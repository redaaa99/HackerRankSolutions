#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countswaps(vector<pair<int,int>> v) {
    int cnt = 0;
    for(int i = 0; i < v.size(); ++i) {
        while(v[i].second != i) {
            swap(v[i], v[v[i].second]);
            cnt += 1;
        }
    }
    return cnt;
}

vector<pair<int,int>> index(const vector<int> &v) {
    vector<pair<int,int>> vv(v.size());
    for(int i = 0; i < v.size(); ++i)
        vv[i] = make_pair(v[i], i);
    return vv;
}

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        cin >> v[i];

    auto indexed = index(v);
    sort(indexed.begin(), indexed.end());
    int c = countswaps(indexed);
    reverse(indexed.begin(), indexed.end());
    int d = countswaps(indexed);
    
    cout << min(c, d) << endl;
    
    return 0;
}
