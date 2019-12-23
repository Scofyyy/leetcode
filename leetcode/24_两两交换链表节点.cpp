#include "ListNode.h"
using namespace std;
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)   return head;
        ListNode* first = head;
        ListNode* second = head->next;
        head = second;
        first->next = swapPairs(second->next);
        second->next = first;
        return head;
    }
};