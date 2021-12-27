#include <bits/stdc++.h>

using namespace std;


int fillRight(int startingIndex,const vector<int>& heights)
{
    int sum = 0;
    for(int k = 0; startingIndex + k < heights.size() - 1 ; k++)
    {
        if(heights[startingIndex + k] < heights[startingIndex + k + 1])
        {
            break;
        }
        sum++;
    }
    return sum;
}

int fillLeft(int startingIndex,const vector<int>& heights)
{
    int sum = 0;
    for(int k = 0; startingIndex - k > 0 ; k++)
    {
        if(heights[startingIndex - k] < heights[startingIndex - k - 1])
        {
            break;
        }
        sum++;
    }
    return sum;
}

int findNumberOfFilledStarting(int startingIndex,const vector<int>& heights)
{
    long numberOfFilled = 1;
    
    numberOfFilled+=fillRight(startingIndex, heights);
    numberOfFilled+=fillLeft(startingIndex, heights);
    return numberOfFilled;
}   

int main()
{
    int n; cin >> n;
    vector<int> heights(n);
    for(int i=0;i<n;i++) cin >> heights[i];

    int maxNumberOfFilled = 0;
    for(int i=0 ; i < heights.size() ; i++)
    {
        int tmp = findNumberOfFilledStarting(i, heights);
        if(maxNumberOfFilled < tmp)
        {
            maxNumberOfFilled = tmp;
        }
    }
    cout << maxNumberOfFilled << "\n";
}