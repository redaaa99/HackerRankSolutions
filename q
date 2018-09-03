#include <iostream>
#include <string>
#include <math.h>
#include <bitset>
using namespace std;

int main()
{
	string s;
	cin >> s;
	string bin = "";
	for (std::size_t i = 0; i < s.size(); ++i){
		bin.append(bitset<3>(s.c_str()[i]).to_string());
	}
	string fin = "";
	cout << bin << endl;
	for(int i=0;i<bin.length();i+=4)
	{
		fin += bin[i]+bin[i+1]+bin[i+2]+bin[i+3];
		cout << fin;
	}
	return 0;
}




