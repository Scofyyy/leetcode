//ɾ����������n��Ԫ�ز������׽ڵ�
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
			vec.push_back(head);    //�������е����нڵ�ŵ�vector��
			head = head->next;
		}
		vec.push_back(head);    //���������һ���ڵ�
		vec.erase(vec.begin() + vec.size() - n);    //ɾ��Ҫ����Ǹ��ڵ�
		if (vec.size() == 0) { return nullptr; }
		for (int i = 0; i < vec.size() - 1; i++)
		{
			vec[i]->next = vec[i + 1];    //�������ڵĵ�ǰ������
		}
		vec[vec.size() - 1]->next = nullptr;  //���һ���ڵ�ȷ��nextΪ��
		return vec[0];  //���ص�һ���ڵ㼴��
	}
};

