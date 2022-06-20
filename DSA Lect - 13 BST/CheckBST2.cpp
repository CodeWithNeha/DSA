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
class IsBSTReturn{
    public:
    bool isBST;
    int minimum;
    int maximum;
};
IsBSTReturn isBST(BinaryTreeNode<int> *root) {
    if(root==NULL){
        IsBSTReturn output;
        output.isBST = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        return output;
    }
    IsBSTReturn leftOutput = isBST(root->left);
    IsBSTReturn rightOutput = isBST(root->right);
    int minimum = min(root->data,min(leftOutput.minimum,rightOutput.minimum));
    int maximum = max(root->data,max(leftOutput.maximum,rightOutput.maximum));
    bool isBSTFinal = (root->data>maximum)&&(root->data<=minimum)&&leftOutput.isBST&&rightOutput.isBST;
    IsBSTReturn finalOutput;
    finalOutput.isBST = isBSTFinal;
    finalOutput.minimum = minimum;
    finalOutput.maximum = maximum;
    return finalOutput;
}

int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
    printTree(root);
    cout<<isBST(root).isBST<<endl;
    
}