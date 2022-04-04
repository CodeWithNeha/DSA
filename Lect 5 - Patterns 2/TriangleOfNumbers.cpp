#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int count = 1;
    while(i<=n){
        int space = 1;
        int num = i;
        while(space<=n-i){
            cout<<" ";
            space +=1;
        }
        int j = 1;
        while(j<=count){
            cout<<num;
            if(j<=count/2){
                num = num+1;
            }
            else{
                num = num-1;
            }
             j = j+1;
        }
        cout<<endl;
        i = i+1;
        count = count + 2;
    }
}