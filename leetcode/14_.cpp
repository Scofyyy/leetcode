#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	string longestCommonPrefix(vector<string> &strs)
	{
		string ans = "";
		if (strs.empty())
		{
			return ans;
		}
		string min = strs[0];
		//找到最短字符串
		for (int i = 0; i < strs.size(); i++)
		{
			if (strs[i].size() < min.size())
			{
				min = strs[i];
			}
		}
		for (int j = 0; j < min.size(); j++)
		{
			for (int k = 0; k < strs.size(); k++)
			{
				if (min[j] != strs[k][j])
				{
					return ans;
				}
			}
			ans = ans + min[j];
		}
		return ans;
	}
};