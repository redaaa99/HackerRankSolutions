#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int solve(string word)
{
	int sum = 0;
	int len = 0;
	for(int i=0;i<word.length()-1;i++)
	{
		len = 1;
		while(word[i]==word[i+1])
		{
			len++;
			i++;
		}
		sum += (len/2);
	}
	cout << sum <<  endl;
	return sum;
}

// Complete the minimalOperations function below.
vector<int> minimalOperations(vector<string> words) {
	vector<int> result;
	for(int i=0;i<words.size();i++)
	{
		result.push_back(solve(words[i]));
	}
	return result;
}



int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string words_count_temp;
	getline(cin, words_count_temp);

	int words_count = stoi(ltrim(rtrim(words_count_temp)));

	vector<string> words(words_count);

	for (int i = 0; i < words_count; i++) {
		string words_item;
		getline(cin, words_item);

		words[i] = words_item;
	}

	vector<int> res = minimalOperations(words);

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

