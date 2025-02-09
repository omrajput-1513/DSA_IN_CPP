#include<iostream>
using namespace std;
int fact(int n)//function definition
{
    if(n==0|| n==1) return 1;//base condition
    return n*fact(n-1);//recursive call
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<fact(n)<<endl;//function call
    return 0;
}
