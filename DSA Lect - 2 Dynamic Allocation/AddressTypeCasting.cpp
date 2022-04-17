// #include<iostream>
// using namespace std;
// int main(){
//     int a = 65;
//     char c = a;
//     cout<<c<<endl;
//     int i = 65;
//     int *p = &i;
//     char *pc = (char *)p;
//     float *pf = (float *)p;
//     cout<<p<<" "<<pc<<" "<<pf<<endl;
//     cout<<*p<<" "<<*pc<<" "<<*pf<<endl;
// }

#include <iostream>
using namespace std;

void updateValue(int *p){
    *p = 610 % 255;
}

int main(){
    char ch = 'A';
    updateValue((int*)&ch);
    cout << ch;
}