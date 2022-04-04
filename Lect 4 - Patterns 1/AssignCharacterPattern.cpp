#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    char p = 'A';
    while(i<=n){
        int j = 1;
        char c = p;
        while(j<=i){
            cout<<c;
            c = c+1;
            j = j+1;
        }
        cout<<endl;
         p = p+1;
        i = i+1;
    }
}