#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter a number: ";
     cin>>n;
     int sum=0;
     for(int i=1;i<=n;i++){
          sum=sum+i;
     }
     cout<<"Sum of 1 to "<<n<<" is: "<<sum;
     return 0;
}