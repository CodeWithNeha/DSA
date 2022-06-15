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
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	if(root==NULL){
        pair<int,int> p;
        p.first = INT_MAX;
        p.second = INT_MIN;
        return p;
    }
    pair<int,int> leftAns = getMinAndMax(root->left);
    pair<int,int> rightAns = getMinAndMax(root->right);
    int lmin = leftAns.first;
    int lmax = leftAns.second;
    int rmin = rightAns.first;
    int rmax = rightAns.second;
    pair<int,int> Ans;
    Ans.first = min(root->data,min(lmin,rmin));
    Ans.second = max(root->data,max(rmax,lmax));
    return Ans;
}
int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
    printTree(root);
    pair<int,int> p = getMinAndMax(root);
    cout<<"Minimum :- "<<p.first<<endl;
    cout<<"Maximum :- "<<p.second<<endl;
}