#include <vector>
using namespace std;

class Solution
{
    bool canJump(vector<int> &nums)
    {
        int last=nums.size()-1;
        for(int i=last-1;i>=0;i--)
        {
            if(nums[i]+i>=last)
            {
                last=i;
            }
        }
        return !last;
    }
};