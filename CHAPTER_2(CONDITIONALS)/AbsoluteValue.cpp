#include<iostream>
using namespace std;
int main(){
     int num;
     cout<<"Enter a number: ";
     cin>>num;
     if(num<0){//condition
          cout<<"The absolute value of "<<num<<" is "<<-num;
     }
     else{
          cout<<"The absolute value of "<<num<<" is "<<num;
     }
     
}