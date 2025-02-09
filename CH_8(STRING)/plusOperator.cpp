#include<iostream>
using namespace std;
int main(){
     string s="Hello";
     cout<<s+" World"<<"->"<<s.length()<<endl;
     cout<<s<<"->"<<s.length()<<endl;
     s=s+" World";
     cout<<s<<"->"<<s.length()<<endl;
     return 0;

}