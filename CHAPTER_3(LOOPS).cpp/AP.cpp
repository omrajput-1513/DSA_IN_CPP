#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter a number :";
     cin>>n;
     //1 3 5 7 9...
     // method :-1
     // for(int i=1;i<=2*n-1;i+=2){
     //      cout<<i<<"  ";
     // }


     //method :-2
     int a=1;
     for (int i = 1; i <= n; i++) {
    cout << a << "  ";
    a += 2;
}
}