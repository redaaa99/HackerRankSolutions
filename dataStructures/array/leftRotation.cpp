
#include <iostream>


using namespace std;


int main() {
     /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,d,temp;
    cin>>n>>d;
    int *a =new int[n];
   for(int i=0; i<n;i++)
       cin>>a[(i+n-d)%n];
   
    for(int i=0; i<n;i++)
        cout<<a[i]<<" ";
     
    return 0;
}

