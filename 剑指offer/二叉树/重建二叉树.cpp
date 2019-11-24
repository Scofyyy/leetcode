//重建二叉树！
#include "../../leetcode/BinaryTreeNode.h"
#include <vector>
using namespace std;
class Solution
{
    BinaryTreeNode *reConstructTree(vector<int> &pre, vector<int> &vin)
    {
        if (pre.empty() || vin.empty() || pre.size() != vin.size())
        {
            return nullptr;
        }
        //建立根节点
        BinaryTreeNode *head = new BinaryTreeNode(pre[0]);
        //找到中序中的根节点
        int root = 0;
        for (int i = 0; i < vin.size(); i++)
        {
            if (vin[i] == pre[0])
            {
                root = i;
                break;
            }
        }
        vector<int> pre_left, pre_right, vin_left, vin_right;
        for (int i = 0; i < root; i++)
        {
            pre_left.push_back(pre[i + 1]);
            vin_left.push_back(vin[i]);
        }
        for (int i = root + 1; i < pre.size(); i++)
        {
            pre_right.push_back(pre[i]);
            vin_right.push_back(vin[i]);
        }
        head->left = reConstructTree(pre_left, vin_left);
        head->right = reConstructTree(pre_right, vin_right);

        return head;
    }
};