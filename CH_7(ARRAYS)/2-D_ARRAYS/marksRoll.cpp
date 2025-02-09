#include<iostream>
using namespace std;
int main(){
     int arr[4][2]={{1,95},{3,90},{5,85},{7,80}};
     for(int i=0;i<4;i++){
          cout<<"Roll No: "<<arr[i][0]<<" Marks: "<<arr[i][1]<<endl;
     }
     return 0;
}