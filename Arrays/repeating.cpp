#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int main()
//find the first smallest index which is appear an element twice?
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    const int N = 1e5+2;
    int indx[N];
    for (int i = 0; i < N; i++)
    {
        indx[i] = -1;
    }
   
    int mindx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (indx[arr[i]] != -1)
        {
            mindx = min(mindx, indx[arr[i]]);
        }
        else
        {
            indx[arr[i]] = i;
        }
    }
    if (mindx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << mindx+1<< endl;
    }
    return 0;
}