#include<iostream>
using namespace std;
int main(){
     int x=11;
     int* ptr=&x;
     cout<<"The value of x is "<<x<<endl;
     cout<<"The address of x is "<<&x<<endl;//address of x
     cout<<"The value of x is "<<*ptr<<endl;//dereferencing
     cout<<"The address of x is "<<ptr<<endl;
     return 0;
}
