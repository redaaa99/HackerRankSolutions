#include <bits/stdc++.h>

using namespace std;

bool grid[16][16];
int n,m;


class Plus{
	public:
		int size;
		int i;
		int j;
		
		Plus(int i,int j,int k){
			this->i=i;
			this->j=j;
			this->size = k;
		}
};

bool overlaps(Plus p1,Plus p2){
	set<pair<int,int>> s1;
	for(int k=0;k<=p1.size;k++){
		s1.insert(make_pair(p1.i+k,p1.j));
		s1.insert(make_pair(p1.i-k,p1.j));
		s1.insert(make_pair(p1.i,p1.j+k));
		s1.insert(make_pair(p1.i,p1.j-k));
	}
	for(int k=0;k<=p2.size;k++){
		if(s1.find(make_pair(p2.i+k,p2.j))!=s1.end() || s1.find(make_pair(p2.i-k,p2.j))!=s1.end() || s1.find(make_pair(p2.i,p2.j+k))!=s1.end() || s1.find(make_pair(p2.i,p2.j-k))!=s1.end()){
			return true;
		}
	}
	return false;
}

int stretch(int c,int r){
	if(!grid[c][r]) return 0;
	int i=0;
	while(true){
		if( (c+i<n && c-i>=0 && r+i<m && r-i>=0) && (grid[c+i][r] && grid[c-i][r] && grid[c][r-i] && grid[c][r+i])){
			i++;
		}else{
			break;
		}
	}
	return i-1;
}

int main()
{
	cin >> n >> m;
	char temp;
	//cout << "---------- GRID --------------" << endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> temp;
			grid[i][j] = (temp=='G') ? true : false;	
			//cout << grid[i][j] << " ";
		}
		//cout<< endl;
	}
	//cout << endl;
	vector<Plus> pluses;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			//cout << stretch(i,j) << " ";
			if(grid[i][j]){
				int help = stretch(i,j);
				for(int k=0;k<=help;k++){
					Plus temp(i,j,k);
					pluses.push_back(temp);
				}
			}
		}
		//cout << endl;
	}
	//cout << firstmaxArea << " " << secondmaxArea << endl;
	/*cout << endl << pluses.size() << endl;
	for(int k=0;k<pluses.size();k++){
		cout << pluses[k].i << "," << pluses[k].j << " size: " << pluses[k].size << endl;
	}*/
	int maxi = 0;
	for(int i = 0; i < pluses.size()-1; i++) {
		for(int j = i+1; j < pluses.size(); j++) {
			if(!overlaps(pluses[i],pluses[j])){
				int area = 16*pluses[i].size*pluses[j].size + 4*pluses[i].size + 4*pluses[j].size+1;
				//cout << pluses[i].size << "," << pluses[i].size << endl;
				if(area>maxi){
					maxi= area;
				}
			}
		}
	}
	cout << maxi << endl;
	//cout << firstmaxArea*secondmaxArea << endl;
	return 0;
}

