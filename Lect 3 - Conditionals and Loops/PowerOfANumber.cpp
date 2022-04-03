#include<iostream>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int pow = 1,i = 1;
    while(i<=n){
        pow = pow*x;
        i++;
    }
    cout<<pow;
}