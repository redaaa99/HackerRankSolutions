#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.length();
	int t;
	cin >> t;
	int tab[n];
	int l[t];
	int r[t];
	int k = 0;
	for(int i=1;i<n;i++){
		if(s[i]==s[i-1]) k++;
		tab[i] = k;	
	//	cout << tab[i] << " ";
	}
	//cout << endl;
	for(int i=0;i<t;i++){
		cin >> l[i] >> r[i];
	}
	for(int i=0;i<t;i++){
		//cout << tab[l[i]-1] << " " << tab[r[i]-2] << ": ";
		cout << tab[r[i]-1] - tab[l[i]-1] << endl;
	}	
}
