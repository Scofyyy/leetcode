#include "../../leetcode/ListNode.h"
using namespace std;
ListNode* lastkth(ListNode* head,int k)
{
    
    if(head==nullptr||k = 0)
    {
        return nullptr;
    }
    ListNode* l1 = head;
    ListNode* l2 = head;
    for(int i=0;i<k-1;i++)
    {
        l1 = l1->next;
    }
    while (l1->next!=nullptr)
    {       
        l1=l1->next;
        l2=l2->next;
    }
    return l2;
    
}