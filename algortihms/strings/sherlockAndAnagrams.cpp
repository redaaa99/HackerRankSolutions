
#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
bool anagram(string s1 , string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1==s2 ;
}

long numberofAnagrams(string s){
    long count  = 0;
    for(int i=0 ; i<s.size() ; i++){
        for(int c=1 ; i+c<=s.size() ; c++){
            for(int j=i+1 ; j+c<=s.size() ; j++){
                string s1 = s.substr(i,c);
                string s2 = s.substr(j,c);
                if(anagram(s1,s2)) count++;
            }
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << numberofAnagrams(s) << endl;
    }

}
