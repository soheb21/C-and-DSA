#include <iostream>
#include "bits/stdc++.h"
using namespace std;
// find the maximum sum of subarray in an array?
int main()
{
//Brute force approch Time complexity is O(N)^3.
   /* int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxsum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum=0;
            for (int k = i; k <= j; k++)
            {
               sum+=arr[k];
            }
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum<<endl;
    return 0;
} */


 //Best Approch Time complexity is O(N).
 int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mxh = INT_MIN;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum+=arr[i];
        if(curr_sum<0){
            curr_sum=0;
        }
        mxh=max(mxh,curr_sum);
    } 
    cout<<mxh<<endl;
   
    return 0;
}