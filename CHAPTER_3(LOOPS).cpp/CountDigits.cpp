#include<iostream>
using namespace std;
int main(){
     // int n;
     // cout<<"Enter a number: ";
     // cin>>n;
     // int count=0;
     // do{
     //      n=n/10;
     //      count++;
     // }while(n!=0);
     // cout<<"Number of digits: "<<count;
     // return 0;
     int n;
     cout<<"Enter a number: ";
     cin>>n;
     int count=0;
     while(n!=0){
          n=n/10;
          count++;
     }
     cout<<"Number of digits: "<<count;
     return 0;

}