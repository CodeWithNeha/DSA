#include "BinaryTreeNode.h"
#include<iostream>
using namespace std;
class BST{
    BinaryTreeNode<int> * root;
    public:
    BST(){
        root=NULL;
    }
    private:
    bool hasData(int data,BinaryTreeNode<int> *node){
        if(node==NULL){
            return false;
        }
        if(node->data==data){
            return true;
        }
        else if(node->data<data){
            return hasData(data,node->right);
        }
        else{
            return hasData(data,node->left);
        }
    }
    public:
    bool hasData(int data){
        return hasData(data,root);
    }
    private:
    BinaryTreeNode<int> * insert(int data,BinaryTreeNode<int>* node){
        if(node==NULL){
            BinaryTreeNode<int>* newNode = new BinaryTreeNode<int>(data);
            return newNode;
        }
        if(node->data<data){
            node->right = insert(data,node->right);
        }
        else{
            node->left = insert(data,node->left);
        }
        return node;
    }
    public:
    void insert(int data){
        this->root = insert(data,root);
    }
    private:
    BinaryTreeNode<int>* deleteData(int data,BinaryTreeNode<int>* node)
    {
        if(node==NULL){
            return NULL;
        }
        if(data>node->data){
            node->right = deleteData(data,node->right);
        }
        else if(data<node->data){
            node->left = deleteData(data,node->left);
        }
        else{
            if(node->left == NULL && node->right==NULL){
                delete node;
                return NULL;
            }
            else if(node->left==NULL){
                BinaryTreeNode<int> * newNode = node->right;
                node->right = NULL;
                delete node;
                return newNode;
            }
            else if(node->right==NULL){
                 BinaryTreeNode<int> * newNode = node->left;
                node->left = NULL;
                delete node;
                return newNode;
            }
            else{
                BinaryTreeNode<int> * minNode = node->right;
                while(minNode->left!=NULL){
                    minNode = minNode->left;
                }
                int rightMin = minNode->data;
                node->data = rightMin;
                node->right = deleteData(rightMin,node->right);
                return node;
            }
        }
        return node;
    }
    public:
    void deleteData(int data){
        this->root = deleteData(data,root);
    }
    void printTree(){
        printTree(this->root);
    }
    private:
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

};