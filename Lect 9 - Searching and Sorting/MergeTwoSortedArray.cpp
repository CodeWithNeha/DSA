#include<iostream>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i = 0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int j = 0;j<n2;j++){
        cin>>arr2[j];
    }
    int arr3[n1+n2];
    int i=0,j=0,k=0;
    while(i<n1&&j<n2){
        if(arr1[i]<=arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else if(arr1[i]>=arr2[j]){
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    for(int i = 0 ;i<n1+n2;i++){
        cout<<arr3[i]<<" ";
    }
}