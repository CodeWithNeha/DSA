#include<iostream>
using namespace std;
#include "Node.cpp"
// Complexity n2
Node *takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    while(data!=-1){
        Node *newNode = new Node(data);
        if(head==NULL){
            head = newNode;
        }
        else{
            Node *temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin>>data;
    }
    return head;
}
// Efficient 
Node *takeInput1(){
       int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data!=-1){
        Node *newNode = new Node(data);
        if(head==NULL&&tail==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
           tail ->next = newNode;
           tail = tail->next;
        }
        cin>>data;
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
#include <cmath>
Node *reverseLL_Better(Node *head)
{
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node *newNode = reverseLL_Better(head->next);
    Node *tail = head->next;
    tail->next = head;
    head->next = NULL;
    return newNode;
}
int length(Node *head){
    Node *temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
Node *kReverse(Node *head, int k)
{
    if(k==0||head==NULL){
        return head;
    }
	Node *temp = head;
    Node *newHead = NULL;
    int i = 1;
    int j = 0;
    int len = length(head);
    while(j<ceil(len/k)&&k>1){
        while(temp!=NULL&&i<k){
        temp = temp->next;
        i++;
    }
    if(temp!=NULL){
        newHead = temp->next;
    }
    temp->next = NULL;
    head = reverseLL_Better(head);
    temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newHead;
        temp = newHead;
        print(head);
        j++;
    }
    return head;
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
    // print(head);
    Node *head1;
    head1 = takeInput1();
    print(head1);
    head1 =kReverse(head1,3);
    print(head1);
}
