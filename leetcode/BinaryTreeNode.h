struct BinaryTreeNode
{
    int val;
    BinaryTreeNode* parent;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
    BinaryTreeNode(int x) : val(x),left(nullptr),right(nullptr){}
};
