#include<iostream>
using namespace std;
void printSubsetsOfArray(int input[], int size,string output,int sum,int k) {
    if(sum==k){
        cout<<output<<endl;
        return;
    }
   if(size==0){
       return;
   }
    printSubsetsOfArray(input+1,size-1,output,sum,k);
     printSubsetsOfArray(input+1,size-1,output+""+to_string(input[0])+" ",sum+input[0],k);
}

void printSubsetSumToK(int input[], int size, int k) {
   printSubsetsOfArray(input,size,"",0,k);
}
int main(){
int arr[100];
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    printSubsetSumToK(arr,n,6);
}