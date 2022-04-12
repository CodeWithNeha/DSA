#include<iostream>
using namespace std;
int main(){
    char a[100];
    cin>>a;
    char c1,c2;
    cin>>c1>>c2;
    int i = 0;
    while(a[i]!='\0'){
        if(a[i]==c1){
            a[i]=c2;
        }
        i++;
    }
    cout<<a;
}