#include <bits/stdc++.h>

using namespace std;

int main()
{
    string colors;
    string insts;
    cin >> colors;
    cin >> insts;
    int position = 0;


    for(auto inst: insts)
    {
        if(inst == colors[position])
        {
            position++;
        }
    }


    cout << position + 1 << endl;
}