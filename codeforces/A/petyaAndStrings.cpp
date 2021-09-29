#include <bits/stdc++.h>

using namespace std;
 
void tolower(string& str)
{
    transform(str.begin(), str.end(), str.begin(),
    [](unsigned char c){ return std::tolower(c); });
}

int main()
{
    string first, second;
    cin >> first >> second;
    tolower(first);
    tolower(second);
    
    if( first == second ){
        cout << "0" << endl;
    }
    else if(first > second){
        cout << "1" << endl;
    }
    else{
        cout << "-1" << endl;
    }
}