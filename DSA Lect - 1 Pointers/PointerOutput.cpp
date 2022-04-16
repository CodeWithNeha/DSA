#include<iostream>
using namespace std;
// void changeSign(int *p){
//   *p = (*p)  *  -1;
// }

// int main(){
//   int a = 10;
//   changeSign(&a);
//   cout << a << endl;
// }

// void fun(int a[]) {
//     cout << a[0] << " ";
// }

// int main() {
//     int a[] = {1, 2, 3, 4};
//     fun(a + 1);
//     cout << a[0];
// }

// void square(int *p){
//  int a = 10;
//  p = &a;
//  *p = (*p) * (*p);
// }

// int main(){
//  int a = 10;
//  square(&a);
//  cout << a << endl;
// }

void increment(int **p){
  (**p)++;
}

int main(){
 int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
}