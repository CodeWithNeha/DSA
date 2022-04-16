#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3};
    char b[] = "Neha";
    cout<<a<<endl;
    cout<<b<<endl;
    char *c = &b[0];
    cout<<c<<endl;
    char c1 = 'a';
    char *pc = &c1;
    cout<<pc<<endl;
     char ch = 'a';
    char* ptr = &ch;
    ch++;
    cout << *ptr << endl;
    char s[]= "hello";
    char *p = s;
    cout << s[0] << " " << p[0];
}