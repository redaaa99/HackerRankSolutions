#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool pairCompare(const pair<int,int>& i, const pair<int,int>& j) {
        return i.second < j.second;
}

void solve(vector<pair<int,int>> &tab,int size,int m)
{
    int mini=0;
    int maxi=size-1;
    while(1)
    {
        
        if(tab[mini].second+tab[maxi].second<m)
        {
            mini++;
        }
        else if(tab[mini].second+tab[maxi].second>m)
        {
            maxi--;
        }
        else
        {
            int a =(tab[mini].first+1);
            int b =(tab[maxi].first+1);
            cout << min(a,b)<<" " <<  max(a,b)<< endl;
            break;
        }
        if(mini==maxi)
        {
            break;  
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> m >> n;
        vector<pair<int,int>> tab;
        int tmp;
        for(int i=0;i<n;i++)
        {
            cin >> tmp;
            tab.push_back(make_pair(i,tmp));
        }
        sort(tab.begin(),tab.end(),pairCompare);
        solve(tab,n,m);
    }
    return 0;
}

