#include<iostream>
using namespace std;
int main()
{
    // int i = 10;
    // int *p = &i;
    // int **q = &p;
    // cout<<p<<endl;
    // cout<<*q<<endl;

    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**q;  

    // int a = 10;
    // int *p = &a;
    // int **q = &p;
    // int b = 20;
    // *q = &b;
    // (*p)++;
    // cout << a << " " << b << endl;
      int a = 100;
    int *p = &a;
    int **q = &p;
    int b = (**q)++;
    int *r = *q;
    (*r)++;
    cout << a << " " << b << endl;
}