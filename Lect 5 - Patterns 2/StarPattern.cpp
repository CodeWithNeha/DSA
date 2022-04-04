#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int star = 1;
    while(i<=n){
        int space = 1;
        while(space<=n-i){
            cout<<" ";
            space = space + 1;
        }
        int j = 1;
        while(j<=star){
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        star = star + 2;
        i = i+1;
    }
}