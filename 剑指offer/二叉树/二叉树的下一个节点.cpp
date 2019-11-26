#include "../../leetcode/BinaryTreeNode.h"
using namespace std;
class Solution
{
    public:
    BinaryTreeNode *nextTreeNode(BinaryTreeNode *node)
    {
        if (node == nullptr)
        {
            return nullptr;
        }
        //声明结果
        BinaryTreeNode *next = nullptr;
        //有右子节点的情况
        if (node->right != nullptr)
        {
            BinaryTreeNode *right = node->right;
            while (right->left != nullptr)
            {
                right = right->left;
            }
            next = right;
        }
        //无右子树的情况
        else
        {
            BinaryTreeNode *tmp = node;
            while (tmp->parent != nullptr)
            {
                //判断是否是左子节点
                if (tmp = tmp->parent->left)
                {
                    next = tmp;
                    break;
                }
                //否则沿着父节点一直往上找到一个左子节点
                tmp = tmp->parent;
            }
        }
    }

} ；