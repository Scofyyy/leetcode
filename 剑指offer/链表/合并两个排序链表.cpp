#include "../../leetcode/ListNode.h"
using namespace std;

ListNode* combin1(ListNode* l1,ListNode* l2)
{
    if(l1==nullptr)
    {
        return l2;
    }
    else if (l2==nullptr)
    {
        return l1;
    }

    if(l1->val<l2->val)
    {
        l1->next = combin1(l1->next,l2);
        return l1;
    }
    else
    {
        l2->next = combin1(l1,l2->next);
        return l2;
    }
}
//plan B
ListNode* combin2(ListNode* l1,ListNode* l2)
{
    if(l1==nullptr)
    {
        return l2;
    }
    else if(l2==nullptr)
    {
        return l1;
    }
    ListNode* newhead = nullptr;
    if(l1->val<l2->val)
    {
        newhead = l1;
        newhead->next = combin2(l1->next,l2);
    }
    else
    {
        newhead = l2;
        newhead->next = combin2(l1,l2->next);
    }
    
    
}