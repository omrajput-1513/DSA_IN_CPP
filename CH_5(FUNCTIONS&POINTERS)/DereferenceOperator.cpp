#include<iostream>
using namespace std;
int main(){
     int x=11;
     int* ptr=&x;
     cout<<"The value of x is "<<x<<endl;
     *ptr=15;//dereferencing=15
     cout<<"The value of x is "<<x<<endl;
}