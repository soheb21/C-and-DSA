#include<iostream>
#include<climits>
using namespace std;
int kandens(int arr[], int n)
{
    int curr_sum=0;
    int max_sum=INT_MIN;
    for (int i = 0; i <n; i++)
    {
        curr_sum+=arr[i];
        if(curr_sum<0){
            curr_sum=0;
        }
        max_sum=max(max_sum,curr_sum);
    }
    return max_sum;
    
}
int main()
{
    int n;
    cin>>n;
     int arr[n];
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }
    int wrap;
    int nonwrap;
    int total_sum=0;
    nonwrap=kandens(arr,n);
    for (int i = 0; i < n; i++)
    {
        total_sum+=arr[i];
       arr[i]=-arr[i];
    }
    wrap=total_sum + kandens(arr,n);
    cout<<max(wrap,nonwrap)<<endl;
    
    return 0;
}