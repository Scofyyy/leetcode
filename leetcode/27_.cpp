#include <vector>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0;
        int j = 0;
        int N = nums.size();
        for (; i < N; i++)
        {
            if (nums[i] != val)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};