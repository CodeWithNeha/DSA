// #include<iostream>
// using namespace std;
// int fibo(int n){
//    if(n<=1){
//        return n;
//    }
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int a;
//     cin>>a;
//     cout<<fibo(a);
// }

#include <iostream>
using namespace std;

void print(int n){
    if(n < 0){
        return;
    }
    if(n == 0){
        cout << n << " ";
        return;
    }
    print(n --);
    cout << n << " ";
}

int main() {
    int num = 3;
    print(num);
}