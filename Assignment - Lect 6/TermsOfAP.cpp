#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num = 1;
    for(int i = 1;i<=n;){
        int val = (3*num)+2;
        if(val%4!=0){
            cout<<val<<" ";
            i++;
        }
        num++;
    }
}