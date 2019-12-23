#include <string>
#include <algorithm>
using namespace std;

class Solution
{
    int lengthOfLastWord(string s)
    {
        int size = s.size()-1;
        int ans = 0;
        int flag = 0;
        for(int i=size-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                ans++;
                flag = 1;
            }
            if(flag==1&&s[i]==' ')
            {
                return ans;
            }
        }
        return ans;
    }
};


//solution 2
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                ans++;
            }
            else
            {
                if(ans)
                break;
            }
        }
        return ans;
    }
};
