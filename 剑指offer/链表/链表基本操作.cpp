#include "../../leetcode/ListNode.h"
#include <iostream>
using namespace std;

//create ListNode
void create()
{
    int num;
    cin << num;
    ListNode *head = new ListNode(num);
    ListNode *p = head;
    while (cin >> num)
    {
        ListNode *Temp = new ListNode(num);
        p->next = Temp;
        p = p->next;
    }
    //print
    ListNode *m = head;
    while (m != nullptr)
    {
        cout << m->val << endl;
        m = m->next;
    }
}


//insert ListNode
ListNode *insert(ListNode *head, int data)
{
    ListNode *newNode = new ListNode(data);
    ListNode *p = head;
    if (p == nullptr)
    {
        head = newNode;
    }
    else
    {
        while (p->next != nullptr)
        {
            p = p->next;
        }
        p->next = newNode;
    }
    return head;
}


//delete ListNode
ListNode* delete(ListNode* head,int data)
{
    ListNode* p = head;
    //判断是否是空链表
    if(p==nullptr)
    {
        return head;
    }
    //判断是不是删除头结点
    if(p->val==data)
    {
        head = p->next;
        delete p;
        return head;
    }
    else
    {
        while(p->next!=nullptr&&p->val!=data)
        {
            p = p->next;
        }
        //若遍历完整个都没有要删除的节点
        if(p->next==nullptr)
        {
            return head;
        }
        else
        {
            ListNode* deleteNode = p->next;
            p->next = deleteNode->next;
            delete deleteNode;
            return head;
        }
    }
}
