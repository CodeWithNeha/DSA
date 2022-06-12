#include<iostream>
#include"BinaryTreeNode.h"
#include <map>
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
BinaryTreeNode<int>* buildBinaryTree(int *preorder,int preStart,int preEnd,int *inorder,int inStart,int inEnd,map<int,int> mp){
    if(preStart>preEnd||inStart>inEnd){
        return NULL;
    }
    BinaryTreeNode<int> * root = new BinaryTreeNode<int>(preorder[preStart]);
    int inRoot = mp[root -> data];
    int numsLeft = inRoot - inStart;
    root->left = buildBinaryTree(preorder,preStart+1,preStart+numsLeft,inorder,inStart,inRoot-1,mp);
    root->right = buildBinaryTree(preorder,preStart+numsLeft+1,preEnd,inorder,inRoot+1,inEnd,mp);
    return root;
}
BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
     map < int, int > mp;
  for (int i = 0; i <= inLength-1; i++) {
    mp[inorder[i]] = i;
  }
    return buildBinaryTree(preorder,0,preLength-1,inorder,0,inLength-1,mp);
}
int main(){
    int length;
    cout<<"Enter length :- ";
    cin>>length;
    cout<<"Enter PreOrder :- ";
    int preorder[length];
    for(int i = 0;i<length;i++){
        cin>>preorder[i];
    }
    cout<<"Enter inOrder :- ";
    int inorder[length];
    for(int i = 0;i<length;i++){
        cin>>inorder[i];
    }
    cout<<"length"<<length;
    BinaryTreeNode<int> * root = buildTree(preorder,length,inorder,length);
    printTree(root);
}