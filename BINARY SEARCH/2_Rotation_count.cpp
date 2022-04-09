#include <iostream>
using namespace std;
int rotation_count(int n,int arr[])
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        int prev = (m + n - 1) % n;
        int next = (m + 1) % n;
        if (arr[m] < arr[prev] && arr[m] < arr[next])
        {
            return m;
        }
        else if(arr[s]>arr[m]){
            e=m-1;
        }
        else if(arr[m]>arr[e]){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return 0;
}
int main()
{/*
Find the Rotation Count in Rotated Sorted array
Consider an array of distinct numbers sorted in increasing order.
 The array has been rotated (clockwise) k number of times.
 Given such an array, find the value of k.
Examples:
Input : arr[] = {15, 18, 2, 3, 6, 12}
Output: 2
Explanation : Initial array must be {2, 3,
6, 12, 15, 18}. We get the given array after 
rotating the initial array twice. */
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << rotation_count(n,arr) << endl;
    return 0;
}