#include <iostream>
#include <string>

using namespace std;

bool containsOdd(long long number)
{
	while (number != 0)
	{
		long long curr_digit = number % 10;
		if (curr_digit%2 == 1) return true;
		number /= 10;
	}
	return false;
}

long long reverseNumberOf(long long n){
	long long reversedNumber=0;
	long long remainder;
	while(n != 0)
	{
		remainder = n%10;
		reversedNumber = reversedNumber*10 + remainder;
		n /= 10;
	}
	return reversedNumber;
}

int main() {
	long long n;
	cin >> n;
	int i;
	//Unoptimized solution
	for(i=0;containsOdd(n);i++){
		n+=reverseNumberOf(n);
	}
	cout << i << " " << n << endl;
}


