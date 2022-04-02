#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b "<<endl;
    cin>>a>>b;
    int isEqual = (a==b);
    int isAGreater = (a>b);
    int isALess = (a<b);
    cout<<isEqual<<endl<<isAGreater<<endl<<isALess<<endl;
    cout<<!isEqual<<endl;
    cout<<((isAGreater)||(isEqual))<<endl;
    cout<<(isAGreater)&&(isEqual);
    cout<<(a>b);

}