#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> colors;
    int tmp;
    cin >> tmp; colors.insert(tmp);
    cin >> tmp; colors.insert(tmp);
    cin >> tmp; colors.insert(tmp);
    cin >> tmp; colors.insert(tmp);

    cout << 4 - colors.size() << endl;
}