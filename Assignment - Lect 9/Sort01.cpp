#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    // int arr1[n];
    // int low = 0,high = n-1;
    // for(int i = 0;i<n;i++){
    //     if(arr[i]==0){
    //         arr1[low]=0;
    //         low++;
    //     }
    //     else if(arr[i]==2){
    //         arr1[high] = 2;
    //         high--;
    //     }
    // }
    // while(low<high){
    //     arr1[low]=1;
    //     low++;
    // }
    int low = 0,high = n-1;
    int i=0;
    while(i<=high){
       if(arr[i]==0){
           int temp = arr[low];
           arr[low] = arr[i];
           arr[i] = temp;
           low++;
           i++;
       }
       else if(arr[i]==2){
           int temp = arr[high];
           arr[high] = arr[i];
           arr[i] = temp;
           high--;
         
       }
       else{
           i++;
       }
    
    }
     while(low<high){
        arr[low]=1;
        low++;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
}