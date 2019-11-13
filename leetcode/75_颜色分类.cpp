//思路：
//弄两个指针依次排序就行

#include <vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    void sortColors(vector<int> &nums)
    {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    swap(nums[i],nums[j]);
                }
            }
        }
    }
};