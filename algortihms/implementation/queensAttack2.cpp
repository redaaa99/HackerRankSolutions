#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    int rQueen;
    int cQueen;
    cin >> rQueen >> cQueen;
    
    int up=n-rQueen;
    int down=rQueen-1;
    int left= cQueen-1;
    int right= n-cQueen;
    int up_right = n-max(rQueen,cQueen);
    int down_right = min(n-cQueen, rQueen-1);
    int up_left = min(n-rQueen, abs(1-cQueen));
    int down_left = min(rQueen, cQueen) - 1; 

    for(int a0 = 0; a0 < k; a0++){
        int rObstacle;
        int cObstacle;
        cin >> rObstacle >> cObstacle;
        if( (cObstacle == cQueen && rObstacle > rQueen) && rObstacle - rQueen < up){
            up = rObstacle - rQueen-1;
        }
        else if( (cObstacle == cQueen && rObstacle < rQueen) && rQueen - rObstacle < down){
            down = rQueen - rObstacle -1;
        }
        else if( (rObstacle == rQueen && cObstacle < cQueen) && cQueen - cObstacle < left){
            left = cQueen - cObstacle -1;
        }
        else if( (rObstacle == rQueen && cObstacle > cQueen) && cObstacle - cQueen < right){
            right = cObstacle - cQueen -1;
        }
        else if( (rObstacle > rQueen && cObstacle > cQueen) && (rObstacle-rQueen == cObstacle-cQueen) && 
                rObstacle - rQueen <up_right){
            up_right = rObstacle - rQueen -1;
        }
        else if( (rObstacle < rQueen && cObstacle < cQueen) && (rQueen-rObstacle == cQueen-cObstacle) &&
                rQueen - rObstacle < down_left){
            down_left = rQueen - rObstacle -1;
        }
        else if( (rObstacle < rQueen && cObstacle > cQueen) && (rQueen-rObstacle == cObstacle-cQueen) &&
                rQueen-rObstacle < down_right){
            down_right = rQueen-rObstacle -1;
        }
        else if( (rObstacle > rQueen && cObstacle < cQueen) && (rObstacle-rQueen == cQueen-cObstacle) &&
                rObstacle-rQueen < up_left){
            up_left = rObstacle-rQueen -1;
        }
    }
    cout << up+down+left+right+up_left+up_right+down_left+down_right << endl;
    return 0;
}

