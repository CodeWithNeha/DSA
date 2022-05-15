#include<iostream>
using namespace std;
#include "Node.cpp"
int length(Node *head){
    int count = 0;
    Node *temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
Node *midPoint(Node *head)
{
    if(head==NULL){
        return head;
    }
    Node *temp= head;
   int len = length(head);
   int ele = (len-1)/2;
   int i = 0;
   while(temp!=NULL){
       if(i==ele){
           break;
       }
       i++;
       temp = temp->next;
   }
   return temp;
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
    head = midPoint(head);
    cout<<head->data;
}