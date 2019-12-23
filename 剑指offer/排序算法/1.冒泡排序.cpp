#include <vector>
using namespace std;
class Solution
{
    vector<int> bubble_sort(vector<int> &nums)
    {
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=0;j<nums.size()-1-i;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    int tmp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=tmp;
                }
            }
        }
        return nums;
    }
};