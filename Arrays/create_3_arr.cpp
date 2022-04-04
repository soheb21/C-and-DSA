#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={1,2,3};
    int m=8;
    int c[m];
   for (int i = 0; i <5; i++)
   {
        c[i] =a[i];
   }
   for (int j = 0; j < 3; j++)
   {
        c[5+j]= b[j];
   }
   
//    for(int k=0;k<m;k++){
//        c[k];
//    }
   for(int v:c){
       cout<<v<<endl;
   }
   
    return 0;
}