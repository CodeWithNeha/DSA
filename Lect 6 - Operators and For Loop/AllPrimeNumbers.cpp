#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 2;i<=n;i++){
        bool div = false;
        for(int j = 2;j<i;j++){
            if(i%j==0){
                div = true;
                break;
            }
        }
        if(!div){
            cout<<i<<endl;
        }
    }
}