//��������
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int maxsubArray(vector<int> &nums)
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



//Solution 2
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();        
        int max = nums[0];
        int dp[size];
        dp[0] = nums[0];
        for (int i = 1; i < size; ++i) {
            if (nums[i] + dp[i-1] >= nums[i]) {
                dp[i] = nums[i] + dp[i-1];
            } else {
                dp[i] = nums[i];                
            }
            if (dp[i] > max) {
                max = dp[i];
            }
        }
        return max;
    }
};
