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
Node *evenAfterOdd(Node *head)
{
	Node *temp = head;
    Node *evenHead = NULL;
    Node *evenTail = NULL;
    Node *oddHead = NULL;
    Node *oddTail = NULL;
    int i = 0;
    int count = length(head);
    while(i<count){
        if(temp->data%2==0){
            if(evenHead==NULL&&evenTail==NULL){
                evenHead = temp;
                evenTail = temp;
                temp = temp->next;
            }
            else{
                evenTail->next = temp;
                evenTail = evenTail->next;
                temp = temp->next;
            }
        }
        else{
            if(oddHead==NULL&&oddTail==NULL){
                  oddHead = temp;
                oddTail = temp;
                temp = temp->next; 
            }
            else{
                oddTail->next = temp;
                 oddTail = oddTail->next;
                temp = temp->next;
            }
            }
            i++;
    }
    if(evenHead==NULL){
        oddTail->next = NULL;
        return oddHead;
    }
    else if(oddHead==NULL){
        evenTail->next = NULL;
        return evenHead;
    }
    oddTail->next = evenHead;
    evenTail->next = NULL;
    return oddHead;
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
    head1 = evenAfterOdd(head1);
    print(head1);
}
