#include<iostream>
using namespace std;
int allIndex(int arr[],int size,int x,int output[]){
    if(size==0){
        return 0;
    }
    int ans = allIndex(arr,size-1,x,output);
    if(arr[size-1]==x){
        output[ans] = size-1;
        return ans+1;
    }
    return ans;
}
int main(){
   int n;
   cin>>n;
   int arr[100];
   for(int i = 0;i<n;i++){
       cin>>arr[i];
   }
   int x;
   cin>>x;
   int out[100];
   int n1 = allIndex(arr,n,x,out);
   for(int i =0;i<n1;i++){
       cout<<out[i]<<" ";
   }
}