#include<iostream>
using namespace std;
int sum(int *p,int size){
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum +=p[i];
    }
    cout<<sizeof(p)<<endl;
    return sum;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<sizeof(arr)<<endl;
    cout<<sum(arr+3,10)<<endl;
}