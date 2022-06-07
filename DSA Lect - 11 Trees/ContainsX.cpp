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
bool isPresent(TreeNode<int>* root, int x) {
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    bool ans = false;
    for(int i = 0;i<root->children.size();i++){
        ans = ans || isPresent(root->children[i],x);
    }
    return ans;
}

int main(){
    TreeNode<int> * root = takeInput();
    printTree(root);
    cout<<isPresent(root,4);

}