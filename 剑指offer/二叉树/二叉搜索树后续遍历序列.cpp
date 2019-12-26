#include <vector>
using namespace std;

bool verify(vector<int> &nums,int length)
{
    if(nums.empty()||length<=0)
    {
        return false;
    }
    int root = nums[length-1];
    //左子节点值小于根节点
    int i=0;
    for(;i<length-1;i++)
    {
        if(nums[i]>root)
        {
            break;
        }
    }
    //右子节点大于根值
    int j = i;
    for(;j<length-1;j++)
    {
        if(nums[j]<root)
        {
            return false;
        }
    }
    //判断左子树是不是
    bool left =true;
    if(i>0)
    {
        left = verify(nums,i);
    }
    //判断柚子树
    bool right = true;
    if(i<length-1)
    {
        right = verify(nums,length-i-1);
    }
    return (left&&right)
}