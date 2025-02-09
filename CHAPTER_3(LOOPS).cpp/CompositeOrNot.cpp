#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter a nummber";
     cin>>n;
     bool flag=true;//true means prime
     for(int i=2;i<=n/2;i++){
          if(n%i==0) {
               flag = false;//false means composite
               break;//To get out of the Loop
               }
     }
     if(n==1)cout<<"neither prime nor composite";
     else if(flag==true)cout<<"prime";
     else cout<<"composite";
}