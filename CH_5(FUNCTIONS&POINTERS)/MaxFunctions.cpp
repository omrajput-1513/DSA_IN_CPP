#include<iostream>
using namespace std;
int max(int a, int b){
     if(a>b){
         return a;
     }
     else{
         return b;
     }
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"The maximum value is "<<max(a,b)<<endl;
    return 0;
}