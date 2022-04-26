#include<iostream>
using namespace std;
int arrayRotateCheck(int *arr, int size)
{
    int min = INT_MAX;
    int minIndex = 0;
    for(int i = 0;i<size;i++){
        if(min>arr[i]){
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}
int main(){
     int n;
    cin>>n;
    int arr[1000];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arrayRotateCheck(arr,n);
}