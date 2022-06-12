#include<iostream>
#include"BinaryTreeNode.h"
#include <queue>
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
// int height(BinaryTreeNode<int>* root) {
//     if(root==NULL){
//         return 0;
//     }
//     queue<BinaryTreeNode<int>*> que;
//     que.push(root);
//     int count = 1;
//     while(que.size()!=0){
//         BinaryTreeNode<int> * front = que.front();
//         que.pop();
//         if(front->left!=NULL){
//             que.push(front->left);
//         }
//         if(front->right!=NULL){
//             que.push(front->right);
//         }
//         if(front->left!=NULL||front->right!=NULL){
//             count++;
//         }
//     }
//     return count;
// }
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
int diameter(BinaryTreeNode<int> * root){
    if(root==NULL){
        return 0;
    }
    int option1 = height(root->left)+height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);
    return max(option1,max(option2,option3));
}
int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
    printTree(root);
    cout<<diameter(root);
}