/*
    每次可以爬1或2个台阶，则第到达第i台阶前必定经过 第i-1台阶或第i-2台阶
    设stair[i]表示到达第i台阶的方法种数
    则stair[i] = stair[i - 1] + stair[i - 2]
    即到达第i-1台阶的种数加上第i-2台阶的种数

    边界条件：
    stair[0] = 1
    stair[1] = 1

    其实抽象出来就是一个斐波那契数列
*/
class Solution {
public:
    int climbStairs(int n) {
        int stair[n + 1] = {0};
        stair[0] = stair[1] = 1;
        for(int i = 2; i != n+1; ++i){
            stair[i] = stair[i - 1] + stair[i - 2];
        }
        
        return stair[n];
    }
};
//用这个fib来解也舒服的一批
class Solution {
public:
    int climbStairs(int n) {
        int result[2]={0,1};
        if(n<2)
        {
            return result[n];
        }
        int one = 1;
        int two = 1;
        int ans = 0;
        for(int i=2;i<=n;i++)
        {
            ans = one + two;
            one = two;
            two = ans;
        }
        return ans;
    }
};
