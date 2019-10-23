#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(str s) {
		int n = 0, left = 0;
		map<char, int> m;
		for (int i = 0; i < s.length(); i++)  //每次遍历都会判断左边界限，当有重复时，更新left
		{
			left = max(left, m[s[i]]);    //更新左边界限
			m[s[i]] = i + 1;               //更新哈希表的值
			n = max(n, i - left + 1);         //更新n的值
		}
		return n;
	}
};