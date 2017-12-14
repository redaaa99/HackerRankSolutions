#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(vector<long> &v,long i,long j)
{
    long tmp = v[i];
    v[i]=v[j];
    v[j]=tmp;
}


void insert(vector<long> &heap,int size,long value) {
    long index = size-1;
    if(index==1){return;}
    while((heap[index]<heap[index/2]))
    {
        swap(heap,index,index/2);
        if(index/2==1){break;}
        index=index/2;
    }
}    

void del(vector<long> &heap,int n,long index)
{
    int l = 2*index;
    int r = 2*index+1;
    int min = index;
    if(l<n && heap[l]<heap[min])
        min = l;
    if(r<n && heap[r]<heap[min])
        min = r;
    if(min != index){
        swap(heap,index,min);
        del(heap,n,min);
    }
}



int main() {
    vector<long> myHeap;
    myHeap.push_back(0);
    int Q;
    cin >> Q;
    //cout << Q << endl;
    long ch1,ch2;
    while(Q--)
    {
        cin >> ch1;
        //cout << ch1 << endl;
        switch(ch1){
            case 1:
                cin >> ch2;
                //cout << endl << "1 "<<ch2<<" : " ;
                myHeap.push_back(ch2);
                insert(myHeap,myHeap.size(),ch2);
                //for(int i= 0;i<myHeap.size();i++){cout << myHeap[i] << " ";}
                //cout << endl;
                break;
            case 2:
                cin >> ch2;
                long index;
                //cout << "1 "<<ch2<<": ";
                for(long i=1;i<myHeap.size();i++){if(myHeap[i]==ch2){index=i;}}
                swap(myHeap,myHeap.size()-1,index);
                myHeap.pop_back();
                del(myHeap,myHeap.size(),index);
                //for(int i= 0;i<myHeap.size();i++){cout << myHeap[i] << " ";}
                //cout << endl;
                break;
            case 3:
                //cout << "3 :";
                cout << myHeap[1] << endl;
                break;
        }
    }
    return 0;
}

