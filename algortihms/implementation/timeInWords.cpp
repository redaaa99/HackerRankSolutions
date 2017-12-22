#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int h,m;
    cin >> h >> m;
    string hours[] = {"one", "two", "three", "four", "five", "six", "seven", 
        "eight", "nine", "ten", "eleven", "twelve"};

    string minutes[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", 
        "eleven", "twelve", "thirteen", "fourteen", "fifteen", 
        "sixteen", "seventeen", "eighteen", "ninteen", "twenty",
        "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", 
        "twenty six", "twenty seven", "twenty eight", "twenty nine"};
    string hour;
    if (m == 0) {
        hour = hours[h - 1];
        cout << hour << " o' clock";
    }
    else if (m == 1) {
        hour = hours[h - 1];
        cout << "one minute past " <<hour;
    }
    else if (m == 10) {
        hour = hours[h - 1];
        cout << "ten minutes past " << hour;
    }
    else if (m == 15) {
        hour = hours[h - 1];
        cout << "quarter past " << hour;
    }
    else if (m == 30) {
        hour = hours[h - 1];
        cout << "half past " << hour;
    }
    else if (m == 40) {
        hour = hours[h];
        cout << "twenty minutes to " << hour;
    }
    else if (m == 45) {
        hour = hours[h];
        cout << "quarter to " << hour;
    }
    else if (m < 30) {
        hour = hours[h - 1];
        cout << minutes[m-1] << " minutes past "<<hour;
    }
    else if (m > 30) {
        hour = hours[h];
        cout << minutes[60-m-1] << " minutes to " << hour;
    }

    return 0;
}

