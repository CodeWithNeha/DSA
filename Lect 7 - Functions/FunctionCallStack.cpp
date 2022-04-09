#include<iostream>
using namespace std;
void B(){
    cout<<5<<endl;
}
void A(int n){
    cout<<3<<endl;
    B();
    cout<<4<<endl;
}
int main(){
    int n = 10;
    cout<<1<<endl;
    A(n);
    cout<<2<<endl;
}