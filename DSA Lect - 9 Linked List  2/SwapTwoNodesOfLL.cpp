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
Node *swapNodes(Node *head, int i, int j)
{
	int index = 0;
    Node *data1 = NULL;
    Node *data2 = NULL;
    Node *temp = head; 
    while(temp!=NULL){
        if(index==i){
            data1 = temp;
        }
        if(index==j){
            data2 = temp;
        }
        temp = temp->next;
        index++;
    }
    if(data1==NULL||data2==NULL){
        return head;
    }
    cout<<data1->data<<"    "<<data2->data<<"   ";
    int temp1 = data1->data;
    data1->data = data2->data;
    data2->data = temp1;
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
    head1 =swapNodes(head1, 3, 4);
    print(head1);
}
