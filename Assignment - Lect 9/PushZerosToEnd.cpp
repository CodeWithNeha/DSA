#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int low = 0,count = 0;
    while(low<n){
        if(arr[low]!=0){
            arr[count++] = arr[low];
        }
        low++;
    }
    while(count<n){
        arr[count++] = 0;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}