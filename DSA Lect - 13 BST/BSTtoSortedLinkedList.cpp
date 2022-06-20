#include<iostream>
#include"BinaryTreeNode.h"
#include <queue>
#include<cmath>
using namespace std;
void printTree(BinaryTreeNode<int> * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" : ";
    if(root->left!=NULL){
        cout<<" L = "<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<" R = "<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

BinaryTreeNode<int> * takeInputLevelWise(){
    int rootData;
    cout<<"Enter Root Data :- ";
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int> * front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter lett Child of "<<front->data;
        int leftChild;
        cin>>leftChild;
        if(leftChild!=-1){
        BinaryTreeNode<int> *leftChil = new BinaryTreeNode<int>(leftChild);
        front->left = leftChil;
        pendingNodes.push(leftChil);
        }
        cout<<"Enter right Child of "<<front->data;
        int rightChild;
        cin>>rightChild;
        if(leftChild!=-1){
        BinaryTreeNode<int> *rightChil = new BinaryTreeNode<int>(rightChild);
        front->right = rightChil;
        pendingNodes.push(rightChil);
        }
    }
   
    return root;
}
	template <typename T>
 	class Node{
    	public:
        T data;
    	Node<T> *next;
    
    	Node(T data) {
        	this->data = data;
        	this->next = NULL;
    	}
 	};
Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
	if(root==NULL){
        return NULL;
    }
    Node<int> * rootHead = new Node<int>(root->data);
    Node<int> *leftHead = constructLinkedList(root->left);
    Node<int> *rightHead = constructLinkedList(root->right);
    if(leftHead!=NULL){
        Node<int> * temp = leftHead;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = rootHead;
    }
    else{
        leftHead = rootHead;
    }
    rootHead->next = rightHead;
    return leftHead;
}
int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
      Node<int>* head = constructLinkedList(root);

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}