#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    int second = INT_MIN;
    for(int i = 0;i<n;i++){
        if(second<arr[i]&&arr[i]<max){
            second = arr[i];
        }
    }
    cout<<second;
}