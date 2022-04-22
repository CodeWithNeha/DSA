#include<iostream>
using namespace std;
void subSequenc(string s,string ans){
    if(s==""){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    subSequenc(s.substr(1),ans);
    subSequenc(s.substr(1),ans+ch);
}
int main(){
    string s;
    getline(cin,s);
    subSequenc(s,"");
}