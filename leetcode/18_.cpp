#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		if (nums.size() < 4) return {};
		sort(nums.begin(), nums.end());
		vector<vector<int>> res;
		for (int i = 0; i < nums.size() - 3; i++)
		{
			if (nums[i] > target && target > 0) break;
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			for (int j = i + 1; j < nums.size() - 2; j++)
			{
				if (j > i + 1 && nums[j] == nums[j - 1])
					continue;
				int l = j + 1;
				int r = nums.size() - 1;
				while (l < r)
				{
					if (nums[i] + nums[j] + nums[l] + nums[r] < target)
						while (l < r && nums[l] == nums[++l]);
					else if (nums[i] + nums[j] + nums[l] + nums[r] > target)
						while (l < r && nums[r] == nums[--r]);
					else
					{
						vector<int> temp{ nums[i],nums[j],nums[l],nums[r] };
						res.push_back(temp);
						while (l < r && nums[l] == nums[++l]);
						while (l < r && nums[r] == nums[--r]);
					}
				}
			}
		}
		return res;
	}
};

