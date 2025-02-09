#include<iostream>
using namespace std;
int main(){
     int i;//global scope
     for(i=1;i<=5;i++){//block scope
          cout<<i<<endl;
     }
     cout<<i<<endl;
     return 0;
}