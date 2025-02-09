#include<iostream>
using namespace std;
int main(){
     string s="Hello";
     //s.push_back('!');
     //s.pop_back();
     //s.insert(2,"hi");
     //s.erase(2,2);
     //s.replace(2,2,"hi");
     //s.append("hi");
     //s.clear();
     //s.resize(10);
     //s.resize(10,'a');
     //s.reserve(100);
     s.shrink_to_fit();
     cout<<s<<endl;
     return 0;
}