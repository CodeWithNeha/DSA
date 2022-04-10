#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int uni = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        uni^=arr[i];
    }
    cout<<uni;
}