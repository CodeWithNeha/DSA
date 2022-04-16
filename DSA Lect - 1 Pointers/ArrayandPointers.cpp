#include<iostream>
using namespace std;
int main(){
    int a[100]={1,2,3};
    cout<<a<<" "<<&a[0]<<endl;
    a[0] = 10;
    cout<<*a<<" " <<(a+2)<<endl;
    int *p = &a[0];
    cout<<p<<endl;
    cout<<a<<endl;
    cout<<&p<<endl;
    cout<<&a<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(p)<<endl;
    p = p+1;
    cout<<p[1];
    //a = a+1;
}