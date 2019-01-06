#include <bits/stdc++.h>

using namespace std;



// Complete the electionWinner function below.
string electionWinner(vector<string> votes) {
	map<std::string, int> stats;
	for(int i=0;i<votes.size();i++){
		if ( stats.find(votes[i]) == stats.end() ) {
			  stats.insert(make_pair(votes[i],1));
		} else {
			  stats[votes[i]]++;
		}
	}
	int maxval = 0;
	string result;
	std::map<std::string, int>::iterator it = stats.begin();
	for (it = stats.begin(); it != stats.end(); ++it ){
		if(it->second >= maxval)
		{
			maxval = it->second;
			result = it->first;
		}
	}
	return result;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int votes_count;
	cin >> votes_count;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<string> votes(votes_count);

	for (int i = 0; i < votes_count; i++) {
		string votes_item;
		getline(cin, votes_item);

		votes[i] = votes_item;
	}

	string res = electionWinner(votes);

	fout << res << "\n";

	fout.close();

	return 0;
}
