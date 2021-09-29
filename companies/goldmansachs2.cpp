#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



// Complete the allocateSchools function below.
vector<int> allocateSchools(vector<int> schoolSeatsArray, vector<int> studentScoreArray, vector<vector<int>> studentSchoolPreferencesArray) {
	vector<int> result = {0,0};
	vector<pair<int,int>> scores;
	for(int i=0;i<studentScoreArray.size();i++)
	{
		scores.push_back(make_pair(studentScoreArray[i],i));
	}
	sort(scores.rbegin(),scores.rend());


	// LOOP CAN BE OPTIMIZED !!!
	// Refactoring possible
	for(int i=0;i<scores.size();i++)
	{
		// Take highest score student
		int student = scores[i].second;
		// Take his first choice school
		int prefSchool = studentSchoolPreferencesArray[student][0];
		if(schoolSeatsArray[prefSchool]>0){
			schoolSeatsArray[prefSchool]--;
		}else
		{
			// Take second choice
			prefSchool = studentSchoolPreferencesArray[student][1];
			if(schoolSeatsArray[prefSchool] > 0)
			{
				schoolSeatsArray[prefSchool]--;
			}else
			{
				prefSchool = studentSchoolPreferencesArray[student][2];
				if(schoolSeatsArray[prefSchool] > 0)
				{
					schoolSeatsArray[prefSchool]--;
				}else
				{
					// No luck he didn't get any school
					result[1]++;
				}
			}
		}
	}


	// Fill result with empty seats in schools
	for(int i=0;i<schoolSeatsArray.size();i++)
	{
		result[0]+= schoolSeatsArray[i];
	}
	return result;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string schoolSeatsArray_count_temp;
	getline(cin, schoolSeatsArray_count_temp);

	int schoolSeatsArray_count = stoi(ltrim(rtrim(schoolSeatsArray_count_temp)));

	vector<int> schoolSeatsArray(schoolSeatsArray_count);

	for (int i = 0; i < schoolSeatsArray_count; i++) {
		string schoolSeatsArray_item_temp;
		getline(cin, schoolSeatsArray_item_temp);

		int schoolSeatsArray_item = stoi(ltrim(rtrim(schoolSeatsArray_item_temp)));

		schoolSeatsArray[i] = schoolSeatsArray_item;
	}

	string studentScoreArray_count_temp;
	getline(cin, studentScoreArray_count_temp);

	int studentScoreArray_count = stoi(ltrim(rtrim(studentScoreArray_count_temp)));

	vector<int> studentScoreArray(studentScoreArray_count);

	for (int i = 0; i < studentScoreArray_count; i++) {
		string studentScoreArray_item_temp;
		getline(cin, studentScoreArray_item_temp);

		int studentScoreArray_item = stoi(ltrim(rtrim(studentScoreArray_item_temp)));

		studentScoreArray[i] = studentScoreArray_item;
	}

	string studentSchoolPreferencesArray_rows_temp;
	getline(cin, studentSchoolPreferencesArray_rows_temp);

	int studentSchoolPreferencesArray_rows = stoi(ltrim(rtrim(studentSchoolPreferencesArray_rows_temp)));

	string studentSchoolPreferencesArray_columns_temp;
	getline(cin, studentSchoolPreferencesArray_columns_temp);

	int studentSchoolPreferencesArray_columns = stoi(ltrim(rtrim(studentSchoolPreferencesArray_columns_temp)));

	vector<vector<int>> studentSchoolPreferencesArray(studentSchoolPreferencesArray_rows);

	for (int i = 0; i < studentSchoolPreferencesArray_rows; i++) {
		studentSchoolPreferencesArray[i].resize(studentSchoolPreferencesArray_columns);

		string studentSchoolPreferencesArray_row_temp_temp;
		getline(cin, studentSchoolPreferencesArray_row_temp_temp);

		vector<string> studentSchoolPreferencesArray_row_temp = split(rtrim(studentSchoolPreferencesArray_row_temp_temp));

		for (int j = 0; j < studentSchoolPreferencesArray_columns; j++) {
			int studentSchoolPreferencesArray_row_item = stoi(studentSchoolPreferencesArray_row_temp[j]);

			studentSchoolPreferencesArray[i][j] = studentSchoolPreferencesArray_row_item;
		}
	}

	vector<int> res = allocateSchools(schoolSeatsArray, studentScoreArray, studentSchoolPreferencesArray);

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

vector<string> split(const string &str) {
	vector<string> tokens;

	string::size_type start = 0;
	string::size_type end = 0;

	while ((end = str.find(" ", start)) != string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}

