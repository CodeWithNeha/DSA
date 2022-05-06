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
    Fraction f6(10,2);
    f6.display();
    Fraction f7 = ++f6;
    f7.display();
    Fraction f8(10,2);
    Fraction f9 = f8++;
    f8.display();
    f9.display();
    Fraction f10(10,3);
    Fraction f11(5,2);
    f10 +=f11;
    f10.display();
    f11.display();


}