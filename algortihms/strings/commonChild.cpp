#include <bits/stdc++.h>

using namespace std;
//https://en.wikipedia.org/wiki/Longest_common_subsequence_problem
// Complete the commonChild function below.
int C[5001][5001];

int commonChild(string s1, string s2) {
	int l1 = s1.length();
	int l2 = s2.length();
	for(int i=0;i<l1+1;i++){C[i][0]=0;}
	for(int i=0;i<l2+1;i++){C[0][i]=0;}
	for(int i=1;i<l1+1;i++){
		for(int j=1;j<l2+1;j++){
			if(s1[i-1]==s2[j-1]){
				C[i][j]= C[i-1][j-1]+1;
			}else{
				C[i][j]= max(C[i-1][j],C[i][j-1]);
			}
		}
	}
	return C[l1][l2];
}

int main()
{
	string s1;
	string s2;
	cin >> s1 >> s2;
	int result = commonChild(s1, s2);
	cout << result << "\n";
	return 0;
}

