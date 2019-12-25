//判断二叉树是否对成
#include "../../leetcode/BinaryTreeNode.h"
using namespace std;
 bool isSymmetrical(BinaryTreeNode* root)
 {
     return helper(root,root);
 }

 bool helper(BinaryTreeNode* root1,BinaryTreeNode* root2)
 {
     if(root1==nullptr&&root2==nullptr)
     return true;
     if(root1==nullptr||root2==nullptr)
     return false;
     if(root1->val!=root2->val)
     {
         return false;
     }
     return helper(root1->left,root2->left)&&helper(root1->right&&root2->left);
 }