#include <iostream>
using namespace std;
int bs(int arr[], int start,int end, int k)
{
     start = 0;
     end = 15;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int infinte_k(int arr[],int l,int h,int target){
    l=0;
    h=1;
    int m=(l+h)/2;
    while(arr[m]<target){
         l=h;
         h=h*2;
    }
   return bs(arr,l,h,target);


}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    cout<<infinte_k(arr,0,1,5);
    return 0;
}