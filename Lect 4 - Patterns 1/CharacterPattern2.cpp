#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    char c = 'A';
    while(i<=n){
        int j = 1;
        char p = c;
        while(j<=n){
            cout<<p;
            p = p+1;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
        c = c+1;
    }
}