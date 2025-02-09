#include<iostream>
using namespace std;
int main(){
     int arr[]={9,8,7,6,5,6,7,8,9,11};
     int n=sizeof(arr)/sizeof(arr[0]);
     int max=arr[0];
     for(int i=1;i<n;i++){ 
          if(arr[i]>max) max=arr[i];
     }
     int secondMax=arr[0];
     for(int i=1;i<n;i++){ 
          if(arr[i]>secondMax && arr[i]<max) secondMax=arr[i];
     }
     cout<<"Second maximum element of array is: "<<secondMax<<endl;
      return 0;
}