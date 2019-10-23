#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> res;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 2; i++)
		{
			int j = i + 1;
			int k = nums.size() - 1;
			while (j < k)
			{
				if (nums[j] + nums[k] == -nums[i])
				{
					res.push_back({ nums[i],nums[j],nums[k] });
					while (nums[j] == nums[j + 1])
					{
						j++;
					}
					j++;
				}
				else if (nums[j] + nums[k] < -nums[i])
				{
					j++;
				}
				else
				{
					k--;
				}
			}
			while (nums[i] == nums[i + 1])
			{
				i++;
			}
		}
		return res;
	}
};