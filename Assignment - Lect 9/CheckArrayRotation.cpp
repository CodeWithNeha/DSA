#include<iostream>
using namespace std;
void reverse(int *arr,int low,int high){
    while(low<=high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}
bool isSort(int *arr,int n){
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x = 1;
    int count = 0;
    while(!isSort(arr,n)){
        reverse(arr,0,x-1);
        reverse(arr,x,n-1);
        reverse(arr,0,n-1);
        count++;
    }
    cout<<count;
   
}