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
    BinaryTreeNode<int>* buildBinaryTree(int *preorder,int preStart,int preEnd,int *inorder,int inStart,int inEnd){
        if(preStart>preEnd||inStart>inEnd){
            return NULL;
        }
        BinaryTreeNode<int> * root = new BinaryTreeNode<int>(preorder[preStart]);
        int inRoot = -1;
        for(int i = inStart;i<=inEnd;i++){
            if(inorder[i]==root->data){
                inRoot = i;
                break;
            }
        }
        int linS = inStart;
        int linE = inRoot-1;
        int lpreS = preStart+1;
        int lpreE = linE-linS + lpreS;
        int rpreS = lpreE+1;
        int rpreE = preEnd;
        int rinS = inRoot +1;
        int rinE = inEnd;
        root->left = buildBinaryTree(preorder,lpreS,lpreE,inorder,linS,linE);
        root->right = buildBinaryTree(preorder,rpreS,rpreE,inorder,rinS,rinE);
        return root;
    }
    BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {

        return buildBinaryTree(preorder,0,preLength-1,inorder,0,inLength-1);
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