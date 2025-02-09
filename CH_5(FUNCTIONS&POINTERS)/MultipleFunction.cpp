#include<iostream>
using namespace std;
void usa(){
     cout<<"you are in USA"<<endl;
}
void india(){
     cout<<"you are in INDIA"<<endl;
     usa();
}
     int main(){
          cout<<"Hello DUNIYA!"<<endl;
          india();
          return 0;
     }
