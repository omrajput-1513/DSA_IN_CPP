#include<iostream>
using namespace std;
int main(){
     int a,b;
     char op;
     cout<<"Enter two numbers: ";
     cin>>a>>b;
     cout<<"Enter operator: ";
     cin>>op;
     switch(op){
          case '+':
               cout<<a<<" + "<<b<<" = "<<a+b;
               break;
          case '-':
               cout<<a<<" - "<<b<<" = "<<a-b;
               break;
          case '*':
               cout<<a<<" * "<<b<<" = "<<a*b;
               break;
          case '/':
               cout<<a<<" / "<<b<<" = "<<a/b;
               break;
          default:
               cout<<"Invalid operator";
     }
     
}