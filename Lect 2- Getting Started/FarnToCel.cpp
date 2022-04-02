#include<iostream>
using namespace std;
int main(){
    int f;
    cout<<"Enter Far value"<<endl;
    cin>>f;
    int c = (5.0/9)*(f-32);
    int c1 = (5*(f-32))/9;
    cout<<"Celsius = "<<c<<endl<<c1<<endl;
}