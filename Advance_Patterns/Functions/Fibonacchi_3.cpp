#include <iostream>
using namespace std;
// Print fibonacchi Sequnce by using functions?
void fibo(int n){
    int t1=0;
    int t2=1;
    int nextTerm;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}
int main()
{
    
    int n;
    cout << "Enter your input\n";
    cin >> n;
    fibo(n);
    return 0;
}