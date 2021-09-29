#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


// Complete the countMatches function below.
int countMatches(vector<string> grid1, vector<string> grid2) {
	int matches = 0;
	int n = grid1.size()+2;
	int m = grid1[0].size()+2;
	// Add 0 to boundaries so we don't have to double check.
	int overlay[n][m]={};
	bool visited[n][m]={};
	for(int i=1;i<n-1;i++){
		for(int j=1;j<m-1;j++){
			overlay[i][j] = ((int)grid1[i-1][j-1]-'0')+((int)grid2[i-1][j-1]-'0');
			//cout << overlay[i][j];
		}
		//cout << endl;
	}
	//Let's use a DFS.
	for(int i=1;i<n-1;i++)
	{
		for(int j=1;j<m-1;j++)
		{
			if(overlay[i][j]==2 && !visited[i][j]){
				stack<pair<int,int>> cells;
				cells.push(make_pair(i,j));
				visited[i][j]=1;

				bool isMatch = true;
				//cout << i << "," << j << endl;
				while(!cells.empty()){
					pair<int,int> c = cells.top();
					cells.pop();
					//cout << c.first << "," << c.second << endl;
					int row[] = {1 , 0 , 0 , -1};
					int col[] = {0 , 1 , -1,  0};
					for(int k=0;k<4;k++)
					{
						if(overlay[c.first+row[k]][c.second+col[k]]==2 && !visited[c.first+row[k]][c.second+col[k]]){
							cells.push(make_pair(c.first+row[k],c.second+col[k]));
						}
						if(overlay[c.first+row[k]][c.second+col[k]]==1){
							isMatch=false;
						}
						visited[c.first+row[k]][c.second+col[k]]=true;
					}
				}
				if(isMatch) matches++;
			}
		}
	}
	cout << matches << endl;	

	return matches;
}


int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string grid1_count_temp;
	getline(cin, grid1_count_temp);

	int grid1_count = stoi(ltrim(rtrim(grid1_count_temp)));

	vector<string> grid1(grid1_count);

	for (int i = 0; i < grid1_count; i++) {
		string grid1_item;
		getline(cin, grid1_item);

		grid1[i] = grid1_item;
	}

	string grid2_count_temp;
	getline(cin, grid2_count_temp);

	int grid2_count = stoi(ltrim(rtrim(grid2_count_temp)));

	vector<string> grid2(grid2_count);

	for (int i = 0; i < grid2_count; i++) {
		string grid2_item;
		getline(cin, grid2_item);

		grid2[i] = grid2_item;
	}

	int res = countMatches(grid1, grid2);

	fout << res << "\n";

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

