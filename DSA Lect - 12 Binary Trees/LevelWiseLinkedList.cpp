#include<iostream>
#include"BinaryTreeNode.h"
#include<queue>
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
	class Node {
		public:
    	T data;
    	Node<T> *next;
    	Node(T data) {
        	this->data=data;
        	this->next=NULL;
    	}
	};
vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
     vector<Node<int>*> ans;
     if(root==NULL){
         return ans;
     }
   queue<BinaryTreeNode<int>*> que;
    que.push(root);
   
    while(que.size()!=0){
        
        int size = que.size();
        Node<int> * head = NULL;
        Node<int> * tail = NULL;
        for(int i = 0;i<size;i++){
            BinaryTreeNode<int>* front = que.front();
            que.pop();
            if(front->left!=NULL){
            que.push(front->left);
        }
        if(front->right!=NULL){
            que.push(front->right);
        }
        if(head==NULL){
            Node<int> * newNode = new Node<int>(front->data);
            head = newNode;
            tail = newNode;
        }
        else{
            Node<int> * newNode = new Node<int>(front->data);
            tail->next = newNode;
            tail = tail->next;
        }
        }
       ans.push_back(head);
    }
    return ans;
}

int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
    printTree(root);
    vector<Node<int> *> ans = constructLinkedListForEachLevel(root);

    for (int i = 0; i < ans.size(); i++) {
        cout<<ans[i]->data;
    }
}