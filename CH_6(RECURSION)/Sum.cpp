#include<iostream>
using namespace std;
int sum(int n)//function definition
{
    if(n==0) return 0;//base condition
    return n+sum(n-1);//recursive call
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum(n)<<endl;//function call
    return 0;
}