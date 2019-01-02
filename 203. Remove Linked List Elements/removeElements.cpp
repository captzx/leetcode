#include "common.h"
#include "removeElements.h"

ListNode* removeElements(ListNode* head, int val) {
	while (head && head->val == val) {
		ListNode* tmpNode = head;
		head = head->next;
		delete tmpNode;
	}
	if (!head)return nullptr;
	ListNode*prevNode = head, *curNode = head->next;
	while (curNode) {
		if (curNode->val == val) {
			if (curNode->next) {
				ListNode* tmpNode = curNode->next;
				curNode->val = curNode->next->val;
				curNode->next = curNode->next->next;
				delete tmpNode;
				continue;			// 相同元素继续处理
			}
			else {					// 若是最后一个元素
				prevNode->next = nullptr;
				delete curNode;
				curNode = nullptr;
			}
		}
		if (prevNode)prevNode = curNode;	// delete过，所以需要判断是否有效
		if (curNode)curNode = curNode->next;// delete过，所以需要判断是否有效
	}
	return head;
}