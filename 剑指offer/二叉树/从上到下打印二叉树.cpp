#include "../../leetcode/BinaryTreeNode.h"
#include <vector>
#include <deque>
#include <iostream>
using namespace std;

void print_(BinaryTreeNode* root)
{
    if(root==nullptr)
    {
        return;
    }
    deque<BinaryTreeNode*> node;
    node.push_back(root);
    while(!node.empty())
    {
        BinaryTreeNode* tmp = node.front();
        node.pop_front();
        cout<<tmp->val<<endl;
        if(tmp->left)
        {
            node.push_back(tmp->left);
        }
        if(tmp->right)
        {
            node.push_back(tmp->right);
        }
    }
}