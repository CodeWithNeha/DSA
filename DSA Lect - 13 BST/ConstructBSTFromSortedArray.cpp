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
BinaryTreeNode<int>* BST(int *input,int si,int ei){
    if(si>ei){
        return NULL;
    }
    int mid = (si+ei)/2;
    BinaryTreeNode<int> * root = new BinaryTreeNode<int>(input[mid]);
    root->left = BST(input,si,mid-1);
    root->right = BST(input,mid+1,ei);
    return root;
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
	return BST(input,0,n-1);
}

int main(){
    int n;
    cin>>n;
    int *arr;
    arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    BinaryTreeNode<int> * root = constructTree(arr,n);
    printTree(root);
    
    
}