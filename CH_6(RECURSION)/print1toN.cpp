#include<iostream>
using namespace std;
void printNto1(int n,int N)//function definition
{
    if(n>N) return;//base condition
    cout<<n<<endl;
    printNto1(n+1,N);//recursive call
}
int main()
{
    int N;
    cout<<"Enter a number: ";
    cin>>N;
    printNto1(1,N);//function call
    return 0;
}