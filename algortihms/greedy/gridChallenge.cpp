#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



void solve(vector<vector<char>> & mat,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]>mat[i+1][j])
            {
                cout << "NO" << endl;
                return;
            }
        } 
    }
    cout << "YES" << endl;
}

int main() {
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        char tmp;
        vector<vector<char>> mat;
        for(int i=0;i<n;i++)
        {
            vector<char> tmpp;
            for(int j=0;j<n;j++)
            {
                cin >> tmp;
                tmpp.push_back(tmp);
            }
            sort(tmpp.begin(),tmpp.end());
            mat.push_back(tmpp);
        }
        solve(mat,n);
    }
    return 0;
}

