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
int SumOfNodes(TreeNode<int> *root){
  	int ans = root->data;
    for(int i=0;i<root->children.size();i++){
        ans +=SumOfNodes(root->children[i]);
    }
    return ans;
}
TreeNode<int>* maxDataNode(TreeNode<int>* root){
    TreeNode<int>* max = root;
    for(int i = 0;i<root->children.size();i++){
        if(max->data<maxDataNode(root->children[i])->data){
            max = maxDataNode(root->children[i]);
        }
    }
    return max;
}
int main(){
    // TreeNode<int> * root = new TreeNode<int>(10);
    // TreeNode<int> * node1 = new TreeNode<int>(20);
    // TreeNode<int> * node2 = new TreeNode<int>(30);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    TreeNode<int> * root = takeInput();
    printTree(root);
    cout<<SumOfNodes(root)<<endl;
    cout<<maxDataNode(root)->data<<endl;

}