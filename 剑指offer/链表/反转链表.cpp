#include "../../leetcode/ListNode.h"


ListNode* reverse(ListNode* head)
{
    ListNode* reversehead = nullptr;
    ListNode* node = head;
    ListNode* pre = nullptr;
    while(node!=nullptr)
    {
        ListNode* next = node->next;
        if(next==nullptr)
        {
            reversehead = node;
        }
        node->next = pre;
        pre = node;
        node = next;
    }
    return reversehead;
}