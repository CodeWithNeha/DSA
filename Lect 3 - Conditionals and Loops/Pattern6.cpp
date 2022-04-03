#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int space = n-1;
    int star = 1;
    while(i<=n){
        int sp = 1;
        while(sp<=space){
            cout<<" ";
            sp++;
        }
        int j = 1;
        while(j<=star){
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
        space -=1;
        star +=2;
    }
}