#include<iostream>
using namespace std;
int num(int n){
   if(n<=0){
       return 0;
   }
    return 1+num(n/10);
}
int main(){
    int a;
    cin>>a;
    cout<<num(a);
}