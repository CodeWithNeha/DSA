// #include<iostream>
// using namespace std;
// int sum(int a,int b,int c = 0){
//     return a+b+c;
// }
// inline int max(int a,int b){
//     return (a>b)?a:b;
// }
// int main(){
//     int a = 10,b = 20;
//     cout<<max(a,b)<<endl;
//     cout<<sum(a,b)<<endl;

// }
#include<iostream>
using namespace std;

int getValue(int x = 0, int y = 0, int z){  
    return (x + y + z); 
}

int main(){
   cout << getValue(10);
   return 0;
}