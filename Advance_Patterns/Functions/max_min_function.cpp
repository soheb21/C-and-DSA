#include <iostream>
using namespace std;
void m(int a, int b, int c){
    if(a>b && a>c){
        cout<<a<<endl;
    }else if(b>a&&b>c){
        cout<<b<<endl;
    }else{
        cout<<c<<endl;
    }
    return;
}
int main()
{
    
    int num1,num2,num3;
    cout << "Enter your input\n";
    cin >>num1>>num2>>num3;
        m(num1,num2,num3);
    return 0;
}