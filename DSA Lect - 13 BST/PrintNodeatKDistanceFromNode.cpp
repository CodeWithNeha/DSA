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
void printDown(BinaryTreeNode<int>* root,int value,int k){
    if(root==NULL||k<0){
        return;
    }
    if(k==0){
        cout<<root->data;
        return;
    }
    printDown(root->left,value,k-1);
    printDown(root->right,value,k-1);
}
int printDepth(BinaryTreeNode<int>* root,int value,int k){
    if(root==NULL){
        return -1;
    }
    if(root->data==value){
        printDown(root,value,k);
        return 0;
    }
    int ld = printDepth(root->left,value,k);
    if(ld!=-1){
        if(ld+1==k){
            cout<<root->data<<" ";
        }
        else{
            printDown(root->right,value,k-ld-2);
        }
        return ld+1;
    }
    int rd = printDepth(root->right,value,k);
     if(rd!=-1){
        if(rd+1==k){
            cout<<root->data<<" ";
        }
        else{
            printDown(root->left,value,k-rd-2);
        }
            return rd+1;
    }
    return -1;
}
void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) {
    int ans = printDepth(root,node,k);
}
int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
    printTree(root);
   nodesAtDistanceK(root,3,1);
}