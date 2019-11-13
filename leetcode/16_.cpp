#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	int threeSumClosest(vector<int> &nums, int target)
	{
		sort(nums.begin(), nums.end());
		int closestSumValue = nums[0] + nums[1] + nums[2];
		int digit1_index, digit2_index, digit3_index; // ��ѡ����Ҫ��͵����������±�
		int max_digit1_index = nums.size() - 2;
		// ���󵽱���һ�����飬��������i��Ԫ��ʱ����Ϊ��Ԫ��Ϊ��һ��ѡ��Ԫ��
		// ��������Ԫ���ǴӸ�Ԫ�ص��ұ�ѡ�񣨼��ӵ�i+1��end֮��ѡ��������Ԫ�أ���
		for (int i = 0; i < max_digit1_index; i++)
		{
			digit1_index = i;
			digit2_index = i + 1;
			digit3_index = nums.size() - 1;
			int tmp_sum = nums[digit1_index] + nums[digit2_index] + nums[digit3_index];
			// ��һ�������ڵ�ǰʱ����ָ��������
			// �������ѭ��Ҫ�����������ȷ���ڵ�һ������nums[i]�������
			// ʣ����������ôѡ�����
			while (digit2_index < digit3_index)
			{
				if (abs(tmp_sum - target) < abs(closestSumValue - target))
					closestSumValue = tmp_sum;
				int difference = target - tmp_sum;
				if (difference == 0)
					return target;
				if (difference > 0)
				{
					// target��tmp_sum������Ϊ����С����Ǿ�Ӧ������tmp_sum
					// ���ǵ�3�����Ѿ���������Ǿ������2����
					digit2_index++;
				}
				else
				{
					// target��tmp_sumС������Ϊ����С����Ǿ�Ӧ�ü�Сtmp_sum
					// ���ǵ�2�����Ѿ�����С���Ǿͼ�С��3����
					digit3_index--;
				}
				tmp_sum = nums[digit1_index] + nums[digit2_index] + nums[digit3_index];
			}
		}
		return closestSumValue;
	}
};
