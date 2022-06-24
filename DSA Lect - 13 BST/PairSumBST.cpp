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
int k=0;
void convert(BinaryTreeNode<int>* root,int *arr){
    if(root==NULL){
        return;
    }
    arr[k++] = root->data;
    convert(root->left,arr);
    convert(root->right,arr);

}
void pairSum(BinaryTreeNode<int> *root, int sum) {
    int arr[1000000];
    convert(root,arr);
    sort(arr,arr+k);
    int i = 0,j=k-1;
    while(i<j){
        if(arr[i]+arr[j]==sum){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>sum){
            j--;
        }
        else if(arr[i]+arr[j]<sum){
            i++;
        }
    }

}
int main(){
    BinaryTreeNode<int> * root = takeInputLevelWise();
    printTree(root);
    pairSum(root,15);
    
}