#include<iostream>
using namespace std;
#include "Fraction.cpp"
int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);
    f1.display();
    f2.display();
    Fraction f3 =  f1.add(f2); 
    f3.display();
    Fraction f4 = f1+f2;
    f4.display();
    Fraction f5 = f1*f2;
    f5.display();
    cout<<(f1==f2)<<endl;
}