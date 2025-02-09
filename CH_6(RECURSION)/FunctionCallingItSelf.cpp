#include<iostream>
using namespace std;
void greet()//function definition
{
    cout<<"Hello World"<<endl;
    greet();//recursive call
}
int main()
{
    greet();//function call
    return 0;
}
