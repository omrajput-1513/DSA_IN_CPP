#include<iostream>
using namespace std;
int main(){
     string s;
     cout<<"Enter a string: ";
     getline(cin,s);
     int count=0;
     for(int i=0;s[i]!='\0';i++){
          count++;
     }
     cout<<"Length of the string is: "<<count<<endl;
     return 0;
}