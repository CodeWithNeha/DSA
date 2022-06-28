#include<iostream>
#include"BinaryTreeNode.h"
#include <queue>
#include<cmath>
#include<cstring>
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
#include <stack>
int countnodes(BinaryTreeNode<int> *root)
{
    if(root==NULL) return 0;
    
    return 1+ countnodes(root->left) +countnodes (root->right);
}
void printNodesSumToS(BinaryTreeNode<int> *root, int s) {

    int totalnodes=countnodes(root);
    int count=0;
    
    stack<BinaryTreeNode<int>* > inorder;
    stack<BinaryTreeNode<int>* > revinorder;
    
    BinaryTreeNode<int> *temp=root;
    
    while(temp)
    {
        inorder.push(temp);
       
        temp=temp->left;
    }
    temp=root;
    while(temp)
    {
        revinorder.push(temp);
       
        temp=temp->right;
    }
    
    while (count<totalnodes -1)
    {
        BinaryTreeNode<int> *top1=inorder.top();
        BinaryTreeNode<int> *top2=revinorder.top();
          if(top1->data + top2->data == s)
          {cout<< top1->data <<" "<<top2->data<<endl;
           
           BinaryTreeNode<int> *top=top1;
           inorder.pop();
           count++;
            if(top->right)
            {
                top=top->right;
                while(top)
                {  inorder.push(top);
                 top=top->left;
                }
            }
           top=top2;
           revinorder.pop();
           count++;
            if(top->left)
            {
                top=top->left;
                while(top)
                {  revinorder.push(top);
                 top=top->right;
                }
            }
           
          }
        else if(top1->data + top2->data > s)
        {
             BinaryTreeNode<int> *top=top2;
           revinorder.pop();
           count++;
            if(top->left)
            {
                top=top->left;
                while(top)
                {  revinorder.push(top);
                 top=top->right;
                }
            }
        }
        else
        {
             BinaryTreeNode<int> *top=top1;
           inorder.pop();
           count++;
            if(top->right)
            {
                top=top->right;
                while(top)
                {  inorder.push(top);
                 top=top->left;
                }
            }
        }
        
    }
}


int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
    printTree(root);
   printNodesSumToS(root,12);
}