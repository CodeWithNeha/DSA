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
class Pair{
    public:
    Node *head;
    Node *tail;
};
Pair reverseLL(Node *head){
    if(head==NULL||head->next==NULL){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }
    Pair smallAns = reverseLL(head->next);
    smallAns.tail->next = head;
    Pair ans;
    head->next = NULL;
    ans.head = smallAns.head;
    ans.tail = head;
    return ans;

}
Node *reverseLL_2(Node *head){
    return reverseLL(head).head;
}
Node *reverseLinkedListRec(Node *head)
{
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node *newNode = reverseLinkedListRec(head->next);
    Node *temp = newNode;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return newNode;
}
Node *reverseLL_Better(Node *head)
{
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node *newNode = reverseLinkedListRec(head->next);
    Node *tail = head->next;
    tail->next = head;
    head->next = NULL;
    return newNode;
}
void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
int findNode1(Node *head,int index,int n){
    if(head==NULL){
        return -1;
    }
    if(head->data==n){
        return index;
    }
    return findNode1(head->next,index+1,n);
}
int findNode(Node *head,int n){
    return findNode1(head,0,n);
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
    // head1 = reverseLL_Better(head1);
    // print(head1);
    cout<<findNode(head1,0);
    // cout<<n1.data<<" "<<n2.data<<endl;

    // Dynamically
    // Node *n3 = new Node(10);
    // Node *n4 = new Node(20);
    // Node *head1 = n3; 
    // n3->next = n4;
}
