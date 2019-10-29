//删除链表倒数第n个元素并返回首节点
#include <vector>
#include <list>
using namespace std;
struct ListNode {
	int value;
	ListNode* next;
};


class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n)
	{
		vector<ListNode*> vec;
		while (head->next != nullptr)
		{
			vec.push_back(head);    //把链表中的所有节点放到vector中
			head = head->next;
		}
		vec.push_back(head);    //别忘了最后一个节点
		vec.erase(vec.begin() + vec.size() - n);    //删掉要求的那个节点
		if (vec.size() == 0) { return nullptr; }
		for (int i = 0; i < vec.size() - 1; i++)
		{
			vec[i]->next = vec[i + 1];    //将容器内的点前后相连
		}
		vec[vec.size() - 1]->next = nullptr;  //最后一个节点确保next为空
		return vec[0];  //返回第一个节点即可
	}
};

