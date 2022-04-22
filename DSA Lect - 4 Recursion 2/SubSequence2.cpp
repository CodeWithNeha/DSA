#include<iostream>
using namespace std;
int subSequenc(string s,string output[]){
    if(s==""){
        output[0] = "";
        return 1;
    }
    int smallSize = subSequenc(s.substr(1),output);
    cout<<smallSize<<endl;
    for(int i = 0;i<smallSize;i++){
        output[i+smallSize] = s[0]+output[i];
    }
    return 2*smallSize;
}
int main(){
    string s;
    getline(cin,s);
    string* output = new string[1000];
    int count = subSequenc(s,output);
    for(int i = 0;i<count;i++){
        cout<<output[i]<<endl;
    }
}