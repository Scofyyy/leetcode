//最大子序和
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int maxsubArray(vector<int> nums)
	{
		int ans = 0;
		int maxn = INT_MIN;

		for (int i = 0; i < nums.size(); i++)
		{
			if (ans < 0) { ans = 0; }
			ans += nums[i];
			maxn = max(maxn, ans);
		}
		return maxn;
	}
};