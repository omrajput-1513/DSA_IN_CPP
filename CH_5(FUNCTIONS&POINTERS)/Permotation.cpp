#include<iostream>
using namespace std;
int perm(int n, int r){
    int perm=1;
    for(int i=1;i<=r;i++){
        perm*=n;
        n--;
    }
    return perm;
}
int main(){
    int n,r;
    cout<<"Enter the value of n and r: ";
    cin>>n>>r;
    cout<<"The value of "<<n<<"P"<<r<<" is "<<perm(n,r)<<endl;
    return 0;
}