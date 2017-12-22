#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool isPalindrome(string s, int index){
    for(int i =index+1,j =s.length()-1-index; i<j; i++, j--)
        if(s[i]!=s[j])
            return false;
    return true;
}


int solve(string s)
{
    for(int i =0,j =s.length()-1; i<j; i++, j--)
        if(s[i]!=s[j])
            if(isPalindrome(s, i))
                return i;
            else if(isPalindrome(s, j))
                return j;
    return -1;
}




int main() {
    int n;
    cin >> n;
    string s;
    while(n--)
    {
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}

