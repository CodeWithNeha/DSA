#include<iostream>
using namespace std;
int main(){
    long n;
    cin>>n;
    long dec = 0;
    long mul = 1;
    while(n!=0){
        long rem = n%2;
        dec = dec + rem*mul;
        mul = mul*10;
        n = n/2;
    }
    cout<<dec;
}