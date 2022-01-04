#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> children(n);

    vector<int> progs;
    vector<int> maths;
    vector<int> pe;

    int tmp;
    for(int i=1;i<n+1;i++)
    {
        cin >> tmp;
        if(tmp == 1) progs.push_back(i);
        if(tmp == 2) maths.push_back(i);
        if(tmp == 3) pe.push_back(i);
    }
    int result = min(progs.size(),min(pe.size(),maths.size()));
    cout << result << "\n";
    for(int i=0; i < result ; i++)
    {
        cout << progs[i] << " " << maths[i] << " " << pe[i] << "\n";
    }
    
}