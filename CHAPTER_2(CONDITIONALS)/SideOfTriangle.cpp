#include<iostream>
using namespace std;
int main(){
     int a,b,c;
     cout<<"Enter three sides of a triangle: ";
     cin>>a>>b>>c;
     if(a+b>c && b+c>a && c+a>b){//condition
          cout<<"The sides form a triangle";
     }
     else{
          cout<<"The sides do not form a triangle";
     }
}