#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string str;
    cin >> str;
    vector<int> w;
    for(int i=0;i<str.length();)
    {
        int sum=int(str[i]-96); 
        w.push_back(sum);
        i++;
        while(i<str.length() && str[i]==str[i-1])
        {
            sum+=int(str[i]-96);
            w.push_back(sum);
            i++;
        }
        //sum+=str[i]-96;
    }
    int n;
    cin >> n;
    int x;
    while(n--)
    {
        cin >> x;
        if(find(w.begin(),w.end(),x)!=w.end())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}

