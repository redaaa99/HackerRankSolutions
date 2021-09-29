#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'findSchedules' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER workHours
 *  2. INTEGER dayHours
 *  3. STRING pattern
 */
vector<vector<int>> results;

vector<string> print_AllPerms(vector<int> arr,vector<int> pattern){
	vector<string> perms;
	do {
		int j = 0;
		string add="";
		for(int i=0;i<7;i++)
		{
			if(pattern[i]==-1)
			{
				add+=to_string(arr[j]);
				j++;
			}else{
				add+=to_string(pattern[i]);
			}
		}
		cout << add << endl;
		perms.push_back(add);
	} while (next_permutation(arr.begin(),arr.end()));
	return perms;
}

void findCombinationsUtil(int arr[], int index,int num, int reducedNum,int numElts,int dayHours) 
{ 
	if (reducedNum < 0) 
		return; 
	if (index == numElts) 
	{ 
		int sum = 0;
		for (int i = 0; i < index; i++)
			sum+=arr[i];	

		if(sum==num){
			vector<int> arrr(index);
			for (int i = 0; i < index; i++)
				arrr[i]=arr[i];
			results.push_back(arrr);
		}
		return; 
	}
	int prev = (index == 0)? 0 : arr[index-1]; 	
	for (int k = prev; k <= dayHours;k++) 
	{ 
		if(k<=dayHours){	
			arr[index] = k; 
			findCombinationsUtil(arr, index + 1, num,reducedNum - k,numElts,dayHours); 
		}else
		{
			return;
		}
	} 
} 
void findCombinations(int n,int numElts,int dayHours) 
{ 
	int arr[n]; 

	findCombinationsUtil(arr, 0, n, n,numElts,dayHours); 
}
vector<string> findSchedules(int workHours, int dayHours, string pattern) {
	int numberOfQuestionMarks = 0;
	int numberOfAlreadyWorkedHours = 0;
	vector<int> numPattern(7);
	for(int i=0;i<pattern.length();i++){
		if(pattern[i]=='?'){ 
			numberOfQuestionMarks++;
			numPattern[i]=-1;
		}else{
			numberOfAlreadyWorkedHours += ((int)pattern[i] - '0');
			numPattern[i]=((int)pattern[i] - '0');
		}
	}
	int hoursLeftToWork = workHours - numberOfAlreadyWorkedHours;

	findCombinations(hoursLeftToWork,numberOfQuestionMarks,dayHours);


	vector<string> result;
	for(int i=0;i<results.size();i++)
	{
		vector<string> test = print_AllPerms(results[i],numPattern);
		result.insert(result.begin(),test.begin(),test.end());
	}
	return result;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string workHours_temp;
	getline(cin, workHours_temp);

	int workHours = stoi(ltrim(rtrim(workHours_temp)));

	string dayHours_temp;
	getline(cin, dayHours_temp);

	int dayHours = stoi(ltrim(rtrim(dayHours_temp)));

	string pattern;
	getline(cin, pattern);

	vector<string> result = findSchedules(workHours, dayHours, pattern);

	for (int i = 0; i < result.size(); i++) {
		fout << result[i];

		if (i != result.size() - 1) {
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

