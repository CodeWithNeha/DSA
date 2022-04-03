#include<iostream>
using namespace std;
int main(){
    int start,gap,end;
    cin>>start>>end>>gap;
    while(start<=end){
        int c = (5.0/9)*(start-32);
        cout<<start<<" "<<c<<endl;
        start +=gap;
    }
}