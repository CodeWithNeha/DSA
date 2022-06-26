#include<iostream>
#include"BinaryTreeNode.h"
#include <queue>
#include<cmath>
#include<cstring>
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
void rootToLeaf(BinaryTreeNode<int> *root,int k,string s){
    if(root==NULL)
        return;
    if(k==root->data&&root->left==NULL&&root->right==NULL){
        cout<<s+to_string(root->data)<<endl;
        return;
    }
    
    rootToLeaf(root->left,k-root->data,s+to_string(root->data)+" ");
    rootToLeaf(root->right,k-root->data,s+to_string(root->data)+" ");
}
void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
    rootToLeaf(root,k,"");
}
int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
    printTree(root);
   rootToLeafPathsSumToK(root,13);
}