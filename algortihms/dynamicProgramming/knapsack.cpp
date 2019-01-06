#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


int a[2001];
// Complete the unboundedKnapsack function below.
int unboundedKnapsack(int k,int n) {
	if(k==0 || n==0){
		return 0;
	}
	if(a[n-1]>k){
		return unboundedKnapsack(k,n-1);
	}
	return max(a[n-1]+unboundedKnapsack(k-a[n-1],n),unboundedKnapsack(k,n-1));
}
int main()
{

	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int result = unboundedKnapsack(k,n);
		cout << result << "\n";

	}
	return 0;
}
