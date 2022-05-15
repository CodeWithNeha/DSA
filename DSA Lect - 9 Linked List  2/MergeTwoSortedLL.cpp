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
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
     if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *Fhead = NULL;
    Node *Ftail = NULL;
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data<=temp2->data){
            if(Fhead==NULL&&Ftail==NULL){
                Fhead = temp1;
                Ftail = temp1;
            }
            else{
                Ftail->next = temp1;
                Ftail = Ftail->next;
            }
            temp1 = temp1->next;
        }
        else{
            if(Fhead==NULL&&Ftail==NULL){
                Fhead = temp2;
                Ftail = temp2;
            }
            else{
                Ftail->next = temp2;
                Ftail = Ftail->next;
            }
            temp2 = temp2->next;
        }
    }
    if(temp1!=NULL){
        Ftail->next = temp1;
    }
    else if(temp2!=NULL){
        Ftail->next = temp2;
    }
    return Fhead;
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
    Node *head1;
    head1 = takeInput1();
    print(head1);
    Node *merge = mergeTwoSortedLinkedLists(head,head1);
    print(merge);
    // cout<<n1.data<<" "<<n2.data<<endl;

    // Dynamically
    // Node *n3 = new Node(10);
    // Node *n4 = new Node(20);
    // Node *head1 = n3; 
    // n3->next = n4;
}