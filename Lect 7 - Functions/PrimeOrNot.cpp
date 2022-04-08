#include<iostream>
using namespace std;
bool isPrime(int n){
    int i = 2;
    while(i<n){
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<isPrime(n);
}