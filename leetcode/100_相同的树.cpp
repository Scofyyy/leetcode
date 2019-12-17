#include "BinaryTreeNode.h"
using namespace std;

class Solution
{
public:
    bool isSameTree(BinaryTreeNode *p, BinaryTreeNode *q)
    {
        if (p == nullptr && q == nullptr)
        {
            return true;
        }
        if (p == nullptr || q == nullptr)
        {
            return false;
        }
        if (p->val != q->val)
        {
            return false;
        }

        if (!isSameTree(p->left, q->left))
        {
            return false;
        }
        if (!isSameTree(p->right, q->right))
        {
            return false;
        }
        return true;
    }
};