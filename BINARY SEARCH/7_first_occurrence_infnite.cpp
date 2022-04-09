#include <iostream>
using namespace std;
/*
Given an infinite sorted array consisting 0s and 1s.
The problem is to find the index of first ‘1’ in that array.
As the array is infinite, therefore it is guaranteed that number ‘1’ will be present in the array.

Example:

Input : arr[] = {0, 0, 1, 1, 1, 1} 
Output : 2
*/
int first_occurence(int arr[], int l, int h, int k)
{
    l=0;
    h=6;
    int res;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == k)
        {
            res = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return res;
}
int posOfFirstOne(int arr[], int s, int e, int target)
{
    s = 0;
    e = 1;
    while (e == 0)
    {
        s = e;
        e = e * 2;
    }
    return first_occurence(arr, s, e, target);
}

int main()
{
    int arr[] = {0, 0, 1, 1, 1, 1};
    cout << "Index = " << posOfFirstOne(arr, 0, 1, 1);
    return 0;
}