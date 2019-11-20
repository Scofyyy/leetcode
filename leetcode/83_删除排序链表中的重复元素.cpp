/*给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。*/
//思路：给一个while循环，只要p和p->next不为空则执行
//当p的val等于p->next->val时，将p->next换为p->next->next
//不等，则p=p->next
#include "ListNode.h"
using namespace std;
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head || !head->next)
        {
            return head;
        }
        ListNode *p = head;
        while (p != nullptr && p->next != nullptr)
        {
            if (p->val == p->next->val)
            {
                p->next = p->next->next;
            }
            else
            {
                p = p->next;
            }
        }
        return head;
    }
};