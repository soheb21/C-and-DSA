#include <bits/stdc++.h>
using namespace std;
int nextCharfind(vector<char> v, int s, int e, char k)
{
    
    int res=-1;
    if(k=='#') return -1;
    while(s<=e){
        int mid = s + (e - s) / 2;
    if (v[mid] == k)
    {
        s = mid + 1;
    }
    else if (v[mid] < k)
    {
        s = mid + 1;
    }
    else
    {
        res = mid;
        e = mid - 1;
      }
    }
    return res;
}
int main()
{
    vector<char>v{'a','d','e','x'} ;
    char target;
    cout<<"\nInput the target- ";
    cin>>target;
    int index = nextCharfind(v,0,v.size()-1,target);
    if(index==-1){
        cout<<"\nNext Char Not Found!!";
        //return 0;
    }
    cout<<"\nNext Char is : "<< (v[index]);
}