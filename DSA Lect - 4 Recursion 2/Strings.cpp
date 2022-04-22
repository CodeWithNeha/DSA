#include<iostream>
using namespace std;
int main(){
    string s = "abc";
    cout<<s<<endl;
    string *sp = new string;
    getline(cin,*sp);
    cout<<(*sp).size()<<endl;
    string s1 = "abcdefg";
    cout<<s1.substr(3,2)<<endl;
    cout<<s1.find("ab")<<endl;
}