#include<iostream>
using namespace std;
int main(){
    char arr[200];
    cin>>arr;
    char a;
    cin>>a;
    int pre = 0;
    for(int i = 0;i<strlen(arr);i++){
        if(arr[i]!=a){
            arr[pre] = arr[i];
            pre++;
        }
    }
    arr[pre] = '\0';
    cout<<arr;
}