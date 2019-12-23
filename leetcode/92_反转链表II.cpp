/*给一个链表位置m和n，将m和n反转*/
//思路：对于链表的问题，根据以往的经验一般都是要建一个dummy node，
//连上原链表的头结点，这样的话就算头结点变动了，我们还可以通过dummy->next来获得新链表的头结点。
//这道题的要求是只通过一次遍历完成，就拿题目中的例子来说，变换的是2,3,4这三个点，我们需要找到第一个开始变换结点的前一个结点，
//只要让pre向后走m-1步即可，为啥要减1呢，因为题目中是从1开始计数的，这里只走了1步，
//就是结点1，用pre指向它。万一是结点1开始变换的怎么办，这就是我们为啥要用dummy结点了，pre也可以指向dummy结点。
//我们可以看出来，总共需要n-m步即可，第一步是将结点3放到结点1的后面，第二步将结点4放到结点1的后面。
//这是很有规律的操作，那么我们就说一个就行了，比如刚开始，pre指向结点1，cur指向结点2，然后我们建立一个临
//时的结点t，指向结点3（注意我们用临时变量保存某个结点就是为了首先断开该结点和前面结点之间的联系，这可以
//当作一个规律记下来），然后我们断开结点2和结点3，将结点2的next连到结点4上，也就是 cur->next = t->next，
//再把结点3连到结点1的后面结点（即结点2）的前面，即 t->next = pre->next，最后再将原来的结点1和结点2的连接断开，
//将结点1连到结点3，即 pre->next = t。
#include "ListNode.h"
using namespace std;
class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int m, int n)
    {
        if(head==nullptr||head->next==nullptr)
        {
            return head;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next=head;
        ListNode* pre = dummy;
        for(int i=0;i<m-1;i++)
        {
            pre=pre->next;
        }
        ListNode *cur=pre->next;
        for(int i=m;i<n;i++)
        {
            ListNode* t = cur->next;
            cur->next=t->next;
            t->next=pre->next;
            pre->next=t;

        }   
        return dummy->next;
    }
};