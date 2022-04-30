#include<iostream>
using namespace std;
#include "Student1.cpp"
int main(){
    Student1 s1(10,20);
    s1.display();
    Student1 s2(s1);
    s2.display();
    Student1 *s3 = new Student1(20,2001);
    (*s3).display();
    Student1 s4(*s3);
    s4.display();
    Student1 *s5 = new Student1(s1);
    (*s5).display(); 

}