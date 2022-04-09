#include<iostream>
using namespace std;
int increment(int a){
    return a+1;
}
int main(){
    int n = 10;
    n = increment(n);
    cout<<n<<endl;
}