#include<iostream>
using namespace std;
#include<queue>
#include<stack>
void reverseQueue(queue<int> &q) {
    stack<int> s;
		while(!q.empty()){
            s.push(q.front());
            q.pop();
        }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverseQueue(q);
    
}