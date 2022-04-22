#include<iostream>
using namespace std;
void mergeArr(int arr[],int si,int mid,int ei){
    int left = mid-si+1;
    int right = ei-mid;
    int arr1[left],arr2[right];
    for(int i = 0;i<left;i++){
        arr1[i] = arr[si+i];
    }
    for(int j = 0;j<right;j++){
        arr2[j] = arr[mid+1+j];
    }
    int i = 0,j = 0, k = si;
    while(i<left&&j<right){
        if(arr1[i]>=arr2[j]){
            arr[k] = arr2[j];
            k++;
            j++;
        }
        else{
            arr[k] = arr1[i];
            k++;
            i++;
        }
    }
    while(i<left){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j<right){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int si,int ei){
    if(si>=ei)
    return;
    int mid = si+(ei-si)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    mergeArr(arr,si,mid,ei);
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}