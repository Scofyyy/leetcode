#include <vector>
using namespace std;
//主要思想就是二分法，找到中点过后必有一边是有序的，然后判断看target是否在这一段有序区域内，然后不停逼近
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while(left<=right)
        {
            int mid = left + (right-left)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            //左边有序
            if(nums[left]<=nums[mid])
            {
                if(nums[left]<=target&&target<nums[mid])
                {
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            //右边有序
            else
            {
                if(nums[mid]<target&&target<=nums[right])
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid -1;
                }
            }
        }
        return -1;
    }
};