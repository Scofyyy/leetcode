class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0)
		{
			return false;
		}

		int div = 1;
		while (x / div >= 10) { div *= 10; }//求得div以进一步求得x的第一位
		while (x > 0)
		{
			int left = x / div;//整数除以相应位数的100000得到首位
			int right = x % 10;//整数整除十得到末尾
			if (left != right)
			{
				return false;
			}
			x = (x % div) / 10;
			div /= 100;
		}
		return true;
	}
};