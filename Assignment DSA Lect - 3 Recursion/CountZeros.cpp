#include<iostream>
using namespace std;
int count(int n){
    if(n==0){
        return 1;
    }
    if(n<10){
        return 0;

    }
    return count(n/10)+count(n%10);
}
int main(){
    int a;
    cin>>a;
    cout<<count(a);
}