//使用牛顿迭代法，先初始化一个结果，然后不停靠近正确结果。
//精髓就是不断更新res，使用的方法是res = (res + x/res)/2
using namespace std;
class Solution
{
    int sqrt(int x)
    {
        if (x == 0)
        {
            return 0;
        }
        double last = 0;
        double res = 1;
        while (res != last)
        {
            last = res;
            res = (res + x / res) / 2;
        }
        return int(res);
    }
};