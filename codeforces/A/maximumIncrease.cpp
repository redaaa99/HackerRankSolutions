#include <bits/stdc++.h>

using namespace std;


int main() {
	int n;
	cin >> n;
	int tab[n];
	int result = 1;
	int len = 1;
	bool stillInceasing = false;
	for(int i=0;i<n;i++){
		cin >> tab[i];
	//	cout << tab[i] << " ";
	}
	int arr[n];
	for(int i=0;i<n-1;i++){
		if(tab[i]<tab[i+1]){
			arr[i]=1;
		}else{
			arr[i]=0;
		}
	}
	arr[n-1]=0;
	for(int i=0;i<n;i++){
//		cout << arr[i] << " ";
		if(arr[i]==1){
			len++;
		}else{
			result = max(len,result);
			len = 1;
		}
	}
//	cout<< endl;
	cout << result << endl;
	return 0;
}
