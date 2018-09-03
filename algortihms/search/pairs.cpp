#include <bits/stdc++.h>

using namespace std;

int pairs(int k, vector <int> arr) {
	sort(arr.begin(),arr.end());
	int matches = 0;
	int i = 0;
	int j = 1;
	while (j < arr.size()+1) {
		int diff = arr[j] - arr[i];
		if (diff == k) {
			matches++;
			j++;
		} else if (diff > k) {
			i++;
			if (i == j) {
				j++;
			}
		} else if (diff < k) {
			j++;
		}
	}

	return matches;
}

int main() {
	int n;
	int k;
	cin >> n >> k;
	vector<int> arr(n);
	for(int arr_i = 0; arr_i < n; arr_i++){
		cin >> arr[arr_i];
	}
	int result = pairs(k, arr);
	cout << result << endl;
	return 0;
}

