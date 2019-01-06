#include <bits/stdc++.h>


using namespace std;

vector<string> split_string(string);

// Complete the maxSubarray function below.
vector<int> maxSubarray(vector<int> arr) {
	vector<int> result{0,0};
	
	//for maxsubarray
	int firstIndex = 0;
	int lastIndex=arr.size()-1;
	bool done1 = false;
	bool done2 = false;
	while(firstIndex!=lastIndex && !done1 && !done2 && lastIndex!=0 && firstIndex !=arr.size()){
		done1 = true;
		done2 = true;
		if(arr[firstIndex]+arr[firstIndex+1]<0){
			firstIndex++;
			done1 = false;
		}
		if(arr[lastIndex]+arr[lastIndex-1]< 0){
			lastIndex--;
			done2 = false;
		}
	}
	for(int i=firstIndex;i<=lastIndex;i++){
		result[0] += arr[i];
	}
	if(firstIndex==lastIndex && result[0]<=0){
		int maxi = -100000;
		int index = -1;
		for(int i=0;i<arr.size();i++){
			if(arr[i]>maxi){
				maxi = arr[i];
			}
		}
		result[0] = maxi;
	}	
	// for max subsequence
	int sum = 0;
	vector<int> indexes;
	for(int i=0;i<arr.size();i++){
		if(arr[i]>0){
			indexes.push_back(i);
		}
	}

	if(indexes.empty()){
		int maxi = -100000;
		int index = -1;
		for(int i=0;i<arr.size();i++){
			if(arr[i]>maxi){
				maxi = arr[i];
				index = i;
			}
		}
		indexes.push_back(index);
	}
	for(int i=0;i<indexes.size();i++){
		result[1] += arr[indexes[i]];
	}
	cout<< result[0] << " "<< result[1] << endl;
	return result;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int t;
	cin >> t;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int t_itr = 0; t_itr < t; t_itr++) {
		int n;
		cin >> n;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		string arr_temp_temp;
		getline(cin, arr_temp_temp);

		vector<string> arr_temp = split_string(arr_temp_temp);

		vector<int> arr(n);

		for (int i = 0; i < n; i++) {
			int arr_item = stoi(arr_temp[i]);

			arr[i] = arr_item;
		}

		vector<int> result = maxSubarray(arr);

		for (int i = 0; i < result.size(); i++) {
			fout << result[i];

			if (i != result.size() - 1) {
				fout << " ";
			}
		}

		fout << "\n";
	}

	fout.close();

	return 0;
}

vector<string> split_string(string input_string) {
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
			return x == y and x == ' ';
			});

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}

