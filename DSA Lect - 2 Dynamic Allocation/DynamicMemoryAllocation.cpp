#include<iostream>
using namespace std;
int main(){
    int *p = new int;
    *p = 10;
    cout<<*p<<endl;
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int max = -1;
    for(int i = 0 ;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<max;
}