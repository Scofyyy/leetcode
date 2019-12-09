#include "../../leetcode/BinaryTreeNode.h"
#include <iostream>
#include <vector>
#include <deque>
using namespace std;
//前序遍历
void preScan(BinaryTreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->val << endl;
    preScan(root->left);
    preScan(root->right);
}

//中序遍历
void midScan(BinaryTreeNode* root)
{
    if(root==nullptr)
    {
        return;
    }
    midScan(root->left);
    cout <<root->val << endl;
    midScan(root->right);
}

//后序
void backScan(BinaryTreeNode* root)
{
    if(root==nullptr)
    {
        return;
    }
    backScan(root->left);
    backScan(root->right);
    cout << root->val <<endl;
}

//层序遍历
void bfs(BinaryTreeNode* root)
{
    if(root==nullptr)
    {
        return;
    }
    vector<int> res;
    deque<BinaryTreeNode* > dq;
    dq.push_back(root);
    while(!dq.empty())
    {
        res.push_back(dq.front()->val);
        if(root->left!=nullptr)
        {
            dq.push_back(root->left);
        }
        if(root->right!=nullptr)
        {
            dq.push_back(root->right);
        }
        dq.pop_front();
    }

}