#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the boardCutting function below.
int boardCutting(vector<int> cost_y, vector<int> cost_x) {
	long long  verticalMultiplicator=1;
	long long horizontalMultiplicator=1;
	sort(cost_y.begin(),cost_y.end());
	sort(cost_x.begin(),cost_x.end());
	long long  i=cost_y.size()-1;
	long long j=cost_x.size()-1;
	long long cost = 0;	
	while(true){
		if(cost_y[i]>cost_x[j]){
			cost+=cost_y[i]*horizontalMultiplicator;
			verticalMultiplicator++;
			i--;
		}else{
			cost+=cost_x[j]*verticalMultiplicator;
			horizontalMultiplicator++;
			j--;
		}
		cost = cost%1000000007;
		if(i<0 || j<0) break;
	}
	if(i>=0){
		while(i>=0){
			cost+=cost_y[i]*horizontalMultiplicator;
			i--;
			cost = cost%1000000007;
		}
	}else if(j>=0){
		while(j>=0){
			cost+=cost_x[j]*verticalMultiplicator;
			j--;
			cost = cost%1000000007;
		}
	}
	cost = cost%1000000007;
	//cout << cost << endl;
	return cost;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int q;
	cin >> q;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int q_itr = 0; q_itr < q; q_itr++) {
		string mn_temp;
		getline(cin, mn_temp);

		vector<string> mn = split_string(mn_temp);

		int m = stoi(mn[0]);

		int n = stoi(mn[1]);

		string cost_y_temp_temp;
		getline(cin, cost_y_temp_temp);

		vector<string> cost_y_temp = split_string(cost_y_temp_temp);

		vector<int> cost_y(m-1);

		for (int i = 0; i < m-1; i++) {
			int cost_y_item = stoi(cost_y_temp[i]);

			cost_y[i] = cost_y_item;
		}

		string cost_x_temp_temp;
		getline(cin, cost_x_temp_temp);

		vector<string> cost_x_temp = split_string(cost_x_temp_temp);

		vector<int> cost_x(n-1);

		for (int i = 0; i < n-1; i++) {
			int cost_x_item = stoi(cost_x_temp[i]);

			cost_x[i] = cost_x_item;
		}

		int result = boardCutting(cost_y, cost_x);

		fout << result << "\n";
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

