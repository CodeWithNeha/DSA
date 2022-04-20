#include<iostream>
using namespace std;
int lastIndex(int arr[],int size,int x){
  if(size==0){
      return -1;
  }
  if(arr[size-1]==x){
      return size-1;
  }
  int ans = lastIndex(arr,size-1,x);
  if(ans==-1){
      return -1;
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
   cout<<lastIndex(arr,n,x);
}