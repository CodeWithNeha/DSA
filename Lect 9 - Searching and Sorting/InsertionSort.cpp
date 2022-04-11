#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 1;i<n;i++){
        int j = i-1;
        int element = arr[i];
        while(j>=0){
            if(element<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = element;
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}