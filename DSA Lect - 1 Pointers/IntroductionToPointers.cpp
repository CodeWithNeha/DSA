#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int *p = &n;
    // cout<<&n <<" "<<p<<endl;
    // cout<<*p<<endl;
    // cout<<sizeof(p)<<endl;
    // n++;
    // cout<<n<<" "<<*p<<endl;
    // *p +=1;
    // cout<<n<<" "<<*p<<endl;

    // int a = 100, b = 200;
    // int *p = &a, *q = &b;
    // p = q;
    // cout<<p<<" "<<q<<endl;
    // cout<<*p<<" "<<*q<<endl;
    // cout<<a<<" "<<b<<endl;

    //  int a = 50;
    // int *ptr = &a;
    // cout << (*ptr)++ << " ";
    // cout << a << endl;

    // int *ptr = 0;
    // int a = 10;
    // *ptr = a;
    // cout << *ptr << endl;

    // int a = 7;
    // int b = 17;
    // int *c = &b; 
    // a = *c;
    // *c = *c + 1;
    // cout  << a << "  " << b << endl;

    float f = 10.5;
    float p = 2.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p;

}