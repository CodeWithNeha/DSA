#include<iostream>
using namespace std;
int staircase(int n){
    if(n==0){
        return 1;
    }    
    if(n<0){
        return 0;
    }
    int step1 = staircase(n-1);
    int step2 = staircase(n-2);
    int step3 = staircase(n-3);
    return step1+step2+step3;
}
int main(){
    cout<<staircase(4);
}