#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

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


int maximum( int a, int b, int c )
{
       int max = ( a < b ) ? b : a;
          return ( ( max < c ) ? c : max );
}

int main() {
        int n1,n2,n3;
        cin >> n1 >> n2 >> n3;
        int tmp;
        long sum1,sum2,sum3;
        sum1=sum2=sum3=0;
        stack<int> s1,s2,s3;
        while(n1--){cin >> tmp;sum1+=tmp;s1.push(tmp);}
        while(n2--){cin >> tmp;sum2+=tmp;s2.push(tmp);}
        while(n3--){cin >> tmp;sum3+=tmp;s3.push(tmp);}
        s1=reverseStack(s1);
        s2=reverseStack(s2);
        s3=reverseStack(s3);
        if(sum1==sum2==sum3)
        {
           cout << sum1 << endl;
           return 0;
        }
        long max=0;
        while(sum1!=sum2 || sum2!=sum3)
        {
            max = maximum(sum1,sum2,sum3);
            if(max == sum1){sum1-=s1.top();s1.pop();}
            else if(max == sum2){sum2-=s2.top();s2.pop();}
            else if(max == sum3){sum3-=s3.top();s3.pop();}
            if(sum1==0 || sum2==0 || sum3==0){cout << 0 << endl; return 0;}
        }
        
        cout << sum1 << endl;


        return 0;
}

