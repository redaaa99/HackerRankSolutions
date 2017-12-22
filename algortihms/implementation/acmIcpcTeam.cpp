#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m; 
    cin >> n >> m;
    string topic[n];
    for(int topic_i = 0; topic_i < n; topic_i++){
        cin >> topic[topic_i];
    }
    int known, max_known = 0, know_all = 0;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            known = 0;
            for(int k = 0; k < m; k++) {
                if(topic[i][k] == '1' || topic[j][k] == '1')
                    known++;
                if(max_known < known) {
                    max_known = known;
                    know_all = 0;
                }
                if(known == max_known)
                    know_all++;
            }
        }
    }
    cout << max_known << endl << know_all<<endl;
    return 0;
}

