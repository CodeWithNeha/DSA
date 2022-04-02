#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a and b "<<endl;
    cin>>a>>b;
    // 1. Simple If statement

    // if(a==b){
    //     cout<<"Equals";
    // }

    // 2. If Else

    // if(a==b){
    //     cout<<"Equal ";
    // }
    // else{
    //     cout<<"Not Equal ";
    // }

    // 3. Nested If else
    if(a==b){
        cout<<"Equal"<<endl;
    }
    else{
        if(a>b){
            cout<<"A is Greater"<<endl;
        }
        else{
            cout<<"B is Greater"<<endl;
        }
    }

    // 4. else if ladder
    if(a==b){
        cout<<"Equal"<<endl;
    }
    else if(a>b){
        cout<<"A is Greater"<<endl;
    }
    else{
        cout<<"B is Greater"<<endl;
    }
}