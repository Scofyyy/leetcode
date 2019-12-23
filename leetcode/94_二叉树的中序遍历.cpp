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
        vector<int> ans;
        helper(root,ans);
        return ans;
    }

    void helper(BinaryTreeNode* root,vector<int> ans)
    {
        if(root==nullptr)
        {
            return;
        }
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
    }
};