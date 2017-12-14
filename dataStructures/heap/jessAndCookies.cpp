#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

struct greater1{
    bool operator()(const long& a,const long& b) const{
        return a>b;
    }
};

int main() {
    long N,K;
    long tmp;

    cin >> N >> K;
    int v=N;
    vector<long> heap;
    while(N--)
    {
        cin >> tmp;
        heap.push_back(tmp);
    }

    make_heap(heap.begin(),heap.end(),greater1());
    //for(int i=0;i<heap.size();i++){cout << heap[i]<< " ";}
    //cout << endl;
    long sweet=heap.front();
    int count=0;
    long min,nextMin;
    while(heap.front()<K)
    {
        //for(int i=0;i<heap.size();i++){cout << heap[i]<< " ";}
        //cout << endl;
        if(heap.size()<=1){cout << "-1"<<endl;return 0;}
        min = heap.front();
        
        pop_heap(heap.begin(),heap.end(),greater1());
        heap.pop_back();
        nextMin = heap.front();
        // cout << min << " " << nextMin << endl;
        pop_heap(heap.begin(),heap.end(),greater1());
        heap.pop_back();
        sweet=min+2*nextMin;
        heap.push_back(sweet);
        push_heap(heap.begin(),heap.end(),greater1());
        count++;
    }
    cout << count << endl;
    return 0;
}
