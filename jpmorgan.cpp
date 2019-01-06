#include <iostream>
#include <string>
using namespace std;

int main() {
	int total;
	cin >> total;
	int count = 0;
	while(total!=0){
		if(total>=5){
			count++;
			total = total - 5;
		}else if(total >= 3){
			count++;
			total = total -3;
		}else{
			count++;
			total--;
		}
	}
	cout << count << endl;
}

