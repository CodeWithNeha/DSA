#include<iostream>
using namespace std;
#include"TreeNodes.h"
#include<queue>
TreeNode<int>* takeInput(){
    cout<<"Enter Root data : "<<endl;
    int data;
    cin>>data;
    TreeNode<int>* root = new TreeNode<int>(data);
    queue<TreeNode<int>*> que;
    que.push(root);
    while(que.size()!=0){
        TreeNode<int> *front = que.front();
        que.pop();
        int NoChild;
        cout<<"Enter Number of childs of "<<front->data<<endl;
        cin>>NoChild;
        for(int i = 0;i<NoChild;i++){
            int value;
            cout<<"Enter Value of Child "<<endl;
            cin>>value;
            TreeNode<int> *childData = new TreeNode<int>(value);
            front->children.push_back(childData);
            que.push(childData);
        }
    }
    return root;
}
void printTree(TreeNode<int> *root){
    // Edge Case
    TreeNode<int>* temp = root;
    queue<TreeNode<int>*> que;
    que.push(temp);
    while(que.size()!=0){
        TreeNode<int>* front = que.front();
        cout<<front->data<<":";
        que.pop();
        for(int i = 0;i<front->children.size();i++){
            cout<<front->children[i]->data<<",";
            que.push(front->children[i]);
        }
        cout<<endl;
    }
}
void help(TreeNode<int> *root, int depth)
{
    root->data=depth;
    for(int i=0;i<root->children.size();i++)
    {
        help(root->children[i] ,depth+1);
    }
}

void replaceWithDepthValue(TreeNode<int> *root){    
   
    int depth=0;
 help(root,depth);
 }
int main(){
    TreeNode<int> * root = takeInput();
    replaceWithDepthValue(root);
    printTree(root);

}

