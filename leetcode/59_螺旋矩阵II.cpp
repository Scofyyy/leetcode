//与54题类似
#include<vector>
using namespace std;

class Solution
{
    public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> res(n,vector<int> (n,0));
        int u = 0;
        int d = n-1;
        int l = 0;
        int r = n-1;
        int value = 1;
        while(true)
        {
            for(int i=l;i<=r;i++)//left to right
            {
                res[u][i]=value++;
            }
            if(++u>d)
            {
                break;
            }
            for(int i=u;i<=d;i++)//up to down
            {
                res[i][r]=value++;
            }
            if(--r<l)
            {
                break;
            }
            for(int i=r;i>=l;i--)//right to left
            {
                res[d][i]=value++;
            }
            if(--d<u)
            {
                break;
            }
            for(int i=d;i>=u;i--)
            {
                res[i][l]=value++;
            }
            if(++l>r)
            {
                break;
            }
        }
        return res;
        
    }
};
