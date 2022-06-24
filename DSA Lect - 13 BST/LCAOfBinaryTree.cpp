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
int getLCA(BinaryTreeNode <int>* root , int a, int b) {
    if(root==NULL){
        return -1;
    }
    if(root->data==a||root->data==b){
        return root->data;
    }
    int leftAns = getLCA(root->left,a,b);
    int rightAns = getLCA(root->right,a,b);
    if(leftAns==-1&&rightAns!=-1){
        return rightAns;
    }
    else if(rightAns==-1&&leftAns!=-1){
        return leftAns;
    }
    else if(rightAns!=-1&&leftAns!=-1){
        return root->data;
    }
    else{
        return -1;
    }
}

int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
    printTree(root);
    cout<<getLCA(root,2,10);
    
}