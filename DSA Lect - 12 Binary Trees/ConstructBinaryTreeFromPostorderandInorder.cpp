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
    BinaryTreeNode<int>* buildBinaryTree(int *postorder,int postStart,int postEnd,int *inorder,int inStart,int inEnd){
        if(postStart>postEnd||inStart>inEnd){
            return NULL;
        }
        BinaryTreeNode<int> * root = new BinaryTreeNode<int>(postorder[postEnd]);
        int inRoot = -1;
        for(int i = inStart;i<=inEnd;i++){
            if(inorder[i]==root->data){
                inRoot = i;
                break;
            }
        }
        int linS = inStart;
        int linE = inRoot-1;
        int lpostS = postEnd-1;
        int lpostE = linE-linS + lpostS;
        int rpostS = lpostE+1;
        int rpostE = postEnd;
        int rinS = inRoot +1;
        int rinE = inEnd;
        root->left = buildBinaryTree(postorder,lpostS,lpostE,inorder,linS,linE);
        root->right = buildBinaryTree(postorder,rpostS,rpostE,inorder,rinS,rinE);
        return root;
    }
    BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {

        return buildBinaryTree(postorder,0,postLength-1,inorder,0,inLength-1);
    }
int main(){
    int length;
    cout<<"Enter length :- ";
    cin>>length;
    cout<<"Enter postOrder :- ";
    int postorder[length];
    for(int i = 0;i<length;i++){
        cin>>postorder[i];
    }
    cout<<"Enter inOrder :- ";
    int inorder[length];
    for(int i = 0;i<length;i++){
        cin>>inorder[i];
    }
    cout<<"length"<<length;
    BinaryTreeNode<int> * root = buildTree(postorder,length,inorder,length);
    printTree(root);
}