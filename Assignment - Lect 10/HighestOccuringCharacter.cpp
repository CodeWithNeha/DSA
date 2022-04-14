#include<iostream>
using namespace std;
int main(){
    char arr[300];
    cin>>arr;
    int freq[256] = {0};
    for(int i = 0;i<strlen(arr);i++){
        freq[arr[i]]++;
    }
    int max = INT_MIN;
    char c ;
    for(int i = 0;i<strlen(arr);i++){
        if(max<freq[arr[i]]){
            max = freq[arr[i]];
            c = arr[i];
        }
    }
    cout<<c;
}