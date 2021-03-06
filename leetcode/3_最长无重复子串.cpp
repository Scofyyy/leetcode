#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int n = 0, left = 0;
		map<char, int> m;
		for (int i = 0; i < s.length(); i++) 
		{
			left = max(left, m[s[i]]);  
			m[s[i]] = i + 1;               
			n = max(n, i - left + 1);        
		}
		return n;
	}
};