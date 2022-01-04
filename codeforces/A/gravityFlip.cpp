#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> heights(n);
    for(int i = 0; i<n ; i++)
        cin >> heights[i];

    sort(heights.begin(),heights.end());

    for(auto& h : heights)
        cout << h << " ";
    cout << "\n";
}
