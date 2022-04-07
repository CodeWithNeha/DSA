#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int sq = i;
    while(i*i<=n){
        sq = i;
        i++;
    }
    cout<<sq;
}