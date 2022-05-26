#include<iostream>
using namespace std;
#include "Pair.cpp"
int main(){
    // Pair<int> p1;
    // p1.setX(10);
    // p1.setY(20);
    // cout<<p1.getX()<<" "<<p1.getY()<<endl;
    // Pair<double> p2;
    // p2.setX(10.90);
    // p2.setY(20.97882);
    // cout<<p2.getX()<<" "<<p2.getY()<<endl;
    Pair<Pair<int,int>,int> p;
    p.setY(10);
    Pair<int ,int> p1;
    p1.setX(2009);
    p1.setY(1090);
    p.setX(p1);
    cout<<p.getX().getX()<<" "<<p.getX().getY()<<" "<<p.getY()<<endl;
}