#include<iostream>
using namespace std;
void num(int n){
    int i = 1;
    while (i<=n)
    {
        cout<<i<<endl;
        i++;
    }
    
}
int min(){
    int n;
    cin>>n;
    num(n);
}