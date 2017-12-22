#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool solve(int i)
{
    long long sq=(long long)i*i;
    string num = to_string(sq);
    int len= num.length();
    int m=len/2;
    string l="";
    string r="";
    for(int i=0;i<m;i++)
    {
        l+=num[i];
    }
    for(int i=m;i<len;i++)
    {
        r+=num[i];
    }
    long left,right;
    if(l=="")
    {
        left=0;
    }else
    {
        left=stoi(l);
    }
    if(r=="")
    {
        right=0;
    }else
    {
        right=stoi(r);
    }
    if(left+right==i)
    {
        cout <<  i << " ";
        return true;
    }
    return false;
}

int main() {
    int p,q;
    int count =0;
    cin >> p >> q;
    for(int i=p;i<=q;i++)
    {
        if(solve(i))
        {
            count++;
        }    
    }
    if(count==0)
    {
        cout << "INVALID RANGE" << endl;
    }


    return 0;
}

