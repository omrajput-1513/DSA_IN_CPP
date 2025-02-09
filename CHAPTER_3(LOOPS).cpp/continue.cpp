#include<iostream>
using namespace std;
int main(){
      for(int i=1;i<=11;i++){
           if(i%2==0)continue;
           if(i==9)break;
           if(i==3)continue;
           cout<<i<<" ";
     }
}