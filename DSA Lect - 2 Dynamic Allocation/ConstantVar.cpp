// #include<iostream>
// using namespace std;
// int main(){
//     const int i = 10;
//     int j = 12;
//     const int &k = j;
//     j++;
//     cout<<k<<endl;
//     int const l = 10;
//     int const *p = &i;

// }

// #include <iostream>
// using namespace std;

// int main(){
//     int p = 5;
//     int const *q = &p;
//     p++;
//     cout << p << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int p = 5;
//     int const *q = &p;
    // p++;
    // q++;
    // //(*q)++;
// }

#include <iostream>
using namespace std;

int main(){
       const int p = 5;
    int const *q = &p;
        //p++;
    q++;
    //(*q)++;
}