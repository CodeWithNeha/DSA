#include<iostream>
using namespace std;
#include<stack>
#include<cstring>
bool isBalanced(string expression) 
{
    stack<char> s;
   int length = expression.length();
   int i = 0;
   while(i<length){
       if(expression[i]=='('){
           s.push(expression[i]);
       }
       else if(expression[i]==')'){
           if(s.empty()){
               return false;
           }
           s.pop();
       }
       i++;
   }
   return s.empty();
}
int main(){
     string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}