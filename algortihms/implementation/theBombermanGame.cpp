#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool nearHasBomb(int i,int j, string str[],int R){
    bool nearHasBomb = false;
    if(i>0){
        if(str[i-1][j] == 'O'){
            nearHasBomb = true;
        }
    }
    if(i<R-1){
        if(str[i+1][j] == 'O'){
            nearHasBomb = true;
        }
    }
    if(j>0){
        if(str[i][j-1] == 'O'){
            nearHasBomb = true;
        }
    }
    if(j<str[i].length()-1){
        if(str[i][j+1] == 'O'){
            nearHasBomb = true;
        }
    }
    return nearHasBomb;
}


int main() {
    int R,C,n;
    cin >> R >> C >> n;
    string str[R];
    for(int i=0;i<R;i++){
        cin >> str[i];
    }

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(str[i][j] == 'O'){
                if(n%2==0 || n%4==1){
                    cout << "O";
                }else{
                    cout <<".";
                }
            }else{
                if(!nearHasBomb(i,j,str,R)){
                    if(n==0 || n==1){
                        cout << ".";
                    }else{
                        if(n%2==0 || n%4 == 3){
                            cout << "O";
                        }else{
                            cout<<".";
                        }
                    }
                }else{
                    bool nearnearClean = false;
                    if(i+1<R){
                        if(str[i+1][j] == '.'){
                            if(!nearHasBomb(i+1,j,str,R)){
                                nearnearClean = true;
                            }
                        }
                    }
                    if(i-1>=0){
                        if(str[i-1][j] == '.'){
                            if(!nearHasBomb(i-1,j,str,R)){
                                nearnearClean = true;
                            }
                        }
                    }
                    if(j+1<C){
                        if(str[i][j+1] == '.'){
                            if(!nearHasBomb(i,j+1,str,R)){
                                nearnearClean = true;
                            }
                        }
                    }
                    if(j-1>=0){
                        if(str[i][j-1] == '.'){
                            if(!nearHasBomb(i,j-1,str,R)){
                                nearnearClean = true;
                            }
                        }
                    }
                    if(!nearnearClean){
                        if(n==0 || n==1){
                            cout<<".";
                        }else{
                            if(n%2==0 || n%4==1){
                                cout<<"O";
                            }else{
                                cout<<".";
                            }
                        }
                    }else{
                        if(n==0 || n%2==1){
                            cout<<".";
                        }else{
                            cout<<"O";
                        }
                    }
                }
            }
        }
        cout<< endl;
    }
    return 0;
}

