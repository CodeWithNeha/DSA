#include<iostream>
using namespace std;
int main(){
    int i = 10;
    int *p = &i;
    cout<<p<<" "<<endl;
    p = p+1;
    cout<<p<<" "<<endl;

    // int a = 7;
    // int *c = &a;
    // c = c + 1;
    // cout  << a << "  " << *c << endl;

    // int a = 7;
    // int *c = &a;
    // c = c + 3;
    // cout  << c << endl;

    double a = 10.54;
    double *d = &a;
    cout<<d<<endl;
    d = d + 1;
    cout  << d << endl;
}