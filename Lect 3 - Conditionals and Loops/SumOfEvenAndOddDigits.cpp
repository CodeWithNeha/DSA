#include<iostream>
using namespace std;
int main(){
    int even = 0,odd = 0,n;
    cin>>n;
    while(n!=0){
        int rem = n%10;
        if(rem%2==0){
            even +=rem;
        }
        else{
            odd +=rem;
        }
        n = n/10;
    }
    cout<<even<<" "<<odd;
}