#include "BinaryTreeNode.h"
using namespace std;
class Solution
{
    bool isSymmetric(BinaryTreeNode *root)
    {
        return helper(root, root);
    }
    bool helper(BinaryTreeNode *root1, BinaryTreeNode *root2)
    {
        if (root1 == nullptr && root2 == nullptr)
        {
            return true;
        }
        if (root1 == nullptr || root2 == nullptr)
        {
            return false;
        }
        if (root1->val != root2->val)
        {
            return false;
        }
        return helper(root1->left, root2->right) && helper(root1->right, root2->left);
    }
};