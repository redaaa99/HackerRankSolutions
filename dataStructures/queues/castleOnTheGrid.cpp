
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

int** game;
int N;
char** map;


void addStep(int x, int y, int value){
    if(game[x][y] > value+1) game[x][y] = value+1;
}



vector<pair<int,int>> findAdj(char** map,int size,pair<int,int> x)
{
    vector<pair<int,int>> result;
    int value = game[x.first][x.second];

    for(int i=x.first; i<size && game[i][x.second]!=-1;i++){
        addStep(i,x.second,value);
        result.push_back(std::make_pair(i,x.second));
    }
    for(int i=x.first; i>=0 && game[i][x.second]!=-1;i--){
        addStep(i,x.second,value);
        result.push_back(std::make_pair(i,x.second));
    }
    for(int i=x.second; i<size && game[x.first][i]!=-1;i++){
        addStep(x.first,i,value);
        result.push_back(std::make_pair(x.first,i));
    }
    for(int i=x.second; i>=0 && game[x.first][i]!=-1;i--){
        addStep(x.first,i,value);
        result.push_back(std::make_pair(x.first,i));
    }

    return result;
}

void bfs(char** map,int size,pair<int,int> s,pair<int,int> g)
{
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(map[i][j] == '.') game[i][j] = 200;
            else game[i][j] = -1;
        }
    }
    
    bool visited[N][N]={0};
    queue<pair<int,int>> Q;
    
    visited[s.first][s.second]=1;

    game[s.first][s.second]=0;

    Q.push(s);
    //if(s.first>size or s.second>size)return;
    //if(map[s.first][s.second]=='X') return;
    while(!Q.empty())
    {
        pair<int,int> x = Q.front();
        Q.pop();
        
        vector<pair<int,int>> adj = findAdj(map,size,x);

        for(int i=0;i<adj.size();i++)
        {
            if(!visited[adj[i].first][adj[i].second])
            {
                visited[adj[i].first][adj[i].second]=true;
                Q.push(std::make_pair(adj[i].first,adj[i].second)); 
            }
        }
        visited[x.first][x.second]=1;
    }
}


int main() {
    cin >> N;
    

    game=new int*[N];
    for(int i=0;i<N;i++){game[i] = new int[N];}
    
    
    map =new char*[N];
    for(int i=0;i<N;i++){map[i] = new char[N];}
    
    for(int l=0;l<N;l++)for(int c=0;c<N;c++)cin >> map[l][c];

    
    int sX,sY,gX,gY;
    cin >> sX >> sY >> gX >> gY;
    pair<int,int> s(sX,sY);
    pair<int,int> g(gX,gY);
    
    bfs(map,N,s,g);
    cout << game[g.first][g.second] << endl;
    return 0;
}

