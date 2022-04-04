
#include <iostream>
using namespace std;
/* find the sum and check if sum is equal to k or not
    if k is equal to sum then print true, otherwise false,also
    print sum of index Postion?
    input: n=8;
            k=31;
            arr[]= {2,4,7,11,14,16,20,21};
    Output : 3 6
             1 
                */
bool pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return false;
}
int main()
{

    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;
    int n = 8;
    cout << pairsum(arr, n, k) << endl;

    return 0;
}