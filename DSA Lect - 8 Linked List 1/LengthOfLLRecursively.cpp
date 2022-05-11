#include<iostream>
using namespace std;
#include "Node.cpp"
int length(Node *head){
    if(head==NULL){
        return 0;
    }
    return 1+length(head->next);
}

int main(){
    // Statically
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    cout<<length(head);
}