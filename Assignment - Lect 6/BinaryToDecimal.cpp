#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int bin = 0;
    int i = 1;
    while(n!=0){
        int rem = n%10;
        bin = bin + rem*i;
        i = i*2;
        n = n/10;
    }
    cout<<bin;
}