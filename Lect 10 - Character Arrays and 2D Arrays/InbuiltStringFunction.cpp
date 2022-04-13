#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[100];
    cin>>a;
    // Length
    cout<<strlen(a)<<endl;
    // String Comparison
    cout<<strcmp("neha",a)<<endl;
    // String copy
    char c[100];
    strcpy(c,a);
    cout<<c<<endl;
    // String copy first n character
    char b[100];
    strncpy(b,a,2);
    cout<<c<<endl;
}