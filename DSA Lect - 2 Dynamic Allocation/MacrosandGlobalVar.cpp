// #include<iostream>
// #define PI 3.14
// using namespace std;
// int a;
// void g(){
//     a++;
//     cout<<a<<endl;
// }
// void f(){
//     cout<<a<<endl;
// }
// int main(){
//     a = 10;
//     f();
//     g();
//     cout<<PI*4*4<<endl;
// }

// #include<iostream>
// using namespace std;

// int x = 1;

// void print(){
//     int x = 2;
//     {
//         int x = 3;
//         cout << x << endl;
//     }
// }
// int main(){
//     print();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// #define MULTIPLY(a, b) a*b

// int main(){
//     cout << MULTIPLY(2+3, 3+5);
//     return 0;
// }

#include <iostream>
using namespace std;

#define SQUARE(x) x*x

int main(){
    int x = 36 / SQUARE(6);
    cout << x;

    return 0;
}