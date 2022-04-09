#include<iostream>
using namespace std;
void printArray(int b[],int n){
    for(int i = 0;i<n;i++){
        cout<<b[i]<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int input[100];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    printArray(input,n);
}