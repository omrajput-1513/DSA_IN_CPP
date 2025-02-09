#include<iostream>
using namespace std;
int main(){
     int num;
     cout<<"Enter a number: ";
     cin>>num;
     if(num%3==0 || num%5==0 && num%15!=0){//condition
          cout<<num<<" is divisible by 3 or 5 but not by 15";
     }
     else{
          cout<<num<<" is not divisible by 3 or 5 but not by 15";
     }
     
}