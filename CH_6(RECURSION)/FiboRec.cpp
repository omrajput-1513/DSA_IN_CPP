#include<iostream>
using namespace std;
int fibo(int n)//function definition
{
    if(n==0) return 0;//base condition
    if(n==1) return 1;//base condition
    return fibo(n-1)+fibo(n-2);//recursive call
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Fibonacci number at position "<<n<<" is: "<<fibo(n)<<endl;//function call
    return 0;
}
// Output: EULER`S TOUR TREE