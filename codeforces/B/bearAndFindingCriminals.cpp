#include <bits/stdc++.h>

using namespace std;

int numberOfCriminalsInAndDist(int position, int dist, const vector<int>& city)
{
    int total = 0;
    if( (position + dist <= city.size() - 1) && city[position + dist]==1) total++;
    
    if( (position - dist >= 0) && city[position - dist] == 1) total++;
    return total;
}

bool shouldBeCatched(int position,int k,int citySize){
    if((position + k > citySize-1) && (position-k >= 0))
    {
        return true;
    }
    if((position - k < 0) && (position + k <= citySize-1))
    {
        return true;
    }
    return false;  
}

int main()
{
    int n,position;
    cin >> n >> position;
    position--;
    vector<int> city(n);
    for(int i=0;i<n;i++) cin >> city[i];
    int numberOfCriminalsCatched = 0;
    for(int k=1; k < city.size() ; k++)
    {
        int numberOfCriminalsAtDist = numberOfCriminalsInAndDist(position, k, city);
        //cout << "numberOfCriminalsAtDist " << k << " is " << numberOfCriminalsAtDist << "\n";
        if(numberOfCriminalsAtDist == 2)
        {
            numberOfCriminalsCatched += 2;
        }
        if(numberOfCriminalsAtDist == 1 && shouldBeCatched(position, k, city.size()))
        {
            numberOfCriminalsCatched += 1;
        }
    }
    

    cout << numberOfCriminalsCatched + city[position] << "\n";
}