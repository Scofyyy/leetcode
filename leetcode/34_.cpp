#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res{-1,-1};
        int j = nums.size()-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                for(;j>=i;j--)
                {
                    if(nums[j]==target)
                    {
                        res = {i,j};
                        return res;
                    }
                }
            }
                
        }
        return res;
        
    }
};