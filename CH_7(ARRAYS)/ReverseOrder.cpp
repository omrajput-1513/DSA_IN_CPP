#include<iostream>
using namespace std;
int main(){
     int a[]={9,8,7,6,5,6,7};
     int n=sizeof(a)/sizeof(a[0]);
     for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
     }
     //reverse order
     int start=0;
     int end=n-1;
     while(start<end){
          int temp=a[start];
          a[start]=a[end];
          a[end]=temp;
          start++;
          end--;
     }
     cout<<endl;
     for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
     }

     return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//      int a[]={9,8,7,6,5,6,7};
//      int n=sizeof(a)/sizeof(a[0]);
//      int b[n];
//      for(int i=0;i<n;i++){
//           int j=n-i-1;
//           b[j]=a[i];
//      }
//      for(int i=0;i<n;i++){
//           cout<<b[i]<<" ";
//      }
//      return 0;
// }