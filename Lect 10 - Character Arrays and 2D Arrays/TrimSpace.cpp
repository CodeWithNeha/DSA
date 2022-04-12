#include<iostream>
using namespace std;
int main(){
    char a[100];
    cin.getline(a,30);
    int i = 0,count = 0;
    while(a[i]!='\0'){
        if(a[i]!=' '){
            a[count++] = a[i];
        }
        i++;
    }
    a[count] = '\0';
    cout<<a;
}