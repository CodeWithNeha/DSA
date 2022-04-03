#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    int d = 2;
    bool flag = false;
    while(d<n){
        if(n%d==0){
            cout<<"Not Prime"<<endl;
            flag = true;
            break;
        }
        d++;
    }
    if(!flag){
        cout<<"Prime"<<endl;
    }
}