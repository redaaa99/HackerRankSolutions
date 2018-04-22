#include <bits/stdc++.h>

using namespace std;

string solve(vector < int > a){
    int sum1=0;
    int sum2=0;
    for(int i=1;i<a.size();i++)
    {
        sum2+=a[i];
    }

    if(sum1==sum2){return "YES";}


    for(int i=0;i<a.size()-1;i++)
    {
        sum1+=a[i];
        sum2-=a[i+1];
        //cout << sum1 << "," << sum2 << endl;
        if(sum1==sum2){return "YES";}
    }
    return "NO";
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = solve(a);
        cout << result << endl;
    }
    return 0;
}
