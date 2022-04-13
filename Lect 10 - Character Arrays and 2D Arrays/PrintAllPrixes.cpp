#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[100];
    cin>>a;
    int i = 0;
    while(a[i]!='\0'){
        for(int j = 0;j<=i;j++){
            cout<<a[j];
        }
        cout<<endl;
        i++;
    }
}