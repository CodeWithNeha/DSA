#include<iostream>
using namespace std;
void printSubsetsOfArray(int input[], int size,string output) {
   if(size==0){
       cout<<output<<endl;
       return;
   }
    printSubsetsOfArray(input+1,size-1,output);
     printSubsetsOfArray(input+1,size-1,output+""+to_string(input[0])+" ");
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    printSubsetsOfArray(arr,n,"");
}