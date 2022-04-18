#include<iostream>
using namespace std;
inline int max(int a,int b){
    return (a>b)?a:b;
}
int main(){
    int a = 10,b = 20;
    cout<<max(a,b);
}