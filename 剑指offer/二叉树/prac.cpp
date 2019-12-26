#include "../../leetcode/BinaryTreeNode.h"
using namespace std;

void jingxiang(BinaryTreeNode* root)
{
    if(root==nullptr)
    {
        return;
    }
    if(root->left==nullptr&&root->right==nullptr)
    {
        return;
    }
    BinaryTreeNode* tmp = root->left;
    root->left = root->right;
    root->right=root->left;

    if(root->left)
    {
        jingxiang(root->left);
    }
    if(root->right)
    {
        jingxiang(root->right);
    }
}