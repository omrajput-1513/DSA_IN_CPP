#include<iostream>
using namespace std;
int main(){
     int arr[5];//declaration of array
     for(int i=0;i<5;i++){
          cout<<"Enter element "<<i+1<<": ";
          cin>>arr[i];
     }
     cout<<"Elements of array are: ";
     for(int i=0;i<5;i++){ 
          cout<<arr[i]<<" ";//accessing elements of array
     }
     cout<<endl;
     return 0;

}