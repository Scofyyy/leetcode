
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
			vec.push_back(head);    
			head = head->next;
		}
		vec.push_back(head);    
		vec.erase(vec.begin() + vec.size() - n);    
		if (vec.size() == 0) { return nullptr; }
		for (int i = 0; i < vec.size() - 1; i++)
		{
			vec[i]->next = vec[i + 1];   
		}
		vec[vec.size() - 1]->next = nullptr;  
		return vec[0];  
	}
};

