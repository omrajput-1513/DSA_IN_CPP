#include<iostream>
using namespace std;
void change(int arr[]){
     arr[0]=10;
}
int main(){
     int arr[5]={1,2,3,4,5};
     cout<<"Elements of array before change are: ";
     for(int i=0;i<5;i++){ 
          cout<<arr[i]<<" ";
     }
     cout<<endl;
     change(arr);
     cout<<"Elements of array after change are: ";
     for(int i=0;i<5;i++){ 
          cout<<arr[i]<<" ";
     }
     cout<<endl;
     return 0;

}