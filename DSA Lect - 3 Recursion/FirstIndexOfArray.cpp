#include<iostream>
using namespace std;
int firstIndex(int arr[],int size,int x){
  if(size==0){
      return -1;
  }
  if(arr[0]==x){
      return 0;
  }
  int ans = firstIndex(arr+1,size-1,x);
  if(ans==-1){
      return -1;
  }
  return ans+1;
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
   cout<<firstIndex(arr,n,x);
}