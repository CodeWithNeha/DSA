#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    
    while(i<=n){
        int j = 1;
        char p = 'A'+n-i;
        while(j<=i){
            cout<<p;
            p = p+1;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}