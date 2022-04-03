#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int val = 1;
    int space = n-1;
    while(i<=n){
        int sp = 1;
        while(sp<=space){
            cout<<" ";
            sp++;
        }
        int j = 1;
        while(j<=i){
            cout<<val;
            j = j+1;
            val = val +1;
        }
        cout<<endl;
        i = i+1;
        space -=1;
    }
}