#include<iostream>
using namespace std;
void printTable(int start, int end, int step) {
    while(start<=end){
         int c = (5.0/9)*(start-32);
        cout<<start<<" "<<c<<endl;
        start +=step;
    }
}
int main(){
    int start,end,step;
    cin>>start>>end>>step;
    printTable(start,end,step);
}