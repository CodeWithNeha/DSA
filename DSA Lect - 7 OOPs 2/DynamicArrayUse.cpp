#include<iostream>
using namespace std;
#include "DynamicArray.cpp"
int main(){
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.display();
    cout<<d1.get(7)<<endl;
    d1.display();
    DynamicArray d2(d1);
    d1.addElement(2,90);
    d1.display();
    d2.display();
}