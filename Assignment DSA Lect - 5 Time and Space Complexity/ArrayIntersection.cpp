#include<iostream>
using namespace std;
void intersection(int *arr1, int *arr2, int n, int m) 
{
    sort(arr1, arr1 + n);
     for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j] = -1;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr1[1000],arr2[1000];
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    for(int i = 0;i<m;i++){
        cin>>arr2[i];
    }
    intersection(arr1,arr2,n,m);
}