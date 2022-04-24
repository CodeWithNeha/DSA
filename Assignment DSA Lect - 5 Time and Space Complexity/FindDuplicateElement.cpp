#include<iostream>
using namespace std;
int findDuplicate(int *arr, int n)
{
    int dup = 0;
    for(int i = 1;i<n-1;i++){
        dup = dup^i;
    }
    for(int i = 0;i<n;i++){
        dup = dup^arr[i];
    }
    return dup;
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findDuplicate(arr,n)<<endl;
}