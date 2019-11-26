#include "../../leetcode/BinaryTreeNode.h"
using namespace std;

class Solution
{
public:
    bool hassubtree(BinaryTreeNode *root1, BinaryTreeNode *root2)
    {
        //通过hassubtree来遍历二叉树，找到与子树root2相同的节点，若找到，调用tree1hastree2看是否包含
        bool res = false;
        if (root1 != nullptr && root2 != nullptr)
        {
            if (root1->val == root2->val)
            {
                res = tree1hastree2(root1, root2);
            }
            if (!res)
            {
                hassubtree(root1->left, root2);
            }
            if (!res)
            {
                hassubtree(root1->right, root2);
            }
        }
        return res;
    }
    bool tree1hastree2(BinaryTreeNode *root1, BinaryTreeNode *root2)
    {
        if (root2 == nullptr)
        {
            return true;
        }
        if (root1 == nullptr)
        {
            return false;
        }
        if (root1->val != root2->val)
        {
            return false;
        }
        return tree1hastree2(root1->left, root2->left) && tree1hastree2(root1->right, root2->right);
    }
};