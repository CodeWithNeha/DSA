#include<iostream>
using namespace std;
void reverse(int *arr,int start,int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotate(int *input, int x, int n)
{
    reverse(input,0,x-1);
    reverse(input,x,n-1);
    reverse(input,0,n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    rotate(arr,x,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}