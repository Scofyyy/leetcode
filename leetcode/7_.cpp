using namespace std;
class Solution {
public:
	int reverse(int x) {
		int ans = 0;
		int MAX_VALUE = 2^31-1;
		int MIN_VALUE = -2^31;
		while (x != 0)
		{
			int pop = x % 10;
			if (ans > MAX_VALUE / 10 || (ans == MAX_VALUE / 10 && pop > 7))
			{
				return 0;
			}
			if (ans < MIN_VALUE / 10 || (ans == MIN_VALUE / 10 && pop < -8))
			{
				return 0;
			}
			ans = ans * 10 + pop;
			x /= 10;
		}
		return ans;
	}
};
