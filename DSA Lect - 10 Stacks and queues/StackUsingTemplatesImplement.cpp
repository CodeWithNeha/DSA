#include<iostream>
using namespace std;
#include "StackUsingTemplates.cpp"
int main(){
    StackUsingTemplates<char> s;
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);
    s.push(106);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
}