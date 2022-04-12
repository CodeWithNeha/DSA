#include<iostream>
using namespace std;
int main(){
    char a[100];
    // cin.getline(a,10);
    cin.getline(a,100,'o');
    cout<<a;
}