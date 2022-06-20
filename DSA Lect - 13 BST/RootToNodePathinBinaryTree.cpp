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
vector<int>* RootToNodePath(BinaryTreeNode<int> * root,int data){
    if(root==NULL){
        return NULL;
    }
    if(root->data==data){
        vector<int> * output = new vector<int>();
        output->push_back(root->data);
        return output;
    }
    vector<int> * leftOutput = RootToNodePath(root->left,data);
    if(leftOutput!=NULL){
        leftOutput->push_back(root->data);
        return leftOutput;
    }
    vector<int> * rightOutput = RootToNodePath(root->right,data);
    if(rightOutput!=NULL){
        rightOutput->push_back(root->data);
        return rightOutput;
    }
    return NULL;

}

int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
    vector<int>* ans = RootToNodePath(root,8);
    for(int i =0;i<ans->size();i++){
        cout<<ans->at(i)<<" ";
    }
   
}