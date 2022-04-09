#include<bits/stdc++.h>
using namespace std;
/*
FIND FLOOR OF AN ELEMENT IN A SORTED ARRAY:

Given a sorted array and a value x, the floor of x is the largest element 
in array smaller than or equal to x.
 Write efficient functions to find floor of x.

Example:

Input : arr[] = {1, 2, 8, 10, 10, 12, 19}, x = 5
Output : 2
2 is the largest element in arr[] smaller than 5.
*/
int main()
{
    int n,ele;
    cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    //cout<<"enter the element whose lower bound you want to find ";
    cin>>ele;
    int start =0,end=n-1,res;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==ele)
        {
            res=mid;break;
        }
        else if(a[mid]<ele)
        {
            res=a[mid];  // we can store the ans,
            start=mid+1;
        }
        else if(a[mid]>ele)
        {
            end=mid-1;
        }
    }
    cout<<res;
}