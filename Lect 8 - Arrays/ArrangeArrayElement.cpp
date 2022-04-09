#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int input[n];
    int i = 0,j = n-1;
    for(int num=1;num<=n;num++){
        if(num%2!=0){
            input[i]=num;
            i++;
        }
        else{
            input[j]=num;
            j--;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<input[i]<<" ";
    }
}