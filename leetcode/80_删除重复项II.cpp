/*给定 nums = [1,1,1,2,2,3],
函数应返回新长度 length = 5, 并且原数组的前五个元素被修改为 1, 1, 2, 2, 3 。
你不需要考虑数组中超出新长度后面的元素。
*/
//思路：用两个指针，一个指针用来覆盖数据，另一个用来遍历。
//当发现快指针不等于慢指针前面那一个数的值时，则慢指针+1，且+1位置更新为快指针当前值
//最后返回长度应该为慢指针+1
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        int n=nums.size();
        if(n<=2)
        {
            return n;
        }
        int j=1;
        for(int i=2;i<n;i++)
        {
            if(nums[i]!=nums[j-1])
            {
                nums[++j]=nums[i];
            }
        }
        return j+1;

    }
};