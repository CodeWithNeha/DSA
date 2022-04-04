#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int star = 1;
    int space = n/2;
    while(i<=n){
        int sp = 1;
        while(sp<=space){
            cout<<" ";
            sp = sp + 1;
        }
        int j = 1;
        while(j<=star){
            cout<<"*";
            j = j+1;
        }
        if(i<=n/2){
            star +=2;
            space--;
        }
        else{
            star -=2;
            space++;
        }
        i = i+1;
        cout<<endl;
    }
}