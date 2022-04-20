#include<iostream>
using namespace std;
int mul(int m,int n){
    if(n==0){
        return 0;
    }
    return m+mul(m,n-1);
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<mul(a,n);
}