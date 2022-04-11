#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n-1;i++){
        int min = INT_MAX;
        int index = 0;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}