#include <bits/stdc++.h>

using namespace std;


int main() {
	int n;
	int sum=0;
	int index1=-1,index2=-1;
	int sum1=-0x7f7f7f7f,sum2=-0x7f7f7f7f;
	cin>>n;
	const int N=1e5;
	int a[N];
	int temp1=-1e5;
	int temp2=1e5;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>0)
		{
			sum+=a[i];
			if(a[i]%2)
			{
				temp2=min(temp2,a[i]);
			}
		}
		else if(a[i]<0)
		{
			if(a[i]%2)
				temp1=max(temp1,a[i]);
		}
	}
	if(sum%2)cout<<sum<<endl;
	else
	{
		sum1=sum-temp2;
		sum2=sum+temp1;
		cout<<max(sum1,sum2)<<endl;
	}
	return 0;
}
