#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int sal;
    char grade;
    cin>>sal>>grade;
    float hra = (sal*20.0)/100;
    float da = (sal*50.0)/100;
    float pf = (sal*11.0)/100;
    int allow;
    if(grade=='A'){
        allow = 1700;
    }
    else if(grade=='B'){
        allow = 1500;
    }
    else{
        allow = 1300;
    }
    int total_sal = round(sal + hra + da +allow -pf);
    cout<<total_sal;
}