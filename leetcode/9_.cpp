class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0)
		{
			return false;
		}

		int div = 1;
		while (x / div >= 10) { div *= 10; }//���div�Խ�һ�����x�ĵ�һλ
		while (x > 0)
		{
			int left = x / div;//����������Ӧλ����100000�õ���λ
			int right = x % 10;//��������ʮ�õ�ĩβ
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