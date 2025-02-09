#include<iostream>
using namespace std;
void printNto1(int n)//function definition
{
    if(n==0) return;//base condition
    //cout<<n<<endl;//work
    printNto1(n-1);//recursive call
    cout<<n<<endl;//work
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNto1(n);//function call
    return 0;
}