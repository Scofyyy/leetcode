#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()||matrix[0].empty())
        {
            return false;
        }
        bool isFind=false;
        int row=0;
        int col=matrix[0].size()-1;
        while(row<matrix.size()&&col>=0)
        {
            if(matrix[row][col]==target)
            {
                isFind=true;
                break;
            }
            else if(matrix[row][col]>target)
            {
                col--;
            }
            else
            {
                row++;
            }
        }
        return isFind;
        
    }
};