#include<iostream>
using namespace std;
int main(){
     int a,b;
     char op;
     cout<<"Enter two numbers: ";
     cin>>a>>b;
     cout<<"Enter operator: ";
     cin>>op;
     if(op=='+'){
          cout<<a<<" + "<<b<<" = "<<a+b;
     }
     else if(op=='-'){
          cout<<a<<" - "<<b<<" = "<<a-b;
     }
     else if(op=='*'){
          cout<<a<<" * "<<b<<" = "<<a*b;
     }
     else if(op=='/'){
          cout<<a<<" / "<<b<<" = "<<a/b;
     }
     else{
          cout<<"Invalid operator";
     }

}