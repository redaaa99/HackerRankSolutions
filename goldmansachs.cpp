#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the charityAllocation function below.
vector<string> charityAllocation(vector<float> profits) {
	vector<string> result={"A"};
	int totalA = profits[0];
	int totalB = 0;
	int totalC = 0;
	for(int i=1;i<profits.size();i++)
	{
		// Code can be largely optimized
		//cout << "A: " <<  totalA << " B: " << totalB << " C: " << totalC << endl;
		if((totalA < totalB) && (totalA<totalC)){
			totalA+= profits[i];
			result.push_back("A");
		}else if((totalB < totalA) && (totalB < totalC)){
			totalB+= profits[i];
			result.push_back("B");
		}else if((totalC < totalB) && (totalC < totalA)){	
			totalC+= profits[i];
			result.push_back("C");
		}else if((totalB == totalC) && (totalB < totalA)){
			totalB+= profits[i];
			result.push_back("B");
		}else if((totalC == totalA) && (totalC < totalB)){
			totalA+= profits[i];
			result.push_back("A");
		}else{
			// ALL EQUAL
			totalA+= profits[i];
			result.push_back("A");
		}
	}
	return result;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string profits_count_temp;
	getline(cin, profits_count_temp);

	int profits_count = stoi(ltrim(rtrim(profits_count_temp)));

	vector<float> profits(profits_count);

	for (int i = 0; i < profits_count; i++) {
		string profits_item_temp;
		getline(cin, profits_item_temp);

		float profits_item = stof(ltrim(rtrim(profits_item_temp)));

		profits[i] = profits_item;
	}

	vector<string> res = charityAllocation(profits);

	for (int i = 0; i < res.size(); i++) {
		fout << res[i];

		if (i != res.size() - 1) {
			fout << "\n";
		}
	}

	fout << "\n";

	fout.close();

	return 0;
}

string ltrim(const string &str) {
	string s(str);

	s.erase(
			s.begin(),
			find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	       );

	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
			find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
			s.end()
	       );

	return s;
}

