#include<iostream>
using namespace std;
#include<stack>
#include<cstring>
int main(){
    stack<int> st;
    string s = "((a+b))";
    int length = s.length();
    int i = 0;
    int count = 0;
    while(i<length){
        if(s[i]!=')'){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            count = 0;
            while(st.top()!='('){
                count++;
                st.pop();
            }
            st.pop();
                    if(count<=1){
        cout<<true;
        return 0;
    }
        }
        i++;
    }
    if(count<=1){
        cout<<"      "<<true<<endl;
    }
    else{
        cout<<false<<endl;
    }
}