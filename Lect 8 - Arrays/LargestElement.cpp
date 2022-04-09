#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int input[100];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    // int max = input[0];
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(max<input[i]){
            max = input[i];
        }
    }
    cout<<max<<endl;
}