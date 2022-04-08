#include<iostream>
using namespace std;
int fact(int n){
    int i = 1,result = 1;
    while(i<=n){
        result = result*i;
        i++;
    }
    return result;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<fact(n)/(fact(r)*fact(n-r));
}