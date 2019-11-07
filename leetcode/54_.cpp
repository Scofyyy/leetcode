//螺旋·打印矩阵
#include <vector>
using namespace std;

class Solution
{
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        if (matrix.empty())
        {
            return ans;
        }
        //boards of for directions
        int u = 0;
        int d = matrix.size() - 1;
        int l = 0;
        int r = matrix[0].size() - 1;
        while (true)
        {

            //left to right
            for (int i = l; i <= r; i++)
            {
                ans.push_back(matrix[u][i]);
            }
            if (++u > d) //重新设立上边界，若上边界大于下边界，则停，下同
            {
                break;
            }
            //up to down
            for (int i = u; i <= d; i++)
            {
                ans.push_back(matrix[i][r]);
            }
            if (--r < l) //update right board
            {
                break;
            }
            //right to left
            for (int i = r; i >= l; i--)
            {
                ans.push_back(matrix[d][i]);
            }
            if (--d < u)
            {
                break;
            }
            //down to up
            for (int i = d; i >= u; i--)
            {
                ans.push_back(matrix[i][l]);
            }
            if (++l > r)
            {
                break;
            }
        }
        return ans;
    }
};