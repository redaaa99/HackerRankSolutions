#include <cmath> 
#include <cstdio> 
#include <vector> 
#include <iostream> 
#include <stack> 
#include <algorithm> 
using namespace std; 
int main() 
{ 
	std::stack<int> stack; 
	int choice;
	long choice2; 
	int N; 
	long max=0; 
	cin >> N;	
	while(N--) 
	{ 
		cin >> choice;
		if(choice==1) {
            cin >> choice2;
            if(max<choice2)
            {
                max = choice2;
            }
            stack.push(max);
        } 
		if(choice==2) { 
            stack.pop();
            if(stack.empty())
            {
                max = 0;
            }else{
                max = stack.top();
            }
        } 
		if(choice==3) 
		{ 
          cout << max << endl;
		} 
	} 
	return 0; 
}
