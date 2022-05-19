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
int length(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

Node *skipMdeleteN(Node *head, int M, int N)
{
    if(head==NULL){
        return head;
    }
    int i = 0;
	Node *temp = head;
    while(temp!=NULL){
        if(i<M){
            int j = 0;
            Node *tempTail = temp;
            while(tempTail->next!=NULL&&j<N){
                tempTail = tempTail->next;
                j++;
            }
            temp->next = tempTail->next;
            i=0;
        }
        else{
            i++;
        }
        temp = temp->next;
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
    head1 = skipMdeleteN(head1,2,2);
    print(head1);
}
