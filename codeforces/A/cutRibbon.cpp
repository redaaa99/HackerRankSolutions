#include <bits/stdc++.h>

using namespace std;
int dp[4500];

int maxRibbonCount(int n, int a, int b,int c){
	if(n==0){
		return 0;
	}else if(n<0){
		return 0xACCE97ED;
	}else{
		if(!dp[n]) dp[n]= 1+max(max(maxRibbonCount(n-a,a,b,c),maxRibbonCount(n-b,a,b,c)),maxRibbonCount(n-c,a,b,c));
		return dp[n];
	}
}

int main() {
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	cout << maxRibbonCount(n,a,b,c) << endl;
}

