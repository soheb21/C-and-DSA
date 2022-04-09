#include <iostream>
#include "bits/stdc++.h"
using namespace std;
#include <math.h>
// its working fine in leetcode 
int search_bs(vector<int> &a,int k)
{
    int n = a.size();
    int l = 0;
    int h = n - 1;
    while (l <= h)
    {
        int m = l + ((h - l) / 2);
        if (a[m] == k)
        {
            return m;
        }
        if (a[m] >= a[l])
        {
            if (a[m] >= k && a[l] <= k)
            {
                h = m - 1;
            }
            else
                l = m + 1;
        }
        else
        {
            if (k >= a[m] && k <= a[h])
                l = m + 1;
            else
            {
                h = m - 1;
                ;
            }
        }
    }
    return -1;
}

int main()
{
    //code
    int k;
    cin >> k;
     vector<int>a;
    for (int i = 0; i <a.size(); i++)
    {
        cin >> a[i];
    }
    cout << search_bs(a,k) << endl;
    return 0;
}