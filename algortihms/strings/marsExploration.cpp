#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str;
    cin >> str;
    int count=0;
    
    for(int i=0;i<str.length();i+=3)
    {
        char a = str[i];
        char b = str[i+1];
        char c = str[i+2];
        
        if(a!='S')
        {
            count++;
        }
        if(b!='O')
        {
            count++;
        }
        if(c!='S')
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

