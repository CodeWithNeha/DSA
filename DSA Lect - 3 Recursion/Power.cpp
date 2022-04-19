#include<iostream>
using namespace std;
int power(int n,int x){
    if(x==1){
        return n;
    }
    if(x==0){
        return 1;
    }
    return n*power(n,x-1);
}
int main(){
    int a,x;
    cin>>a>>x;
    cout<<power(a,x);
}