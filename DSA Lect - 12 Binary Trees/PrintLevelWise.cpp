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
BinaryTreeNode<int> * takeInput(){
    int rootData;
    cout<<"Enter Data :- ";
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
}
void printLevelWise(BinaryTreeNode<int> *root) {
	queue<BinaryTreeNode<int>*> que;
    que.push(root);
    while(que.size()!=0){
        BinaryTreeNode<int>* front = que.front();
        que.pop();
        cout<<front->data<<":";
        if(front->left==NULL){
            cout<<"L:-1,";
        }
        else if(front->left!=NULL){
            cout<<"L:"<<front->left->data<<",";
            que.push(front->left);
        }
        if(front->right==NULL){
            cout<<"R:-1";
        }
        else if(front->right!=NULL){
            cout<<"R:"<<front->right->data;
            que.push(front->right);
        }
        cout<<endl;
    }
}
int main(){
    BinaryTreeNode<int> * root = takeInput();
    // BinaryTreeNode<int> * root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int> * node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int> * node2 = new BinaryTreeNode<int>(3);
    // root->left = node1;
    // root->right = node2;
    printTree(root);
    printLevelWise(root);
}