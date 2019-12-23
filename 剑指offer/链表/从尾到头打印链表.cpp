#include "../../leetcode/ListNode.h"
#include <stack>
using namespace std;
void printList(ListNode *head)
{
    stack<ListNode *> nodes;
    ListNode *p = head;
    while (p != nullptr)
    {
        nodes.push(p);
        p = p->next;
    }
    while (!nodes.empty())
    {
        printf("%d", nodes.top()->val);
        nodes.pop();
    }
}