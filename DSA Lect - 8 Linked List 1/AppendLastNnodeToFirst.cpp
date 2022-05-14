#include<iostream>
using namespace std;
#include "Node.cpp"
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
    int count = 0;
    Node *temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
Node *appendLastNToFirst(Node *head, int n)
{
    if(head==NULL||n==0){
        return head;
    }
    int count = length(head);
    int start = count-n;
    int i = 1;
    Node *temp = head;
    Node *st = head;
    Node *pre = st;
    while(temp->next!=NULL){
        if(i<=start)
        {
            pre = st;
            st = st->next;
        }
        temp = temp->next;
        i++;
    }
    temp ->next = head;
    head = st;
    pre->next = NULL;
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
    Node n6(3);
    Node n7(4);
    Node n8(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = &n7;
    n7.next = &n8;
    head = takeInput1();
    print(head);
    head = appendLastNToFirst(head, 3);
    print(head);
}

