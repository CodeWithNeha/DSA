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
int minimum(BinaryTreeNode<int> *root){
    if(root==NULL){
        return INT_MAX;
    }
    return min(root->data, min(minimum(root->left),minimum(root->right)));
}
int maximum(BinaryTreeNode<int> *root){
    if(root==NULL){
        return INT_MIN;
    }
    return max(root->data, max(maximum(root->left),maximum(root->right)));
}
bool isBST(BinaryTreeNode<int> *root) {
    if(root==NULL){
        return true;
    }
    int leftMax = maximum(root->left);
    int rightMin = minimum(root->right);
    return (root->data>leftMax)&&(root->data<=rightMin)&&isBST(root->left)&&isBST(root->right);
}
int height(BinaryTreeNode<int>* root) {
    if(root==NULL){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    if(left>right){
        return 1+left;
    }
    else{
        return 1+right;
    }
}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
    if(isBST(root)){
        return height(root);
    }
    int leftAns = largestBSTSubtree(root->left);
    int rightAns = largestBSTSubtree(root->right);
    // cout<<leftAns<<"  "<<rightAns;
    return max(leftAns,rightAns);
}
int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
    printTree(root);
    cout<<largestBSTSubtree(root);
    
}