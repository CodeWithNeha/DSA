#include<iostream>
using namespace std;
#include "Node.cpp"
void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
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
    print(head);
    // cout<<n1.data<<" "<<n2.data<<endl;

    // Dynamically
    // Node *n3 = new Node(10);
    // Node *n4 = new Node(20);
    // Node *head1 = n3; 
    // n3->next = n4;
}