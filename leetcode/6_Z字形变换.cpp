#include <algorithm>
#include <vector>
#include <string>
using namespace std;



class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows == 1)
		{
			return s;
		}

		vector<string> rows(min(numRows, int(s.size())));
		int curRow = 0;
		bool goDown = false;

		for (char c : s)
		{
			rows[curRow] += c;
			if (curRow == 0 || curRow == numRows - 1)
			{
				goDown = !goDown;
			}
			curRow += goDown ? 1 : -1;
		}
		string res;
		for (string row : rows)
		{
			res += row;
		}
		return res;

	}

};