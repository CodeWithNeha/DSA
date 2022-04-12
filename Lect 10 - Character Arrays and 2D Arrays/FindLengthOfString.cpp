#include<iostream>
using namespace std;
int main(){
    char a[100];
    cin>>a;
    int count = 0,i=0;
    while(a[i]!='\0'){
        count++;
        i++;
    }
    cout<<count;
}