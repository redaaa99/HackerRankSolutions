#include <bits/stdc++.h>

using namespace std;

int bills(int balance){
	if(balance == 0){
		return 0;
	}
	if(balance >= 100){
		return 1+bills(balance - 100);
	}
	if(balance >= 20){
		return 1+bills(balance - 20);
	}
	if(balance >= 10){
		return 1+bills(balance - 10);
	}
	if(balance >= 5){
		return 1+bills(balance - 5);
	}else{
		return 1+bills(balance - 1);
	}
}

int main() {
	int balance;
	cin >> balance;
	cout << bills(balance) << endl;
}
