  class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};
#include<climits>
class Stack {
    Node *head;
    int size;
   public:
    Stack() {
        head = NULL;
        size = 0;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size==0;
    }

    void push(int element) {
         Node *newNode = new Node(element);
        if(head==NULL){
            head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    int pop() {
        if(head==NULL){
            return -1;
        }
        int ans = head->data;
        head = head->next;
        size--;
        return ans;
    }

    int top() {
        if(head==NULL){
            return -1;
        }
        return head->data;
    }
};