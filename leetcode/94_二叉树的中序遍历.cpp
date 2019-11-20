//使用栈的方法
#include <vector>
#include <stack>
#include "BinaryTreeNode.h"
using namespace std;
class Solution
{
public:
    vector<int> inorderTraversal(BinaryTreeNode *root)
    {
        vector<int> ret;
        //未遍历完成的节点
        stack<BinaryTreeNode *> toTraversal;
        while (root != NULL || !toTraversal.empty())
        {
            //遍历左子树，直至root为空
            while (root != NULL)
            {
                toTraversal.push(root);
                root = root->left;
            }
            //左子树为空，可以输出root
            root = toTraversal.top();
            toTraversal.pop();
            ret.push_back(root->val);
            //如果root->right为空，下次循环继续弹出栈顶元素
            root = root->right;
        }
        return ret;
    }
};