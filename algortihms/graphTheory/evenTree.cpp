#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int numbOfChildren[101];
vector<int> *adj;
bool visited[101];
int dp(int root){
	if(!visited[root]){
		numbOfChildren[root]=1;
		visited[root]=true;
		for(int i=0;i<adj[root].size();i++){ 
			numbOfChildren[root] += dp(adj[root][i]);
		}
		return numbOfChildren[root];
	}
	return 0;
}
int evenForest(int t_nodes, int t_edges, vector<int> t_from, vector<int> t_to) {
	adj = new vector<int>[t_nodes+1];
	for(int i=0;i<t_edges;i++){
		visited[i]=0;
		adj[t_from[i]].push_back(t_to[i]);	
		adj[t_to[i]].push_back(t_from[i]);
	}
	/*cout << "------------ TREE -----------------" << endl;
	for(int i=1;i<t_nodes+1;i++){
		numbOfChildren[i]=1;
		cout << " Node : " << i << " -> ";
		for(int j=0;j<adj[i].size();j++){
			cout << " " << adj[i][j];
		}
		cout << endl;
	}*/
	dp(1);
	/*cout << "------------ Num Of Children -------------" << endl;
	for(int i=1;i<t_nodes+1;i++){
		cout << numbOfChildren[i] << " ";
	}
	cout << endl;

	cout << "---------- RESULT ---------------" << endl;
	*/
	int cuts=0;;
	for(int i=2;i<t_nodes+1;i++) if(numbOfChildren[i]%2==0) cuts++;
	//cout << cuts << endl;
	return cuts;
}

int main()
{
	int t_nodes,t_edges;
	cin >> t_nodes >> t_edges;
	vector<int> t_from(t_edges);
	vector<int> t_to(t_edges);
	for (int i = 0; i < t_edges; i++) {
		cin >> t_from[i];
		cin >> t_to[i];
	}
	cout << evenForest(t_nodes, t_edges, t_from, t_to) << endl;
	return 0;
}
