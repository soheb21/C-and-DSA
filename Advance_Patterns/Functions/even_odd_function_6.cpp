#include <iostream>
using namespace std;
int eo(int n)
{
    if(n%2==0){
        return true;
    }
    return false;
}
int main()
{
    
    int n;
    cout << "Enter your input\n";
    cin >> n;
    cout<<eo(n)<<endl;
    return 0;
}