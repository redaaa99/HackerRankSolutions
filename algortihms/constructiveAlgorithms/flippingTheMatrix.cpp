#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long max(int a,int b,int c,int d)
{
    return max(max(a,b),max(c,d));
}

int main() {
    int q;
    cin >> q;
    int m;
    int n;
    while(q--)
    {
        cin >> n;
        int matrix[2*n][2*n];
        for(int i=0;i<2*n;i++)
        {
            for(int j=0;j<2*n;j++)
            {
                cin >> matrix[i][j];
            }
        }
        long s=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                s+=max(matrix[i][j],matrix[i][2*n-1-j],matrix[2*n-1-i][j],matrix[2*n-1-i][2*n-1-j]);
            }
        }
        cout << s << endl;
    }
    return 0;
}

