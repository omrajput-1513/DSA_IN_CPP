#include<iostream>
using namespace std;
int main(){
     int cp,sp;
     cout<<"Enter cost price: ";
     cin>>cp;
     cout<<"Enter selling price: ";
     cin>>sp;
     if(cp>sp){//condition
          cout<<"Loss: "<<cp-sp;
     }
     // else if(sp>cp){
     //      cout<<"Profit: "<<sp-cp;
     // }
     // else{
     //      cout<<"No profit no loss";
     // }
     if(sp>cp){
          cout<<"Profit: "<<sp-cp;
     }
     if(sp==cp){
          cout<<"No profit no loss";
     }

}