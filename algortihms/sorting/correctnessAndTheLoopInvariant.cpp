#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void solve(vector<int> array)
{
    for (int i = 1; i < array.size(); i++) {
        int j = i;
        int value = array[i];
        while (j >= 1 && array[j-1] > value) {
            array[j] = array[j-1];
            j--;
        }
        array[j] = value;
    }
    for(int i=0;i<array.size();i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

}

int main() {
    int N;
    cin >> N;
    vector<int> tab(N);
    for(int i=0;i<N;i++)
    {
        cin >> tab[i];
    }

    solve(tab);

    return 0;

}

