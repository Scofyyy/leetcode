#include "../../leetcode/BinaryTreeNode.h"
using namespace std;

class Solution
{
public:
    void isSymmetrical(BinaryTreeNode *root)
    {
        if (root == nullptr)
        {
            return;
        }
        if (root->left == nullptr && root->right == nullptr)
        {
            return;
        }
        BinaryTreeNode *tmp = root->left;
        root->left = root->right;
        root->right = tmp;

        if (root->left)
        {
            isSymmetrical(root->left);
        }
        if (root->right)
        {
            isSymmetrical(root->right);
        }
    }
};