#include<iostream>
using namespace std;
int main(){
     int arr[]={9,8,7,6,5,6,7,8,9};
     int n=sizeof(arr)/sizeof(arr[0]);
     int sum=0;
     for(int i=0;i<n;i++){ 
          sum+=arr[i];
     }
     cout<<"Sum of elements of array is: "<<sum<<endl;
     return 0;
}