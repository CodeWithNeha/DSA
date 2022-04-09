#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val = arr[n-1];
    for(int i = 0;i<n;i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    if(n%2!=0){
        arr[n-1] = val;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}