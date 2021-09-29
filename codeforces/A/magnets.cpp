#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    int n;
    cin >> n;
    std::vector<int> chain;
    while(n--){
        int tmp;
        cin >> tmp;
        chain.push_back(tmp/10);
        chain.push_back(tmp%10);
    }

    int ngroups = 0;
    for(int i=0;i<chain.size()-1;i++)
    {
        if(chain[i]==chain[i+1]) ngroups++;
    }
    cout << ngroups << endl;
}