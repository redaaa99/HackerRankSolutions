#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if(s.length() == 1)
    {
        cout << s << "\n";
        return 0;
    }
    vector<int> numbers;
    for(auto c : s){
        if(isdigit(c)) numbers.push_back(c - '0');
    }

    sort(numbers.begin(), numbers.end());

    for(int i=0; i < numbers.size(); i++){
        cout << numbers[i];
        if( i != numbers.size() - 1 ) cout << "+";
    }

    cout << "\n";
}