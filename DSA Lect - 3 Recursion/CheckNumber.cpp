#include<iostream>
using namespace std;
bool check(int arr[],int size,int x){
  if(size==0){
      return false;
  }
  if(arr[0]==x){
      return true;
  }
  return check(arr+1,size-1,x);
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
   cout<<check(arr,n,x);
}