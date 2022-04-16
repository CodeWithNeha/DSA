#include<iostream>
using namespace std;
void incrementPointer(int *p){
    p = p+1;
}
void increment(int *p){
    (*p)++;
}
void print(int *p){
    cout<<*p<<endl;
}
int main(){
    int i = 10;
    int *p = &i;
    print(p);
    cout<<p<<endl;
    incrementPointer(p);
    cout<<p<<endl;
    cout<<*p<<endl;
    increment(p);
    cout<<*p<<endl;
}