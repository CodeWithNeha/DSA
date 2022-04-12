#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    int arr1[n1];
    for(int i = 0;i<n1;i++){
        cin>>arr1[i];
    }
    
    cin>>n2;
    int arr2[n2];
    for(int i = 0;i<n2;i++){
        cin>>arr2[i];
    }
    int n3;
    if(n2>n1){
        n3=n2;
    }
    else{
        n3=n1;
    }
    int arr3[n3];
    int k =n3-1,i=n1-1,j=n2-1,carry=0;
        while(i>=0&&j>=0){
            int sum =arr1[i]+arr2[j]+carry;
            arr3[k] = sum%10;
            carry = sum/10;
            k--;
            i--;
            j--;
        }
        while(i>=0){
            int sum = arr1[i]+carry;
            arr3[k] = sum%10;
            carry = sum/10;
            k--;
            i--;
        }
         while(j>=0){
            int sum = arr2[j]+carry;
            arr3[k] = sum%10;
            carry = sum/10;
            k--;
            j--;
        }
        if(k==0){
            arr3[k] = 0;
        }
    for(int i = 0;i<n3;i++){
        cout<<arr3[i]<<" ";
    }
}