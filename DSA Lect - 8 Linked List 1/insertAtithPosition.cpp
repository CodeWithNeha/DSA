#include<iostream>
using namespace std;
#include "Node.cpp"
Node* insertAtith(Node *head,int data,int i){
    Node *temp = head;
    Node *pre = head;
    Node *newNode = new Node(data);
    int count = 0;
    if(i==0){
        newNode->next = head;
        head = newNode;
        return head;
    }
    while(temp!=NULL){
        if(count==i-1){
            pre = temp;
            break;
        }
        count++;
        temp = temp->next;
    }
    if(temp!=NULL){
        Node *a = pre->next;
    pre->next = newNode;
     newNode->next = a;
    }
    return head;
}
void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
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
    head = insertAtith(head,100,5);
    print(head);
}