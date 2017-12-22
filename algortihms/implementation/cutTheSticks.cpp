#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

    template<typename T>
void pop_front(std::vector<T>& vec)
{
    vec.front() = std::move(vec.back());
    vec.pop_back();
}

int main() {
    int n;
    cin >> n;
    vector<int> st(n);
    for(int i=0;i<n;i++)
    {
        cin >> st[i];
    }
    sort(st.begin(),st.end());
    reverse(st.begin(), st.end());

    while(!st.empty()){

        cout<<st.size()<<endl;
        for(int i = 0; i<st.size();++i)
            st[i]-=st[st.size()-1];
        while(st.back() ==0 && !st.empty())
            st.pop_back();

    } 
    return 0;
}

