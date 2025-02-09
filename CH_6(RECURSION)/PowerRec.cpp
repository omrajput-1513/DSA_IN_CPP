#include<iostream>
using namespace std;
int Poewr(int x, int y)//function definition
{
    if(y==0) return 1;//base condition
    return x*Poewr(x,y-1);//recursive call
}
int main()
{
    int x,y;
    cout<<"Enter base: ";
    cin>>x;
    cout<<"Enter power: ";
    cin>>y;
    cout<<x<<" raised to the power "<<y<<" is: "<<Poewr(x,y)<<endl;//function call
    return 0;
}