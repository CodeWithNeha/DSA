#include<iostream>
using namespace std;
int main(){
    int i  =10;
    int &j = i;
    i++;
    cout<<j<<endl;
    int k = 200;
    j = k;
    cout<<i<<endl;
}