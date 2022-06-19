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
void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
	if(root==NULL){
        return;
    }
  	 if ( k1 < root->data )  
        elementsInRangeK1K2(root->left, k1, k2);  
   
    if ( k1 <= root->data && k2 >= root->data )  
        cout<<root->data<<" ";  
      
  
    if ( k2 > root->data )  
        elementsInRangeK1K2(root->right, k1, k2); 
}
int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
    printTree(root);
    elementsInRangeK1K2(root,6,10);
    
}