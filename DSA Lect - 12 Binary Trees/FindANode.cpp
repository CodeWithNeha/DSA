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
int countNode(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    return 1+countNode(root->left)+countNode(root->right);
}

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    return isNodePresent(root->left,x)||isNodePresent(root->right,x);
}
int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
    // BinaryTreeNode<int> * root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int> * node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int> * node2 = new BinaryTreeNode<int>(3);
    // root->left = node1;
    // root->right = node2;
    printTree(root);
    printLevelWise(root);
    cout<<countNode(root)<<endl;
    cout<<isNodePresent(root,7)<<endl;
}