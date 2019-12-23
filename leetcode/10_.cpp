#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
	int maxArea(vector<int> &height)
	{
		int Maxarea = 0;
		for (int i = 0; i < height.size(); i++)
		{
			for (int j = i + 1; j < height.size(); j++)
			{
				int curArea = min(height[i], height[j]) * (j - i);
				Maxarea = max(Maxarea, curArea);
			}
		}
		return Maxarea;
	}
};