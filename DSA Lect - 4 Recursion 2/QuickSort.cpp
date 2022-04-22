#include<iostream>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = (low-1);
    for(int j = low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j] = temp;
        }
    }
        int temp = arr[i+1];
            arr[i+1]=arr[high];
            arr[high] = temp;
    return i+1;
}
void quickSort(int a[],int si,int ei){
    if(si>=ei){
        return;
    }
    int c = partition(a,si,ei);
    quickSort(a,si,c-1);
    quickSort(a,c+1,ei);
}
int main(){
     int arr[100];
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}