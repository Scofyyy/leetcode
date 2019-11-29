#include <vector>
using namespace std;

class Solution{
    vector<int> insert_sort(vector<int>& nums)
    {
        for(int i=0;i<nums.size()-1;i++)
        {
            int j=i;
            int tmp = nums[i+1];
            while(j>=0&&tmp>nums[j])
            {
                nums[j+1]=a[j];
                j--;
            }
            nums[j+1]=tmp;

        }
        return nums;
    }

};
