#include<iostream>
using namespace std;
bool sorted(int a[],int size){
  if(size==0||size==1){
      return true;
  }
  if(a[0]>a[1]){
      return false;
  }
  return sorted(a+1,size-1);
}
int main(){
   int n;
   cin>>n;
   int arr[100];
   for(int i = 0;i<n;i++){
       cin>>arr[i];
   }
   cout<<sorted(arr,n);
}