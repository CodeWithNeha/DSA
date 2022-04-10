#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int low = 0,high = n-1;
    while(low<high){
        while(arr[low]!=1){
            low++;
        }
        while(arr[high]!=0){
            high--;
        }
        if(low>=high){
            break;
        }
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
     }
     for(int i = 0;i<n;i++){
         cout<<arr[i]<<" ";
     }
}