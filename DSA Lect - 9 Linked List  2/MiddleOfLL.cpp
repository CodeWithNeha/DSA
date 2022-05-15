#include<iostream>
using namespace std;
#include "Node.cpp"
Node *midPoint(Node *head)
{
    Node *fast = head->next;
    Node *slow = head;
    while(fast!=NULL&&fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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