#include <vector>
#include "ListNode.h"
class Solution
{
    ListNode *RotateRight(ListNode *head, int k)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *p;
        int n = 1;
        for (p = head; p->next; ++n, p = p->next)
            ;
        p->next = head;
        for (k = n - k % n; k--; p = head, head = head->next)
            ;
        p->next = nullptr;
        return head;
    }
};