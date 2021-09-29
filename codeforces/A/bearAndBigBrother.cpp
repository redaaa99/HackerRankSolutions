#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    double limakWeight, bobWeight;
    cin >> limakWeight >> bobWeight;
    cout << floor( (log(bobWeight/limakWeight)/0.40546510811) +1.00001) << endl;
}