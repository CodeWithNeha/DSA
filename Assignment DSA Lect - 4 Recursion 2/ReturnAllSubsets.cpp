#include<iostream>
using namespace std;
int subsets(int input[], int size,int output[][20]) {
   if(size==0){
       output[0][0] = 0;
       return 1;
   }
   int small = subsets(input+1,size-1,output);
   for(int i = 0;i<small;i++){
       int col = output[i][0] + 1;
       output[i+small][0] = col;
       output[i+small][1] = input[0];
       for(int j = 2;j<col+1;j++){
           output[i+small][j] = output[i][j-1];
       }
   }
   return 2*small;
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int *arr = new int[][20];
    int count = subset(arr,n,output);
    
}