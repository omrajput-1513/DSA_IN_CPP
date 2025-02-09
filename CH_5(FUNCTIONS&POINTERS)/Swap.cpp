// #include<iostream>
// using namespace std;
// void swap(int &a, int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int x=10,y=20;
//     cout<<"Before swapping x="<<x<<" and y="<<y<<endl;
//     swap(x,y);
//     cout<<"After swapping x="<<x<<" and y="<<y<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int x=10,y=20;
     cout<<"Before swapping x="<<x<<" and y="<<y<<endl;
     // int temp=x;
     // x=y;
     // y=temp;
     x=x+y;
     y=x-y;
     x=x-y;
     cout<<"After swapping x="<<x<<" and y="<<y<<endl;
     return 0;
}