#include<iostream>
using namespace std;
#include "Student.cpp"
int main(){
    char name[]= "neha";
    Student s1(24,name);
    // s1.display();
    // name[3] = 'e';
    // Student s2(20,name);
    // s2.display();
    // s1.display();
    Student s2(s1);
    s1.display();
    s2.name = "heena";
    s2.display();

}