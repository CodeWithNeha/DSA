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
