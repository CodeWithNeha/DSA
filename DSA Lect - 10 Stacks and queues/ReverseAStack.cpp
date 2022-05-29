#include<iostream>
using namespace std;
#include<stack>
void reverseStack(stack<int> &input, stack<int> &extra) {
    while(!input.empty()){
        extra.push(input.top());
        input.pop();
    }
    input = extra;
    
}
int main(){
    stack<int> input,extra;
    input.push(10);
    input.push(20);
    input.push(30);
    reverseStack(input,extra);
    while(!input.empty()){
        cout<<input.top()<<endl;
        input.pop();
    }
}