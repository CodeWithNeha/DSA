#include<iostream>
using namespace std;
int main(){
    char arr[250];
    cin>>arr;
    int res = 0;
    for(int i=0;i<strlen(arr);i++){
        if(arr[res]!=arr[i]){
            arr[++res] = arr[i];
        }
    }
    arr[++res] = '\0';
    cout<<arr;
}