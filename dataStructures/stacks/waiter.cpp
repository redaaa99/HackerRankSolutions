#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

const int MAX=10000000;
std::stack<int> reverseStack(std::stack<int> stack)
{
    std::stack<int> res;
    while(!stack.empty())
    {
        res.push(stack.top());
        stack.pop();
    }
    return res;
}

vector<int> prime(int n)
{
    vector<int> v;
    int i,j,count=0;
    v.push_back(2);
    for(i=3;i<=MAX;i+=2)
    {
        int isPrime=1;
        int jMax = sqrt(i);
        for(j=3;j<=jMax;j+=2)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime)
        {
            v.push_back(i);
            if(++count==n)
            {
                v.pop_back();   
                return v;
            }
        }
    }
    return v;
}

void printStack(stack<int> s)
{
    while(!s.empty())
    {
        cout << s.top()<<endl;
        s.pop();
    }
}


int main() {
    stack<int> A;
    stack<int> B;
    int N;
    cin >> N;
    int Q;
    int var;
    cin >> Q;
    for(int i=0;i<N;i++)
    {
        cin >> var;
        A.push(var);
    }
    //A=reverseStack(A);
    vector<int> primes = prime(Q);
    int i=0;
    stack<int> tmp;
    //printStack(A);
    while(i<Q)
    {
        while(!B.empty()){B.pop();}
        while(!tmp.empty()){tmp.pop();}
        while(!A.empty())
        {
            if(A.top()%primes[i]==0)
            {
                B.push(A.top());
            }else{
                tmp.push(A.top());
            }
            A.pop();
            //A=reverseStack(A);
        }
        A=reverseStack(reverseStack(tmp));
        printStack(B);
        i++;
    }
    printStack(tmp);

    return 0;
}

