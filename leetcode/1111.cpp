#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
    string Convert(string s,int numRows)
    {
        if(numRows==1)
        {
            return s;
        }
        vector<string> rows(min(numRows,int(s.size())));
        bool godown = false;
        int curRow=0;
        for(char c:s)
        {
            rows[curRow]+=c;
            if(curRow==0||curRow==numRows-1)
            {
                godown=!godown;
            }
            curRow+=godown?1:-1;
        }
        string res;
        for(string row:rows)
        {
            res+=row;
        }
        return res;
    }
};