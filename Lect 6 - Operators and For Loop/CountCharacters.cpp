#include<iostream>
using namespace std;
int main(){
    char c;
    c = cin.get();
    int countA = 0, countS = 0, countD = 0;
    while(c!='$'){
        if(c>='a'&&c<='z'){
            countA++;
        }
        else if(c>='0'&&c<='9'){
            countD++;
        }
        else if(c==' '){
            countS++;
        }
        c = cin.get();
    }
    cout<<countA<<" "<<countD<<" "<<countS;
}