class StaticClass{
    public:
    int age;
    int rollno;
    static int totalStudents;
    StaticClass(){
        totalStudents++;
    }
};
int StaticClass :: totalStudents = 0;
#include<iostream>
using namespace std;
int main(){
    StaticClass s1;
    cout<<s1.age<<" "<<s1.rollno<<endl;
    cout<<StaticClass :: totalStudents<<endl;
    StaticClass s2;
    cout<<StaticClass :: totalStudents<<endl;
}