#include<iostream>
using namespace std;
#include"TreeNodes.h"
TreeNode<int>* takeInput(){
    cout<<"Enter Root data : "<<endl;
    int data;
    cin>>data;
    TreeNode<int>* root = new TreeNode<int>(data);
    cout<<"Enter number of child of "<<data<<endl;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}
void printTree(TreeNode<int> *root){
    // Edge Case
    if(root==NULL){
        return;
    }
    cout<<root->data<<" : ";
    for(int i = 0;i<root->children.size();i++){
      cout<<root->children[i]->data<<" ,";  
    }
    cout<<endl;
    for(int i = 0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}
int main(){
    // TreeNode<int> * root = new TreeNode<int>(10);
    // TreeNode<int> * node1 = new TreeNode<int>(20);
    // TreeNode<int> * node2 = new TreeNode<int>(30);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    TreeNode<int> * root = takeInput();
    printTree(root);

}