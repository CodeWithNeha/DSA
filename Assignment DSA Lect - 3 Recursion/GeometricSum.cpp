#include<iostream>
#include<math.h>
using namespace std;
double geoSum(int k,int i){
    if(i>k){
        return 0;
    }
    return 1/pow(2,i)+geoSum(k,i+1);
}

int main(){
    int a;
    cin>>a;
    cout<<geoSum(a,0);
}