#include<iostream>
using namespace std;
int binary(int input[],int low,int high,int element){
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(input[mid]==element){
        return mid;
    }
    else if(input[mid]<element){
        return binary(input,mid+1,high,element);
    }
    else{
        return binary(input,low,mid-1,element);
    }
}
int binarySearch(int input[], int size, int element) {
    return binary(input,0,size-1,element);
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<binarySearch(arr,n,x);
}