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
Node *removeDuplicates(Node *head)
{
    if(head==NULL){
        return head;
    }
    Node *temp = head->next;
    Node *pre = head;
    while(temp!=NULL){
        while(temp!=NULL&&pre->data==temp->data){
            temp = temp->next;
        }
        if(temp==NULL){
            pre->next = NULL;
            break;
        }
        pre->next = temp;
        pre = pre->next;
        temp = temp->next;
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
void printReverse(Node *head)
{
    if(head==NULL){
        return;
    }

    int len = length(head);
    Node *temp = head;
    int *arr = new int[len];
    int i = len-1;
    while(i>=0){
        arr[i] = temp->data;
        temp = temp->next;
        i--;
    }
    for(int i = 0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
bool isPalindrome(Node *head)
{
     if(head==NULL){
        return true;
    }
    int len = length(head);
    Node *temp = head;
    int *arr = new int[len];
    int i = len-1;
    while(i>=0){
        arr[i] = temp->data;
        temp = temp->next;
        i--;
    }
    int low = 0,high = len-1;
    while(low<high){
        if(arr[low]!=arr[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
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
    printReverse(head);
    print(head);
    cout<<isPalindrome(head)<<endl;
}

