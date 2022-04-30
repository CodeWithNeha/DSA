// #include <iostream>
// using namespace std;

// class Box{
//     public :
//     int width;
//     int height;
//     int length;
//     void volume(){
//         cout << length * width * height;
//     }
// };

// int main() {
//     Box b;
//     cout<<b.length;
//     b.height = 5;
//     b.width = 4;
//     b.volume();
// }

// #include <iostream>
// using namespace std;

// class Student{
//     public :
//     char *name;
//     int rollNo;
//     Student(int num){
//         rollNo = num;
//     }

//     void print(){
//         cout << rollNo;
//     }
// };

// int main() {
//     Student s(12);
//     s.print();
// }

#include <iostream>
using namespace std;

class Student{
    public :
    char name;
    int rollNo;

    Student(int num){
        rollNo = num;
    }

    void print(){
        cout << name << " "  <<  rollNo;
    }
};

int main() {
    Student *s = new Student();
    s -> name = 'A';
    s -> rollNo = 15;
    s -> print();
}