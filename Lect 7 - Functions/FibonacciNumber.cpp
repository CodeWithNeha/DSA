#include<iostream>
using namespace std;

bool checkMember(int n){
    int a = 0,b = 1;
    int i = 0,c = 0;
    while(i<=n+1){
        if(a==n){
            return true;
        }
        c = a+b;
        a = b;
        b = c;
        i++;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    cout<<checkMember(n);
}