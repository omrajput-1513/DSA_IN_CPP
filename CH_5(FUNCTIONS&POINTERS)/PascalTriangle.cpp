#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int ncr(int n, int r){
    int ncr=1;
    for(int i=1;i<=r;i++){
        ncr*=(n-i+1);
        ncr/=i;
    }
    return ncr;
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

